<?php
/**
 * @file
 * CoverItLive cTools content type definition.
 */

$plugin = array(
  'title' => t('CoverItLive Stream Pane'),
  'description' => t('Pull a live blog feed from CoverItLive.'),
  'category' => t('Linux'),
  'defaults' => array(),
);


/**
 * An edit form for the pane's settings.
 */
function linux_coveritlive_linux_coveritlive_content_type_edit_form($form, &$form_state) {
  $api_url = variable_get('linux_coveritlive_api_url', 'https://api.coveritlive.com/remote/2/event/data');
  $api_key = variable_get('linux_coveritlive_api_key');
  $conf = $form_state['conf'];

  //admin error if no api info
  if (empty($api_url) || empty($api_key)) {
    $form['no_api_info'] = array(
      '#type' => 'item',
      '#weight' => -1000,
      '#title' => t('CoverItLive API Information Required!'),
      '#markup' => '<div class="messages error">' . t('Please provide CoverItLive API information on <a href="@admin-url">the CoveriveIt settings page</a> to unlock this block.', array('@admin-url' => url('admin/config/services/coveritlive'))) . '</div>',
    );

    return $form;
  }

  $form['linux_coveritlive_stream_key'] = array(
    '#type' => 'textfield',
    '#title' => t('ConverItLive Blog Key'),
    '#description' => t('The blog owner can find this value after creating a new event, by selecting the "altcast_code" which is found in their Viewer Window embed code (e.g., the event code is "46e6cd22b5" in "altcast_code=46e6cd22b5").'),
    '#default_value' => $conf['linux_coveritlive_stream_key'],
    '#required' => TRUE,
  );

  if (!empty($conf['linux_coveritlive_stream_key'])) {
    $form['linux_coveritlive_stream_key_original'] = array(
      '#type' => 'hidden',
      '#default_value' => $conf['linux_coveritlive_stream_key'],
    );
  }

  $form['linux_coveritlive_item_count'] = array(
    '#type' => 'select',
    '#options' => drupal_map_assoc(range(1, 30)),
    '#title' => t('Post count'),
    '#description' => t('How many CoverItLive items should be shown.'),
    '#default_value' => !empty($conf['linux_coveritlive_item_count']) ? $conf['linux_coveritlive_item_count'] : 5,
  );

  $form['linux_coveritlive_ajax'] = array(
    '#type' => 'checkbox',
    '#title' => t('Ajax Refresh Block?'),
    '#description' => t('Should this block refresh itself via ajax.'),
    '#default_value' => !empty($conf['linux_coveritlive_ajax']) ? $conf['linux_coveritlive_ajax'] : 0,
  );

  $form['linux_coveritlive_ajax_interval'] = array(
    '#type' => 'textfield',
    '#title' => t('Ajax Refresh Interval'),
    '#description' => t('How often this block should refresh in seconds. 60 = 1 min, 120 = 2min etc'),
    '#default_value' => !empty($conf['linux_coveritlive_ajax_interval']) ? $conf['linux_coveritlive_ajax_interval']: 120, //2mins
    '#field_prefix' => t('Refresh every'),
    '#field_suffix' => t('seconds'),
    '#size' => 4,
    '#maxlength' => 4,
    '#states' => array(
      'invisible' => array(
        'input[name="linux_coveritlive_ajax"]' => array('checked' => FALSE),
      ),
    ),
    '#required' => TRUE,
  );

  //makes block unique for ajax call if same block for same key are on same page
  $form['linux_coveritlive_ajax_hash'] = array(
    '#type' => 'hidden',
    '#default_value' => !empty($conf['linux_coveritlive_ajax_hash']) ? $conf['linux_coveritlive_ajax_hash'] : substr(hash('sha256', time()), 0, 8),
  );

  return $form;
}

/**
 * Submit function, note anything in the formstate[conf] automatically gets saved
 * Notice, the magic that automatically does that for you.
 */
function linux_coveritlive_linux_coveritlive_content_type_edit_form_submit(&$form, &$form_state) {
  if (isset($form_state['values']['linux_coveritlive_stream_key'])) {
    $form_state['conf']['linux_coveritlive_stream_key'] = $form_state['values']['linux_coveritlive_stream_key'];
  }
  if (isset($form_state['values']['linux_coveritlive_item_count'])) {
    $form_state['conf']['linux_coveritlive_item_count'] = $form_state['values']['linux_coveritlive_item_count'];
  }
    
  // Ajax settings, save to cTools $conf
  $form_state['conf']['linux_coveritlive_ajax'] = $form_state['values']['linux_coveritlive_ajax'];
  $form_state['conf']['linux_coveritlive_ajax_interval'] = $form_state['values']['linux_coveritlive_ajax_interval'];
  $form_state['conf']['linux_coveritlive_ajax_hash'] = $form_state['values']['linux_coveritlive_ajax_hash'];

  $delta = linux_coveritlive_render_delta($form_state['conf']);
  $ajax_blocks = variable_get('linux_coveritlive_ajax_settings', array());
  
  // Ajax enabled, merge into ajax settings
  if (!empty($form_state['conf']['linux_coveritlive_ajax'])) {
    //if stream key changes, delete old one
    if (!empty($form_state['values']['linux_coveritlive_stream_key_original']) && $form_state['values']['linux_coveritlive_stream_key'] != $form_state['values']['linux_coveritlive_stream_key_original']) {
      $original_delta = linux_coveritlive_render_delta($form_state['conf'], $form_state['values']['linux_coveritlive_stream_key_original']);
      unset($ajax_blocks[$original_delta]);
    }

    $ajax_blocks[$delta] = $form_state['conf'];
    variable_set('linux_coveritlive_ajax_settings', $ajax_blocks);
  }
  else {
    // Ajax disable but old settings exist
    if (!empty($ajax_blocks[$delta])) {
      unset($ajax_blocks[$delta]);
      variable_set('linux_coveritlive_ajax_settings', $ajax_blocks);
    }
  }
}

/**
 * Implements hook_PLUGIN_content_type_render().
 *
 * @see ctools_content_render()
 */
function linux_coveritlive_linux_coveritlive_content_type_render($entity_type, $conf, $panel_args, $contexts) {
  return linux_coveritlive_render_block($conf);
}

/**
 * 'admin info' callback for panel pane.
 */
function linux_coveritlive_pane_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('CovertItLive Stream');
    return $block;
  }
}


<?php


$plugin = array(
  'title' => t('CoverItLive Stream Pane'),  
  'description' => t('Pull a live blog feed from CoverItLive.'), 
  'category' => t('Linux'), 
  'defaults' => array(), //@todo
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
      '#markup' => '<div class="messages error">'. t('Please provide CoverItLive API information on <a href="@admin-url">the CoveriveIt settings page</a> to unlock this block.', array('@admin-url' => url('admin/config/services/coveritlive'))) .'</div>',
    );
    
    return $form;
  }

  $form['linux_coveritlive_stream_key'] = array(
    '#type' => 'textfield',
    '#title' => t('ConverItLive Blog Key'),
    '#description' => t('The blog owner can find this value after creating a new event, by selecting the "altcast_code" which is found in their Viewer Window embed code (e.g. the event code is "46e6cd22b5" in "altcast_code=46e6cd22b5").'),
    '#default_value' => $conf['linux_coveritlive_stream_key'],
    '#required' => TRUE,
  );
  
  $form['linux_coveritlive_item_count'] = array(
    '#type' => 'select',
    '#options' => drupal_map_assoc(range(1, 30)),
    '#title' => t('Post count'),
    '#description' => t('How many CoverItLive items should be shown.'),
    '#default_value' => 5,
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
}

/**
 * Implements hook_PLUGIN_content_type_render().
 *
 * @see ctools_content_render()
 */
function linux_coveritlive_linux_coveritlive_content_type_render($entity_type, $conf, $panel_args, $contexts) {
  $block = new stdClass();
  $block->title = t('CoverItLive Stream');
  $block->module = 'linux_coveritlive';
  $block->delta = 'linux-coveritlive-stream-'. $conf['linux_coveritlive_stream_key'];  
  
  if ($posts = linux_coveritlive_get_stream($conf)) {
    $block->content = theme('linux_coveritlive_block', array('posts' => $posts));
  }
  else {
    $block->content = t('No posts available.');
  }

  return $block;
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


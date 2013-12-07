<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Rate - Widget'),
  'description' => t('Provides interface for asking questions.'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Node'),
  'defaults' => array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'widget' => '',
  ),
);

/**
 * Render call back for plugin
 */
function linux_voting_rate_content_type_render($plugin, $conf, $panel_args, $contexts) {
  $block = new stdClass;
  $block->module = 'linux_voting';
  $block->delta = 'rate';
  $node = $contexts->data;
  $widget_name = $conf['widget'];
  $block->content[$widget_name]['#markup'] = rate_embed($node, $widget_name, RATE_FULL);
  return $block;
}

/**
 * Edit Form call back for plugin
 */
function linux_voting_rate_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  // We create the form up here so we can add descriptions to the radio elements as they are created
  // If we created the form below we would have to merge the descriptions or re-loop. Neither is efficient
  $form['widget'] = array(
    '#type' => 'radios',
    '#title' => t('Widget'),
    '#description' => t('Select the voting widget to use.'),
    '#default_value' => $conf['widget'],
    '#options' => array(),
  );
  
  $widgets = variable_get(RATE_VAR_WIDGETS, array());
  $node_types = node_type_get_types();
  foreach ($widgets as $widget) {
    if (empty($widget->node_types)) {
      // If this is not used in nodes then skip this widget
      continue;
    }
    $types = array();
    foreach ($widget->node_types as $type) {
      // Get the types the widget is used in
      $types[] = $node_types[$type]->name;
    }
    // Add the widget to the form options
    $form['widget']['#options'][$widget->name] = $widget->title;
    if (!empty($types)) {
      // Add a description of the node types the widget is used in to the radio
      $form['widget'][$widget->name]['#description'] = t('Used in @types', array('@types' => implode(', ',$types)));
    }
  }

  return $form;
}

/**
 * Save selected view mode.
 */
function linux_voting_rate_content_type_edit_form_submit(&$form, &$form_state) {
  if (isset($form_state['values']['widget'])) {
    $form_state['conf']['widget'] = $form_state['values']['widget'];
  }
}
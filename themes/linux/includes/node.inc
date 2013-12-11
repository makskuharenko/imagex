<?php
/**
 * @file
 * Node Preprocess functions
 */

/**
 * Implements hook_preprocess_node_question().
 */
function linux_preprocess_node_question(&$vars, $hook) { 
  switch ($vars['view_mode']) {
    case 'sidebar':

      break;
  }
}

/**
 * A shared sidebar preprocessor for the node types that share the same fields
 */
function _linux_shared_sidebar_preprocess(&$vars) {
  $vars['theme_hook_suggestions'][] = 'node__blog__sidebar';
  $vars['content']['field_image']['#label_display'] = 'hidden';
  if (isset($vars['content']['field_image'][0])) {
    $vars['content']['field_image'][0]['#image_style'] = 'bean_image__55x55_';
  }
}

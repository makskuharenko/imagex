<?php

function linux_preprocess_html(&$vars) {
}

function linux_preprocess_page(&$vars,$hook) {

  // If this is a panel page, add template suggestions.
  if($panel_page = page_manager_get_current_page()) {
    // Add a generic suggestion for all panel pages.
    $vars['theme_hook_suggestions'][] = 'page__panel';
    // Add the panel page machine name to the template suggestions.
    $vars['theme_hook_suggestions'][] = 'page__' . $panel_page['name'];
    // Add a body class for good measure.
    $body_classes[] = 'page-panel';
  }
}

function linux_preprocess_region(&$vars,$hook) {
}

function linux_preprocess_block(&$vars, $hook) {

  // lets look for unique block in a region $region-$blockcreator-$delta.
   $block =
   $vars['elements']['#block']->region .'-'.
   $vars['elements']['#block']->module .'-'.
   $vars['elements']['#block']->delta;

  // Print $block .' ';
   switch ($block) {
     case 'header-menu_block-2':
       $vars['classes_array'][] = '';
       break;
     case 'sidebar-system-navigation':
       $vars['classes_array'][] = '';
       break;
    default:

    break;
   }

  switch ($vars['elements']['#block']->region) {
    case 'header':
      $vars['classes_array'][] = '';
      break;
    case 'sidebar':
      $vars['classes_array'][] = '';
      $vars['classes_array'][] = '';
      break;
    default:

      break;
  }
}


function linux_preprocess_field(&$vars,$hook) {

  // Add class to a specific field.
  switch ($vars['element']['#field_name']) {
    case 'field_ROCK':
      $vars['classes_array'][] = 'classname1';
    case 'field_ROLL':
      $vars['classes_array'][] = 'classname1';
      $vars['classes_array'][] = 'classname2';
      $vars['classes_array'][] = 'classname1';
    case 'field_FOO':
      $vars['classes_array'][] = 'classname1';
    case 'field_BAR':
      $vars['classes_array'][] = 'classname1';
    default:
      break;
  }
}

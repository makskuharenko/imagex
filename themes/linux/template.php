<?php
/*
  Preprocess
*/


function linux_preprocess_html(&$vars) {
  //  kpr($vars['content']);
}

function linux_preprocess_page(&$vars,$hook) {
  //typekit
  //drupal_add_js('http://use.typekit.com/XXX.js', 'external');
  //drupal_add_js('try{Typekit.load();}catch(e){}', array('type' => 'inline'));

  //webfont
  //drupal_add_css('http://cloud.webtype.com/css/CXXXX.css','external');

  //googlefont
  drupal_add_css('http://fonts.googleapis.com/css?family=Open+Sans+Condensed:300,300italic,700|Kreon:300,400,700|Open+Sans:300italic,400italic,600italic,700italic,800italic,400,600,700,800,300','external');

  // If this is a panel page, add template suggestions.
  // Must have Ctools Page Manager enabled. Uncomment to use.
  if (module_exists('page_manager')) {
    if($panel_page = page_manager_get_current_page()) {
      // add a generic suggestion for all panel pages
      $vars['theme_hook_suggestions'][] = 'page__panel';

      // add the panel page machine name to the template suggestions
      $vars['theme_hook_suggestions'][] = 'page__' . $panel_page['name'];

      //add a body class for good measure
      $body_classes[] = 'page-panel';
    }
  }
}

function linux_preprocess_region(&$vars,$hook) {
  //  kpr($vars['content']);
}

function linux_preprocess_block(&$vars, $hook) {
  //  kpr($vars['content']);

  //lets look for unique block in a region $region-$blockcreator-$delta
   $block =
   $vars['elements']['#block']->region .'-'.
   $vars['elements']['#block']->module .'-'.
   $vars['elements']['#block']->delta;

  // print $block .' ';
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

function linux_preprocess_node(&$vars,$hook) {
  include_once drupal_get_path('theme', 'linux') . '/includes/node.inc';
  if (function_exists('linux_preprocess_node_' . $vars['type'])) {
    call_user_func('linux_preprocess_node_' . $vars['type'], $vars, $hook);
  }
  if ($vars['view_mode'] == 'sidebar' && !in_array($vars['type'], array('question'))) {
     _linux_shared_sidebar_preprocess($vars);
  }

  if ($vars['view_mode'] == 'teaser') {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__teaser';
  }
}

function linux_preprocess_comment(&$vars,$hook) {
  $sort = &drupal_static('linux_voting_comment_sort', 'rec');
  $comment = $vars['comment'];
  $cids = &drupal_static(__FUNCTION__, array());
  $cids[$comment->cid] = $comment->cid;
  if ($comment->pid > 0 && !isset($cids[$comment->pid]) && $sort == 'rec') {
    // If the comment is nested, it's parent hasn't run yet, and we are sorting by recommended
    // We need to show a 'In Reply to BLAHBLAH' link
    $parent = comment_load($comment->pid);
    $uri = entity_uri('comment', $parent);
    $uri['options'] += array('attributes' => array('class' => 'permalink', 'rel' => 'bookmark'));
    $vars['reply_to'] = l(t('In Reply To @name', array('@name' => $parent->name)), $uri['path'], $uri['options']);
  }
}

function linux_preprocess_field(&$vars,$hook) {
  //  kpr($vars['content']);
  //add class to a specific field
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

function linux_preprocess_maintenance_page(){
  //  kpr($vars['content']);
}

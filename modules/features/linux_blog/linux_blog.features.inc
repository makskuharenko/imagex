<?php
/**
 * @file
 * linux_blog.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function linux_blog_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:blog:default'])) {
    $data['node:blog:default']->display->content['new-10'] = (object) array(
          'pid' => 'new-10',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_comments',
          'subtype' => 'node_comments',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'mode' => 1,
            'comments_per_page' => 50,
            'context' => 'panelizer',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 8,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-11'] = (object) array(
          'pid' => 'new-11',
          'panel' => 'three_25_50_25_third',
          'type' => 'block',
          'subtype' => 'menu-menu-join-us',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-12'] = (object) array(
          'pid' => 'new-12',
          'panel' => 'three_25_50_25_third',
          'type' => 'views_panes',
          'subtype' => 'home_page-panel_pane_3',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'more_link' => 1,
            'path' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'standard-bean numbered',
          ),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-1']->configuration['arguments'] = array(
      'type' => '',
    ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-1']->css['css_class'] = 'standard-bean recent-events filtered-view landing-pages-left-bar'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-1']->panel = 'three_25_50_25_first'; /* WAS: 'center' */
    $data['node:blog:default']->display->content['new-1']->style['settings'] = NULL; /* WAS: '' */
    $data['node:blog:default']->display->content['new-1']->subtype = 'home_page-panel_pane_1'; /* WAS: 'node:body' */
    $data['node:blog:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['node:blog:default']->display->content['new-2']->configuration['class'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-2']->configuration['id'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-2']->configuration['link'] = 0; /* WAS: '' */
    $data['node:blog:default']->display->content['new-2']->configuration['markup'] = 'h1'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-2']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:blog:default']->display->content['new-2']->configuration['override_title_text'] = '%node:title'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-2']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:blog:default']->display->content['new-2']->style['settings'] = NULL; /* WAS: '' */
    $data['node:blog:default']->display->content['new-2']->subtype = 'node_title'; /* WAS: 'node:field_file_attachment' */
    $data['node:blog:default']->display->content['new-2']->type = 'node_title'; /* WAS: 'entity_field' */
    $data['node:blog:default']->display->content['new-3']->configuration['formatter'] = 'image'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node:blog:default']->display->content['new-3']->configuration['formatter_settings']['file_view_mode'] = 'default'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->configuration['formatter_settings']['image_link'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->configuration['formatter_settings']['image_style'] = 'large_tile__700x360_'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->configuration['label'] = 'hidden'; /* WAS: 'above' */
    $data['node:blog:default']->display->content['new-3']->configuration['override_title'] = 0; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:blog:default']->display->content['new-3']->position = 1; /* WAS: 0 */
    $data['node:blog:default']->display->content['new-3']->style['settings'] = NULL; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->subtype = 'node:field_image'; /* WAS: 'node:field_topics' */
    $data['node:blog:default']->display->content['new-4']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:blog:default']->display->content['new-4']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:blog:default']->display->content['new-4']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:blog:default']->display->content['new-4']->configuration['formatter'] = 'file_default'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-4']->configuration['formatter_settings'] = array(); /* WAS: '' */
    $data['node:blog:default']->display->content['new-4']->configuration['label'] = 'above'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-4']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:blog:default']->display->content['new-4']->position = 2; /* WAS: 0 */
    $data['node:blog:default']->display->content['new-4']->style['settings'] = NULL; /* WAS: '' */
    $data['node:blog:default']->display->content['new-4']->subtype = 'node:field_file_attachment'; /* WAS: 'node_links' */
    $data['node:blog:default']->display->content['new-4']->type = 'entity_field'; /* WAS: 'node_links' */
    $data['node:blog:default']->display->content['new-5'] = (object) array(
          'pid' => 'new-5',
          'panel' => 'three_25_50_25_second',
          'type' => 'entity_field',
          'subtype' => 'node:body',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'text_default',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-6'] = (object) array(
          'pid' => 'new-6',
          'panel' => 'three_25_50_25_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_topics',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'above',
            'formatter' => 'taxonomy_term_reference_link',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 4,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-7'] = (object) array(
          'pid' => 'new-7',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_links',
          'subtype' => 'node_links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => FALSE,
            'override_title_text' => '',
            'build_mode' => 'page_manager',
            'identifier' => '',
            'link' => TRUE,
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_class' => 'link-wrapper',
          ),
          'extras' => array(),
          'position' => 5,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-8'] = (object) array(
          'pid' => 'new-8',
          'panel' => 'three_25_50_25_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_tags',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'taxonomy_term_reference_link',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => 0,
            'formatter_settings' => array(),
            'context' => 'panelizer',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 6,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-9'] = (object) array(
          'pid' => 'new-9',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_comment_form',
          'subtype' => 'node_comment_form',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'anon_links' => 0,
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 7,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->layout = 'three_25_50_25'; /* WAS: 'flexible' */
    $data['node:blog:default']->display->panel_settings['style_settings'] = array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ); /* WAS: '' */
    $data['node:blog:default']->display->panels['three_25_50_25_first'] = array(
      0 => 'new-1',
    ); /* WAS: '' */
    $data['node:blog:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-2',
      1 => 'new-3',
      2 => 'new-4',
      3 => 'new-5',
      4 => 'new-6',
      5 => 'new-7',
      6 => 'new-8',
      7 => 'new-9',
      8 => 'new-10',
    ); /* WAS: '' */
    $data['node:blog:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-11',
      1 => 'new-12',
      2 => 'new-13',
    ); /* WAS: '' */
    $data['node:blog:default']->display->title_pane = 'new-7'; /* WAS: 'new-4' */
    unset($data['node:blog:default']->display->content['new-1']->configuration['context']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['delta_limit']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['delta_offset']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['delta_reversed']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['formatter']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['formatter_settings']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['label']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['delta_limit']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['delta_offset']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['delta_reversed']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['formatter']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['formatter_settings']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['label']);
    unset($data['node:blog:default']->display->content['new-4']->configuration['build_mode']);
    unset($data['node:blog:default']->display->content['new-4']->configuration['identifier']);
    unset($data['node:blog:default']->display->content['new-4']->configuration['link']);
    unset($data['node:blog:default']->display->content['new-4']->configuration['override_title']);
    unset($data['node:blog:default']->display->content['new-4']->configuration['override_title_text']);
    unset($data['node:blog:default']->display->content['new-4']->css['css_class']);
    unset($data['node:blog:default']->display->panels['center']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function linux_blog_strongarm_alter(&$data) {
  if (isset($data['comment_subject_field_blog'])) {
    $data['comment_subject_field_blog']->value = 0; /* WAS: 1 */
  }
}

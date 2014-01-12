<?php
/**
 * @file
 * linux_group.features.inc
 */

/**
 * Implements hook_views_api().
 */
function linux_group_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function linux_group_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:group:default'])) {
    $data['node:group:default']->display->content['new-10'] = (object) array(
          'pid' => 'new-10',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_comment_form',
          'subtype' => 'node_comment_form',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
            'anon_links' => 0,
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
    $data['node:group:default']->display->content['new-11'] = (object) array(
          'pid' => 'new-11',
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
    $data['node:group:default']->display->content['new-12'] = (object) array(
          'pid' => 'new-12',
          'panel' => 'three_25_50_25_third',
          'type' => 'node_create_links',
          'subtype' => 'node_create_links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'types' => array(),
            'field_name' => 'og_group_ref',
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
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:group:default']->display->content['new-13'] = (object) array(
          'pid' => 'new-13',
          'panel' => 'three_25_50_25_third',
          'type' => 'views_panes',
          'subtype' => 'og_members-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => array(
              0 => 'panelizer',
            ),
            'override_title' => 1,
            'override_title_text' => 'Members',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'standard-bean',
          ),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:group:default']->display->content['new-1']->configuration['arguments'] = array(
      'type' => '',
    ); /* WAS: '' */
    $data['node:group:default']->display->content['new-1']->css['css_class'] = 'standard-bean recent-events filtered-view landing-pages-left-bar'; /* WAS: '' */
    $data['node:group:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-1']->panel = 'three_25_50_25_first'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-1']->subtype = 'home_page-panel_pane_1'; /* WAS: 'node_title' */
    $data['node:group:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'node_title' */
    $data['node:group:default']->display->content['new-2']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:group:default']->display->content['new-2']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-2']->panel = 'three_25_50_25_first'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-2']->subtype = 'bean-ad-space-homepage-right-top'; /* WAS: 'node:field_radioactivity' */
    $data['node:group:default']->display->content['new-2']->type = 'block'; /* WAS: 'entity_field' */
    $data['node:group:default']->display->content['new-3']->configuration['class'] = 'pane-title-page-title'; /* WAS: '' */
    $data['node:group:default']->display->content['new-3']->configuration['id'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-3']->configuration['link'] = 0; /* WAS: '' */
    $data['node:group:default']->display->content['new-3']->configuration['markup'] = 'h2'; /* WAS: '' */
    $data['node:group:default']->display->content['new-3']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:group:default']->display->content['new-3']->configuration['override_title_text'] = '%node:title'; /* WAS: '' */
    $data['node:group:default']->display->content['new-3']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-3']->position = 0; /* WAS: 2 */
    $data['node:group:default']->display->content['new-3']->subtype = 'node_title'; /* WAS: 'node:field_group_logo' */
    $data['node:group:default']->display->content['new-3']->type = 'node_title'; /* WAS: 'entity_field' */
    $data['node:group:default']->display->content['new-4']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:group:default']->display->content['new-4']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-4']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-4']->position = 1; /* WAS: 3 */
    $data['node:group:default']->display->content['new-4']->subtype = 'node_body'; /* WAS: 'node:field_tags' */
    $data['node:group:default']->display->content['new-4']->type = 'node_body'; /* WAS: 'entity_field' */
    $data['node:group:default']->display->content['new-5']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->configuration['formatter'] = 'radioactivity_combo_formatter'; /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->configuration['formatter_settings'] = array(
      'accuracy' => 100,
      'energy' => 10,
      'type' => 'none',
    ); /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->configuration['label'] = 'above'; /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-5']->position = 2; /* WAS: 4 */
    $data['node:group:default']->display->content['new-5']->subtype = 'node:field_radioactivity'; /* WAS: 'node_links' */
    $data['node:group:default']->display->content['new-5']->type = 'entity_field'; /* WAS: 'node_links' */
    $data['node:group:default']->display->content['new-6']->configuration['context'] = 'panelizer'; /* WAS: array(
      0 => 'panelizer',
    ) */
    $data['node:group:default']->display->content['new-6']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['formatter'] = 'image'; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['formatter_settings'] = array(
      'image_link' => '',
      'image_style' => 'large',
    ); /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['label'] = 'hidden'; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-6']->position = 3; /* WAS: 5 */
    $data['node:group:default']->display->content['new-6']->subtype = 'node:field_group_logo'; /* WAS: 'og_nodes-panel_pane_1' */
    $data['node:group:default']->display->content['new-6']->type = 'entity_field'; /* WAS: 'views_panes' */
    $data['node:group:default']->display->content['new-7']->configuration['fields_override'] = array(
      'type' => 1,
      'title' => 1,
      'created' => 1,
      'field_author' => 1,
    ); /* WAS: '' */
    $data['node:group:default']->display->content['new-7']->configuration['items_per_page'] = 10; /* WAS: '' */
    $data['node:group:default']->display->content['new-7']->configuration['override_title_text'] = 'Group Content'; /* WAS: 'Members' */
    $data['node:group:default']->display->content['new-7']->configuration['pager_id'] = 0; /* WAS: '' */
    $data['node:group:default']->display->content['new-7']->configuration['path'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-7']->configuration['use_pager'] = 1; /* WAS: '' */
    $data['node:group:default']->display->content['new-7']->css['css_class'] = 'standard-bean group-activity'; /* WAS: '' */
    $data['node:group:default']->display->content['new-7']->css['css_id'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-7']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-7']->position = 4; /* WAS: 6 */
    $data['node:group:default']->display->content['new-7']->subtype = 'linux_og_content-panel_pane_1'; /* WAS: 'og_members-panel_pane_1' */
    $data['node:group:default']->display->content['new-8'] = (object) array(
          'pid' => 'new-8',
          'panel' => 'three_25_50_25_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_tags',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'panelizer',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter' => 'taxonomy_term_reference_link',
            'formatter_settings' => array(),
            'label' => 'above',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 5,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:group:default']->display->content['new-9'] = (object) array(
          'pid' => 'new-9',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_links',
          'subtype' => 'node_links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'panelizer',
            'build_mode' => 'page_manager',
            'identifier' => '',
            'link' => TRUE,
            'override_title' => FALSE,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_class' => 'link-wrapper',
          ),
          'extras' => array(),
          'position' => 6,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:group:default']->display->layout = 'three_25_50_25'; /* WAS: 'one' */
    $data['node:group:default']->display->panel_settings['style_settings']['three_25_50_25_bottom'] = NULL; /* WAS: '' */
    $data['node:group:default']->display->panel_settings['style_settings']['three_25_50_25_first'] = NULL; /* WAS: '' */
    $data['node:group:default']->display->panel_settings['style_settings']['three_25_50_25_second'] = NULL; /* WAS: '' */
    $data['node:group:default']->display->panel_settings['style_settings']['three_25_50_25_third'] = NULL; /* WAS: '' */
    $data['node:group:default']->display->panel_settings['style_settings']['three_25_50_25_top'] = NULL; /* WAS: '' */
    $data['node:group:default']->display->panels['three_25_50_25_first'] = array(
      0 => 'new-1',
      1 => 'new-2',
    ); /* WAS: '' */
    $data['node:group:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-3',
      1 => 'new-4',
      2 => 'new-5',
      3 => 'new-6',
      4 => 'new-7',
      5 => 'new-8',
      6 => 'new-9',
      7 => 'new-10',
      8 => 'new-11',
    ); /* WAS: '' */
    $data['node:group:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-12',
      1 => 'new-13',
    ); /* WAS: '' */
    $data['node:group:default']->display->title_pane = 'new-13'; /* WAS: 0 */
    unset($data['node:group:default']->display->content['new-1']->configuration['context']);
    unset($data['node:group:default']->display->content['new-2']->configuration['context']);
    unset($data['node:group:default']->display->content['new-2']->configuration['delta_limit']);
    unset($data['node:group:default']->display->content['new-2']->configuration['delta_offset']);
    unset($data['node:group:default']->display->content['new-2']->configuration['delta_reversed']);
    unset($data['node:group:default']->display->content['new-2']->configuration['formatter']);
    unset($data['node:group:default']->display->content['new-2']->configuration['formatter_settings']);
    unset($data['node:group:default']->display->content['new-2']->configuration['label']);
    unset($data['node:group:default']->display->content['new-3']->configuration['delta_limit']);
    unset($data['node:group:default']->display->content['new-3']->configuration['delta_offset']);
    unset($data['node:group:default']->display->content['new-3']->configuration['delta_reversed']);
    unset($data['node:group:default']->display->content['new-3']->configuration['formatter']);
    unset($data['node:group:default']->display->content['new-3']->configuration['formatter_settings']);
    unset($data['node:group:default']->display->content['new-3']->configuration['label']);
    unset($data['node:group:default']->display->content['new-4']->configuration['delta_limit']);
    unset($data['node:group:default']->display->content['new-4']->configuration['delta_offset']);
    unset($data['node:group:default']->display->content['new-4']->configuration['delta_reversed']);
    unset($data['node:group:default']->display->content['new-4']->configuration['formatter']);
    unset($data['node:group:default']->display->content['new-4']->configuration['formatter_settings']);
    unset($data['node:group:default']->display->content['new-4']->configuration['label']);
    unset($data['node:group:default']->display->content['new-5']->configuration['build_mode']);
    unset($data['node:group:default']->display->content['new-5']->configuration['identifier']);
    unset($data['node:group:default']->display->content['new-5']->configuration['link']);
    unset($data['node:group:default']->display->content['new-5']->configuration['override_title']);
    unset($data['node:group:default']->display->content['new-5']->configuration['override_title_text']);
    unset($data['node:group:default']->display->content['new-5']->css['css_class']);
    unset($data['node:group:default']->display->panel_settings['style_settings']['middle']);
    unset($data['node:group:default']->display->panel_settings['style_settings']['one_main']);
    unset($data['node:group:default']->display->panels['one_main']);
  }
}

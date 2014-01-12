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
    $data['node:group:default']->display->content['new-2']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-2']->position = 0; /* WAS: 1 */
    $data['node:group:default']->display->content['new-2']->subtype = 'node_body'; /* WAS: 'node:field_radioactivity' */
    $data['node:group:default']->display->content['new-2']->type = 'node_body'; /* WAS: 'entity_field' */
    $data['node:group:default']->display->content['new-3']->configuration['formatter'] = 'radioactivity_combo_formatter'; /* WAS: 'image' */
    $data['node:group:default']->display->content['new-3']->configuration['formatter_settings']['accuracy'] = 100; /* WAS: '' */
    $data['node:group:default']->display->content['new-3']->configuration['formatter_settings']['energy'] = 10; /* WAS: '' */
    $data['node:group:default']->display->content['new-3']->configuration['formatter_settings']['type'] = 'none'; /* WAS: '' */
    $data['node:group:default']->display->content['new-3']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-3']->position = 1; /* WAS: 2 */
    $data['node:group:default']->display->content['new-3']->subtype = 'node:field_radioactivity'; /* WAS: 'node:field_group_logo' */
    $data['node:group:default']->display->content['new-4']->configuration['formatter'] = 'image'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node:group:default']->display->content['new-4']->configuration['formatter_settings']['image_link'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-4']->configuration['formatter_settings']['image_style'] = 'large'; /* WAS: '' */
    $data['node:group:default']->display->content['new-4']->configuration['label'] = 'hidden'; /* WAS: 'above' */
    $data['node:group:default']->display->content['new-4']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:group:default']->display->content['new-4']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-4']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-4']->position = 2; /* WAS: 3 */
    $data['node:group:default']->display->content['new-4']->subtype = 'node:field_group_logo'; /* WAS: 'node:field_tags' */
    $data['node:group:default']->display->content['new-5']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->configuration['formatter'] = 'taxonomy_term_reference_link'; /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->configuration['formatter_settings'] = array(); /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->configuration['label'] = 'above'; /* WAS: '' */
    $data['node:group:default']->display->content['new-5']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-5']->position = 3; /* WAS: 4 */
    $data['node:group:default']->display->content['new-5']->subtype = 'node:field_tags'; /* WAS: 'node_links' */
    $data['node:group:default']->display->content['new-5']->type = 'entity_field'; /* WAS: 'node_links' */
    $data['node:group:default']->display->content['new-6']->configuration['build_mode'] = 'page_manager'; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['context'] = 'panelizer'; /* WAS: array(
      0 => 'panelizer',
    ) */
    $data['node:group:default']->display->content['new-6']->configuration['identifier'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['link'] = TRUE; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['override_title'] = FALSE; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->css['css_class'] = 'link-wrapper'; /* WAS: '' */
    $data['node:group:default']->display->content['new-6']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-6']->position = 4; /* WAS: 5 */
    $data['node:group:default']->display->content['new-6']->subtype = 'node_links'; /* WAS: 'og_nodes-panel_pane_1' */
    $data['node:group:default']->display->content['new-6']->type = 'node_links'; /* WAS: 'views_panes' */
    $data['node:group:default']->display->content['new-7']->configuration['anon_links'] = 0; /* WAS: '' */
    $data['node:group:default']->display->content['new-7']->configuration['context'] = 'panelizer'; /* WAS: array(
      0 => 'panelizer',
    ) */
    $data['node:group:default']->display->content['new-7']->configuration['override_title_text'] = ''; /* WAS: 'Members' */
    $data['node:group:default']->display->content['new-7']->panel = 'three_25_50_25_second'; /* WAS: 'one_main' */
    $data['node:group:default']->display->content['new-7']->position = 5; /* WAS: 6 */
    $data['node:group:default']->display->content['new-7']->subtype = 'node_comment_form'; /* WAS: 'og_members-panel_pane_1' */
    $data['node:group:default']->display->content['new-7']->type = 'node_comment_form'; /* WAS: 'views_panes' */
    $data['node:group:default']->display->content['new-8'] = (object) array(
          'pid' => 'new-8',
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
          'position' => 6,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:group:default']->display->content['new-9'] = (object) array(
          'pid' => 'new-9',
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
          'css' => array(),
          'extras' => array(),
          'position' => 0,
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
    ); /* WAS: '' */
    $data['node:group:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-2',
      1 => 'new-3',
      2 => 'new-4',
      3 => 'new-5',
      4 => 'new-6',
      5 => 'new-7',
      6 => 'new-8',
    ); /* WAS: '' */
    $data['node:group:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-9',
    ); /* WAS: '' */
    $data['node:group:default']->display->title_pane = 'new-9'; /* WAS: 0 */
    unset($data['node:group:default']->display->content['new-1']->configuration['context']);
    unset($data['node:group:default']->display->content['new-2']->configuration['delta_limit']);
    unset($data['node:group:default']->display->content['new-2']->configuration['delta_offset']);
    unset($data['node:group:default']->display->content['new-2']->configuration['delta_reversed']);
    unset($data['node:group:default']->display->content['new-2']->configuration['formatter']);
    unset($data['node:group:default']->display->content['new-2']->configuration['formatter_settings']);
    unset($data['node:group:default']->display->content['new-2']->configuration['label']);
    unset($data['node:group:default']->display->content['new-3']->configuration['formatter_settings']['image_link']);
    unset($data['node:group:default']->display->content['new-3']->configuration['formatter_settings']['image_style']);
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

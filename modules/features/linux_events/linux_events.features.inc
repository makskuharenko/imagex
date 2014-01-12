<?php
/**
 * @file
 * linux_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function linux_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function linux_events_field_default_field_instances_alter(&$data) {
  if (isset($data['node-event-field_location'])) {
    $data['node-event-field_location']['display']['teaser']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-event-field_location']['display']['teaser']['module'] = 'list'; /* WAS: '' */
    $data['node-event-field_location']['display']['teaser']['type'] = 'list_default'; /* WAS: 'hidden' */
    $data['node-event-field_location']['display']['teaser']['weight'] = 2; /* WAS: 0 */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function linux_events_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:event:default'])) {
    $data['node:event:default']->display->content['new-10']->configuration['formatter_settings']['format_type'] = 'short'; /* WAS: 'long' */
    $data['node:event:default']->display->content['new-10']->configuration['label'] = 'inline'; /* WAS: 'above' */
    $data['node:event:default']->display->content['new-10']->configuration['override_title'] = 0; /* WAS: '' */
    $data['node:event:default']->display->content['new-10']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-10']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-10']->position = 7; /* WAS: 0 */
    $data['node:event:default']->display->content['new-10']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-10']->subtype = 'node:field_event_date'; /* WAS: 'node:field_date' */
    $data['node:event:default']->display->content['new-11']->configuration['formatter'] = 'addressfield_default'; /* WAS: 'file_default' */
    $data['node:event:default']->display->content['new-11']->configuration['formatter_settings']['format_handlers'] = array(
      0 => 'address',
    ); /* WAS: '' */
    $data['node:event:default']->display->content['new-11']->configuration['formatter_settings']['use_widget_handlers'] = 1; /* WAS: '' */
    $data['node:event:default']->display->content['new-11']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-11']->position = 8; /* WAS: 0 */
    $data['node:event:default']->display->content['new-11']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-11']->subtype = 'node:field_address'; /* WAS: 'node:field_file_attachment' */
    $data['node:event:default']->display->content['new-12']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:event:default']->display->content['new-12']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:event:default']->display->content['new-12']->configuration['delta_reversed'] = 0; /* WAS: '' */
    $data['node:event:default']->display->content['new-12']->configuration['formatter'] = 'og_list_default'; /* WAS: '' */
    $data['node:event:default']->display->content['new-12']->configuration['formatter_settings'] = array(); /* WAS: '' */
    $data['node:event:default']->display->content['new-12']->configuration['label'] = 'inline'; /* WAS: '' */
    $data['node:event:default']->display->content['new-12']->configuration['override_title'] = 0; /* WAS: FALSE */
    $data['node:event:default']->display->content['new-12']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-12']->position = 9; /* WAS: 0 */
    $data['node:event:default']->display->content['new-12']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-12']->subtype = 'node:og_group_ref'; /* WAS: 'node_links' */
    $data['node:event:default']->display->content['new-12']->type = 'entity_field'; /* WAS: 'node_links' */
    $data['node:event:default']->display->content['new-13'] = (object) array(
          'pid' => 'new-13',
          'panel' => 'three_25_50_25_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_number_of_attendee',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'panelizer',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter' => 'number_integer',
            'formatter_settings' => array(
              'decimal_separator' => '.',
              'prefix_suffix' => TRUE,
              'scale' => 0,
              'thousand_separator' => ' ',
            ),
            'label' => 'above',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 10,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-14'] = (object) array(
          'pid' => 'new-14',
          'panel' => 'three_25_50_25_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_event_linux_foundation',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'list_default',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
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
          'position' => 11,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-15'] = (object) array(
          'pid' => 'new-15',
          'panel' => 'three_25_50_25_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_event_external_link',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'inline',
            'formatter' => 'link_url',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
            'context' => 'panelizer',
            'override_title' => 0,
            'override_title_text' => 'Register Now',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 12,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-16'] = (object) array(
          'pid' => 'new-16',
          'panel' => 'three_25_50_25_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_event_category',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'inline',
            'formatter' => 'taxonomy_term_reference_link',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
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
          'position' => 13,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-17'] = (object) array(
          'pid' => 'new-17',
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
          'position' => 14,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-18'] = (object) array(
          'pid' => 'new-18',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_comment_form',
          'subtype' => 'node_comment_form',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'anon_links' => 1,
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => 'comments',
            'css_class' => '',
          ),
          'extras' => array(),
          'position' => 15,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-19'] = (object) array(
          'pid' => 'new-19',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_comments',
          'subtype' => 'node_comments',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'mode' => 1,
            'comments_per_page' => 50,
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
          'position' => 16,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-1']->configuration['arguments'] = array(
      'type' => '',
    ); /* WAS: '' */
    $data['node:event:default']->display->content['new-1']->css['css_class'] = 'standard-bean filtered-view recent-events landing-pages-left-bar'; /* WAS: '' */
    $data['node:event:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-1']->panel = 'three_25_50_25_first'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-1']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-1']->subtype = 'home_page-panel_pane_1'; /* WAS: 'node:body' */
    $data['node:event:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['node:event:default']->display->content['new-20'] = (object) array(
          'pid' => 'new-20',
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
    $data['node:event:default']->display->content['new-21'] = (object) array(
          'pid' => 'new-21',
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
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-22'] = (object) array(
          'pid' => 'new-22',
          'panel' => 'three_25_50_25_third',
          'type' => 'views_panes',
          'subtype' => 'home_page-panel_pane_4',
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
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:event:default']->display->content['new-2']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:event:default']->display->content['new-2']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-2']->panel = 'three_25_50_25_first'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-2']->position = 1; /* WAS: 0 */
    $data['node:event:default']->display->content['new-2']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-2']->subtype = 'bean-ad-space-homepage-right-top'; /* WAS: 'node:field_location' */
    $data['node:event:default']->display->content['new-2']->type = 'block'; /* WAS: 'entity_field' */
    $data['node:event:default']->display->content['new-3']->configuration['class'] = 'title'; /* WAS: '' */
    $data['node:event:default']->display->content['new-3']->configuration['id'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-3']->configuration['link'] = 0; /* WAS: '' */
    $data['node:event:default']->display->content['new-3']->configuration['markup'] = 'h1'; /* WAS: '' */
    $data['node:event:default']->display->content['new-3']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:event:default']->display->content['new-3']->configuration['override_title_text'] = '%node:title'; /* WAS: '' */
    $data['node:event:default']->display->content['new-3']->css['css_class'] = 'node-title'; /* WAS: '' */
    $data['node:event:default']->display->content['new-3']->css['css_id'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-3']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-3']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-3']->subtype = 'node_title'; /* WAS: 'node:field_address' */
    $data['node:event:default']->display->content['new-3']->type = 'node_title'; /* WAS: 'entity_field' */
    $data['node:event:default']->display->content['new-4']->configuration['link'] = 0; /* WAS: '' */
    $data['node:event:default']->display->content['new-4']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:event:default']->display->content['new-4']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-4']->css['css_class'] = 'node-author'; /* WAS: '' */
    $data['node:event:default']->display->content['new-4']->css['css_id'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-4']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-4']->position = 1; /* WAS: 0 */
    $data['node:event:default']->display->content['new-4']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-4']->subtype = 'node_author'; /* WAS: 'node:field_logo' */
    $data['node:event:default']->display->content['new-4']->type = 'node_author'; /* WAS: 'entity_field' */
    $data['node:event:default']->display->content['new-5']->configuration['formatter'] = 'date_default'; /* WAS: 'registration_default' */
    $data['node:event:default']->display->content['new-5']->configuration['formatter_settings']['format_type'] = 'short'; /* WAS: '' */
    $data['node:event:default']->display->content['new-5']->configuration['formatter_settings']['fromto'] = 'both'; /* WAS: '' */
    $data['node:event:default']->display->content['new-5']->configuration['formatter_settings']['multiple_from'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-5']->configuration['formatter_settings']['multiple_number'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-5']->configuration['formatter_settings']['multiple_to'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-5']->configuration['label'] = 'hidden'; /* WAS: 'above' */
    $data['node:event:default']->display->content['new-5']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:event:default']->display->content['new-5']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-5']->css['css_class'] = 'node-date'; /* WAS: '' */
    $data['node:event:default']->display->content['new-5']->css['css_id'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-5']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-5']->position = 2; /* WAS: 0 */
    $data['node:event:default']->display->content['new-5']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-5']->subtype = 'node:field_event_date'; /* WAS: 'node:field_registration' */
    $data['node:event:default']->display->content['new-6']->configuration['label'] = 'hidden'; /* WAS: 'above' */
    $data['node:event:default']->display->content['new-6']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:event:default']->display->content['new-6']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-6']->css['css_class'] = 'node-meta'; /* WAS: '' */
    $data['node:event:default']->display->content['new-6']->css['css_id'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-6']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-6']->position = 3; /* WAS: 0 */
    $data['node:event:default']->display->content['new-6']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-6']->subtype = 'node:field_location'; /* WAS: 'node:field_registration_type' */
    $data['node:event:default']->display->content['new-7']->access['plugins'] = array(); /* WAS: '' */
    $data['node:event:default']->display->content['new-7']->configuration['admin_title'] = 'Comment Count'; /* WAS: '' */
    $data['node:event:default']->display->content['new-7']->configuration['body'] = '<a href="#comments" class="comment-count"><span class="comments-icon"></span>%node:comment-count</a>'; /* WAS: '' */
    $data['node:event:default']->display->content['new-7']->configuration['format'] = 'full_html'; /* WAS: '' */
    $data['node:event:default']->display->content['new-7']->configuration['substitute'] = 1; /* WAS: '' */
    $data['node:event:default']->display->content['new-7']->configuration['title'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-7']->css['css_class'] = 'node-comment-counter node-meta-last'; /* WAS: '' */
    $data['node:event:default']->display->content['new-7']->css['css_id'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-7']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-7']->position = 4; /* WAS: 0 */
    $data['node:event:default']->display->content['new-7']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-7']->subtype = 'custom'; /* WAS: 'node:field_number_of_attendee' */
    $data['node:event:default']->display->content['new-7']->type = 'custom'; /* WAS: 'entity_field' */
    $data['node:event:default']->display->content['new-8']->configuration['formatter'] = 'image'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node:event:default']->display->content['new-8']->configuration['formatter_settings']['image_link'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-8']->configuration['formatter_settings']['image_style'] = 'news'; /* WAS: '' */
    $data['node:event:default']->display->content['new-8']->configuration['label'] = 'hidden'; /* WAS: 'above' */
    $data['node:event:default']->display->content['new-8']->configuration['link'] = 0; /* WAS: '' */
    $data['node:event:default']->display->content['new-8']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:event:default']->display->content['new-8']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:event:default']->display->content['new-8']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-8']->position = 5; /* WAS: 0 */
    $data['node:event:default']->display->content['new-8']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-8']->subtype = 'node:field_logo'; /* WAS: 'node:field_tag' */
    $data['node:event:default']->display->content['new-9']->configuration['label'] = 'hidden'; /* WAS: 'above' */
    $data['node:event:default']->display->content['new-9']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:event:default']->display->content['new-9']->position = 6; /* WAS: 0 */
    $data['node:event:default']->display->content['new-9']->style['settings'] = NULL; /* WAS: '' */
    $data['node:event:default']->display->content['new-9']->subtype = 'node:body'; /* WAS: 'node:field_offsite_url' */
    $data['node:event:default']->display->layout = 'three_25_50_25'; /* WAS: 'flexible' */
    $data['node:event:default']->display->panel_settings['style_settings'] = array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ); /* WAS: '' */
    $data['node:event:default']->display->panels['three_25_50_25_first'] = array(
      0 => 'new-1',
      1 => 'new-2',
    ); /* WAS: '' */
    $data['node:event:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-3',
      1 => 'new-4',
      2 => 'new-5',
      3 => 'new-6',
      4 => 'new-7',
      5 => 'new-8',
      6 => 'new-9',
      7 => 'new-10',
      8 => 'new-11',
      9 => 'new-12',
      10 => 'new-13',
      11 => 'new-14',
      12 => 'new-15',
      13 => 'new-16',
      14 => 'new-17',
      15 => 'new-18',
      16 => 'new-19',
    ); /* WAS: '' */
    $data['node:event:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-20',
      1 => 'new-21',
      2 => 'new-22',
    ); /* WAS: '' */
    $data['node:event:default']->display->title_pane = 'new-17'; /* WAS: 'new-12' */
    unset($data['node:event:default']->display->content['new-12']->configuration['build_mode']);
    unset($data['node:event:default']->display->content['new-12']->configuration['identifier']);
    unset($data['node:event:default']->display->content['new-12']->configuration['link']);
    unset($data['node:event:default']->display->content['new-12']->css['css_class']);
    unset($data['node:event:default']->display->content['new-1']->configuration['context']);
    unset($data['node:event:default']->display->content['new-1']->configuration['delta_limit']);
    unset($data['node:event:default']->display->content['new-1']->configuration['delta_offset']);
    unset($data['node:event:default']->display->content['new-1']->configuration['delta_reversed']);
    unset($data['node:event:default']->display->content['new-1']->configuration['formatter']);
    unset($data['node:event:default']->display->content['new-1']->configuration['formatter_settings']);
    unset($data['node:event:default']->display->content['new-1']->configuration['label']);
    unset($data['node:event:default']->display->content['new-2']->configuration['context']);
    unset($data['node:event:default']->display->content['new-2']->configuration['delta_limit']);
    unset($data['node:event:default']->display->content['new-2']->configuration['delta_offset']);
    unset($data['node:event:default']->display->content['new-2']->configuration['delta_reversed']);
    unset($data['node:event:default']->display->content['new-2']->configuration['formatter']);
    unset($data['node:event:default']->display->content['new-2']->configuration['formatter_settings']);
    unset($data['node:event:default']->display->content['new-2']->configuration['label']);
    unset($data['node:event:default']->display->content['new-3']->configuration['delta_limit']);
    unset($data['node:event:default']->display->content['new-3']->configuration['delta_offset']);
    unset($data['node:event:default']->display->content['new-3']->configuration['delta_reversed']);
    unset($data['node:event:default']->display->content['new-3']->configuration['formatter']);
    unset($data['node:event:default']->display->content['new-3']->configuration['formatter_settings']);
    unset($data['node:event:default']->display->content['new-3']->configuration['label']);
    unset($data['node:event:default']->display->content['new-4']->configuration['delta_limit']);
    unset($data['node:event:default']->display->content['new-4']->configuration['delta_offset']);
    unset($data['node:event:default']->display->content['new-4']->configuration['delta_reversed']);
    unset($data['node:event:default']->display->content['new-4']->configuration['formatter']);
    unset($data['node:event:default']->display->content['new-4']->configuration['formatter_settings']);
    unset($data['node:event:default']->display->content['new-4']->configuration['label']);
    unset($data['node:event:default']->display->content['new-5']->configuration['formatter_settings']['label']);
    unset($data['node:event:default']->display->content['new-7']->configuration['context']);
    unset($data['node:event:default']->display->content['new-7']->configuration['delta_limit']);
    unset($data['node:event:default']->display->content['new-7']->configuration['delta_offset']);
    unset($data['node:event:default']->display->content['new-7']->configuration['delta_reversed']);
    unset($data['node:event:default']->display->content['new-7']->configuration['formatter']);
    unset($data['node:event:default']->display->content['new-7']->configuration['formatter_settings']);
    unset($data['node:event:default']->display->content['new-7']->configuration['label']);
    unset($data['node:event:default']->display->panels['center']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function linux_events_strongarm_alter(&$data) {
  if (isset($data['panelizer_defaults_node_event'])) {
    $data['panelizer_defaults_node_event']->value['status'] = 1; /* WAS: 0 */
    $data['panelizer_defaults_node_event']->value['view modes']['page_manager']['default'] = 1; /* WAS: 0 */
    $data['panelizer_defaults_node_event']->value['view modes']['page_manager']['status'] = 1; /* WAS: 0 */
  }
}

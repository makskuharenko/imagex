<?php
/**
 * @file
 * linux_wiki.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function linux_wiki_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:wiki:default'])) {
    $data['node:wiki:default']->display->content['new-1']->configuration['arguments'] = array(
      'type' => 'wiki',
    ); /* WAS: '' */
    $data['node:wiki:default']->display->content['new-1']->css['css_class'] = 'standard-bean recent-events filtered-view landing-pages-left-bar'; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-1']->panel = 'three_25_50_25_first'; /* WAS: 'center' */
    $data['node:wiki:default']->display->content['new-1']->style['settings'] = NULL; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-1']->subtype = 'home_page-panel_pane_1'; /* WAS: 'node:body' */
    $data['node:wiki:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['node:wiki:default']->display->content['new-2']->configuration['formatter'] = 'text_default'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node:wiki:default']->display->content['new-2']->configuration['label'] = 'hidden'; /* WAS: 'above' */
    $data['node:wiki:default']->display->content['new-2']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:wiki:default']->display->content['new-2']->style['settings'] = NULL; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-2']->subtype = 'node:body'; /* WAS: 'node:field_wiki_topics' */
    $data['node:wiki:default']->display->content['new-3']->configuration['formatter'] = 'taxonomy_term_reference_link'; /* WAS: 'radioactivity_combo_formatter' */
    $data['node:wiki:default']->display->content['new-3']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:wiki:default']->display->content['new-3']->position = 1; /* WAS: 0 */
    $data['node:wiki:default']->display->content['new-3']->style['settings'] = NULL; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-3']->subtype = 'node:field_wiki_topics'; /* WAS: 'node:field_linux_radioactivity' */
    $data['node:wiki:default']->display->content['new-4']->configuration['formatter'] = 'radioactivity_combo_formatter'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node:wiki:default']->display->content['new-4']->configuration['formatter_settings']['accuracy'] = 100; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-4']->configuration['formatter_settings']['energy'] = 10; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-4']->configuration['formatter_settings']['type'] = 'none'; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-4']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:wiki:default']->display->content['new-4']->position = 2; /* WAS: 0 */
    $data['node:wiki:default']->display->content['new-4']->style['settings'] = NULL; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-4']->subtype = 'node:field_linux_radioactivity'; /* WAS: 'node:field_tags' */
    $data['node:wiki:default']->display->content['new-5']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-5']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-5']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-5']->configuration['formatter'] = 'taxonomy_term_reference_link'; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-5']->configuration['formatter_settings'] = array(); /* WAS: '' */
    $data['node:wiki:default']->display->content['new-5']->configuration['label'] = 'above'; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-5']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:wiki:default']->display->content['new-5']->position = 3; /* WAS: 0 */
    $data['node:wiki:default']->display->content['new-5']->style['settings'] = NULL; /* WAS: '' */
    $data['node:wiki:default']->display->content['new-5']->subtype = 'node:field_tags'; /* WAS: 'node_links' */
    $data['node:wiki:default']->display->content['new-5']->type = 'entity_field'; /* WAS: 'node_links' */
    $data['node:wiki:default']->display->content['new-6'] = (object) array(
          'pid' => 'new-6',
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
          'position' => 4,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:wiki:default']->display->content['new-7'] = (object) array(
          'pid' => 'new-7',
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
    $data['node:wiki:default']->display->layout = 'three_25_50_25'; /* WAS: 'flexible' */
    $data['node:wiki:default']->display->panel_settings['style_settings'] = array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ); /* WAS: '' */
    $data['node:wiki:default']->display->panels['three_25_50_25_first'] = array(
      0 => 'new-1',
    ); /* WAS: '' */
    $data['node:wiki:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-2',
      1 => 'new-3',
      2 => 'new-4',
      3 => 'new-5',
      4 => 'new-6',
    ); /* WAS: '' */
    $data['node:wiki:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-7',
    ); /* WAS: '' */
    $data['node:wiki:default']->display->title_pane = 'new-6'; /* WAS: 'new-5' */
    unset($data['node:wiki:default']->display->content['new-1']->configuration['context']);
    unset($data['node:wiki:default']->display->content['new-1']->configuration['delta_limit']);
    unset($data['node:wiki:default']->display->content['new-1']->configuration['delta_offset']);
    unset($data['node:wiki:default']->display->content['new-1']->configuration['delta_reversed']);
    unset($data['node:wiki:default']->display->content['new-1']->configuration['formatter']);
    unset($data['node:wiki:default']->display->content['new-1']->configuration['formatter_settings']);
    unset($data['node:wiki:default']->display->content['new-1']->configuration['label']);
    unset($data['node:wiki:default']->display->content['new-3']->configuration['formatter_settings']['accuracy']);
    unset($data['node:wiki:default']->display->content['new-3']->configuration['formatter_settings']['energy']);
    unset($data['node:wiki:default']->display->content['new-3']->configuration['formatter_settings']['type']);
    unset($data['node:wiki:default']->display->content['new-5']->configuration['build_mode']);
    unset($data['node:wiki:default']->display->content['new-5']->configuration['identifier']);
    unset($data['node:wiki:default']->display->content['new-5']->configuration['link']);
    unset($data['node:wiki:default']->display->content['new-5']->configuration['override_title']);
    unset($data['node:wiki:default']->display->content['new-5']->configuration['override_title_text']);
    unset($data['node:wiki:default']->display->content['new-5']->css['css_class']);
    unset($data['node:wiki:default']->display->panels['center']);
  }
}

<?php
/**
 * @file
 * linux_panelizers.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function linux_panelizers_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:blog:default'])) {
    $data['node:blog:default']->display->content['new-10'] = (object) array(
          'pid' => 'new-10',
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
          'css' => array(),
          'extras' => array(),
          'position' => 7,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-11'] = (object) array(
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
            'override_title' => 1,
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
    $data['node:blog:default']->display->content['new-12'] = (object) array(
          'pid' => 'new-12',
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
    $data['node:blog:default']->display->content['new-13'] = (object) array(
          'pid' => 'new-13',
          'panel' => 'three_25_50_25_third',
          'type' => 'views_panes',
          'subtype' => 'landing_pages-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'arguments' => array(
              'type' => 'blog',
              'tid' => '%taxonomy_term:name',
              'nid' => '%node:nid',
            ),
            'override_title' => 1,
            'override_title_text' => 'Related Blog Posts',
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
    $data['node:blog:default']->display->content['new-14'] = (object) array(
          'pid' => 'new-14',
          'panel' => 'three_25_50_25_third',
          'type' => 'views_panes',
          'subtype' => 'landing_pages-panel_pane_2',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'arguments' => array(
              'type' => 'all',
              'tid' => '%taxonomy_term:name',
            ),
            'override_title' => 1,
            'override_title_text' => 'Related Content',
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
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-1']->configuration['arguments'] = array(
      'type' => 'blog',
    ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-1']->css['css_class'] = 'standard-bean filtered-view recent-events landing-pages-left-bar'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-1']->panel = 'three_25_50_25_first'; /* WAS: 'center' */
    $data['node:blog:default']->display->content['new-1']->style['settings'] = NULL; /* WAS: '' */
    $data['node:blog:default']->display->content['new-1']->subtype = 'home_page-panel_pane_1'; /* WAS: 'node:body' */
    $data['node:blog:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['node:blog:default']->display->content['new-2']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:blog:default']->display->content['new-2']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-2']->panel = 'three_25_50_25_first'; /* WAS: 'center' */
    $data['node:blog:default']->display->content['new-2']->position = 1; /* WAS: 0 */
    $data['node:blog:default']->display->content['new-2']->style['settings'] = NULL; /* WAS: '' */
    $data['node:blog:default']->display->content['new-2']->subtype = 'bean-ad-space-homepage-right-top'; /* WAS: 'node:field_file_attachment' */
    $data['node:blog:default']->display->content['new-2']->type = 'block'; /* WAS: 'entity_field' */
    $data['node:blog:default']->display->content['new-3']->configuration['class'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->configuration['id'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->configuration['link'] = 0; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->configuration['markup'] = 'h1'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->configuration['override_title_text'] = '%node:title'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->css['css_class'] = 'node-title'; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->css['css_id'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:blog:default']->display->content['new-3']->style['settings'] = NULL; /* WAS: '' */
    $data['node:blog:default']->display->content['new-3']->subtype = 'node_title'; /* WAS: 'node:field_topics' */
    $data['node:blog:default']->display->content['new-3']->type = 'node_title'; /* WAS: 'entity_field' */
    $data['node:blog:default']->display->content['new-4']->configuration['link'] = 0; /* WAS: TRUE */
    $data['node:blog:default']->display->content['new-4']->configuration['override_title'] = 1; /* WAS: FALSE */
    $data['node:blog:default']->display->content['new-4']->css['css_class'] = 'node-author'; /* WAS: 'link-wrapper' */
    $data['node:blog:default']->display->content['new-4']->css['css_id'] = ''; /* WAS: '' */
    $data['node:blog:default']->display->content['new-4']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['node:blog:default']->display->content['new-4']->position = 1; /* WAS: 0 */
    $data['node:blog:default']->display->content['new-4']->style['settings'] = NULL; /* WAS: '' */
    $data['node:blog:default']->display->content['new-4']->subtype = 'node_author'; /* WAS: 'node_links' */
    $data['node:blog:default']->display->content['new-4']->type = 'node_author'; /* WAS: 'node_links' */
    $data['node:blog:default']->display->content['new-5'] = (object) array(
          'pid' => 'new-5',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_created',
          'subtype' => 'node_created',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'format' => 'medium',
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'node-date',
          ),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-6'] = (object) array(
          'pid' => 'new-6',
          'panel' => 'three_25_50_25_second',
          'type' => 'token',
          'subtype' => 'node:comment-count',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'sanitize' => 1,
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'node-comment-counter',
          ),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-7'] = (object) array(
          'pid' => 'new-7',
          'panel' => 'three_25_50_25_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_image',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'image',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'image_style' => 'news',
              'image_link' => '',
            ),
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
          'position' => 4,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default']->display->content['new-8'] = (object) array(
          'pid' => 'new-8',
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
            'override_title' => 1,
            'override_title_text' => '',
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
    $data['node:blog:default']->display->content['new-9'] = (object) array(
          'pid' => 'new-9',
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
      1 => 'new-2',
    ); /* WAS: '' */
    $data['node:blog:default']->display->panels['three_25_50_25_second'] = array(
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
    $data['node:blog:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-12',
      1 => 'new-13',
      2 => 'new-14',
    ); /* WAS: '' */
    $data['node:blog:default']->display->title_pane = 0; /* WAS: 'new-4' */
    $data['node:blog:default']->relationships['0'] = array(
      'identifier' => 'Taxonomy term from Node (on Node: Tags [field_tags])',
      'keyword' => 'taxonomy_term',
      'name' => 'entity_from_field:field_tags-node-taxonomy_term',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ); /* WAS: '' */
    unset($data['node:blog:default']->display->content['new-1']->configuration['context']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['delta_limit']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['delta_offset']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['delta_reversed']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['formatter']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['formatter_settings']);
    unset($data['node:blog:default']->display->content['new-1']->configuration['label']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['context']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['delta_limit']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['delta_offset']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['delta_reversed']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['formatter']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['formatter_settings']);
    unset($data['node:blog:default']->display->content['new-2']->configuration['label']);
    unset($data['node:blog:default']->display->content['new-3']->configuration['delta_limit']);
    unset($data['node:blog:default']->display->content['new-3']->configuration['delta_offset']);
    unset($data['node:blog:default']->display->content['new-3']->configuration['delta_reversed']);
    unset($data['node:blog:default']->display->content['new-3']->configuration['formatter']);
    unset($data['node:blog:default']->display->content['new-3']->configuration['formatter_settings']);
    unset($data['node:blog:default']->display->content['new-3']->configuration['label']);
    unset($data['node:blog:default']->display->content['new-4']->configuration['build_mode']);
    unset($data['node:blog:default']->display->content['new-4']->configuration['identifier']);
    unset($data['node:blog:default']->display->panels['center']);
  }
  if (isset($data['node:blog:default:teaser'])) {
    $data['node:blog:default:teaser']->display->content['new-15'] = (object) array(
          'pid' => 'new-15',
          'panel' => 'center',
          'type' => 'entity_field',
          'subtype' => 'node:field_topics',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'above',
            'formatter' => 'hidden',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default:teaser']->display->content['new-16'] = (object) array(
          'pid' => 'new-16',
          'panel' => 'center',
          'type' => 'entity_field',
          'subtype' => 'node:field_file_attachment',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'above',
            'formatter' => 'hidden',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default:teaser']->display->content['new-17'] = (object) array(
          'pid' => 'new-17',
          'panel' => 'center',
          'type' => 'entity_field',
          'subtype' => 'node:body',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'text_summary_or_trimmed',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'trim_length' => 600,
            ),
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default:teaser']->display->content['new-18'] = (object) array(
          'pid' => 'new-18',
          'panel' => 'center',
          'type' => 'node_links',
          'subtype' => 'node_links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => FALSE,
            'override_title_text' => '',
            'build_mode' => 'teaser',
            'identifier' => '',
            'link' => TRUE,
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(),
          'css' => array(
            'css_class' => 'link-wrapper',
          ),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:blog:default:teaser']->display->panels['center']['0'] = 'new-15'; /* WAS: 'new-5' */
    $data['node:blog:default:teaser']->display->panels['center']['1'] = 'new-16'; /* WAS: 'new-6' */
    $data['node:blog:default:teaser']->display->panels['center']['2'] = 'new-17'; /* WAS: 'new-7' */
    $data['node:blog:default:teaser']->display->panels['center']['3'] = 'new-18'; /* WAS: 'new-8' */
    $data['node:blog:default:teaser']->display->title_pane = 'new-18'; /* WAS: 'new-8' */
    unset($data['node:blog:default:teaser']->display->content['new-5']);
    unset($data['node:blog:default:teaser']->display->content['new-6']);
    unset($data['node:blog:default:teaser']->display->content['new-7']);
    unset($data['node:blog:default:teaser']->display->content['new-8']);
  }
  if (isset($data['node:directory:default'])) {
    $data['node:directory:default']->display->content['new-1']->configuration['arguments'] = array(
      'type' => 'blog+imagex_news',
    ); /* WAS: '' */
    $data['node:directory:default']->display->content['new-1']->css['css_class'] = 'standard-bean filtered-view recent-events landing-pages-left-bar'; /* WAS: '' */
    $data['node:directory:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['node:directory:default']->display->content['new-1']->panel = 'three_25_50_25_first'; /* WAS: 'two_33_66_second' */
    $data['node:directory:default']->display->content['new-1']->subtype = 'home_page-panel_pane_1'; /* WAS: 'node:body' */
    $data['node:directory:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['node:directory:default']->display->content['new-2']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:directory:default']->display->content['new-2']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:directory:default']->display->content['new-2']->panel = 'three_25_50_25_first'; /* WAS: 'two_33_66_second' */
    $data['node:directory:default']->display->content['new-2']->subtype = 'bean-ad-space-homepage-right-top'; /* WAS: 'node:field_directory_isbn' */
    $data['node:directory:default']->display->content['new-2']->type = 'block'; /* WAS: 'entity_field' */
    $data['node:directory:default']->display->content['new-3']->configuration['class'] = ''; /* WAS: '' */
    $data['node:directory:default']->display->content['new-3']->configuration['id'] = ''; /* WAS: '' */
    $data['node:directory:default']->display->content['new-3']->configuration['link'] = 0; /* WAS: '' */
    $data['node:directory:default']->display->content['new-3']->configuration['markup'] = 'h1'; /* WAS: '' */
    $data['node:directory:default']->display->content['new-3']->configuration['override_title'] = 1; /* WAS: '' */
    $data['node:directory:default']->display->content['new-3']->configuration['override_title_text'] = '%node:title'; /* WAS: '' */
    $data['node:directory:default']->display->content['new-3']->css['css_class'] = 'node-title'; /* WAS: '' */
    $data['node:directory:default']->display->content['new-3']->css['css_id'] = ''; /* WAS: '' */
    $data['node:directory:default']->display->content['new-3']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:directory:default']->display->content['new-3']->position = 0; /* WAS: 2 */
    $data['node:directory:default']->display->content['new-3']->subtype = 'node_title'; /* WAS: 'node:field_directory_specifications' */
    $data['node:directory:default']->display->content['new-3']->type = 'node_title'; /* WAS: 'entity_field' */
    $data['node:directory:default']->display->content['new-4']->configuration['formatter'] = 'text_default'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node:directory:default']->display->content['new-4']->configuration['label'] = 'hidden'; /* WAS: 'above' */
    $data['node:directory:default']->display->content['new-4']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:directory:default']->display->content['new-4']->position = 1; /* WAS: 3 */
    $data['node:directory:default']->display->content['new-4']->subtype = 'node:body'; /* WAS: 'node:field_directory_section' */
    $data['node:directory:default']->display->content['new-5']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:directory:default']->display->content['new-5']->position = 2; /* WAS: 4 */
    $data['node:directory:default']->display->content['new-6']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:directory:default']->display->content['new-6']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:directory:default']->display->content['new-6']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:directory:default']->display->content['new-6']->configuration['formatter'] = 'text_default'; /* WAS: '' */
    $data['node:directory:default']->display->content['new-6']->configuration['formatter_settings'] = array(); /* WAS: '' */
    $data['node:directory:default']->display->content['new-6']->configuration['label'] = 'above'; /* WAS: '' */
    $data['node:directory:default']->display->content['new-6']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:directory:default']->display->content['new-6']->position = 3; /* WAS: 5 */
    $data['node:directory:default']->display->content['new-6']->subtype = 'node:field_directory_isbn'; /* WAS: 'node_links' */
    $data['node:directory:default']->display->content['new-6']->type = 'entity_field'; /* WAS: 'node_links' */
    $data['node:directory:default']->display->content['new-7'] = (object) array(
          'pid' => 'new-7',
          'panel' => 'three_25_50_25_second',
          'type' => 'entity_field',
          'subtype' => 'node:field_directory_specifications',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'above',
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
          'position' => 4,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:directory:default']->display->content['new-8'] = (object) array(
          'pid' => 'new-8',
          'panel' => 'three_25_50_25_third',
          'type' => 'views_panes',
          'subtype' => 'landing_pages-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'arguments' => array(
              'type' => 'Blog Posts',
              'tid' => '',
            ),
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
    $data['node:directory:default']->display->content['new-9'] = (object) array(
          'pid' => 'new-9',
          'panel' => 'three_25_50_25_third',
          'type' => 'custom',
          'subtype' => 'custom',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'admin_title' => '',
            'title' => '',
            'body' => '%node:field_tags',
            'format' => 'filtered_html',
            'substitute' => 1,
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
    $data['node:directory:default']->display->layout = 'three_25_50_25'; /* WAS: 'two_33_66' */
    $data['node:directory:default']->display->panel_settings['style_settings']['three_25_50_25_bottom'] = NULL; /* WAS: '' */
    $data['node:directory:default']->display->panel_settings['style_settings']['three_25_50_25_first'] = NULL; /* WAS: '' */
    $data['node:directory:default']->display->panel_settings['style_settings']['three_25_50_25_second'] = NULL; /* WAS: '' */
    $data['node:directory:default']->display->panel_settings['style_settings']['three_25_50_25_third'] = NULL; /* WAS: '' */
    $data['node:directory:default']->display->panel_settings['style_settings']['three_25_50_25_top'] = NULL; /* WAS: '' */
    $data['node:directory:default']->display->panels['three_25_50_25_first'] = array(
      0 => 'new-1',
      1 => 'new-2',
    ); /* WAS: '' */
    $data['node:directory:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-3',
      1 => 'new-4',
      2 => 'new-5',
      3 => 'new-6',
      4 => 'new-7',
    ); /* WAS: '' */
    $data['node:directory:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-8',
      1 => 'new-9',
    ); /* WAS: '' */
    $data['node:directory:default']->display->title_pane = 0; /* WAS: 'new-6' */
    unset($data['node:directory:default']->display->content['new-1']->configuration['context']);
    unset($data['node:directory:default']->display->content['new-1']->configuration['delta_limit']);
    unset($data['node:directory:default']->display->content['new-1']->configuration['delta_offset']);
    unset($data['node:directory:default']->display->content['new-1']->configuration['delta_reversed']);
    unset($data['node:directory:default']->display->content['new-1']->configuration['formatter']);
    unset($data['node:directory:default']->display->content['new-1']->configuration['formatter_settings']);
    unset($data['node:directory:default']->display->content['new-1']->configuration['label']);
    unset($data['node:directory:default']->display->content['new-2']->configuration['context']);
    unset($data['node:directory:default']->display->content['new-2']->configuration['delta_limit']);
    unset($data['node:directory:default']->display->content['new-2']->configuration['delta_offset']);
    unset($data['node:directory:default']->display->content['new-2']->configuration['delta_reversed']);
    unset($data['node:directory:default']->display->content['new-2']->configuration['formatter']);
    unset($data['node:directory:default']->display->content['new-2']->configuration['formatter_settings']);
    unset($data['node:directory:default']->display->content['new-2']->configuration['label']);
    unset($data['node:directory:default']->display->content['new-3']->configuration['delta_limit']);
    unset($data['node:directory:default']->display->content['new-3']->configuration['delta_offset']);
    unset($data['node:directory:default']->display->content['new-3']->configuration['delta_reversed']);
    unset($data['node:directory:default']->display->content['new-3']->configuration['formatter']);
    unset($data['node:directory:default']->display->content['new-3']->configuration['formatter_settings']);
    unset($data['node:directory:default']->display->content['new-3']->configuration['label']);
    unset($data['node:directory:default']->display->content['new-6']->configuration['build_mode']);
    unset($data['node:directory:default']->display->content['new-6']->configuration['identifier']);
    unset($data['node:directory:default']->display->content['new-6']->configuration['link']);
    unset($data['node:directory:default']->display->content['new-6']->configuration['override_title']);
    unset($data['node:directory:default']->display->content['new-6']->configuration['override_title_text']);
    unset($data['node:directory:default']->display->content['new-6']->css['css_class']);
    unset($data['node:directory:default']->display->panels['two_33_66_second']);
  }
  if (isset($data['node:tutorial:default'])) {
    $data['node:tutorial:default']->display->content['new-10'] = (object) array(
          'pid' => 'new-10',
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
          'css' => array(),
          'extras' => array(),
          'position' => 7,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:tutorial:default']->display->content['new-11'] = (object) array(
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
    $data['node:tutorial:default']->display->content['new-12'] = (object) array(
          'pid' => 'new-12',
          'panel' => 'three_25_50_25_third',
          'type' => 'views_panes',
          'subtype' => 'landing_pages-panel_pane_1',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'arguments' => array(
              'type' => 'tutorial',
              'tid' => '%taxonomy_term:name',
              'nid' => '%node:nid',
            ),
            'override_title' => 1,
            'override_title_text' => 'Related Tutorials',
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
    $data['node:tutorial:default']->display->content['new-13'] = (object) array(
          'pid' => 'new-13',
          'panel' => 'three_25_50_25_third',
          'type' => 'views_panes',
          'subtype' => 'landing_pages-panel_pane_2',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'arguments' => array(
              'type' => 'all',
              'tid' => '%taxonomy_term:name',
              'nid' => '%node:nid',
            ),
            'override_title' => 1,
            'override_title_text' => 'Related Content',
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
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:tutorial:default']->display->content['new-1']->configuration['arguments'] = array(
      'type' => 'tutorial',
    ); /* WAS: '' */
    $data['node:tutorial:default']->display->content['new-1']->css['css_class'] = 'standard-bean filtered-view recent-events landing-pages-left-bar'; /* WAS: '' */
    $data['node:tutorial:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['node:tutorial:default']->display->content['new-1']->panel = 'three_25_50_25_first'; /* WAS: 'two_33_66_second' */
    $data['node:tutorial:default']->display->content['new-1']->subtype = 'home_page-panel_pane_1'; /* WAS: 'node:body' */
    $data['node:tutorial:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['node:tutorial:default']->display->content['new-2']->configuration['override_title'] = 1; /* WAS: FALSE */
    $data['node:tutorial:default']->display->content['new-2']->panel = 'three_25_50_25_first'; /* WAS: 'two_33_66_second' */
    $data['node:tutorial:default']->display->content['new-2']->subtype = 'bean-ad-space-homepage-right-top'; /* WAS: 'node_links' */
    $data['node:tutorial:default']->display->content['new-2']->type = 'block'; /* WAS: 'node_links' */
    $data['node:tutorial:default']->display->content['new-3'] = (object) array(
          'pid' => 'new-3',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_title',
          'subtype' => 'node_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'link' => 0,
            'markup' => 'h1',
            'id' => '',
            'class' => 'node-title',
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '%node:title',
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
    $data['node:tutorial:default']->display->content['new-4'] = (object) array(
          'pid' => 'new-4',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_author',
          'subtype' => 'node_author',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'link' => 1,
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'node-author',
          ),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:tutorial:default']->display->content['new-5'] = (object) array(
          'pid' => 'new-5',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_created',
          'subtype' => 'node_created',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'format' => 'medium',
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'node-date',
          ),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:tutorial:default']->display->content['new-6'] = (object) array(
          'pid' => 'new-6',
          'panel' => 'three_25_50_25_second',
          'type' => 'token',
          'subtype' => 'node:comment-count',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'sanitize' => 1,
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'node-comment-counter',
          ),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:tutorial:default']->display->content['new-7'] = (object) array(
          'pid' => 'new-7',
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
            'override_title' => 1,
            'override_title_text' => '',
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
    $data['node:tutorial:default']->display->content['new-8'] = (object) array(
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
            'override_title' => 1,
            'override_title_text' => '',
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
    $data['node:tutorial:default']->display->content['new-9'] = (object) array(
          'pid' => 'new-9',
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
            'override_title_text' => 'Comments',
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
          'position' => 6,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:tutorial:default']->display->layout = 'three_25_50_25'; /* WAS: 'two_33_66' */
    $data['node:tutorial:default']->display->panel_settings['style_settings']['three_25_50_25_bottom'] = NULL; /* WAS: '' */
    $data['node:tutorial:default']->display->panel_settings['style_settings']['three_25_50_25_first'] = NULL; /* WAS: '' */
    $data['node:tutorial:default']->display->panel_settings['style_settings']['three_25_50_25_second'] = NULL; /* WAS: '' */
    $data['node:tutorial:default']->display->panel_settings['style_settings']['three_25_50_25_third'] = NULL; /* WAS: '' */
    $data['node:tutorial:default']->display->panel_settings['style_settings']['three_25_50_25_top'] = NULL; /* WAS: '' */
    $data['node:tutorial:default']->display->panels['three_25_50_25_first'] = array(
      0 => 'new-1',
      1 => 'new-2',
    ); /* WAS: '' */
    $data['node:tutorial:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-3',
      1 => 'new-4',
      2 => 'new-5',
      3 => 'new-6',
      4 => 'new-7',
      5 => 'new-8',
      6 => 'new-9',
      7 => 'new-10',
    ); /* WAS: '' */
    $data['node:tutorial:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-11',
      1 => 'new-12',
      2 => 'new-13',
    ); /* WAS: '' */
    $data['node:tutorial:default']->display->title_pane = 0; /* WAS: 'new-2' */
    $data['node:tutorial:default']->relationships['0'] = array(
      'identifier' => 'Taxonomy term from Node (on Node: Tags [field_tags])',
      'keyword' => 'taxonomy_term',
      'name' => 'entity_from_field:field_tags-node-taxonomy_term',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ); /* WAS: '' */
    unset($data['node:tutorial:default']->display->content['new-1']->configuration['context']);
    unset($data['node:tutorial:default']->display->content['new-1']->configuration['delta_limit']);
    unset($data['node:tutorial:default']->display->content['new-1']->configuration['delta_offset']);
    unset($data['node:tutorial:default']->display->content['new-1']->configuration['delta_reversed']);
    unset($data['node:tutorial:default']->display->content['new-1']->configuration['formatter']);
    unset($data['node:tutorial:default']->display->content['new-1']->configuration['formatter_settings']);
    unset($data['node:tutorial:default']->display->content['new-1']->configuration['label']);
    unset($data['node:tutorial:default']->display->content['new-2']->configuration['build_mode']);
    unset($data['node:tutorial:default']->display->content['new-2']->configuration['context']);
    unset($data['node:tutorial:default']->display->content['new-2']->configuration['identifier']);
    unset($data['node:tutorial:default']->display->content['new-2']->configuration['link']);
    unset($data['node:tutorial:default']->display->content['new-2']->css['css_class']);
    unset($data['node:tutorial:default']->display->panels['two_33_66_second']);
  }
}

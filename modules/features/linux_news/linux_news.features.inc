<?php
/**
 * @file
 * linux_news.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function linux_news_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:imagex_news:default'])) {
    $data['node:imagex_news:default']->display->content['new-10']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-10']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-10']->configuration['delta_reversed'] = 0; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-10']->configuration['formatter'] = 'taxonomy_term_reference_link'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-10']->configuration['formatter_settings'] = array(); /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-10']->configuration['label'] = 'hidden'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-10']->configuration['override_title'] = 0; /* WAS: 1 */
    $data['node:imagex_news:default']->display->content['new-10']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:imagex_news:default']->display->content['new-10']->position = 7; /* WAS: 9 */
    $data['node:imagex_news:default']->display->content['new-10']->subtype = 'node:field_tags'; /* WAS: 'node_comment_form' */
    $data['node:imagex_news:default']->display->content['new-10']->type = 'entity_field'; /* WAS: 'node_comment_form' */
    $data['node:imagex_news:default']->display->content['new-11']->configuration['anon_links'] = 1; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-11']->css['css_class'] = ''; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-11']->css['css_id'] = 'comments'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-11']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:imagex_news:default']->display->content['new-11']->position = 8; /* WAS: 10 */
    $data['node:imagex_news:default']->display->content['new-11']->subtype = 'node_comment_form'; /* WAS: 'node_comments' */
    $data['node:imagex_news:default']->display->content['new-11']->type = 'node_comment_form'; /* WAS: 'node_comments' */
    $data['node:imagex_news:default']->display->content['new-12'] = (object) array(
          'pid' => 'new-12',
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
          'position' => 9,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-13'] = (object) array(
          'pid' => 'new-13',
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
    $data['node:imagex_news:default']->display->content['new-14'] = (object) array(
          'pid' => 'new-14',
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
    $data['node:imagex_news:default']->display->content['new-15'] = (object) array(
          'pid' => 'new-15',
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
          'css' => array(
            'css_id' => '',
            'css_class' => 'standard-bean',
          ),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-1']->css['css_class'] = 'standard-bean filtered-view recent-events landing-pages-left-bar'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-1']->panel = 'three_25_50_25_first'; /* WAS: 'two_33_66_second' */
    $data['node:imagex_news:default']->display->content['new-1']->subtype = 'home_page-panel_pane_1'; /* WAS: 'node:field_image' */
    $data['node:imagex_news:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['node:imagex_news:default']->display->content['new-2']->configuration['override_title'] = 0; /* WAS: 1 */
    $data['node:imagex_news:default']->display->content['new-2']->configuration['override_title_text'] = ''; /* WAS: '%node:title' */
    $data['node:imagex_news:default']->display->content['new-2']->panel = 'three_25_50_25_first'; /* WAS: 'two_33_66_second' */
    $data['node:imagex_news:default']->display->content['new-2']->subtype = 'bean-ad-space-homepage-right-top'; /* WAS: 'node_title' */
    $data['node:imagex_news:default']->display->content['new-2']->type = 'block'; /* WAS: 'node_title' */
    $data['node:imagex_news:default']->display->content['new-3']->configuration['class'] = 'title'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-3']->configuration['context'] = 'panelizer'; /* WAS: 'relationship_entity_from_schema:uid-node-user_1' */
    $data['node:imagex_news:default']->display->content['new-3']->configuration['id'] = ''; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-3']->configuration['link'] = 0; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-3']->configuration['markup'] = 'h1'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-3']->configuration['override_title'] = 1; /* WAS: 0 */
    $data['node:imagex_news:default']->display->content['new-3']->configuration['override_title_text'] = '%node:title'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-3']->css['css_class'] = 'node-title'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-3']->css['css_id'] = ''; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-3']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:imagex_news:default']->display->content['new-3']->position = 0; /* WAS: 2 */
    $data['node:imagex_news:default']->display->content['new-3']->subtype = 'node_title'; /* WAS: 'user:field_profile_image' */
    $data['node:imagex_news:default']->display->content['new-3']->type = 'node_title'; /* WAS: 'entity_field' */
    $data['node:imagex_news:default']->display->content['new-4']->configuration['link'] = 0; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-4']->css['css_class'] = 'node-author'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-4']->css['css_id'] = ''; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-4']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:imagex_news:default']->display->content['new-4']->position = 1; /* WAS: 3 */
    $data['node:imagex_news:default']->display->content['new-4']->subtype = 'node_author'; /* WAS: 'node_created' */
    $data['node:imagex_news:default']->display->content['new-4']->type = 'node_author'; /* WAS: 'node_created' */
    $data['node:imagex_news:default']->display->content['new-5']->configuration['format'] = 'medium'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-5']->css['css_class'] = 'node-date'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-5']->css['css_id'] = ''; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-5']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:imagex_news:default']->display->content['new-5']->position = 2; /* WAS: 4 */
    $data['node:imagex_news:default']->display->content['new-5']->subtype = 'node_created'; /* WAS: 'node_author' */
    $data['node:imagex_news:default']->display->content['new-5']->type = 'node_created'; /* WAS: 'node_author' */
    $data['node:imagex_news:default']->display->content['new-6']->css['css_class'] = 'node-comment-counter'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-6']->css['css_id'] = ''; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-6']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:imagex_news:default']->display->content['new-6']->position = 3; /* WAS: 5 */
    $data['node:imagex_news:default']->display->content['new-7']->configuration['formatter'] = 'image'; /* WAS: 'text_default' */
    $data['node:imagex_news:default']->display->content['new-7']->configuration['formatter_settings']['image_link'] = ''; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-7']->configuration['formatter_settings']['image_style'] = 'news'; /* WAS: '' */
    $data['node:imagex_news:default']->display->content['new-7']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:imagex_news:default']->display->content['new-7']->position = 4; /* WAS: 6 */
    $data['node:imagex_news:default']->display->content['new-7']->subtype = 'node:field_image'; /* WAS: 'node:body' */
    $data['node:imagex_news:default']->display->content['new-8']->configuration['formatter'] = 'text_default'; /* WAS: 'addthis_disabled' */
    $data['node:imagex_news:default']->display->content['new-8']->configuration['override_title'] = 0; /* WAS: 1 */
    $data['node:imagex_news:default']->display->content['new-8']->configuration['override_title_text'] = ''; /* WAS: 'Share article' */
    $data['node:imagex_news:default']->display->content['new-8']->panel = 'three_25_50_25_second'; /* WAS: 'two_33_66_second' */
    $data['node:imagex_news:default']->display->content['new-8']->position = 5; /* WAS: 7 */
    $data['node:imagex_news:default']->display->content['new-8']->subtype = 'node:body'; /* WAS: 'node:field_addthis' */
    $data['node:imagex_news:default']->display->layout = 'three_25_50_25'; /* WAS: 'two_33_66' */
    $data['node:imagex_news:default']->display->panels['three_25_50_25_first'] = array(
      0 => 'new-1',
      1 => 'new-2',
    ); /* WAS: '' */
    $data['node:imagex_news:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-3',
      1 => 'new-4',
      2 => 'new-5',
      3 => 'new-6',
      4 => 'new-7',
      5 => 'new-8',
      6 => 'new-10',
      7 => 'new-11',
      8 => 'new-12',
    ); /* WAS: '' */
    $data['node:imagex_news:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-13',
      1 => 'new-14',
      2 => 'new-15',
    ); /* WAS: '' */
    unset($data['node:imagex_news:default']->display->content['new-10']->configuration['anon_links']);
    unset($data['node:imagex_news:default']->display->content['new-10']->css['css_class']);
    unset($data['node:imagex_news:default']->display->content['new-10']->css['css_id']);
    unset($data['node:imagex_news:default']->display->content['new-11']->configuration['comments_per_page']);
    unset($data['node:imagex_news:default']->display->content['new-11']->configuration['mode']);
    unset($data['node:imagex_news:default']->display->content['new-1']->configuration['context']);
    unset($data['node:imagex_news:default']->display->content['new-1']->configuration['delta_limit']);
    unset($data['node:imagex_news:default']->display->content['new-1']->configuration['delta_offset']);
    unset($data['node:imagex_news:default']->display->content['new-1']->configuration['delta_reversed']);
    unset($data['node:imagex_news:default']->display->content['new-1']->configuration['formatter']);
    unset($data['node:imagex_news:default']->display->content['new-1']->configuration['formatter_settings']);
    unset($data['node:imagex_news:default']->display->content['new-1']->configuration['label']);
    unset($data['node:imagex_news:default']->display->content['new-1']->configuration['override_title']);
    unset($data['node:imagex_news:default']->display->content['new-1']->configuration['override_title_text']);
    unset($data['node:imagex_news:default']->display->content['new-2']->configuration['class']);
    unset($data['node:imagex_news:default']->display->content['new-2']->configuration['context']);
    unset($data['node:imagex_news:default']->display->content['new-2']->configuration['id']);
    unset($data['node:imagex_news:default']->display->content['new-2']->configuration['link']);
    unset($data['node:imagex_news:default']->display->content['new-2']->configuration['markup']);
    unset($data['node:imagex_news:default']->display->content['new-3']->configuration['delta_limit']);
    unset($data['node:imagex_news:default']->display->content['new-3']->configuration['delta_offset']);
    unset($data['node:imagex_news:default']->display->content['new-3']->configuration['delta_reversed']);
    unset($data['node:imagex_news:default']->display->content['new-3']->configuration['formatter']);
    unset($data['node:imagex_news:default']->display->content['new-3']->configuration['formatter_settings']);
    unset($data['node:imagex_news:default']->display->content['new-3']->configuration['label']);
    unset($data['node:imagex_news:default']->display->content['new-4']->configuration['format']);
    unset($data['node:imagex_news:default']->display->content['new-5']->configuration['link']);
    unset($data['node:imagex_news:default']->display->panels['two_33_66_second']);
  }
}

<?php
/**
 * @file
 * linux_blog.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_blog_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:blog:default.display|content|new-10"] = (object) array(
      'pid' => 'new-10',
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
      'position' => 8,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-11"] = (object) array(
      'pid' => 'new-11',
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
      'position' => 9,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-12"] = (object) array(
      'pid' => 'new-12',
      'panel' => 'three_25_50_25_second',
      'type' => 'node_comment_form',
      'subtype' => 'node_comment_form',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'anon_links' => 0,
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => 'Comments',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 10,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|arguments"] = array(
    'type' => '',
  );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|css|css_class"] = 'standard-bean recent-events filtered-view landing-pages-left-bar';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|subtype"] = 'home_page-panel_pane_1';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|class"] = '';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|id"] = '';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|markup"] = 'h1';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|override_title_text"] = '%node:title';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|subtype"] = 'node_title';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|type"] = 'node_title';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|position"] = 1;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|subtype"] = 'node_author';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|configuration|format"] = 'linux_events_short_date';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|css|css_class"] = 'node-date';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|position"] = 2;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|subtype"] = 'node_created';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|type"] = 'node_created';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-5"] = (object) array(
      'pid' => 'new-5',
      'panel' => 'three_25_50_25_second',
      'type' => 'custom',
      'subtype' => 'custom',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'admin_title' => 'Comment Count Custom',
        'title' => '',
        'body' => '<p><a class="comment-count" href="#comments">%node:comment-count</a></p>',
        'format' => 'full_html',
        'substitute' => 1,
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'node-comment-counter node-meta-last',
      ),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-6"] = (object) array(
      'pid' => 'new-6',
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
          'file_view_mode' => 'default',
          'image_link' => '',
          'image_style' => 'large_tile__700x360_',
        ),
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
      'position' => 4,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-7"] = (object) array(
      'pid' => 'new-7',
      'panel' => 'three_25_50_25_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_file_attachment',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter' => 'file_default',
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
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-8"] = (object) array(
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
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-9"] = (object) array(
      'pid' => 'new-9',
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
      'position' => 7,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:blog:default.display|layout"] = 'three_25_50_25';
  $overrides["panelizer_defaults.node:blog:default.display|panel_settings|style_settings"] = array(
    'default' => NULL,
    'three_25_50_25_top' => NULL,
    'three_25_50_25_first' => NULL,
    'three_25_50_25_second' => NULL,
    'three_25_50_25_third' => NULL,
    'three_25_50_25_bottom' => NULL,
  );
  $overrides["panelizer_defaults.node:blog:default.display|panels|center"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|panels|three_25_50_25_first"] = array(
    0 => 'new-1',
  );
  $overrides["panelizer_defaults.node:blog:default.display|panels|three_25_50_25_second"] = array(
    0 => 'new-2',
    1 => 'new-3',
    2 => 'new-4',
    3 => 'new-5',
    4 => 'new-6',
    5 => 'new-7',
    6 => 'new-8',
    7 => 'new-9',
    8 => 'new-10',
    9 => 'new-11',
    10 => 'new-12',
  );
  $overrides["panelizer_defaults.node:blog:default.display|title_pane"] = 'new-11';

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

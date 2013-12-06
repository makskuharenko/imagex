<?php
/**
 * @file
 * linux_panelizers.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_panelizers_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:blog:default.display|content|new-10"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-11"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-12"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-13"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-14"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|arguments"] = array(
    'type' => 'blog',
  );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|css|css_class"] = 'standard-bean filtered-view recent-events landing-pages-left-bar';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|subtype"] = 'home_page-panel_pane_1';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|position"] = 1;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|subtype"] = 'bean-ad-space-homepage-right-top';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-2|type"] = 'block';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|class"] = '';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|id"] = '';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|markup"] = 'h1';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|configuration|override_title_text"] = '%node:title';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|css|css_class"] = 'node-title';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|css|css_id"] = '';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|subtype"] = 'node_title';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-3|type"] = 'node_title';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|css|css_class"] = 'node-author';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|css|css_id"] = '';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|position"] = 1;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|subtype"] = 'node_author';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-4|type"] = 'node_author';
  $overrides["panelizer_defaults.node:blog:default.display|content|new-5"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-6"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-7"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default.display|content|new-9"] = (object) array(
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
    1 => 'new-2',
  );
  $overrides["panelizer_defaults.node:blog:default.display|panels|three_25_50_25_second"] = array(
    0 => 'new-3',
    1 => 'new-4',
    2 => 'new-5',
    3 => 'new-6',
    4 => 'new-7',
    5 => 'new-8',
    6 => 'new-9',
    7 => 'new-10',
    8 => 'new-11',
  );
  $overrides["panelizer_defaults.node:blog:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-12',
    1 => 'new-13',
    2 => 'new-14',
  );
  $overrides["panelizer_defaults.node:blog:default.display|title_pane"] = 0;
  $overrides["panelizer_defaults.node:blog:default.relationships|0"] = array(
    'identifier' => 'Taxonomy term from Node (on Node: Tags [field_tags])',
    'keyword' => 'taxonomy_term',
    'name' => 'entity_from_field:field_tags-node-taxonomy_term',
    'delta' => 0,
    'context' => 'panelizer',
    'id' => 1,
  );
  $overrides["panelizer_defaults.node:blog:default:teaser.display|content|new-15"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default:teaser.display|content|new-16"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default:teaser.display|content|new-17"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default:teaser.display|content|new-18"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:blog:default:teaser.display|content|new-5"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default:teaser.display|content|new-6"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default:teaser.display|content|new-7"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default:teaser.display|content|new-8"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:blog:default:teaser.display|panels|center|0"] = 'new-15';
  $overrides["panelizer_defaults.node:blog:default:teaser.display|panels|center|1"] = 'new-16';
  $overrides["panelizer_defaults.node:blog:default:teaser.display|panels|center|2"] = 'new-17';
  $overrides["panelizer_defaults.node:blog:default:teaser.display|panels|center|3"] = 'new-18';
  $overrides["panelizer_defaults.node:blog:default:teaser.display|title_pane"] = 'new-18';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|configuration|arguments"] = array(
    'type' => 'blog+imagex_news',
  );
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|css|css_class"] = 'standard-bean filtered-view recent-events landing-pages-left-bar';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|subtype"] = 'home_page-panel_pane_1';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|subtype"] = 'bean-ad-space-homepage-right-top';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-2|type"] = 'block';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|class"] = '';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|id"] = '';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|markup"] = 'h1';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|configuration|override_title_text"] = '%node:title';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|css|css_class"] = 'node-title';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|css|css_id"] = '';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|position"] = 0;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|subtype"] = 'node_title';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-3|type"] = 'node_title';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-4|configuration|formatter"] = 'text_default';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-4|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-4|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-4|position"] = 1;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-4|subtype"] = 'node:body';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-5|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-5|position"] = 2;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|delta_reversed"] = FALSE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|formatter"] = 'text_default';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|formatter_settings"] = array();
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|label"] = 'above';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|css|css_class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|position"] = 3;
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|subtype"] = 'node:field_directory_isbn';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-6|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:directory:default.display|content|new-7"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:directory:default.display|content|new-8"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:directory:default.display|content|new-9"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:directory:default.display|layout"] = 'three_25_50_25';
  $overrides["panelizer_defaults.node:directory:default.display|panel_settings|style_settings|three_25_50_25_bottom"] = NULL;
  $overrides["panelizer_defaults.node:directory:default.display|panel_settings|style_settings|three_25_50_25_first"] = NULL;
  $overrides["panelizer_defaults.node:directory:default.display|panel_settings|style_settings|three_25_50_25_second"] = NULL;
  $overrides["panelizer_defaults.node:directory:default.display|panel_settings|style_settings|three_25_50_25_third"] = NULL;
  $overrides["panelizer_defaults.node:directory:default.display|panel_settings|style_settings|three_25_50_25_top"] = NULL;
  $overrides["panelizer_defaults.node:directory:default.display|panels|three_25_50_25_first"] = array(
    0 => 'new-1',
    1 => 'new-2',
  );
  $overrides["panelizer_defaults.node:directory:default.display|panels|three_25_50_25_second"] = array(
    0 => 'new-3',
    1 => 'new-4',
    2 => 'new-5',
    3 => 'new-6',
    4 => 'new-7',
  );
  $overrides["panelizer_defaults.node:directory:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-8',
    1 => 'new-9',
  );
  $overrides["panelizer_defaults.node:directory:default.display|panels|two_33_66_second"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:directory:default.display|title_pane"] = 0;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-10"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-11"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-12"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-13"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|configuration|arguments"] = array(
    'type' => 'tutorial',
  );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|css|css_class"] = 'standard-bean filtered-view recent-events landing-pages-left-bar';
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|subtype"] = 'home_page-panel_pane_1';
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-2|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-2|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-2|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-2|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-2|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-2|css|css_class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-2|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-2|subtype"] = 'bean-ad-space-homepage-right-top';
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-2|type"] = 'block';
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-3"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-4"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-5"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-6"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-7"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-8"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|content|new-9"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:tutorial:default.display|layout"] = 'three_25_50_25';
  $overrides["panelizer_defaults.node:tutorial:default.display|panel_settings|style_settings|three_25_50_25_bottom"] = NULL;
  $overrides["panelizer_defaults.node:tutorial:default.display|panel_settings|style_settings|three_25_50_25_first"] = NULL;
  $overrides["panelizer_defaults.node:tutorial:default.display|panel_settings|style_settings|three_25_50_25_second"] = NULL;
  $overrides["panelizer_defaults.node:tutorial:default.display|panel_settings|style_settings|three_25_50_25_third"] = NULL;
  $overrides["panelizer_defaults.node:tutorial:default.display|panel_settings|style_settings|three_25_50_25_top"] = NULL;
  $overrides["panelizer_defaults.node:tutorial:default.display|panels|three_25_50_25_first"] = array(
    0 => 'new-1',
    1 => 'new-2',
  );
  $overrides["panelizer_defaults.node:tutorial:default.display|panels|three_25_50_25_second"] = array(
    0 => 'new-3',
    1 => 'new-4',
    2 => 'new-5',
    3 => 'new-6',
    4 => 'new-7',
    5 => 'new-8',
    6 => 'new-9',
    7 => 'new-10',
  );
  $overrides["panelizer_defaults.node:tutorial:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-11',
    1 => 'new-12',
    2 => 'new-13',
  );
  $overrides["panelizer_defaults.node:tutorial:default.display|panels|two_33_66_second"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:tutorial:default.display|title_pane"] = 0;
  $overrides["panelizer_defaults.node:tutorial:default.relationships|0"] = array(
    'identifier' => 'Taxonomy term from Node (on Node: Tags [field_tags])',
    'keyword' => 'taxonomy_term',
    'name' => 'entity_from_field:field_tags-node-taxonomy_term',
    'delta' => 0,
    'context' => 'panelizer',
    'id' => 1,
  );

 return $overrides;
}

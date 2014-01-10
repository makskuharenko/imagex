<?php
/**
 * @file
 * linux_news.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_news_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-10|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-10|position"] = 7;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-11|configuration|comments_per_page"] = 50;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-11|configuration|mode"] = 1;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-11|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-11|position"] = 8;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-12"] = (object) array(
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
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-13"] = (object) array(
      'pid' => 'new-13',
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
    );
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-14"] = (object) array(
      'pid' => 'new-14',
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
    );
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|css|css_class"] = 'standard-bean filtered-view recent-events landing-pages-left-bar';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|subtype"] = 'home_page-panel_pane_1';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-2|configuration|class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-2|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-2|configuration|id"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-2|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-2|configuration|markup"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-2|configuration|override_title"] = 0;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-2|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-2|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-2|subtype"] = 'bean-ad-space-homepage-right-top';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-2|type"] = 'block';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|class"] = 'title';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|context"] = 'panelizer';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|id"] = '';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|markup"] = 'h1';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|configuration|override_title_text"] = '%node:title';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|css|css_class"] = 'node-title';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|css|css_id"] = '';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|position"] = 0;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|subtype"] = 'node_title';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-3|type"] = 'node_title';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-4|configuration|format"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-4|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-4|css|css_class"] = 'node-author';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-4|css|css_id"] = '';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-4|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-4|position"] = 1;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-4|subtype"] = 'node_author';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-4|type"] = 'node_author';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-5|configuration|format"] = 'medium';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-5|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-5|css|css_class"] = 'node-date';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-5|css|css_id"] = '';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-5|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-5|position"] = 2;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-5|subtype"] = 'node_created';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-5|type"] = 'node_created';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-6|css|css_class"] = 'node-comment-counter';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-6|css|css_id"] = '';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-6|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-6|position"] = 3;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-7|configuration|formatter"] = 'image';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-7|configuration|formatter_settings|image_link"] = '';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-7|configuration|formatter_settings|image_style"] = 'news';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-7|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-7|position"] = 4;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-7|subtype"] = 'node:field_image';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-8"] = (object) array(
      'pid' => 'new-8',
      'panel' => 'three_25_50_25_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_tags',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter' => 'taxonomy_term_reference_link',
        'formatter_settings' => array(),
        'label' => 'hidden',
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
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|configuration|build_mode"] = 'full';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|configuration|identifier"] = '';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|position"] = 6;
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|subtype"] = 'node_links';
  $overrides["panelizer_defaults.node:imagex_news:default.display|content|new-9|type"] = 'node_links';
  $overrides["panelizer_defaults.node:imagex_news:default.display|layout"] = 'three_25_50_25';
  $overrides["panelizer_defaults.node:imagex_news:default.display|panels|three_25_50_25_first"] = array(
    0 => 'new-1',
    1 => 'new-2',
  );
  $overrides["panelizer_defaults.node:imagex_news:default.display|panels|three_25_50_25_second"] = array(
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
  $overrides["panelizer_defaults.node:imagex_news:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-12',
    1 => 'new-13',
    2 => 'new-14',
  );
  $overrides["panelizer_defaults.node:imagex_news:default.display|panels|two_33_66_second"]["DELETED"] = TRUE;

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

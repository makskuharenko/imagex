<?php
/**
 * @file
 * linux_landing_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_landing_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|configuration|arguments"] = array(
    'type' => '',
  );
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|css|css_class"] = 'standard-bean recent-events filtered-view landing-pages-left-bar';
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|subtype"] = 'home_page-panel_pane_1';
  $overrides["panelizer_defaults.node:page:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|configuration|override_title"] = 0;
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|subtype"] = 'bean-ad-space-homepage-right-top';
  $overrides["panelizer_defaults.node:page:default.display|content|new-2|type"] = 'block';
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|configuration|class"] = '';
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|configuration|id"] = '';
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|configuration|markup"] = 'h1';
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|configuration|override_title_text"] = '%node:title';
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|css|css_class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|position"] = 0;
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|subtype"] = 'node_title';
  $overrides["panelizer_defaults.node:page:default.display|content|new-3|type"] = 'node_title';
  $overrides["panelizer_defaults.node:page:default.display|content|new-4|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:page:default.display|content|new-4|position"] = 1;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|delta_reversed"] = FALSE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|formatter"] = 'text_default';
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|formatter_settings"] = array();
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|id"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|markup"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|position"] = 2;
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|subtype"] = 'node:body';
  $overrides["panelizer_defaults.node:page:default.display|content|new-5|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:page:default.display|content|new-6"] = (object) array(
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
      'position' => 3,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:page:default.display|content|new-7"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:page:default.display|layout"] = 'three_25_50_25';
  $overrides["panelizer_defaults.node:page:default.display|panel_settings|style_settings|three_25_50_25_bottom"] = NULL;
  $overrides["panelizer_defaults.node:page:default.display|panel_settings|style_settings|three_25_50_25_first"] = NULL;
  $overrides["panelizer_defaults.node:page:default.display|panel_settings|style_settings|three_25_50_25_second"] = NULL;
  $overrides["panelizer_defaults.node:page:default.display|panel_settings|style_settings|three_25_50_25_third"] = NULL;
  $overrides["panelizer_defaults.node:page:default.display|panel_settings|style_settings|three_25_50_25_top"] = NULL;
  $overrides["panelizer_defaults.node:page:default.display|panels|three_25_50_25_first"] = array(
    0 => 'new-1',
    1 => 'new-2',
  );
  $overrides["panelizer_defaults.node:page:default.display|panels|three_25_50_25_second"] = array(
    0 => 'new-3',
    1 => 'new-4',
    2 => 'new-5',
    3 => 'new-6',
  );
  $overrides["panelizer_defaults.node:page:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-7',
  );
  $overrides["panelizer_defaults.node:page:default.display|panels|two_66_33_first"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|panels|two_66_33_second"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|panels|two_66_33_top"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:page:default.display|title_pane"] = 'new-5';

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

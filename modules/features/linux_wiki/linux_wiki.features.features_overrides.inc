<?php
/**
 * @file
 * linux_wiki.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_wiki_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|configuration|arguments"] = array(
    'type' => 'wiki',
  );
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|css|css_class"] = 'standard-bean recent-events filtered-view landing-pages-left-bar';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|subtype"] = 'home_page-panel_pane_1';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-2|configuration|formatter"] = 'text_default';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-2|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-2|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-2|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-2|subtype"] = 'node:body';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-3|configuration|formatter"] = 'taxonomy_term_reference_link';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-3|configuration|formatter_settings|accuracy"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-3|configuration|formatter_settings|energy"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-3|configuration|formatter_settings|type"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-3|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-3|position"] = 1;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-3|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-3|subtype"] = 'node:field_wiki_topics';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-4|configuration|formatter"] = 'radioactivity_combo_formatter';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-4|configuration|formatter_settings|accuracy"] = 100;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-4|configuration|formatter_settings|energy"] = 10;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-4|configuration|formatter_settings|type"] = 'none';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-4|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-4|position"] = 2;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-4|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-4|subtype"] = 'node:field_linux_radioactivity';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|delta_reversed"] = FALSE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|formatter"] = 'taxonomy_term_reference_link';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|formatter_settings"] = array();
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|label"] = 'above';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|css|css_class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|position"] = 3;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|style|settings"] = NULL;
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|subtype"] = 'node:field_tags';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-5|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-6"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:wiki:default.display|content|new-7"] = (object) array(
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
  $overrides["panelizer_defaults.node:wiki:default.display|layout"] = 'three_25_50_25';
  $overrides["panelizer_defaults.node:wiki:default.display|panel_settings|style_settings"] = array(
    'default' => NULL,
    'three_25_50_25_top' => NULL,
    'three_25_50_25_first' => NULL,
    'three_25_50_25_second' => NULL,
    'three_25_50_25_third' => NULL,
    'three_25_50_25_bottom' => NULL,
  );
  $overrides["panelizer_defaults.node:wiki:default.display|panels|center"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:wiki:default.display|panels|three_25_50_25_first"] = array(
    0 => 'new-1',
  );
  $overrides["panelizer_defaults.node:wiki:default.display|panels|three_25_50_25_second"] = array(
    0 => 'new-2',
    1 => 'new-3',
    2 => 'new-4',
    3 => 'new-5',
    4 => 'new-6',
  );
  $overrides["panelizer_defaults.node:wiki:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-7',
  );
  $overrides["panelizer_defaults.node:wiki:default.display|title_pane"] = 'new-6';

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

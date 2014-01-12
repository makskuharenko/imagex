<?php
/**
 * @file
 * linux_group.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_group_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|configuration|arguments"] = array(
    'type' => '',
  );
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|css|css_class"] = 'standard-bean recent-events filtered-view landing-pages-left-bar';
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|subtype"] = 'home_page-panel_pane_1';
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|position"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|subtype"] = 'node_body';
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|type"] = 'node_body';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|formatter"] = 'radioactivity_combo_formatter';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|formatter_settings|accuracy"] = 100;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|formatter_settings|energy"] = 10;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|formatter_settings|image_link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|formatter_settings|image_style"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|formatter_settings|type"] = 'none';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|position"] = 1;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|subtype"] = 'node:field_radioactivity';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|formatter"] = 'image';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|formatter_settings|image_link"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|formatter_settings|image_style"] = 'large';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|position"] = 2;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|subtype"] = 'node:field_group_logo';
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|delta_reversed"] = FALSE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|formatter"] = 'taxonomy_term_reference_link';
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|formatter_settings"] = array();
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|label"] = 'above';
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|css|css_class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|position"] = 3;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|subtype"] = 'node:field_tags';
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|build_mode"] = 'page_manager';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|context"] = 'panelizer';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|identifier"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|link"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|override_title"] = FALSE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|css|css_class"] = 'link-wrapper';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|position"] = 4;
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|subtype"] = 'node_links';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|type"] = 'node_links';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|configuration|anon_links"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|configuration|context"] = 'panelizer';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|position"] = 5;
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|subtype"] = 'node_comment_form';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|type"] = 'node_comment_form';
  $overrides["panelizer_defaults.node:group:default.display|content|new-8"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-9"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:group:default.display|layout"] = 'three_25_50_25';
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|middle"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|one_main"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|three_25_50_25_bottom"] = NULL;
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|three_25_50_25_first"] = NULL;
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|three_25_50_25_second"] = NULL;
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|three_25_50_25_third"] = NULL;
  $overrides["panelizer_defaults.node:group:default.display|panel_settings|style_settings|three_25_50_25_top"] = NULL;
  $overrides["panelizer_defaults.node:group:default.display|panels|one_main"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|panels|three_25_50_25_first"] = array(
    0 => 'new-1',
  );
  $overrides["panelizer_defaults.node:group:default.display|panels|three_25_50_25_second"] = array(
    0 => 'new-2',
    1 => 'new-3',
    2 => 'new-4',
    3 => 'new-5',
    4 => 'new-6',
    5 => 'new-7',
    6 => 'new-8',
  );
  $overrides["panelizer_defaults.node:group:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-9',
  );
  $overrides["panelizer_defaults.node:group:default.display|title_pane"] = 'new-9';

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

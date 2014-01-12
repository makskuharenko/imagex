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
  $overrides["panelizer_defaults.node:group:default.display|content|new-10"] = (object) array(
      'pid' => 'new-10',
      'panel' => 'three_25_50_25_second',
      'type' => 'node_comment_form',
      'subtype' => 'node_comment_form',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
        'anon_links' => 0,
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
  $overrides["panelizer_defaults.node:group:default.display|content|new-11"] = (object) array(
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
  $overrides["panelizer_defaults.node:group:default.display|content|new-12"] = (object) array(
      'pid' => 'new-12',
      'panel' => 'three_25_50_25_third',
      'type' => 'node_create_links',
      'subtype' => 'node_create_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'types' => array(),
        'field_name' => 'og_group_ref',
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
      'position' => 0,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-13"] = (object) array(
      'pid' => 'new-13',
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
      'css' => array(
        'css_id' => '',
        'css_class' => 'standard-bean',
      ),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|configuration|arguments"] = array(
    'type' => '',
  );
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|css|css_class"] = 'standard-bean recent-events filtered-view landing-pages-left-bar';
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|subtype"] = 'home_page-panel_pane_1';
  $overrides["panelizer_defaults.node:group:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|panel"] = 'three_25_50_25_first';
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|subtype"] = 'bean-ad-space-homepage-right-top';
  $overrides["panelizer_defaults.node:group:default.display|content|new-2|type"] = 'block';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|class"] = 'pane-title-page-title';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|id"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|link"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|markup"] = 'h2';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|configuration|override_title_text"] = '%node:title';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|position"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|subtype"] = 'node_title';
  $overrides["panelizer_defaults.node:group:default.display|content|new-3|type"] = 'node_title';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|position"] = 1;
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|subtype"] = 'node_body';
  $overrides["panelizer_defaults.node:group:default.display|content|new-4|type"] = 'node_body';
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|build_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|delta_reversed"] = FALSE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|formatter"] = 'radioactivity_combo_formatter';
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|formatter_settings"] = array(
    'accuracy' => 100,
    'energy' => 10,
    'type' => 'none',
  );
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|identifier"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|label"] = 'above';
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|css|css_class"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|position"] = 2;
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|subtype"] = 'node:field_radioactivity';
  $overrides["panelizer_defaults.node:group:default.display|content|new-5|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|context"] = 'panelizer';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|delta_limit"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|delta_offset"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|delta_reversed"] = FALSE;
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|formatter"] = 'image';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|formatter_settings"] = array(
    'image_link' => '',
    'image_style' => 'large',
  );
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|label"] = 'hidden';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|override_title"] = 1;
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|configuration|override_title_text"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|position"] = 3;
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|subtype"] = 'node:field_group_logo';
  $overrides["panelizer_defaults.node:group:default.display|content|new-6|type"] = 'entity_field';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|configuration|fields_override"] = array(
    'type' => 1,
    'title' => 1,
    'created' => 1,
    'field_author' => 1,
  );
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|configuration|items_per_page"] = 10;
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|configuration|override_title_text"] = 'Group Content';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|configuration|pager_id"] = 0;
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|configuration|path"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|configuration|use_pager"] = 1;
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|css|css_class"] = 'standard-bean group-activity';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|css|css_id"] = '';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|position"] = 4;
  $overrides["panelizer_defaults.node:group:default.display|content|new-7|subtype"] = 'linux_og_content-panel_pane_1';
  $overrides["panelizer_defaults.node:group:default.display|content|new-8"] = (object) array(
      'pid' => 'new-8',
      'panel' => 'three_25_50_25_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_tags',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter' => 'taxonomy_term_reference_link',
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
  $overrides["panelizer_defaults.node:group:default.display|content|new-9"] = (object) array(
      'pid' => 'new-9',
      'panel' => 'three_25_50_25_second',
      'type' => 'node_links',
      'subtype' => 'node_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'build_mode' => 'page_manager',
        'identifier' => '',
        'link' => TRUE,
        'override_title' => FALSE,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_class' => 'link-wrapper',
      ),
      'extras' => array(),
      'position' => 6,
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
    1 => 'new-2',
  );
  $overrides["panelizer_defaults.node:group:default.display|panels|three_25_50_25_second"] = array(
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
  $overrides["panelizer_defaults.node:group:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-12',
    1 => 'new-13',
  );
  $overrides["panelizer_defaults.node:group:default.display|title_pane"] = 'new-13';

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

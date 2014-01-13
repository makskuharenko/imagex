<?php
/**
 * @file
 * linux_user.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_user_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.user-user-field_profile_image.display|default|weight"] = 1;
  $overrides["field_instance.user-user-field_profile_image.widget|weight"] = 2;

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|view_mode"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|css|css_class"] = 'standard-bean user-activity-stats';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|panel"] = 'three_inset_right_inset';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|subtype"] = 'user_activity-panel_pane_3';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|configuration|arguments"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|configuration|exposed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|configuration|items_per_page"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|configuration|more_link"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|configuration|path"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|css|css_class"] = 'standard-bean user-activity';
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|css|css_id"] = '';
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|panel"] = 'three_inset_right_middle';
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|position"] = 0;
  $overrides["panelizer_defaults.user:user:default.display|content|new-2|subtype"] = 'user_activity-panel_pane_1';
  $overrides["panelizer_defaults.user:user:default.display|content|new-3|configuration|override_title"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-3|configuration|override_title_text"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-3|configuration|path"] = '';
  $overrides["panelizer_defaults.user:user:default.display|content|new-3|css|css_class"] = 'standard-bean';
  $overrides["panelizer_defaults.user:user:default.display|content|new-3|css|css_id"] = '';
  $overrides["panelizer_defaults.user:user:default.display|content|new-3|panel"] = 'three_inset_right_middle';
  $overrides["panelizer_defaults.user:user:default.display|content|new-3|position"] = 1;
  $overrides["panelizer_defaults.user:user:default.display|content|new-3|subtype"] = 'linux_user_badges-panel_pane_1';
  $overrides["panelizer_defaults.user:user:default.display|content|new-3|type"] = 'views_panes';
  $overrides["panelizer_defaults.user:user:default.display|content|new-4"] = (object) array(
      'pid' => 'new-4',
      'panel' => 'three_inset_right_middle',
      'type' => 'views_panes',
      'subtype' => 'user_activity-panel_pane_2',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_class' => 'standard-bean user-activity',
        'css_id' => '',
      ),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-5"] = (object) array(
      'pid' => 'new-5',
      'panel' => 'three_inset_right_sidebar',
      'type' => 'views_panes',
      'subtype' => 'home_page-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'arguments' => array(
          'type' => 'blog+imagex_news',
        ),
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
      ),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-6"] = (object) array(
      'pid' => 'new-6',
      'panel' => 'three_inset_right_top',
      'type' => 'views_panes',
      'subtype' => 'user_details-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'profile-details',
      ),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.user:user:default.display|layout"] = 'three_inset_right';
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_inset_right_bottom"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_inset_right_inset"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_inset_right_middle"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_inset_right_sidebar"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_inset_right_top"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panels|one_main"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|three_inset_right_inset"] = array(
    0 => 'new-1',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|three_inset_right_middle"] = array(
    0 => 'new-2',
    1 => 'new-3',
    2 => 'new-4',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|three_inset_right_sidebar"] = array(
    0 => 'new-5',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|three_inset_right_top"] = array(
    0 => 'new-6',
  );
  $overrides["panelizer_defaults.user:user:default:default.display|content|new-4"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default:default.display|content|new-7"] = (object) array(
      'pid' => 'new-7',
      'panel' => 'one_main',
      'type' => 'entity_view',
      'subtype' => 'user',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_mode' => 'full',
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
  $overrides["panelizer_defaults.user:user:default:default.display|panels|one_main|0"] = 'new-7';

  // Exported overrides for: variable
  $overrides["variable.panelizer_defaults_user_user.value|view modes|default|default"] = 0;
  $overrides["variable.panelizer_defaults_user_user.value|view modes|default|status"] = 0;

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

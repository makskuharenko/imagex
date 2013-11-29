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
  $overrides["field_instance.user-user-field_profile_image.widget|weight"] = 2;

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|context"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|css|css_class"] = 'standard-bean user-activity';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|panel"] = 'three_25_50_25_second';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|subtype"] = 'user_activity-panel_pane_1';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.user:user:default.display|content|new-2"] = (object) array(
      'pid' => 'new-2',
      'panel' => 'three_25_50_25_second',
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
        'css_id' => '',
        'css_class' => 'standard-bean user-activity',
      ),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-3"] = (object) array(
      'pid' => 'new-3',
      'panel' => 'three_25_50_25_third',
      'type' => 'views_panes',
      'subtype' => 'user_activity-panel_pane_3',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'standard-bean user-activity-stats',
      ),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-4"] = (object) array(
      'pid' => 'new-4',
      'panel' => 'three_25_50_25_top',
      'type' => 'views_panes',
      'subtype' => 'user_activity-panel_pane_4',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'path' => '',
      ),
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
  $overrides["panelizer_defaults.user:user:default.display|hide_title"] = 1;
  $overrides["panelizer_defaults.user:user:default.display|layout"] = 'three_25_50_25';
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_25_50_25_bottom"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_25_50_25_first"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_25_50_25_second"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_25_50_25_third"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_25_50_25_top"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panels|center"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|three_25_50_25_second"] = array(
    0 => 'new-1',
    1 => 'new-2',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|three_25_50_25_third"] = array(
    0 => 'new-3',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|three_25_50_25_top"] = array(
    0 => 'new-4',
  );
  $overrides["panelizer_defaults.user:user:default.display|title_pane"] = 0;

 return $overrides;
}

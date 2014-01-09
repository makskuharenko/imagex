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
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|delta_limit"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|delta_offset"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|delta_reversed"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|formatter"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|formatter_settings"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|configuration|label"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|css|css_class"] = 'standard-bean user-activity-stats';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|css|css_id"] = '';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|panel"] = 'three_inset_right_inset';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|subtype"] = 'user_activity-panel_pane_3';
  $overrides["panelizer_defaults.user:user:default.display|content|new-1|type"] = 'views_panes';
  $overrides["panelizer_defaults.user:user:default.display|content|new-2"] = (object) array(
      'pid' => 'new-2',
      'panel' => 'three_inset_right_middle',
      'type' => 'views_panes',
      'subtype' => 'user_activity-panel_pane_1',
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
      'position' => 0,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-3"] = (object) array(
      'pid' => 'new-3',
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
        'css_id' => '',
        'css_class' => 'standard-bean user-activity',
      ),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-4"] = (object) array(
      'pid' => 'new-4',
      'panel' => 'three_inset_right_sidebar',
      'type' => 'views_panes',
      'subtype' => 'home_page-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'arguments' => array(
          'type' => 'blog+imagex_news+event',
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
  $overrides["panelizer_defaults.user:user:default.display|content|new-5"] = (object) array(
      'pid' => 'new-5',
      'panel' => 'three_inset_right_top',
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
  $overrides["panelizer_defaults.user:user:default.display|layout"] = 'three_inset_right';
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_25_50_25_bottom"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_25_50_25_first"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_25_50_25_second"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_25_50_25_third"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_25_50_25_top"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_inset_right_bottom"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_inset_right_inset"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_inset_right_middle"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_inset_right_sidebar"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|three_inset_right_top"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panels|center"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|three_inset_right_inset"] = array(
    0 => 'new-1',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|three_inset_right_middle"] = array(
    0 => 'new-2',
    1 => 'new-3',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|three_inset_right_sidebar"] = array(
    0 => 'new-4',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|three_inset_right_top"] = array(
    0 => 'new-5',
  );
  $overrides["panelizer_defaults.user:user:default.display|title_pane"] = 'new-5';

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

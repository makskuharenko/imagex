<?php
/**
 * @file
 * linux_user.features.inc
 */

/**
 * Implements hook_views_api().
 */
function linux_user_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function linux_user_field_default_field_instances_alter(&$data) {
  if (isset($data['user-user-field_profile_image'])) {
    $data['user-user-field_profile_image']['display']['default']['weight'] = 1; /* WAS: 0 */
    $data['user-user-field_profile_image']['widget']['weight'] = 2; /* WAS: 1 */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function linux_user_panelizer_defaults_override_alter(&$data) {
  if (isset($data['user:user:default'])) {
    $data['user:user:default']->display->content['new-1']->css['css_class'] = 'standard-bean user-activity-stats'; /* WAS: '' */
    $data['user:user:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['user:user:default']->display->content['new-1']->panel = 'three_inset_right_inset'; /* WAS: 'center' */
    $data['user:user:default']->display->content['new-1']->subtype = 'user_activity-panel_pane_3'; /* WAS: 'user:field_profile_image' */
    $data['user:user:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['user:user:default']->display->content['new-2'] = (object) array(
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
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-3'] = (object) array(
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
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-4'] = (object) array(
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
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-5'] = (object) array(
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
        ); /* WAS: '' */
    $data['user:user:default']->display->hide_title = 1; /* WAS: 0 */
    $data['user:user:default']->display->layout = 'three_inset_right'; /* WAS: 'flexible' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_25_50_25_bottom'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_25_50_25_first'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_25_50_25_second'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_25_50_25_third'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_25_50_25_top'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_inset_right_bottom'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_inset_right_inset'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_inset_right_middle'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_inset_right_sidebar'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_inset_right_top'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panels['three_inset_right_inset'] = array(
      0 => 'new-1',
    ); /* WAS: '' */
    $data['user:user:default']->display->panels['three_inset_right_middle'] = array(
      0 => 'new-2',
      1 => 'new-3',
    ); /* WAS: '' */
    $data['user:user:default']->display->panels['three_inset_right_sidebar'] = array(
      0 => 'new-4',
    ); /* WAS: '' */
    $data['user:user:default']->display->panels['three_inset_right_top'] = array(
      0 => 'new-5',
    ); /* WAS: '' */
    $data['user:user:default']->display->title_pane = 'new-5'; /* WAS: 'new-1' */
    unset($data['user:user:default']->display->content['new-1']->configuration['context']);
    unset($data['user:user:default']->display->content['new-1']->configuration['delta_limit']);
    unset($data['user:user:default']->display->content['new-1']->configuration['delta_offset']);
    unset($data['user:user:default']->display->content['new-1']->configuration['delta_reversed']);
    unset($data['user:user:default']->display->content['new-1']->configuration['formatter']);
    unset($data['user:user:default']->display->content['new-1']->configuration['formatter_settings']);
    unset($data['user:user:default']->display->content['new-1']->configuration['label']);
    unset($data['user:user:default']->display->panels['center']);
  }
}

/**
 * Implements hook_image_default_styles().
 */
function linux_user_image_default_styles() {
  $styles = array();

  // Exported image style: profile_image.
  $styles['profile_image'] = array(
    'name' => 'profile_image',
    'label' => 'Profile Image (175x175)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  features_alter_code('image', $styles);

  return $styles;
}

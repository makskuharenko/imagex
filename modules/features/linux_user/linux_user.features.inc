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
    $data['user-user-field_profile_image']['widget']['weight'] = 2; /* WAS: 1 */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function linux_user_panelizer_defaults_override_alter(&$data) {
  if (isset($data['user:user:default'])) {
    $data['user:user:default']->display->content['new-1']->css['css_class'] = 'standard-bean user-activity'; /* WAS: '' */
    $data['user:user:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['user:user:default']->display->content['new-1']->panel = 'three_25_50_25_second'; /* WAS: 'center' */
    $data['user:user:default']->display->content['new-1']->subtype = 'user_activity-panel_pane_1'; /* WAS: 'user:field_profile_image' */
    $data['user:user:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['user:user:default']->display->content['new-2'] = (object) array(
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
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-3'] = (object) array(
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
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-4'] = (object) array(
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
        ); /* WAS: '' */
    $data['user:user:default']->display->hide_title = 1; /* WAS: 0 */
    $data['user:user:default']->display->layout = 'three_25_50_25'; /* WAS: 'flexible' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_25_50_25_bottom'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_25_50_25_first'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_25_50_25_second'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_25_50_25_third'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panel_settings['style_settings']['three_25_50_25_top'] = NULL; /* WAS: '' */
    $data['user:user:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-1',
      1 => 'new-2',
    ); /* WAS: '' */
    $data['user:user:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-3',
    ); /* WAS: '' */
    $data['user:user:default']->display->panels['three_25_50_25_top'] = array(
      0 => 'new-4',
    ); /* WAS: '' */
    $data['user:user:default']->display->title_pane = 0; /* WAS: 'new-1' */
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

  return $styles;
}

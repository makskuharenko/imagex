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
    $data['user:user:default']->display->content['new-1']->panel = 'three_inset_right_inset'; /* WAS: 'one_main' */
    $data['user:user:default']->display->content['new-1']->subtype = 'user_activity-panel_pane_3'; /* WAS: 'user' */
    $data['user:user:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_view' */
    $data['user:user:default']->display->content['new-2']->css['css_class'] = 'standard-bean user-activity'; /* WAS: '' */
    $data['user:user:default']->display->content['new-2']->css['css_id'] = ''; /* WAS: '' */
    $data['user:user:default']->display->content['new-2']->panel = 'three_inset_right_middle'; /* WAS: 'one_main' */
    $data['user:user:default']->display->content['new-2']->position = 0; /* WAS: 1 */
    $data['user:user:default']->display->content['new-2']->subtype = 'user_activity-panel_pane_1'; /* WAS: 'imagex_activity-panel_pane_1' */
    $data['user:user:default']->display->content['new-3']->css['css_class'] = 'standard-bean user-activity'; /* WAS: '' */
    $data['user:user:default']->display->content['new-3']->css['css_id'] = ''; /* WAS: '' */
    $data['user:user:default']->display->content['new-3']->panel = 'three_inset_right_middle'; /* WAS: 'one_main' */
    $data['user:user:default']->display->content['new-3']->position = 2; /* WAS: 2 */
    $data['user:user:default']->display->content['new-3']->subtype = 'user_activity-panel_pane_2'; /* WAS: 'follow-user' */
    $data['user:user:default']->display->content['new-3']->type = 'views_panes'; /* WAS: 'block' */
    $data['user:user:default']->display->content['new-4'] = (object) array(
          'pid' => 'new-4',
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
    $data['user:user:default']->display->content['new-6'] = (object) array(
          'pid' => 'new-6',
          'panel' => 'three_inset_right_middle',
          'type' => 'views_panes',
          'subtype' => 'linux_user_badges-panel_pane_1',
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
            'css_class' => 'standard-bean',
          ),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user:user:default']->display->layout = 'three_inset_right'; /* WAS: 'one' */
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
      1 => 'new-6',
      2 => 'new-3',
    ); /* WAS: '' */
    $data['user:user:default']->display->panels['three_inset_right_sidebar'] = array(
      0 => 'new-4',
    ); /* WAS: '' */
    $data['user:user:default']->display->panels['three_inset_right_top'] = array(
      0 => 'new-5',
    ); /* WAS: '' */
    unset($data['user:user:default']->display->content['new-1']->configuration['context']);
    unset($data['user:user:default']->display->content['new-1']->configuration['override_title']);
    unset($data['user:user:default']->display->content['new-1']->configuration['override_title_text']);
    unset($data['user:user:default']->display->content['new-1']->configuration['view_mode']);
    unset($data['user:user:default']->display->content['new-2']->configuration['arguments']);
    unset($data['user:user:default']->display->content['new-2']->configuration['exposed']);
    unset($data['user:user:default']->display->content['new-2']->configuration['items_per_page']);
    unset($data['user:user:default']->display->content['new-2']->configuration['more_link']);
    unset($data['user:user:default']->display->content['new-2']->configuration['override_title']);
    unset($data['user:user:default']->display->content['new-2']->configuration['override_title_text']);
    unset($data['user:user:default']->display->content['new-2']->configuration['path']);
    unset($data['user:user:default']->display->content['new-3']->configuration['override_title']);
    unset($data['user:user:default']->display->content['new-3']->configuration['override_title_text']);
    unset($data['user:user:default']->display->panels['one_main']);
  }
  if (isset($data['user:user:default:default'])) {
    $data['user:user:default:default']->display->content['new-7'] = (object) array(
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
        ); /* WAS: '' */
    $data['user:user:default:default']->display->panels['one_main']['0'] = 'new-7'; /* WAS: 'new-4' */
    unset($data['user:user:default:default']->display->content['new-4']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function linux_user_strongarm_alter(&$data) {
  if (isset($data['panelizer_defaults_user_user'])) {
    $data['panelizer_defaults_user_user']->value['view modes']['default']['default'] = 0; /* WAS: 1 */
    $data['panelizer_defaults_user_user']->value['view modes']['default']['status'] = 0; /* WAS: 1 */
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

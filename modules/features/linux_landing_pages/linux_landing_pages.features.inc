<?php
/**
 * @file
 * linux_landing_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_landing_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_ctools_plugin_directory
 */
function linux_landing_pages_ctools_plugin_directory($owner, $plugin_type) {
  if ($owner == 'ctools' && $plugin_type == 'content_types') {
    return 'plugins/' . $plugin_type;
  }
}

/**
 * Implements hook_views_api().
 */
function linux_landing_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function linux_landing_pages_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_featured.
  $styles['homepage_featured'] = array(
    'name' => 'homepage_featured',
    'label' => 'Homepage Featured',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_left_70x60.
  $styles['homepage_left_70x60'] = array(
    'name' => 'homepage_left_70x60',
    'label' => 'Homepage_left_70x60',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
  );

  features_alter_code('image', $styles);

  return $styles;
}

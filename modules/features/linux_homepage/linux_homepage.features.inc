<?php
/**
 * @file
 * linux_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function linux_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function linux_homepage_image_default_styles() {
  $styles = array();

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

  return $styles;
}

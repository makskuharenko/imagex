<?php
/**
 * @file
 * linux_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function linux_configuration_image_default_styles() {
  $styles = array();

  // Exported image style: bean_image__55x55_.
  $styles['bean_image__55x55_'] = array(
    'name' => 'bean_image__55x55_',
    'label' => 'Bean Image (55x55)',
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
          'width' => 55,
          'height' => 55,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large_tile__700x360_.
  $styles['large_tile__700x360_'] = array(
    'name' => 'large_tile__700x360_',
    'label' => 'Large Tile (700x360)',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 700,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_tile__330x223_.
  $styles['small_tile__330x223_'] = array(
    'name' => 'small_tile__330x223_',
    'label' => 'Small Tile (330x223)',
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
          'width' => 330,
          'height' => 223,
        ),
        'weight' => 1,
      ),
    ),
  );

  features_alter_code('image', $styles);

  return $styles;
}

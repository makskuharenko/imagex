<?php
/**
 * @file
 * linux_landing_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_landing_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function linux_landing_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function linux_landing_pages_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:page:default'])) {
    $data['node:page:default']->display->layout = 'three_25_50_25'; /* WAS: 'two_66_33' */
    $data['node:page:default']->display->panel_settings['style_settings']['three_25_50_25_bottom'] = NULL; /* WAS: '' */
    $data['node:page:default']->display->panel_settings['style_settings']['three_25_50_25_first'] = NULL; /* WAS: '' */
    $data['node:page:default']->display->panel_settings['style_settings']['three_25_50_25_second'] = NULL; /* WAS: '' */
    $data['node:page:default']->display->panel_settings['style_settings']['three_25_50_25_third'] = NULL; /* WAS: '' */
    $data['node:page:default']->display->panel_settings['style_settings']['three_25_50_25_top'] = NULL; /* WAS: '' */
    $data['node:page:default']->display->panels['three_25_50_25_first'] = array(
      0 => 'new-0516e515-53fe-41a3-9461-12dd8b8bcb29',
      1 => 'new-5b6c586d-dc68-4a46-8e92-a5e8052a19d9',
    ); /* WAS: '' */
    $data['node:page:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-74b5efef-cdfc-4317-8e5e-14ed07cec195',
      1 => 'new-20d29340-0a73-4478-8182-9a442d427e27',
      2 => 'new-1257c26a-4ad0-4935-b682-4213f41a3153',
      3 => 'new-9b9b6c4a-94cc-4cfd-ae65-183c1818d0e7',
    ); /* WAS: '' */
    $data['node:page:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-523680ec-a0a0-4eb8-ac18-94abda3b9342',
    ); /* WAS: '' */
    $data['node:page:default']->display->title_pane = 'new-1257c26a-4ad0-4935-b682-4213f41a3153'; /* WAS: 'new-1' */
    $data['node:page:default']->display->uuid = 'f537172c-b19d-4db3-a71e-1b122374bfcf'; /* WAS: '' */
    unset($data['node:page:default']->display->content['new-1']);
    unset($data['node:page:default']->display->content['new-2']);
    unset($data['node:page:default']->display->content['new-3']);
    unset($data['node:page:default']->display->content['new-4']);
    unset($data['node:page:default']->display->content['new-5']);
    unset($data['node:page:default']->display->panels['two_66_33_first']);
    unset($data['node:page:default']->display->panels['two_66_33_second']);
    unset($data['node:page:default']->display->panels['two_66_33_top']);
  }
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

/**
 * Implements hook_node_info().
 */
function linux_landing_pages_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );

  features_alter_code('node', $items);

  return $items;
}

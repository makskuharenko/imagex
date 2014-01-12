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
    $data['node:page:default']->display->content['new-1']->configuration['arguments'] = array(
      'type' => '',
    ); /* WAS: '' */
    $data['node:page:default']->display->content['new-1']->css['css_class'] = 'standard-bean recent-events filtered-view landing-pages-left-bar'; /* WAS: '' */
    $data['node:page:default']->display->content['new-1']->css['css_id'] = ''; /* WAS: '' */
    $data['node:page:default']->display->content['new-1']->panel = 'three_25_50_25_first'; /* WAS: 'two_66_33_first' */
    $data['node:page:default']->display->content['new-1']->subtype = 'home_page-panel_pane_1'; /* WAS: 'node:body' */
    $data['node:page:default']->display->content['new-1']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['node:page:default']->display->content['new-2']->configuration['override_title'] = 0; /* WAS: '' */
    $data['node:page:default']->display->content['new-2']->configuration['override_title_text'] = ''; /* WAS: '' */
    $data['node:page:default']->display->content['new-2']->panel = 'three_25_50_25_first'; /* WAS: 'two_66_33_first' */
    $data['node:page:default']->display->content['new-2']->subtype = 'bean-ad-space-homepage-right-top'; /* WAS: 'node:field_topics' */
    $data['node:page:default']->display->content['new-2']->type = 'block'; /* WAS: 'entity_field' */
    $data['node:page:default']->display->content['new-3']->configuration['class'] = ''; /* WAS: '' */
    $data['node:page:default']->display->content['new-3']->configuration['id'] = ''; /* WAS: '' */
    $data['node:page:default']->display->content['new-3']->configuration['link'] = 0; /* WAS: TRUE */
    $data['node:page:default']->display->content['new-3']->configuration['markup'] = 'h1'; /* WAS: '' */
    $data['node:page:default']->display->content['new-3']->configuration['override_title'] = 1; /* WAS: FALSE */
    $data['node:page:default']->display->content['new-3']->configuration['override_title_text'] = '%node:title'; /* WAS: '' */
    $data['node:page:default']->display->content['new-3']->panel = 'three_25_50_25_second'; /* WAS: 'two_66_33_first' */
    $data['node:page:default']->display->content['new-3']->position = 0; /* WAS: 2 */
    $data['node:page:default']->display->content['new-3']->subtype = 'node_title'; /* WAS: 'node_links' */
    $data['node:page:default']->display->content['new-3']->type = 'node_title'; /* WAS: 'node_links' */
    $data['node:page:default']->display->content['new-4']->panel = 'three_25_50_25_second'; /* WAS: 'two_66_33_second' */
    $data['node:page:default']->display->content['new-4']->position = 1; /* WAS: 0 */
    $data['node:page:default']->display->content['new-5']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:page:default']->display->content['new-5']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:page:default']->display->content['new-5']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:page:default']->display->content['new-5']->configuration['formatter'] = 'text_default'; /* WAS: '' */
    $data['node:page:default']->display->content['new-5']->configuration['formatter_settings'] = array(); /* WAS: '' */
    $data['node:page:default']->display->content['new-5']->configuration['label'] = 'hidden'; /* WAS: '' */
    $data['node:page:default']->display->content['new-5']->panel = 'three_25_50_25_second'; /* WAS: 'two_66_33_top' */
    $data['node:page:default']->display->content['new-5']->position = 2; /* WAS: 0 */
    $data['node:page:default']->display->content['new-5']->subtype = 'node:body'; /* WAS: 'node_title' */
    $data['node:page:default']->display->content['new-5']->type = 'entity_field'; /* WAS: 'node_title' */
    $data['node:page:default']->display->content['new-6'] = (object) array(
          'pid' => 'new-6',
          'panel' => 'three_25_50_25_second',
          'type' => 'node_links',
          'subtype' => 'node_links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => FALSE,
            'override_title_text' => '',
            'build_mode' => 'page_manager',
            'identifier' => '',
            'link' => TRUE,
            'context' => 'panelizer',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_class' => 'link-wrapper',
          ),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:page:default']->display->content['new-7'] = (object) array(
          'pid' => 'new-7',
          'panel' => 'three_25_50_25_third',
          'type' => 'block',
          'subtype' => 'menu-menu-join-us',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 0,
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
    $data['node:page:default']->display->layout = 'three_25_50_25'; /* WAS: 'two_66_33' */
    $data['node:page:default']->display->panel_settings['style_settings']['three_25_50_25_bottom'] = NULL; /* WAS: '' */
    $data['node:page:default']->display->panel_settings['style_settings']['three_25_50_25_first'] = NULL; /* WAS: '' */
    $data['node:page:default']->display->panel_settings['style_settings']['three_25_50_25_second'] = NULL; /* WAS: '' */
    $data['node:page:default']->display->panel_settings['style_settings']['three_25_50_25_third'] = NULL; /* WAS: '' */
    $data['node:page:default']->display->panel_settings['style_settings']['three_25_50_25_top'] = NULL; /* WAS: '' */
    $data['node:page:default']->display->panels['three_25_50_25_first'] = array(
      0 => 'new-1',
      1 => 'new-2',
    ); /* WAS: '' */
    $data['node:page:default']->display->panels['three_25_50_25_second'] = array(
      0 => 'new-3',
      1 => 'new-4',
      2 => 'new-5',
      3 => 'new-6',
    ); /* WAS: '' */
    $data['node:page:default']->display->panels['three_25_50_25_third'] = array(
      0 => 'new-7',
    ); /* WAS: '' */
    $data['node:page:default']->display->title_pane = 'new-5'; /* WAS: 'new-1' */
    unset($data['node:page:default']->display->content['new-1']->configuration['context']);
    unset($data['node:page:default']->display->content['new-1']->configuration['delta_limit']);
    unset($data['node:page:default']->display->content['new-1']->configuration['delta_offset']);
    unset($data['node:page:default']->display->content['new-1']->configuration['delta_reversed']);
    unset($data['node:page:default']->display->content['new-1']->configuration['formatter']);
    unset($data['node:page:default']->display->content['new-1']->configuration['formatter_settings']);
    unset($data['node:page:default']->display->content['new-1']->configuration['label']);
    unset($data['node:page:default']->display->content['new-2']->configuration['context']);
    unset($data['node:page:default']->display->content['new-2']->configuration['delta_limit']);
    unset($data['node:page:default']->display->content['new-2']->configuration['delta_offset']);
    unset($data['node:page:default']->display->content['new-2']->configuration['delta_reversed']);
    unset($data['node:page:default']->display->content['new-2']->configuration['formatter']);
    unset($data['node:page:default']->display->content['new-2']->configuration['formatter_settings']);
    unset($data['node:page:default']->display->content['new-2']->configuration['label']);
    unset($data['node:page:default']->display->content['new-3']->configuration['build_mode']);
    unset($data['node:page:default']->display->content['new-3']->configuration['identifier']);
    unset($data['node:page:default']->display->content['new-3']->css['css_class']);
    unset($data['node:page:default']->display->content['new-5']->configuration['class']);
    unset($data['node:page:default']->display->content['new-5']->configuration['id']);
    unset($data['node:page:default']->display->content['new-5']->configuration['link']);
    unset($data['node:page:default']->display->content['new-5']->configuration['markup']);
    unset($data['node:page:default']->display->content['new-5']->configuration['override_title']);
    unset($data['node:page:default']->display->content['new-5']->configuration['override_title_text']);
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

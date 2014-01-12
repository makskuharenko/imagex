<?php
/**
 * @file
 * linux_poll.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_poll_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function linux_poll_field_default_field_instances_alter(&$data) {
  if (isset($data['node-advpoll-advpoll_behavior'])) {
    $data['node-advpoll-advpoll_behavior']['display']['default']['weight'] = 8; /* WAS: 7 */
    $data['node-advpoll-advpoll_behavior']['display']['full'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 8,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_behavior']['display']['sidebar'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 8,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_behavior']['display']['teaser']['weight'] = 6; /* WAS: 0 */
    $data['node-advpoll-advpoll_behavior']['widget']['weight'] = 10; /* WAS: 17 */
    unset($data['node-advpoll-advpoll_behavior']['display']['default']['module']);
  }
  if (isset($data['node-advpoll-advpoll_choice'])) {
    $data['node-advpoll-advpoll_choice']['display']['default']['module'] = 'advpoll_field'; /* WAS: '' */
    $data['node-advpoll-advpoll_choice']['display']['default']['type'] = 'advpoll_choice'; /* WAS: 'hidden' */
    $data['node-advpoll-advpoll_choice']['display']['full'] = array(
      'label' => 'hidden',
      'module' => 'advpoll_field',
      'settings' => array(),
      'type' => 'advpoll_choice',
      'weight' => 1,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_choice']['display']['sidebar'] = array(
      'label' => 'hidden',
      'module' => 'advpoll_field',
      'settings' => array(),
      'type' => 'advpoll_choice',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_choice']['display']['teaser']['module'] = 'advpoll_field'; /* WAS: '' */
    $data['node-advpoll-advpoll_choice']['display']['teaser']['type'] = 'advpoll_choice'; /* WAS: 'hidden' */
  }
  if (isset($data['node-advpoll-advpoll_closed'])) {
    $data['node-advpoll-advpoll_closed']['display']['default']['weight'] = 7; /* WAS: 6 */
    $data['node-advpoll-advpoll_closed']['display']['full'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 7,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_closed']['display']['sidebar'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 7,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_closed']['display']['teaser']['weight'] = 10; /* WAS: 0 */
    $data['node-advpoll-advpoll_closed']['widget']['weight'] = 4; /* WAS: 12 */
    unset($data['node-advpoll-advpoll_closed']['display']['default']['module']);
  }
  if (isset($data['node-advpoll-advpoll_cookie_duration'])) {
    $data['node-advpoll-advpoll_cookie_duration']['display']['default']['weight'] = 9; /* WAS: 8 */
    $data['node-advpoll-advpoll_cookie_duration']['display']['full'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 9,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_cookie_duration']['display']['sidebar'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 9,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_cookie_duration']['display']['teaser']['weight'] = 4; /* WAS: 0 */
    $data['node-advpoll-advpoll_cookie_duration']['widget']['weight'] = 7; /* WAS: 15 */
    unset($data['node-advpoll-advpoll_cookie_duration']['display']['default']['module']);
    unset($data['node-advpoll-advpoll_cookie_duration']['display']['default']['settings']['decimal_separator']);
    unset($data['node-advpoll-advpoll_cookie_duration']['display']['default']['settings']['prefix_suffix']);
    unset($data['node-advpoll-advpoll_cookie_duration']['display']['default']['settings']['scale']);
    unset($data['node-advpoll-advpoll_cookie_duration']['display']['default']['settings']['thousand_separator']);
  }
  if (isset($data['node-advpoll-advpoll_dates'])) {
    $data['node-advpoll-advpoll_dates']['display']['default']['type'] = 'date_default'; /* WAS: 'hidden' */
    $data['node-advpoll-advpoll_dates']['display']['default']['weight'] = 2; /* WAS: 5 */
    $data['node-advpoll-advpoll_dates']['display']['full'] = array(
      'label' => 'inline',
      'module' => 'date',
      'settings' => array(
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
      ),
      'type' => 'date_default',
      'weight' => 2,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_dates']['display']['sidebar'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_dates']['display']['teaser']['weight'] = 2; /* WAS: 0 */
    $data['node-advpoll-advpoll_dates']['widget']['weight'] = 3; /* WAS: 11 */
  }
  if (isset($data['node-advpoll-advpoll_max_choices'])) {
    $data['node-advpoll-advpoll_max_choices']['display']['default']['weight'] = 4; /* WAS: 2 */
    $data['node-advpoll-advpoll_max_choices']['display']['full'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 4,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_max_choices']['display']['sidebar'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 4,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_max_choices']['display']['teaser']['weight'] = 9; /* WAS: 0 */
    $data['node-advpoll-advpoll_max_choices']['widget']['weight'] = 2; /* WAS: 10 */
    unset($data['node-advpoll-advpoll_max_choices']['display']['default']['module']);
    unset($data['node-advpoll-advpoll_max_choices']['display']['default']['settings']['decimal_separator']);
    unset($data['node-advpoll-advpoll_max_choices']['display']['default']['settings']['prefix_suffix']);
    unset($data['node-advpoll-advpoll_max_choices']['display']['default']['settings']['scale']);
    unset($data['node-advpoll-advpoll_max_choices']['display']['default']['settings']['thousand_separator']);
  }
  if (isset($data['node-advpoll-advpoll_mode'])) {
    $data['node-advpoll-advpoll_mode']['display']['default']['weight'] = 6; /* WAS: 4 */
    $data['node-advpoll-advpoll_mode']['display']['full'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 6,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_mode']['display']['sidebar'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 6,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_mode']['display']['teaser']['weight'] = 7; /* WAS: 0 */
    $data['node-advpoll-advpoll_mode']['widget']['weight'] = 6; /* WAS: 14 */
    unset($data['node-advpoll-advpoll_mode']['display']['default']['module']);
  }
  if (isset($data['node-advpoll-advpoll_options'])) {
    $data['node-advpoll-advpoll_options']['display']['default']['weight'] = 5; /* WAS: 3 */
    $data['node-advpoll-advpoll_options']['display']['full'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 5,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_options']['display']['sidebar'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 5,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_options']['display']['teaser']['weight'] = 8; /* WAS: 0 */
    $data['node-advpoll-advpoll_options']['widget']['weight'] = 5; /* WAS: 13 */
    unset($data['node-advpoll-advpoll_options']['display']['default']['module']);
  }
  if (isset($data['node-advpoll-advpoll_results'])) {
    $data['node-advpoll-advpoll_results']['display']['default']['weight'] = 10; /* WAS: 9 */
    $data['node-advpoll-advpoll_results']['display']['full'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 10,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_results']['display']['sidebar'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 10,
    ); /* WAS: '' */
    $data['node-advpoll-advpoll_results']['display']['teaser']['weight'] = 5; /* WAS: 0 */
    $data['node-advpoll-advpoll_results']['widget']['weight'] = 8; /* WAS: 16 */
    unset($data['node-advpoll-advpoll_results']['display']['default']['module']);
  }
  if (isset($data['node-advpoll-body'])) {
    $data['node-advpoll-body']['display']['full'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-advpoll-body']['display']['sidebar'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 1,
    ); /* WAS: '' */
    $data['node-advpoll-body']['display']['teaser']['type'] = 'hidden'; /* WAS: 'text_summary_or_trimmed' */
    $data['node-advpoll-body']['display']['teaser']['weight'] = 1; /* WAS: 0 */
    $data['node-advpoll-body']['label'] = 'Description'; /* WAS: 'Body' */
    $data['node-advpoll-body']['required'] = FALSE; /* WAS: 0 */
    $data['node-advpoll-body']['settings']['display_summary'] = TRUE; /* WAS: 1 */
    $data['node-advpoll-body']['widget']['weight'] = 0; /* WAS: 2 */
    unset($data['node-advpoll-body']['display']['teaser']['module']);
    unset($data['node-advpoll-body']['display']['teaser']['settings']['trim_length']);
    unset($data['node-advpoll-body']['settings']['better_formats']);
    unset($data['node-advpoll-body']['widget']['active']);
    unset($data['node-advpoll-body']['workbench_access_field']);
  }
  if (isset($data['node-advpoll-field_radioactivity'])) {
    unset($data['node-advpoll-field_radioactivity']);
  }
  if (isset($data['node-advpoll-field_tags'])) {
    unset($data['node-advpoll-field_tags']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function linux_poll_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__advpoll'])) {
    $data['field_bundle_settings_node__advpoll']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__advpoll']->value['view_modes']['full'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__advpoll']->value['view_modes']['rss'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__advpoll']->value['view_modes']['search_index'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__advpoll']->value['view_modes']['search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__advpoll']->value['view_modes']['sidebar'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__advpoll']->value['view_modes']['teaser'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__advpoll']->value['view_modes']['token'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['panelizer_defaults_node_advpoll'])) {
    $data['panelizer_defaults_node_advpoll']->value['status'] = 1; /* WAS: 0 */
    $data['panelizer_defaults_node_advpoll']->value['view modes']['page_manager']['default'] = 1; /* WAS: 0 */
    $data['panelizer_defaults_node_advpoll']->value['view modes']['page_manager']['status'] = 1; /* WAS: 0 */
    unset($data['panelizer_defaults_node_advpoll']->value['view modes']['diff_standard']);
    unset($data['panelizer_defaults_node_advpoll']->value['view modes']['full']);
    unset($data['panelizer_defaults_node_advpoll']->value['view modes']['rss']);
    unset($data['panelizer_defaults_node_advpoll']->value['view modes']['search_index']);
    unset($data['panelizer_defaults_node_advpoll']->value['view modes']['search_result']);
    unset($data['panelizer_defaults_node_advpoll']->value['view modes']['token']);
  }
}

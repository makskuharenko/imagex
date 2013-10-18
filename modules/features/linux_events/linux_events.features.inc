<?php
/**
 * @file
 * linux_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function linux_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function linux_events_field_default_field_bases_alter(&$data) {
  if (isset($data['field_location'])) {
    $data['field_location']['field_permissions'] = array(
      'type' => 0,
    ); /* WAS: '' */
    $data['field_location']['settings']['allowed_values']['0'] = 'Asia'; /* WAS: '' */
    $data['field_location']['settings']['allowed_values']['1'] = 'Europe'; /* WAS: '' */
    $data['field_location']['settings']['allowed_values']['2'] = 'North America'; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function linux_events_field_default_field_instances_alter(&$data) {
  if (isset($data['node-event-field_location'])) {
    $data['node-event-field_location']['description'] = 'This is the "short" location used to help users filter events quickly.'; /* WAS: '' */
    $data['node-event-field_location']['required'] = 1; /* WAS: 0 */
    $data['node-event-field_location']['widget']['weight'] = 8; /* WAS: 7 */
    $data['node-event-field_location']['workbench_access_field'] = 0; /* WAS: '' */
  }
}

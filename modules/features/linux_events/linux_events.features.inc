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
 * Implements hook_field_default_field_instances_alter().
 */
function linux_events_field_default_field_instances_alter(&$data) {
  if (isset($data['node-event-field_event_date'])) {
    $data['node-event-field_event_date']['display']['teaser']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-event-field_event_date']['display']['teaser']['module'] = 'date'; /* WAS: '' */
    $data['node-event-field_event_date']['display']['teaser']['settings']['format_type'] = 'linux_events_short_date'; /* WAS: '' */
    $data['node-event-field_event_date']['display']['teaser']['settings']['fromto'] = 'both'; /* WAS: '' */
    $data['node-event-field_event_date']['display']['teaser']['settings']['multiple_from'] = ''; /* WAS: '' */
    $data['node-event-field_event_date']['display']['teaser']['settings']['multiple_number'] = ''; /* WAS: '' */
    $data['node-event-field_event_date']['display']['teaser']['settings']['multiple_to'] = ''; /* WAS: '' */
    $data['node-event-field_event_date']['display']['teaser']['type'] = 'date_default'; /* WAS: 'hidden' */
    $data['node-event-field_event_date']['display']['teaser']['weight'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-event-field_location'])) {
    $data['node-event-field_location']['display']['teaser']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-event-field_location']['display']['teaser']['module'] = 'list'; /* WAS: '' */
    $data['node-event-field_location']['display']['teaser']['type'] = 'list_default'; /* WAS: 'hidden' */
    $data['node-event-field_location']['display']['teaser']['weight'] = 2; /* WAS: 0 */
  }
}

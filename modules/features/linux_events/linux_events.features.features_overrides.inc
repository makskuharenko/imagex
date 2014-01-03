<?php
/**
 * @file
 * linux_events.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_events_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-event-field_event_date.display|teaser|label"] = 'hidden';
  $overrides["field_instance.node-event-field_event_date.display|teaser|module"] = 'date';
  $overrides["field_instance.node-event-field_event_date.display|teaser|settings|format_type"] = 'linux_events_short_date';
  $overrides["field_instance.node-event-field_event_date.display|teaser|settings|fromto"] = 'both';
  $overrides["field_instance.node-event-field_event_date.display|teaser|settings|multiple_from"] = '';
  $overrides["field_instance.node-event-field_event_date.display|teaser|settings|multiple_number"] = '';
  $overrides["field_instance.node-event-field_event_date.display|teaser|settings|multiple_to"] = '';
  $overrides["field_instance.node-event-field_event_date.display|teaser|type"] = 'date_default';
  $overrides["field_instance.node-event-field_event_date.display|teaser|weight"] = 1;
  $overrides["field_instance.node-event-field_location.display|teaser|label"] = 'hidden';
  $overrides["field_instance.node-event-field_location.display|teaser|module"] = 'list';
  $overrides["field_instance.node-event-field_location.display|teaser|type"] = 'list_default';
  $overrides["field_instance.node-event-field_location.display|teaser|weight"] = 2;

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

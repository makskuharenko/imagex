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

  // Exported overrides for: field_base
  $overrides["field_base.field_location.field_permissions"] = array(
    'type' => 0,
  );
  $overrides["field_base.field_location.settings|allowed_values|0"] = 'Asia';
  $overrides["field_base.field_location.settings|allowed_values|1"] = 'Europe';
  $overrides["field_base.field_location.settings|allowed_values|2"] = 'North America';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-event-field_location.description"] = 'This is the "short" location used to help users filter events quickly.';
  $overrides["field_instance.node-event-field_location.required"] = 1;
  $overrides["field_instance.node-event-field_location.widget|weight"] = 8;
  $overrides["field_instance.node-event-field_location.workbench_access_field"] = 0;
  $overrides["field_instance.node-event-field_date.node-event-field_date"]["DELETED"] = TRUE;

 return $overrides;
}

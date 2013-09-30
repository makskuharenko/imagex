<?php
/**
 * @file
 * linux_manual.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_manual_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_date.settings|granularity|hour"] = 0;
  $overrides["field_base.field_date.settings|granularity|minute"] = 0;
  $overrides["field_base.field_date.settings|timezone_db"] = '';
  $overrides["field_base.field_date.settings|tz_handling"] = 'none';

 return $overrides;
}

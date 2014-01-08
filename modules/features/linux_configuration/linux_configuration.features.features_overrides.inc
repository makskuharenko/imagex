<?php
/**
 * @file
 * linux_configuration.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_configuration_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.filtered_html.weight"] = -8;
  $overrides["filter.full_html.weight"] = -10;
  $overrides["filter.plain_text.weight"] = -4;

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

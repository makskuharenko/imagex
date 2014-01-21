<?php
/**
 * @file
 * linux_multilingual.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_multilingual_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_widget_basic__markup.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_widget_basic__markup.translatable"] = 1;

  // Exported overrides for: field_instance
  $overrides["field_instance.bean-imagex_widget_basic-field_widget_basic__markup.settings|entity_translation_sync"] = FALSE;

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

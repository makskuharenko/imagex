<?php
/**
 * @file
 * linux_multilingual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_multilingual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function linux_multilingual_field_default_field_bases_alter(&$data) {
  if (isset($data['field_widget_basic__markup'])) {
    $data['field_widget_basic__markup']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['field_widget_basic__markup']['translatable'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function linux_multilingual_field_default_field_instances_alter(&$data) {
  if (isset($data['bean-imagex_widget_basic-field_widget_basic__markup'])) {
    $data['bean-imagex_widget_basic-field_widget_basic__markup']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
}

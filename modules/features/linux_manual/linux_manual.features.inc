<?php
/**
 * @file
 * linux_manual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_manual_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function linux_manual_field_default_field_bases_alter(&$data) {
  if (isset($data['field_date'])) {
    $data['field_date']['settings']['granularity']['hour'] = 0; /* WAS: 'hour' */
    $data['field_date']['settings']['granularity']['minute'] = 0; /* WAS: 'minute' */
    $data['field_date']['settings']['timezone_db'] = ''; /* WAS: 'UTC' */
    $data['field_date']['settings']['tz_handling'] = 'none'; /* WAS: 'site' */
  }
}

/**
 * Implements hook_node_info().
 */
function linux_manual_node_info() {
  $items = array(
    'manual' => array(
      'name' => t('Manual'),
      'base' => 'node_content',
      'description' => t('Use <em>manual</em> to create a Linux manual page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

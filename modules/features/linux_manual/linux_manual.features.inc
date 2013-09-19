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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
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
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * linux_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function linux_directory_node_info() {
  $items = array(
    'directory' => array(
      'name' => t('Directory'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );

  features_alter_code('node', $items);

  return $items;
}

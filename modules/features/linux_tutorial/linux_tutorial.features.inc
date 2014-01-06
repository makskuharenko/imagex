<?php
/**
 * @file
 * linux_tutorial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_tutorial_ctools_plugin_api($module = NULL, $api = NULL) {
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
function linux_tutorial_node_info() {
  $items = array(
    'tutorial' => array(
      'name' => t('Tutorial'),
      'base' => 'node_content',
      'description' => t('Use <em>tutorial</em> to create a new How To like articles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

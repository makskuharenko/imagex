<?php
/**
 * @file
 * linux_humor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_humor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function linux_humor_node_info() {
  $items = array(
    'humor' => array(
      'name' => t('Humor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
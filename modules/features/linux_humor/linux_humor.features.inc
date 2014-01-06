<?php
/**
 * @file
 * linux_humor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_humor_ctools_plugin_api($module = NULL, $api = NULL) {
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
      'description' => t('Use <em>humor</em> to create a new comic strip entry (e.g. Friday Funnies).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

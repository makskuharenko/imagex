<?php
/**
 * @file
 * linux_whitepapers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_whitepapers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function linux_whitepapers_node_info() {
  $items = array(
    'whitepaper' => array(
      'name' => t('Whitepaper'),
      'base' => 'node_content',
      'description' => t('Use <em>whitepapers</em> to create new authoritative report (e.g. industry insights).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

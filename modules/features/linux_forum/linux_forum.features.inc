<?php
/**
 * @file
 * linux_forum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_forum_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function linux_forum_default_page_manager_handlers_alter(&$data) {
  if (isset($data['forum_panel_context_container'])) {
    $data['forum_panel_context_container']->conf['display']->panels['one_main'] = array(
      0 => 'new-1',
      1 => 'new-2',
    ); /* WAS: '' */
    unset($data['forum_panel_context_container']->conf['display']->panels['center']);
  }
  if (isset($data['forum_panel_context_forum'])) {
    $data['forum_panel_context_forum']->conf['display']->panels['one_main'] = array(
      0 => 'new-3',
      1 => 'new-4',
      2 => 'new-5',
      3 => 'new-6',
    ); /* WAS: '' */
    unset($data['forum_panel_context_forum']->conf['display']->panels['center']);
  }
  if (isset($data['forum_panel_context_top'])) {
    $data['forum_panel_context_top']->conf['display']->panels['one_main'] = array(
      0 => 'new-7',
      1 => 'new-8',
      2 => 'new-9',
    ); /* WAS: '' */
    unset($data['forum_panel_context_top']->conf['display']->panels['center']);
  }
}

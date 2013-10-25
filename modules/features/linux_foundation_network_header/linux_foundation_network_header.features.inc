<?php
/**
 * @file
 * linux_foundation_network_header.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_foundation_network_header_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

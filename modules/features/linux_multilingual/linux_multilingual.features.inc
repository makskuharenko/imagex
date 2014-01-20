<?php
/**
 * @file
 * linux_com_multilingual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_com_multilingual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

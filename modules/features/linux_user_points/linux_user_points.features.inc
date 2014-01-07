<?php
/**
 * @file
 * linux_user_points.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_user_points_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

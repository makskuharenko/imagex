<?php
/**
 * @file
 * linux_random_photo_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_random_photo_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

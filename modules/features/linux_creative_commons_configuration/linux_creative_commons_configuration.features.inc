<?php
/**
 * @file
 * linux_creative_commons_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_creative_commons_configuration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

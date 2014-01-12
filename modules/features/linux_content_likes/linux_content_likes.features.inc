<?php
/**
 * @file
 * linux_content_likes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_content_likes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

<?php
/**
 * @file
 * linux_question_answer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function linux_question_answer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}

<?php
/**
 * @file
 * linux_user_tags.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function linux_user_tags_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Linux Foundation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ce6d23e2-b02f-42a8-a2d6-b8ebb77c4e64',
    'vocabulary_machine_name' => 'linux_user_tags',
    'metatags' => array(),
  );
  return $terms;
}

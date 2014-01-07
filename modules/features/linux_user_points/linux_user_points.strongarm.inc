<?php
/**
 * @file
 * linux_user_points.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function linux_user_points_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_imagex_userbadge__badge';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_imagex_userbadge__badge'] = $strongarm;

  features_alter_code('variable', $export);

  return $export;
}

<?php
/**
 * @file
 * linux_configuration.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function linux_configuration_filter_default_formats() {
  $formats = array();

  // Exported format: Unfiltered.
  $formats['unfiltered'] = array(
    'format' => 'unfiltered',
    'name' => 'Unfiltered',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  features_alter_code('filter', $formats);

  return $formats;
}

<?php
/**
 * @file
 */

/**
 * Implements hook_drush_command().
 */
function imagex_drush_command() {
  $commands = array();
  $commands['imagex-flush'] = array(
    'description' => 'Handles the flushing of the registry and caches.',
    'aliases' => array('flush'),
  );
  return $commands;
}

/**
 * Command callback for `drush imagex-flush`. 
 *
 * Handles the flushing and rebuilding of the registry and caches.
 */
function drush_imagex_flush() {
  // Reset the runtime cache of the system info.
  drupal_static_reset('system_rebuild_module_data');
  drupal_static_reset('system_rebuild_theme_data');

  // Rebuild the system information.
  system_rebuild_module_data();
  system_rebuild_theme_data();

  // Flush all caches.
  drupal_flush_all_caches();

  // Display a success message to the user.
  drush_print(dt('The system module and theme data has been rebuilt; caches flushed.'));
}

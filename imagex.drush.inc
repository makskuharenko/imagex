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
  $commands['imagex-major-version'] = array(
    'description' => 'Returns the major version of a specified module.',
    'arguments' => array(
      'module' => 'The name of the module to get the major version of.',
    ),
    'required-arguments' => 1,
    'aliases' => array('major-version', 'major-ver'),
  );
  return $commands;
}

/**
 * Drush callback; for `drush imagex-flush`.
 *
 * Handles the flushing and rebuilding of the registry and caches completely.
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

/**
 * Drush callback; for `drush imagex-major-version [module]`.
 *
 * @param string $module
 *   The name of the module to retrieve the major version of.
 */
function drush_imagex_major_version($module = '') {
  if (empty($module)) {
    return drush_log(dt('The module was not specified.', 'error'));
  }

  if (!module_exists($module)) {
    return drush_log(dt('The module !module does not exist.', array(
      '!module' => $module,
    ), 'error'));
  }

  $version = imagex_get_module_major_version($module);
  if (FALSE === $version) {
    return drush_log(dt('An error occurred while attempting to retrieve the major version.'), 'error');
  }

  drush_print(dt('The major version of !module is !version.', array(
    '!module' => $module,
    '!version' => $version,
  )));
}

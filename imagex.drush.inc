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
  $commands['imagex-variables-rebuild'] = array(
    'description' => 'Rebuilds and sets all of the default values for all variables defined by hook_imagex_variables().',
    'options' => array(
      'modules' => 'A comma separated list of modules to rebuild their defined variables for.',
    ),
    'aliases' => array('vrebuild'),
  );
  $commands['imagex-variables-delete'] = array(
    'description' => 'Removes all variables defined by hook_imagex_variables().',
    'aliases' => array('vdelall'),
  );
  $commands['imagex-mode-get'] = array(
    'description' => 'Display the current operating mode.',
    'aliases' => array('mode'),
  );
  $commands['imagex-mode-set'] = array(
    'descriptions' => 'Sets the current operating mode.',
    'arguments' => array(
      'mode' => 'The mode to set.',
    ),
    'required-arguments' => 1,
    'aliases' => array('mode-set'),
  );
  $commands['imagex-environments-list'] = array(
    'description' => 'Display a list of available environments.',
    'aliases' => array('enviro-list', 'envlist'),
  );
  $commands['imagex-environment-get'] = array(
    'description' => 'Display the current operating environment.',
    'aliases' => array('enviro-get', 'envget'),
  );
  $commands['imagex-environment-set'] = array(
    'description' => 'Set the operating environment while triggering hook_environment_changed().',
    'arguments' => array(
      'environment' => 'The environment to set.',
    ),
    'required-arguments' => 1,
    'aliases' => array('enviro-set', 'envset'),
  );
  return $commands;
}

/**
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
 * Retrieves and displays the major version of a single module.
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

/**
 * Rebuilds the variables defined by hook_imagex_variables().
 *
 * If the --modules option is specified, only those modules listed will have their
 * variables rebuilt.
 */
function drush_imagex_variables_rebuild() {
  $modules = drush_get_option_list('modules', NULL);
  if (!empty($modules)) {
    foreach ($modules as $module) {
      if (!module_exists($module)) {
        // Log the error that one of the specified modules does not exist.
        drush_log(dt('The module, @module, does not exist.', array('@module' => $module)), 'error');
        continue;
      }

      if (!_imagex_variables_set_for($module)) {
        drush_log(dt('An error occurred while rebuilding variables defined by @module.', array('@module' => $module)), 'error');
        continue;
      }

      drush_log(dt('Rebuilt variables defined by @module with default values.', array('@module' => $module)), 'success');
    }
    return;
  }

  imagex_variables_rebuild();
  drush_print(dt('You have successfully rebuilt all variables defined by hook_imagex_variables().'));
}

/**
 * Deletes all variables defined by hook_imagex_variables().
 */
function drush_imagex_variables_delete() {
  imagex_variables_delete();
  drush_print(dt('You have successfully deleted all variables defined by hook_imagex_variables().'));
}

/**
 * Displays the current operating mode of the site.
 */
function drush_imagex_mode_get() {
  drush_print(dt('The current operating mode is "@mode".', array('@mode' => imagex_mode_language(imagex_mode()))));
}

/**
 * Changes the current operating mode of the site.
 *
 * @param string $mode
 *   The mode identifier or machine name to switch the operations to.
 */
function drush_imagex_mode_set($mode = '') {
  $previous = imagex_mode_set($mode);
  drush_print(dt('The operating mode has been set to "@mode" from "@previous".', array(
    '@mode' => imagex_mode_language(imagex_mode()),
    '@previous' => $previous ? imagex_mode_language($previous) : dt('unknown'),
  )));
}

/**
 * Displays a list of the available operating environments.
 */
function drush_imagex_environments_list() {
  $headers = array('machine-name' => dt('Machine Name'), 'title' => dt('Title'), 'description' => dt('Description'));
  $rows = array($headers);
  foreach (imagex_environments() as $machine_name => $information) {
    $rows[] = array($machine_name, $information['title'], $information['description']);
  }
  drush_print_table($rows, TRUE);
}

/**
 * Displays the current operating environment.
 */
function drush_imagex_environment_get() {
  drush_print(dt('The current operating environment is "@environment".', array('@environment' => imagex_environment())));
}

/**
 * Changes the current operating environment.
 *
 * @param string $environment
 *   The environment machine name to change operations to.
 */
function drush_imagex_environment_set($environment = '') {
  $previous = imagex_environment_set($environment);
  drush_print(dt('The operating environment has been set to "@environment" from "@previous".', array(
    '@environment' => $environment,
    '@previous' => $previous,
  )));
}

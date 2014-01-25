<?php
/**
 * @file
 */

/**
 * Invoked when the operation mode has been changed.
 *
 * @param int $mode
 *   The operating mode that has been set.
 */
function hook_imagex_mode_changed($mode) {
  watchdog(IMAGEX_WATCHDOG_TYPE, 'The operating mode has been changed to %mode', array('%mode' => imagex_mode_language($mode)), WATCHDOG_NOTICE);
}

/**
 * Allows for environments to be defined.
 *
 * @return array
 *   An associative array of environments defined.
 */
function hook_imagex_environments() {
  return array(
    'machine_name' => array(
      'title' => t('My Environment'),
      'description' => t('This is just an example environment.'),
    )
  );
}

/**
 * Allows for operations to be performed when the environment has changed.
 *
 * @param string $environment
 *   The environment that operations have been changed too.
 */
function hook_imagex_environment_changed($environment) {
  variable_set('imagex_environment', $environment);
}

/**
 * Returns an array of variables and their default values.
 *
 * @return array
 *   Returns a keyed array by variable name and their default values.
 */
function hook_imagex_variables() {
  return array();
}

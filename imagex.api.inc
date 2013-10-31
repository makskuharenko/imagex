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
 * Returns an array of variables and their default values.
 *
 * @return array
 *   Returns a keyed array by variable name and their default values.
 */
function hook_imagex_variables() {
  return array();
}

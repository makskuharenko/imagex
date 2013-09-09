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

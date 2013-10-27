<?php
/**
 * @file
 * linux_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function linux_events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_day_month_short';
  $strongarm->value = 'j M';
  $export['date_format_day_month_short'] = $strongarm;

  return $export;
}

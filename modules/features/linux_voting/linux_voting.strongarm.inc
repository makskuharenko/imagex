<?php
/**
 * @file
 * linux_voting.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function linux_voting_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_anonymous_window';
  $strongarm->value = '86400';
  $export['votingapi_anonymous_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_calculation_schedule';
  $strongarm->value = 'immediate';
  $export['votingapi_calculation_schedule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'votingapi_user_window';
  $strongarm->value = '-1';
  $export['votingapi_user_window'] = $strongarm;

  return $export;
}

<?php
/**
 * @file
 * linux_google_analytics.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function linux_google_analytics_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_cache_length';
  $strongarm->value = '259200';
  $export['google_analytics_reports_cache_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_default_page';
  $strongarm->value = '/';
  $export['google_analytics_reports_default_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_hd';
  $strongarm->value = '';
  $export['google_analytics_reports_hd'] = $strongarm;

  features_alter_code('variable', $export);

  return $export;
}

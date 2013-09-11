<?php
/**
 * @file
 * linux_creative_commons_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function linux_creative_commons_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_arr_text';
  $strongarm->value = '';
  $export['creativecommons_arr_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_available_license_types';
  $strongarm->value = array(
    '' => '',
  );
  $export['creativecommons_available_license_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_available_metadata';
  $strongarm->value = array(
    'attributionName' => 'attributionName',
    'attributionURL' => 'attributionURL',
    'morePermissions' => 'morePermissions',
    'title' => 'title',
    'type' => 'type',
    'source' => 'source',
  );
  $export['creativecommons_available_metadata'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_image_style';
  $strongarm->value = 'button_large';
  $export['creativecommons_image_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_license_redundant_display';
  $strongarm->value = 1;
  $export['creativecommons_license_redundant_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_locale';
  $strongarm->value = 'en';
  $export['creativecommons_locale'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_nc_img';
  $strongarm->value = '';
  $export['creativecommons_nc_img'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_rdf';
  $strongarm->value = 1;
  $export['creativecommons_rdf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_required_metadata';
  $strongarm->value = array(
    'attributionName' => 0,
    'attributionURL' => 0,
    'morePermissions' => 0,
    'title' => 0,
    'type' => 0,
    'source' => 0,
    'description' => 0,
    'creator' => 0,
    'rights' => 0,
    'date' => 0,
  );
  $export['creativecommons_required_metadata'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_search';
  $strongarm->value = 1;
  $export['creativecommons_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_text_style';
  $strongarm->value = 'full';
  $export['creativecommons_text_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_user_message';
  $strongarm->value = array(
    'value' => '',
    'format' => 'plain_text',
  );
  $export['creativecommons_user_message'] = $strongarm;

  return $export;
}

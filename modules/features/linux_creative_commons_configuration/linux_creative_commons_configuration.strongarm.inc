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
    'by' => 'by',
    'by-sa' => 'by-sa',
    'by-nd' => 'by-nd',
    'by-nc' => 'by-nc',
    'by-nc-sa' => 'by-nc-sa',
    'by-nc-nd' => 'by-nc-nd',
    'mark' => 'mark',
    'zero' => 'zero',
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
  $strongarm->name = 'creativecommons_cron';
  $strongarm->value = 1380757162;
  $export['creativecommons_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_default_jurisdiction';
  $strongarm->value = '';
  $export['creativecommons_default_jurisdiction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_default_license_type';
  $strongarm->value = 'by-nc-sa';
  $export['creativecommons_default_license_type'] = $strongarm;

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
  $strongarm->name = 'creativecommons_site_license_additional_text';
  $strongarm->value = '';
  $export['creativecommons_site_license_additional_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_site_license_display';
  $strongarm->value = 0;
  $export['creativecommons_site_license_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_site_metadata';
  $strongarm->value = array(
    'attributionName' => '',
    'attributionURL' => '',
    'morePermissions' => '',
    'title' => '',
    'type' => '',
    'source' => '',
  );
  $export['creativecommons_site_metadata'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_text_style';
  $strongarm->value = 'full';
  $export['creativecommons_text_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'creativecommons_types';
  $strongarm->value = array(
    'blog' => 'blog',
    'answer' => 0,
    'directory' => 0,
    'event' => 0,
    'faq_topic' => 0,
    'forum' => 0,
    'group' => 0,
    'humor' => 0,
    'manual' => 0,
    'imagex_news' => 0,
    'page' => 0,
    'advpoll' => 0,
    'question' => 0,
    'tutorial' => 0,
    'wiki' => 0,
  );
  $export['creativecommons_types'] = $strongarm;

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

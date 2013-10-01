<?php
/**
 * @file
 * linux_random_photo_block.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function linux_random_photo_block_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_api_key';
  $strongarm->value = '5bd15cf42777b9e12ae488fab1f15510';
  $export['flickr_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_api_secret';
  $strongarm->value = '796de12fdd43d363';
  $export['flickr_api_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_block_5';
  $strongarm->value = array(
    'user_id' => 'aaron_imagex',
    'show_n' => 30,
    'size' => 'q',
    'media' => 'all',
  );
  $export['flickr_block_5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_cache_duration';
  $strongarm->value = '900';
  $export['flickr_cache_duration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_class';
  $strongarm->value = '';
  $export['flickr_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_css';
  $strongarm->value = 1;
  $export['flickr_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_default_userid';
  $strongarm->value = '';
  $export['flickr_default_userid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_opening_size';
  $strongarm->value = '';
  $export['flickr_opening_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_photos_per_page';
  $strongarm->value = '30';
  $export['flickr_photos_per_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flickr_rel';
  $strongarm->value = '';
  $export['flickr_rel'] = $strongarm;

  return $export;
}

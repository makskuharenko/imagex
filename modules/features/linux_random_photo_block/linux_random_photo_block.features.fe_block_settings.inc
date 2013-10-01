<?php
/**
 * @file
 * linux_random_photo_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function linux_random_photo_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['flickr-5'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 5,
    'disabled' => FALSE,
    'module' => 'flickr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'linux' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'linux',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Linux Flickr Block',
    'visibility' => 0,
  );

  return $export;
}

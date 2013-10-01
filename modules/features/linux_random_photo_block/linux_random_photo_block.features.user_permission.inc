<?php
/**
 * @file
 * linux_random_photo_block.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function linux_random_photo_block_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer flickr.
  $permissions['administer flickr'] = array(
    'name' => 'administer flickr',
    'roles' => array(),
    'module' => 'flickr',
  );

  // Exported permission: view all flickr photos.
  $permissions['view all flickr photos'] = array(
    'name' => 'view all flickr photos',
    'roles' => array(),
    'module' => 'flickr',
  );

  // Exported permission: view own flickr photos.
  $permissions['view own flickr photos'] = array(
    'name' => 'view own flickr photos',
    'roles' => array(),
    'module' => 'flickr',
  );

  return $permissions;
}

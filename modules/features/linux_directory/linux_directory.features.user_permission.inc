<?php
/**
 * @file
 * linux_directory.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function linux_directory_user_default_permissions() {
  $permissions = array();

  // Exported permission: delete any directory content.
  $permissions['delete any directory content'] = array(
    'name' => 'delete any directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own directory content.
  $permissions['delete own directory content'] = array(
    'name' => 'delete own directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any directory content.
  $permissions['edit any directory content'] = array(
    'name' => 'edit any directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own directory content.
  $permissions['edit own directory content'] = array(
    'name' => 'edit own directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}

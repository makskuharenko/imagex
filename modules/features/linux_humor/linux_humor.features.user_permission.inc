<?php
/**
 * @file
 * linux_humor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function linux_humor_user_default_permissions() {
  $permissions = array();

  // Exported permission: create humor content.
  $permissions['create humor content'] = array(
    'name' => 'create humor content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any humor content.
  $permissions['delete any humor content'] = array(
    'name' => 'delete any humor content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own humor content.
  $permissions['delete own humor content'] = array(
    'name' => 'delete own humor content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any humor content.
  $permissions['edit any humor content'] = array(
    'name' => 'edit any humor content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own humor content.
  $permissions['edit own humor content'] = array(
    'name' => 'edit own humor content',
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

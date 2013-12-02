<?php
/**
 * @file
 * linux_tutorial.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function linux_tutorial_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create tutorial content'.
  $permissions['create tutorial content'] = array(
    'name' => 'create tutorial content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tutorial content'.
  $permissions['delete any tutorial content'] = array(
    'name' => 'delete any tutorial content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tutorial content'.
  $permissions['delete own tutorial content'] = array(
    'name' => 'delete own tutorial content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tutorial content'.
  $permissions['edit any tutorial content'] = array(
    'name' => 'edit any tutorial content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tutorial content'.
  $permissions['edit own tutorial content'] = array(
    'name' => 'edit own tutorial content',
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

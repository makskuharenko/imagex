<?php
/**
 * @file
 * linux_dashboard.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function linux_dashboard_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view content admin dashboard'.
  $permissions['view content admin dashboard'] = array(
    'name' => 'view content admin dashboard',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'Super User' => 'Super User',
      'administrator' => 'administrator',
    ),
    'module' => 'linux_dashboard',
  );

  return $permissions;
}

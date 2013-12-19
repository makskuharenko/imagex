<?php
/**
 * @file
 * linux_social_login.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function linux_social_login_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use hybridauth'.
  $permissions['use hybridauth'] = array(
    'name' => 'use hybridauth',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'hybridauth',
  );

  features_alter_code('user_permission', $permissions);

  return $permissions;
}

<?php
/**
 * @file
 * linux_pardot_integration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function linux_pardot_integration_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer pardot.
  $permissions['administer pardot'] = array(
    'name' => 'administer pardot',
    'roles' => array(),
    'module' => 'pardot',
  );

  return $permissions;
}

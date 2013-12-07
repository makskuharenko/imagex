<?php
/**
 * @file
 * linux_voting.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function linux_voting_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(),
    'module' => 'votingapi',
  );

  return $permissions;
}

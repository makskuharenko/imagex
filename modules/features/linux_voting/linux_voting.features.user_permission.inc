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

  // Exported permission: 'access vote up/down statistics'.
  $permissions['access vote up/down statistics'] = array(
    'name' => 'access vote up/down statistics',
    'roles' => array(),
    'module' => 'vud',
  );

  // Exported permission: 'administer vote up/down'.
  $permissions['administer vote up/down'] = array(
    'name' => 'administer vote up/down',
    'roles' => array(),
    'module' => 'vud',
  );

  // Exported permission: 'administer vote up/down on comments'.
  $permissions['administer vote up/down on comments'] = array(
    'name' => 'administer vote up/down on comments',
    'roles' => array(),
    'module' => 'vud_comment',
  );

  // Exported permission: 'administer vote up/down on nodes'.
  $permissions['administer vote up/down on nodes'] = array(
    'name' => 'administer vote up/down on nodes',
    'roles' => array(),
    'module' => 'vud_node',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(),
    'module' => 'votingapi',
  );

  // Exported permission: 'reset vote up/down votes'.
  $permissions['reset vote up/down votes'] = array(
    'name' => 'reset vote up/down votes',
    'roles' => array(),
    'module' => 'vud',
  );

  // Exported permission: 'see vote up/down node stats'.
  $permissions['see vote up/down node stats'] = array(
    'name' => 'see vote up/down node stats',
    'roles' => array(),
    'module' => 'vud_node',
  );

  // Exported permission: 'use vote up/down'.
  $permissions['use vote up/down'] = array(
    'name' => 'use vote up/down',
    'roles' => array(),
    'module' => 'vud',
  );

  // Exported permission: 'use vote up/down on comments'.
  $permissions['use vote up/down on comments'] = array(
    'name' => 'use vote up/down on comments',
    'roles' => array(),
    'module' => 'vud_comment',
  );

  // Exported permission: 'use vote up/down on nodes'.
  $permissions['use vote up/down on nodes'] = array(
    'name' => 'use vote up/down on nodes',
    'roles' => array(),
    'module' => 'vud_node',
  );

  // Exported permission: 'view vote up/down count on comments'.
  $permissions['view vote up/down count on comments'] = array(
    'name' => 'view vote up/down count on comments',
    'roles' => array(),
    'module' => 'vud_comment',
  );

  // Exported permission: 'view vote up/down count on nodes'.
  $permissions['view vote up/down count on nodes'] = array(
    'name' => 'view vote up/down count on nodes',
    'roles' => array(),
    'module' => 'vud_node',
  );

  return $permissions;
}

<?php
/**
 * @file
 * linux_google_analytics.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function linux_google_analytics_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer google analytics reports'.
  $permissions['administer google analytics reports'] = array(
    'name' => 'administer google analytics reports',
    'roles' => array(),
    'module' => 'google_analytics_api',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  features_alter_code('user_permission', $permissions);

  return $permissions;
}

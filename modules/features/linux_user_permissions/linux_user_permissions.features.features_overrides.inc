<?php
/**
 * @file
 * linux_user_permissions.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_user_permissions_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.access content.roles|anonymous user"] = 'anonymous user';
  $overrides["user_permission.access content.roles|authenticated user"] = 'authenticated user';

 return $overrides;
}

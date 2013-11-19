<?php
/**
 * @file
 * linux_user_permissions.features.inc
 */

/**
 * Implements hook_user_default_permissions_alter().
 */
function linux_user_permissions_user_default_permissions_alter(&$data) {
  if (isset($data['access content'])) {
    $data['access content']['roles']['anonymous user'] = 'anonymous user'; /* WAS: '' */
    $data['access content']['roles']['authenticated user'] = 'authenticated user'; /* WAS: '' */
  }
}

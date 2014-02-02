<?php
/**
 * @file
 */

/**
 * Implements hook_drush_commands().
 */
function linux_drush_command() {
  $commands = array();
  $commands['linux-post-install'] = array(
    'description' => 'Performs operations for post-installation.',
    'aliases' => array(),
  );
  return $commands;
}

/**
 * Drush callback for `linux-post-install`.
 */
function drush_linux_post_install() {
  // Let the user know that this is starting.
  drush_print(dt('Beginning post installation operations.'));
  // Run the post-installation. If it has ran, FALSE will be returned
  // and therefore we will warn the user about it.
  if (!linux_post_install()) {
    drush_log(dt('Linux.com post install has already ran.'), 'warning');
    return;
  }
  drush_log(dt('Post installation complete.'), 'success');
}

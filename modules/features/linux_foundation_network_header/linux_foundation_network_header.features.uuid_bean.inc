<?php
/**
 * @file
 * linux_foundation_network_header.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function linux_foundation_network_header_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Login Logout Links',
    'description' => NULL,
    'title' => '',
    'type' => 'imagex_widget_basic',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'login-logout-links',
    'view_mode' => 'default',
    'created' => 1390336013,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'e3497c96-55db-40ae-81d5-037c0f56eaef',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<?php
global $user;
if ($user->uid) {
    print t(\'<span class="user-log-username">Welcome, !username</span>!logout\', array(
      \'!username\' => theme(\'username\', array(\'account\' => $user)),
      \'!logout\' => l(t(\'Logout\'), \'user/logout\'), 
    ));
}
else {
  $dest = drupal_get_destination();
  print l(t(\'Login\'),\'user/login\', array(
      \'query\' => $dest,
    )
  );
 
// Print Register link only if allowed to do so.
  if (variable_get(\'user_register\', USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL)) {
    print l(t(\'Create Account\'),\'user/register\', array(
        \'query\' => $dest,
      )
    );
  }
}
?>',
          'format' => 'php_code',
        ),
      ),
    ),
    'aggregator_item' => FALSE,
  );

  features_alter_code('uuid_bean', $beans);

  return $beans;
}

<?php
/**
 * @file
 * linux_configuration.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function linux_configuration_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Pull Out Menu Button',
    'description' => NULL,
    'title' => '',
    'type' => 'imagex_widget_basic',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'pull-out-menu-button',
    'view_mode' => 'default',
    'created' => 1387243152,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'f953195a-8dcb-4eb7-b509-1180e4c8a5e4',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<span class="pullout-menu">Pullout Menu</span>',
          'format' => 'full_html',
          'safe_value' => '<p><span class="pullout-menu">Pullout Menu</span></p>
',
        ),
      ),
    ),
    'aggregator_item' => FALSE,
  );

  features_alter_code('uuid_bean', $beans);

  return $beans;
}

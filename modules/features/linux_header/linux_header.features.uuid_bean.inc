<?php
/**
 * @file
 * linux_header.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function linux_header_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Ad Space - Header',
    'description' => NULL,
    'title' => '',
    'type' => 'imagex_widget_basic',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'ad-space---header',
    'view_mode' => 'default',
    'created' => 1382716852,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '0ca4c0e1-eb00-430a-be7d-08092a2c6cde',
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="ad-space">Ad Space</div>',
          'format' => 'full_html',
          'safe_value' => '<div class="ad-space">Ad Space</div>
',
        ),
      ),
    ),
  );
  return $beans;
}

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
    'created' => 1386777773,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'ad50da0d-c7e7-47d2-ac74-7469ac209732',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="azk98143_leaderboard" style="border: none;" class="ad-space"></div>',
          'format' => 'full_html',
          'safe_value' => '<div style="border:none;" class="ad-space"></div>
',
        ),
      ),
    ),
    'aggregator_item' => FALSE,
  );

  features_alter_code('uuid_bean', $beans);

  return $beans;
}

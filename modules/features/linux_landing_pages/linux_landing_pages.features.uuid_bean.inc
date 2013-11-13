<?php
/**
 * @file
 * linux_landing_pages.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function linux_landing_pages_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Have a tip',
    'description' => NULL,
    'title' => '',
    'type' => 'imagex_widget_basic',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'have-a-tip',
    'view_mode' => 'default',
    'created' => 1384302812,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '3a192767-1354-48fc-b00e-2a1f9127c982',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<p><a href="/contact">Have a tip, pitch, or guest column? Tell Us!</a></p>
',
          'format' => 'filtered_html',
          'safe_value' => '<p><a href="/contact">Have a tip, pitch, or guest column? Tell Us!</a></p>
',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Ad space Homepage right top',
    'description' => NULL,
    'title' => '',
    'type' => 'imagex_widget_basic',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'ad-space-homepage-right-top',
    'view_mode' => 'default',
    'created' => 1384303261,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '7f7d59d3-0458-4535-badc-704c54eb9f0f',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<p><img alt="" src="http://placehold.it/320/8AFFE4/000000.png&amp;text=Ad+Space" style="height:320px; width:320px" /></p>
',
          'format' => 'full_html',
          'safe_value' => '<p><img alt="" src="http://placehold.it/320/8AFFE4/000000.png&amp;text=Ad+Space" style="height:320px;width:320px;" /></p>
',
        ),
      ),
    ),
  );
  return $beans;
}

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
    'label' => 'Adspace: Landing Page Right Sidebar',
    'description' => NULL,
    'title' => '',
    'type' => 'imagex_widget_basic',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'adspace-landing-page-right-sideb',
    'view_mode' => 'default',
    'created' => 1389257173,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'f9de99bb-e287-4463-8d72-d59ed5cc9816',
    'uuid' => '2ef1eba6-65cb-4fae-af20-9b5dcabbd15a',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="azk85217_rectangle" style="border: none;"></div>',
          'format' => 'full_html',
          'safe_value' => '<div style="border:none;"></div>
',
        ),
      ),
    ),
    'aggregator_item' => FALSE,
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'bean',
          'entity_id' => 6,
          'language' => 'en',
          'source' => '',
          'uid' => 0,
          'status' => 1,
          'translate' => 0,
          'created' => 1392309517,
          'changed' => 1392309517,
        ),
      ),
    ),
  );
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
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '30ceefc0-4d69-466e-bd49-81804142ac87',
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
    'aggregator_item' => FALSE,
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'bean',
          'entity_id' => 7,
          'language' => 'en',
          'source' => '',
          'uid' => 0,
          'status' => 1,
          'translate' => 0,
          'created' => 1392309517,
          'changed' => 1392309517,
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Latest Video',
    'description' => NULL,
    'title' => 'Latest Video',
    'type' => 'imagex_widget_basic',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'latest-video',
    'view_mode' => 'default',
    'created' => 1386898553,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '4ce20dee-5911-45e4-8a53-a63a28344177',
    'uuid' => '3a67ce5e-210e-4e24-b217-693cf1fd39ea',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="more-link"><a class="latest-video" href="http://video.linux.com/">See All</a></div>
',
          'format' => 'full_html',
          'safe_value' => '<div class="more-link"><a class="latest-video" href="http://video.linux.com/">See All</a></div>
',
        ),
      ),
    ),
    'aggregator_item' => FALSE,
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'bean',
          'entity_id' => 8,
          'language' => 'en',
          'source' => '',
          'uid' => 0,
          'status' => 1,
          'translate' => 0,
          'created' => 1392309517,
          'changed' => 1392309517,
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
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '4de3da00-1b17-4344-abe3-310bcc52541e',
    'uuid' => '7f7d59d3-0458-4535-badc-704c54eb9f0f',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="azk85217_rectangle" style="border: none;"></div>',
          'format' => 'full_html',
          'safe_value' => '<div style="border:none;"></div>
',
        ),
      ),
    ),
    'aggregator_item' => FALSE,
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'bean',
          'entity_id' => 9,
          'language' => 'en',
          'source' => '',
          'uid' => 0,
          'status' => 1,
          'translate' => 0,
          'created' => 1392309517,
          'changed' => 1392309517,
        ),
      ),
    ),
  );

  features_alter_code('uuid_bean', $beans);

  return $beans;
}

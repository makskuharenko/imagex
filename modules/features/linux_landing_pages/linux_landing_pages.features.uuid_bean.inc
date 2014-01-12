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
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '2ef1eba6-65cb-4fae-af20-9b5dcabbd15a',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="azk85217_rectangle" style="border: none;"></div>',
          'format' => 'full_html',
          'safe_value' => '<div id="azk85217_rectangle" style="border: none;"></div>',
        ),
      ),
    ),
    'aggregator_item' => FALSE,
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
    'aggregator_item' => FALSE,
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
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '3a67ce5e-210e-4e24-b217-693cf1fd39ea',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="more-link">
  <a href="http://video.linux.com/">
    See All  </a>
</div>
<iframe src="//player.vimeo.com/video/77970709?title=0&amp;byline=0&amp;portrait=0&amp;color=f17700" width="274" height="185" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen style="margin:0 auto; display: block;"></iframe>',
          'format' => 'unfiltered',
          'safe_value' => '<div class="more-link">
  <a href="http://video.linux.com/">
    See All  </a>
</div>
<iframe src="//player.vimeo.com/video/77970709?title=0&amp;byline=0&amp;portrait=0&amp;color=f17700" width="274" height="185" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen style="margin:0 auto; display: block;"></iframe>',
        ),
      ),
    ),
    'aggregator_item' => FALSE,
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
          'value' => '<div id="azk85217_rectangle" style="border: none;"></div>',
          'format' => 'full_html',
          'safe_value' => '<div id="azk85217_rectangle" style="border: none;"></div>',
        ),
      ),
    ),
    'aggregator_item' => FALSE,
  );

  features_alter_code('uuid_bean', $beans);

  return $beans;
}

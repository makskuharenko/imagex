<?php
/**
 * @file
 * linux_footer.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function linux_footer_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'About Linux Foundation (footer)',
    'description' => NULL,
    'title' => '',
    'type' => 'imagex_widget_basic',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'about-linux-foundation-footer',
    'view_mode' => 'default',
    'created' => 1382910571,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => '617d5388-7797-45e3-9c08-6063fffbd8d2',
    'field_widget_basic__image' => array(
      'und' => array(
        0 => array(
          'fid' => '9e6b0e3b-5a4d-47db-b39a-75421d11bb06',
          'uid' => 1,
          'filename' => 'linux-foundation-network-footer.png',
          'uri' => 'public://linux-foundation-network-footer_0.png',
          'filemime' => 'image/png',
          'filesize' => 2661,
          'status' => 1,
          'timestamp' => 1383255333,
          'type' => 'image',
          'uuid' => '9e6b0e3b-5a4d-47db-b39a-75421d11bb06',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'field_folder' => array(
            'und' => array(
              0 => array(
                'tid' => 2,
              ),
            ),
          ),
          'metatags' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 12,
            'width' => 222,
          ),
          'alt' => '',
          'title' => '',
          'width' => 222,
          'height' => 12,
        ),
      ),
    ),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<p>The Linux Foundation is a non-profit consortium dedicated to the growth of Linux.</p>

<p><a href="http://www.linux.com">Learn More</a></p>
',
          'format' => 'full_html',
          'safe_value' => '<p>The Linux Foundation is a non-profit consortium dedicated to the growth of Linux.</p>
<p><a href="http://www.linux.com">Learn More</a></p>
',
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Copyright Information',
    'description' => NULL,
    'title' => '',
    'type' => 'imagex_widget_basic',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'copyright-information',
    'view_mode' => 'default',
    'created' => 1382911812,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'd0fe74e1-d8c5-420f-a070-983252040140',
    'field_widget_basic__image' => array(),
    'field_widget_basic__markup' => array(
      'und' => array(
        0 => array(
          'value' => '<p>© 2013 The Linux Foundation</p>
',
          'format' => 'full_html',
          'safe_value' => '<p>© 2013 The Linux Foundation</p>
',
        ),
      ),
    ),
  );
  return $beans;
}

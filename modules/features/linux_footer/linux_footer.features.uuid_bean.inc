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
          'fid' => NULL,
          'uid' => 1,
          'filename' => 'linux-foundation-network-footer.png',
          'uri' => 'public://linux-foundation-network-footer.png',
          'filemime' => 'image/png',
          'filesize' => 2661,
          'status' => 1,
          'timestamp' => NULL,
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
          'aggregator_item' => FALSE,
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
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAN4AAAAMCAYAAAANkQOTAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyNpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChNYWNpbnRvc2gpIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjU2MTQ1Q0Y5MUYxQjExRTM5MEI5Qzk0RDhDMzk0RjVCIiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOjU2MTQ1Q0ZBMUYxQjExRTM5MEI5Qzk0RDhDMzk0RjVCIj4gPHhtcE1NOkRlcml2ZWRGcm9tIHN0UmVmOmluc3RhbmNlSUQ9InhtcC5paWQ6NTYxNDVDRjcxRjFCMTFFMzkwQjlDOTREOEMzOTRGNUIiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6NTYxNDVDRjgxRjFCMTFFMzkwQjlDOTREOEMzOTRGNUIiLz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+IDw/eHBhY2tldCBlbmQ9InIiPz7SNkRVAAAG2ElEQVR42tRaDUxV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',
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
    'aggregator_item' => FALSE,
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
    'aggregator_item' => FALSE,
  );

  features_alter_code('uuid_bean', $beans);

  return $beans;
}

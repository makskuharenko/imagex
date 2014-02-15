<?php
/**
 * @file
 * linux_inappropriate_content_flag_settings.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function linux_inappropriate_content_flag_settings_flag_default_flags() {
  $flags = array();
  // Exported flag: "Inappropriate Comment".
  $flags['inappropriate_content_comment'] = array(
    'entity_type' => 'comment',
    'title' => 'Inappropriate Comment',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Flag as Inappropriate',
    'flag_long' => 'Flag this item as Inappropriate',
    'flag_message' => '',
    'unflag_short' => 'Unflag as Inappropriate',
    'unflag_long' => 'Unflag this item as Inappropriate',
    'unflag_message' => '',
    'unflag_denied_text' => 'Flagged as inappropriate',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 'diff_standard',
      'token' => 'token',
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'flag_confirmation' => 'Are you sure you want to flag this comment as inappropriate?',
    'unflag_confirmation' => 'Are you sure you want to unflag this comment as inappropriate?',
    'api_version' => 3,
    'module' => 'linux_inappropriate_content_flag_settings',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Inappropriate Content".
  $flags['inappropriate_content_node'] = array(
    'entity_type' => 'node',
    'title' => 'Inappropriate Content',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Flag as Inappropriate',
    'flag_long' => 'Flag this item as Inappropriate',
    'flag_message' => '',
    'unflag_short' => 'Unflag as Inappropriate',
    'unflag_long' => 'Unflag this item as Inappropriate',
    'unflag_message' => '',
    'unflag_denied_text' => 'Flagged as inappropriate',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 'rss',
      'search_index' => 'search_index',
      'search_result' => 'search_result',
      'diff_standard' => 'diff_standard',
      'token' => 'token',
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure you want to flag this content as inappropriate?',
    'unflag_confirmation' => 'Are you sure you want to unflag this content as inappropriate?',
    'api_version' => 3,
    'module' => 'linux_inappropriate_content_flag_settings',
    'locked' => array(
      0 => 'name',
    ),
  );

  features_alter_code('flag', $flags);

  return $flags;

}

<?php
/**
 * @file
 * linux_poll.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function linux_poll_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-advpoll-advpoll_behavior.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_behavior.display|default|weight"] = 8;
  $overrides["field_instance.node-advpoll-advpoll_behavior.display|full"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 8,
  );
  $overrides["field_instance.node-advpoll-advpoll_behavior.display|sidebar"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 8,
  );
  $overrides["field_instance.node-advpoll-advpoll_behavior.display|teaser|weight"] = 6;
  $overrides["field_instance.node-advpoll-advpoll_behavior.widget|weight"] = 10;
  $overrides["field_instance.node-advpoll-advpoll_choice.display|default|module"] = 'advpoll_field';
  $overrides["field_instance.node-advpoll-advpoll_choice.display|default|type"] = 'advpoll_choice';
  $overrides["field_instance.node-advpoll-advpoll_choice.display|full"] = array(
    'label' => 'hidden',
    'module' => 'advpoll_field',
    'settings' => array(),
    'type' => 'advpoll_choice',
    'weight' => 1,
  );
  $overrides["field_instance.node-advpoll-advpoll_choice.display|sidebar"] = array(
    'label' => 'hidden',
    'module' => 'advpoll_field',
    'settings' => array(),
    'type' => 'advpoll_choice',
    'weight' => 0,
  );
  $overrides["field_instance.node-advpoll-advpoll_choice.display|teaser|module"] = 'advpoll_field';
  $overrides["field_instance.node-advpoll-advpoll_choice.display|teaser|type"] = 'advpoll_choice';
  $overrides["field_instance.node-advpoll-advpoll_closed.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_closed.display|default|weight"] = 7;
  $overrides["field_instance.node-advpoll-advpoll_closed.display|full"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 7,
  );
  $overrides["field_instance.node-advpoll-advpoll_closed.display|sidebar"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 7,
  );
  $overrides["field_instance.node-advpoll-advpoll_closed.display|teaser|weight"] = 10;
  $overrides["field_instance.node-advpoll-advpoll_closed.widget|weight"] = 4;
  $overrides["field_instance.node-advpoll-advpoll_cookie_duration.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_cookie_duration.display|default|settings|decimal_separator"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_cookie_duration.display|default|settings|prefix_suffix"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_cookie_duration.display|default|settings|scale"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_cookie_duration.display|default|settings|thousand_separator"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_cookie_duration.display|default|weight"] = 9;
  $overrides["field_instance.node-advpoll-advpoll_cookie_duration.display|full"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 9,
  );
  $overrides["field_instance.node-advpoll-advpoll_cookie_duration.display|sidebar"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 9,
  );
  $overrides["field_instance.node-advpoll-advpoll_cookie_duration.display|teaser|weight"] = 4;
  $overrides["field_instance.node-advpoll-advpoll_cookie_duration.widget|weight"] = 7;
  $overrides["field_instance.node-advpoll-advpoll_dates.display|default|type"] = 'date_default';
  $overrides["field_instance.node-advpoll-advpoll_dates.display|default|weight"] = 2;
  $overrides["field_instance.node-advpoll-advpoll_dates.display|full"] = array(
    'label' => 'inline',
    'module' => 'date',
    'settings' => array(
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_from' => '',
      'multiple_number' => '',
      'multiple_to' => '',
    ),
    'type' => 'date_default',
    'weight' => 2,
  );
  $overrides["field_instance.node-advpoll-advpoll_dates.display|sidebar"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );
  $overrides["field_instance.node-advpoll-advpoll_dates.display|teaser|weight"] = 2;
  $overrides["field_instance.node-advpoll-advpoll_dates.widget|weight"] = 3;
  $overrides["field_instance.node-advpoll-advpoll_max_choices.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_max_choices.display|default|settings|decimal_separator"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_max_choices.display|default|settings|prefix_suffix"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_max_choices.display|default|settings|scale"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_max_choices.display|default|settings|thousand_separator"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_max_choices.display|default|weight"] = 4;
  $overrides["field_instance.node-advpoll-advpoll_max_choices.display|full"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 4,
  );
  $overrides["field_instance.node-advpoll-advpoll_max_choices.display|sidebar"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 4,
  );
  $overrides["field_instance.node-advpoll-advpoll_max_choices.display|teaser|weight"] = 9;
  $overrides["field_instance.node-advpoll-advpoll_max_choices.widget|weight"] = 2;
  $overrides["field_instance.node-advpoll-advpoll_mode.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_mode.display|default|weight"] = 6;
  $overrides["field_instance.node-advpoll-advpoll_mode.display|full"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 6,
  );
  $overrides["field_instance.node-advpoll-advpoll_mode.display|sidebar"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 6,
  );
  $overrides["field_instance.node-advpoll-advpoll_mode.display|teaser|weight"] = 7;
  $overrides["field_instance.node-advpoll-advpoll_mode.widget|weight"] = 6;
  $overrides["field_instance.node-advpoll-advpoll_options.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_options.display|default|weight"] = 5;
  $overrides["field_instance.node-advpoll-advpoll_options.display|full"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 5,
  );
  $overrides["field_instance.node-advpoll-advpoll_options.display|sidebar"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 5,
  );
  $overrides["field_instance.node-advpoll-advpoll_options.display|teaser|weight"] = 8;
  $overrides["field_instance.node-advpoll-advpoll_options.widget|weight"] = 5;
  $overrides["field_instance.node-advpoll-advpoll_results.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-advpoll_results.display|default|weight"] = 10;
  $overrides["field_instance.node-advpoll-advpoll_results.display|full"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 10,
  );
  $overrides["field_instance.node-advpoll-advpoll_results.display|sidebar"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 10,
  );
  $overrides["field_instance.node-advpoll-advpoll_results.display|teaser|weight"] = 5;
  $overrides["field_instance.node-advpoll-advpoll_results.widget|weight"] = 8;
  $overrides["field_instance.node-advpoll-body.display|full"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 0,
  );
  $overrides["field_instance.node-advpoll-body.display|sidebar"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 1,
  );
  $overrides["field_instance.node-advpoll-body.display|teaser|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-body.display|teaser|settings|trim_length"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-body.display|teaser|type"] = 'hidden';
  $overrides["field_instance.node-advpoll-body.display|teaser|weight"] = 1;
  $overrides["field_instance.node-advpoll-body.label"] = 'Description';
  $overrides["field_instance.node-advpoll-body.required"] = FALSE;
  $overrides["field_instance.node-advpoll-body.settings|better_formats"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-body.settings|display_summary"] = TRUE;
  $overrides["field_instance.node-advpoll-body.widget|active"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-body.widget|weight"] = 0;
  $overrides["field_instance.node-advpoll-body.workbench_access_field"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-field_radioactivity.node-advpoll-field_radioactivity"]["DELETED"] = TRUE;
  $overrides["field_instance.node-advpoll-field_tags.node-advpoll-field_tags"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__advpoll.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__advpoll.value|view_modes|full"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__advpoll.value|view_modes|rss"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__advpoll.value|view_modes|search_index"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__advpoll.value|view_modes|search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__advpoll.value|view_modes|sidebar"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__advpoll.value|view_modes|teaser"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__advpoll.value|view_modes|token"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.panelizer_defaults_node_advpoll.value|status"] = 1;
  $overrides["variable.panelizer_defaults_node_advpoll.value|view modes|diff_standard"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_advpoll.value|view modes|full"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_advpoll.value|view modes|page_manager|default"] = 1;
  $overrides["variable.panelizer_defaults_node_advpoll.value|view modes|page_manager|status"] = 1;
  $overrides["variable.panelizer_defaults_node_advpoll.value|view modes|rss"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_advpoll.value|view modes|search_index"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_advpoll.value|view modes|search_result"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_advpoll.value|view modes|token"]["DELETED"] = TRUE;

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}

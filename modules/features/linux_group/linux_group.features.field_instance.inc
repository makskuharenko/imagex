<?php
/**
 * @file
 * linux_group.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function linux_group_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-group-field_radioactivity'
  $field_instances['node-group-field_radioactivity'] = array(
    'bundle' => 'group',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 0,
        'radioactivity_timestamp' => 1379190993,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'energy' => 10,
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_radioactivity',
    'label' => 'Radioactivity',
    'required' => FALSE,
    'settings' => array(
      'profile' => 'default',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Radioactivity');

  return $field_instances;
}

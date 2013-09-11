<?php
/**
 * @file
 * linux_wiki.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function linux_wiki_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-wiki-field_linux_radioactivity'
  $field_instances['node-wiki-field_linux_radioactivity'] = array(
    'bundle' => 'wiki',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 0,
        'radioactivity_timestamp' => 1378898689,
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
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_linux_radioactivity',
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
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Radioactivity');

  return $field_instances;
}

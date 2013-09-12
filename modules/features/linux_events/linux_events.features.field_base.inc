<?php
/**
 * @file
 * linux_events.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function linux_events_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_groups'
  $field_bases['field_groups'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_groups',
    'foreign keys' => array(
      'group_role_fk' => array(
        'columns' => array(
          'rid' => 'rid',
        ),
        'table' => 'og_role',
      ),
    ),
    'indexes' => array(
      'rid' => array(
        0 => 'rid',
      ),
    ),
    'locked' => 0,
    'module' => 'og_role_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'group_role_reference',
  );

  // Exported field_base: 'field_radioactivity'
  $field_bases['field_radioactivity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_radioactivity',
    'foreign keys' => array(),
    'indexes' => array(
      'energy' => array(
        0 => 'radioactivity_energy',
      ),
    ),
    'locked' => 0,
    'module' => 'radioactivity',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'radioactivity',
  );

  return $field_bases;
}

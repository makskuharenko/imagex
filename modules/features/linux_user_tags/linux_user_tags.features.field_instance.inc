<?php
/**
 * @file
 * linux_user_tags.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function linux_user_tags_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_tags'
  $field_instances['user-user-field_user_tags'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_tags',
    'label' => 'User Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 31,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('User Tags');

  return $field_instances;
}

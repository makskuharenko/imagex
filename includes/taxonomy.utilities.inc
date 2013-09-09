<?php
/**
 * @file
 */

/**
 * Returns an object of all default properties for a taxonomy term.
 * 
 * @return object
 *   An object of all default properties.
 */
function imagex_taxonomy_term_defaults() {
  return (object) array(
    'tid' => NULL,
    'vid' => NULL,
    'name' => '',
    'description' => '',
    'format' => NULL,
    'weight' => NULL,
    'parent' => NULL,
    'vocabulary_machine_name' => NULL,
    'original' => NULL,
  );
}

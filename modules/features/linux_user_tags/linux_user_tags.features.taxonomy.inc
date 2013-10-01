<?php
/**
 * @file
 * linux_user_tags.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function linux_user_tags_taxonomy_default_vocabularies() {
  return array(
    'user_tags' => array(
      'name' => 'User Tags',
      'machine_name' => 'user_tags',
      'description' => 'User entity tags or identifiers',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

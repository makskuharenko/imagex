<?php
/**
 * @file
 * linux_gallery.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function linux_gallery_taxonomy_default_vocabularies() {
  $taxonomy = array(
    'gallery_category' => array(
      'name' => 'Gallery Category',
      'machine_name' => 'gallery_category',
      'description' => '',
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

  features_alter_code('taxonomy', $taxonomy);

  return $taxonomy;
}

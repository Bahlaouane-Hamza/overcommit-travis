<?php
/**
 * @file
 * vactory_mediatheque.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vactory_mediatheque_taxonomy_default_vocabularies() {
  return array(
    't_rritoire_m_diath_que_' => array(
      'name' => 'Térritoire (Médiathèque)',
      'machine_name' => 't_rritoire_m_diath_que_',
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
    'theme' => array(
      'name' => 'Thème (Médiathèque)',
      'machine_name' => 'theme',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
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

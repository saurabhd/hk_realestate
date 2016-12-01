<?php
/**
 * @file
 * hk_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hk_ct_taxonomy_default_vocabularies() {
  return array(
    'category' => array(
      'name' => 'Kategorie',
      'machine_name' => 'category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'features_kategorie_test',
      'weight' => -10,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'status_quo' => array(
      'name' => 'Status quo',
      'machine_name' => 'status_quo',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'vocabulary_3' => array(
      'name' => 'Bezirke',
      'machine_name' => 'vocabulary_3',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'features_bezirke',
      'weight' => -5,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'vocabulary_5' => array(
      'name' => 'Ausstattung',
      'machine_name' => 'vocabulary_5',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'vocabulary_6' => array(
      'name' => 'Wohnungstyp',
      'machine_name' => 'vocabulary_6',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'features_wohnungstyp',
      'weight' => -6,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}

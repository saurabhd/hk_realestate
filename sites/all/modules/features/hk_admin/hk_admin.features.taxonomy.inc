<?php
/**
 * @file
 * hk_admin.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hk_admin_taxonomy_default_vocabularies() {
  return array(
    'dokumententyp' => array(
      'name' => 'Dokumententyp',
      'machine_name' => 'dokumententyp',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

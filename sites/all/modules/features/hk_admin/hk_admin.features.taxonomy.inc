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
    'salutation' => array(
      'name' => 'Salutation',
      'machine_name' => 'salutation',
      'description' => 'The salutation used in the crm_core forms',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

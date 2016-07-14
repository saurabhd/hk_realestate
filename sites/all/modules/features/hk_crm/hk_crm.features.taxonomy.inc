<?php
/**
 * @file
 * hk_crm.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hk_crm_taxonomy_default_vocabularies() {
  return array(
    'email' => array(
      'name' => 'Email',
      'machine_name' => 'email',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'individual_type' => array(
      'name' => 'Individual Type',
      'machine_name' => 'individual_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'meeting_type' => array(
      'name' => 'Meeting Type',
      'machine_name' => 'meeting_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'task_type' => array(
      'name' => 'Task type',
      'machine_name' => 'task_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

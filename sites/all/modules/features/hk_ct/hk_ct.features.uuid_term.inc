<?php
/**
 * @file
 * hk_ct.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function hk_ct_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Old building',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '86aa85f4-016a-4a06-a9dc-f212f24de858',
    'vocabulary_machine_name' => 'building_type',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1471253891,
          'entity_uuid' => '86aa85f4-016a-4a06-a9dc-f212f24de858',
          'user_uuid' => 'b3b8435e-2b2b-4c6d-8048-5873b1c84a64',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'New building',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dd5ce51d-d328-4da0-97cd-2e9acd01361a',
    'vocabulary_machine_name' => 'building_type',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1471253908,
          'entity_uuid' => 'dd5ce51d-d328-4da0-97cd-2e9acd01361a',
          'user_uuid' => 'b3b8435e-2b2b-4c6d-8048-5873b1c84a64',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Old New building',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f8884ef4-270f-4f6d-b0c2-5d4c283bbb35',
    'vocabulary_machine_name' => 'building_type',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1471253930,
          'entity_uuid' => 'f8884ef4-270f-4f6d-b0c2-5d4c283bbb35',
          'user_uuid' => 'b3b8435e-2b2b-4c6d-8048-5873b1c84a64',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}

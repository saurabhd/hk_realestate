<?php
/**
 * @file
 * hk_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hk_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-apartment-field_save_workflow'
  $field_instances['node-apartment-field_save_workflow'] = array(
    'bundle' => 'apartment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_save_workflow',
    'label' => 'Save Workflow',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'workflowfield',
      'settings' => array(
        'comment' => 1,
        'name_as_title' => 1,
      ),
      'type' => 'workflow_default',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-objekt-field_save_workflow'
  $field_instances['node-objekt-field_save_workflow'] = array(
    'bundle' => 'objekt',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'map_popup' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_save_workflow',
    'label' => 'Save Workflow',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'workflowfield',
      'settings' => array(
        'comment' => 1,
        'name_as_title' => 1,
      ),
      'type' => 'workflow_default',
      'weight' => 47,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Save Workflow');

  return $field_instances;
}

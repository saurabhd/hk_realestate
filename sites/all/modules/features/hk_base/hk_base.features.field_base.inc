<?php
/**
 * @file
 * hk_base.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hk_base_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_save_workflow'
  $field_bases['field_save_workflow'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_save_workflow',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'workflowfield',
    'settings' => array(
      'allowed_values_function' => 'workflowfield_allowed_values',
      'allowed_values_string' => '1 | (creation)
2 | Draft
3 | Ready
4 | Active
5 | Archived
6 | Sold',
      'entity_translation_sync' => FALSE,
      'history' => array(
        'history_tab_show' => 1,
        'roles' => array(
          -1 => 0,
          3 => 3,
          4 => 0,
          5 => 0,
          6 => 6,
        ),
      ),
      'watchdog_log' => 1,
      'wid' => 1,
      'widget' => array(
        'comment' => 1,
        'hide' => 0,
        'name_as_title' => 0,
        'options' => 'buttons',
        'schedule' => 1,
        'schedule_timezone' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'workflow',
  );

  return $field_bases;
}

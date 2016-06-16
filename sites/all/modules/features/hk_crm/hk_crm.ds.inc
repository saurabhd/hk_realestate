<?php
/**
 * @file
 * hk_crm.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function hk_crm_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'crm_core_contact|mitarbeiter|live_results_search';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'mitarbeiter';
  $ds_layout->view_mode = 'live_results_search';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'contact_name',
        1 => 'field_e_mail',
        2 => 'field_phone',
      ),
    ),
    'fields' => array(
      'contact_name' => 'ds_content',
      'field_e_mail' => 'ds_content',
      'field_phone' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['crm_core_contact|mitarbeiter|live_results_search'] = $ds_layout;

  return $export;
}

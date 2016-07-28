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
  $ds_layout->id = 'crm_core_contact|individual|form';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'individual';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'contact_name',
        1 => 'field_individual_type',
        2 => 'field_responsible_agent',
        3 => 'field_secondary_agent',
        4 => 'field_e_mail',
        5 => 'field_phone',
        6 => 'field_other',
        7 => 'field_crm_address',
        8 => 'field_job_title',
        9 => 'field_languages',
        10 => 'field_birthday',
        11 => 'redirect',
        12 => 'field_profile_picture',
        13 => 'field_company',
        15 => 'field_individual_connection',
      ),
      'hidden' => array(
        14 => 'field_individual_company',
        16 => 'field_crm_bemerkungen',
        17 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'contact_name' => 'ds_content',
      'field_individual_type' => 'ds_content',
      'field_responsible_agent' => 'ds_content',
      'field_secondary_agent' => 'ds_content',
      'field_e_mail' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_other' => 'ds_content',
      'field_crm_address' => 'ds_content',
      'field_job_title' => 'ds_content',
      'field_languages' => 'ds_content',
      'field_birthday' => 'ds_content',
      'redirect' => 'ds_content',
      'field_profile_picture' => 'ds_content',
      'field_company' => 'ds_content',
      'field_individual_company' => 'hidden',
      'field_individual_connection' => 'ds_content',
      'field_crm_bemerkungen' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['crm_core_contact|individual|form'] = $ds_layout;

  return $export;
}

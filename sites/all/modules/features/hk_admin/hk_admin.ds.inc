<?php
/**
 * @file
 * hk_admin.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hk_admin_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'crm_core_contact|individual|default';
  $ds_fieldsetting->entity_type = 'crm_core_contact';
  $ds_fieldsetting->bundle = 'individual';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'contact_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_contact_position' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_contact_telefon' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_contact_fax' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['crm_core_contact|individual|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|admin-page_1|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'admin-page_1';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'exposed' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'attachment_before' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rows' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pager' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|admin-page_1|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hk_admin_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'crm_core_activity|anfrage|default';
  $ds_layout->entity_type = 'crm_core_activity';
  $ds_layout->bundle = 'anfrage';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_activity_notes',
        1 => 'field_activity_participants',
        2 => 'field_activity_date',
        3 => 'field_activity_status',
        4 => 'field_activity_bearbeiter',
        5 => 'field_angefragte_wohnung',
      ),
    ),
    'fields' => array(
      'field_activity_notes' => 'ds_content',
      'field_activity_participants' => 'ds_content',
      'field_activity_date' => 'ds_content',
      'field_activity_status' => 'ds_content',
      'field_activity_bearbeiter' => 'ds_content',
      'field_angefragte_wohnung' => 'ds_content',
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
  );
  $export['crm_core_activity|anfrage|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'crm_core_contact|individual|default';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'individual';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_contact_card',
        1 => 'field_contact_bild',
        2 => 'group_card_content',
        3 => 'contact_name',
        4 => 'field_contact_position',
        5 => 'field_contact_telefon',
        6 => 'field_contact_fax',
        7 => 'field_contact_email',
      ),
    ),
    'fields' => array(
      'group_contact_card' => 'ds_content',
      'field_contact_bild' => 'ds_content',
      'group_card_content' => 'ds_content',
      'contact_name' => 'ds_content',
      'field_contact_position' => 'ds_content',
      'field_contact_telefon' => 'ds_content',
      'field_contact_fax' => 'ds_content',
      'field_contact_email' => 'ds_content',
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
  );
  $export['crm_core_contact|individual|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|admin-page_1|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'admin-page_1';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'exposed',
        1 => 'rows',
        2 => 'pager',
      ),
      'right' => array(
        3 => 'attachment_before',
      ),
    ),
    'fields' => array(
      'exposed' => 'left',
      'rows' => 'left',
      'pager' => 'left',
      'attachment_before' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['ds_views|admin-page_1|default'] = $ds_layout;

  return $export;
}

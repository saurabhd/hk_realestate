<?php
/**
 * @file
 * hk_search.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hk_search_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|karten-block_1-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'karten-block_1-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_apart_price' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title_field' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_zimmer' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_object_ref_title_field' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_object_images' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_wohnungsbilder' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|karten-block_1-fields|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hk_search_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|karten-block_1-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'karten-block_1-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_wohnungsbilder',
        1 => 'field_object_images',
      ),
      'right' => array(
        2 => 'title_field',
        3 => 'field_zimmer',
        4 => 'field_apart_price',
        5 => 'field_object_ref_title_field',
      ),
    ),
    'fields' => array(
      'field_wohnungsbilder' => 'left',
      'field_object_images' => 'left',
      'title_field' => 'right',
      'field_zimmer' => 'right',
      'field_apart_price' => 'right',
      'field_object_ref_title_field' => 'right',
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
  $export['ds_views|karten-block_1-fields|default'] = $ds_layout;

  return $export;
}

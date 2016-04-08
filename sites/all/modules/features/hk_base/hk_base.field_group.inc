<?php
/**
 * @file
 * hk_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hk_base_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|apartment|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Basic fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_apart_living_space',
      1 => 'field_apart_no',
      2 => 'field_apart_price',
      3 => 'field_apart_rooms',
      4 => 'field_object_ref',
      5 => 'title_field',
      6 => 'field_kategorie',
      7 => 'field_objektid_nunumeric',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_basic|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|apartment|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Menu',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_costs',
      2 => 'group_features',
      3 => 'group_images',
      4 => 'group_texte',
      5 => 'group_returns',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|objekt|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Menu',
    'weight' => '0',
    'children' => array(
      0 => 'group_ansprechpartner',
      1 => 'group_ht_basis',
      2 => 'group_ht_bilder',
      3 => 'group_ht_merkmale',
      4 => 'group_ht_texte',
      5 => 'group_obj_apartments',
      6 => 'group_ort',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_obj_apartments|node|objekt|form';
  $field_group->group_name = 'group_obj_apartments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Apartments',
    'weight' => '6',
    'children' => array(
      0 => 'field_obj_apartments',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-obj-apartments field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_obj_apartments|node|objekt|form'] = $field_group;

  return $export;
}

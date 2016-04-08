<?php
/**
 * @file
 * hk_ct.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function hk_ct_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'map-popup';
  $picture_mapping->machine_name = 'map_popup';
  $picture_mapping->breakpoint_group = 'hk_theme';
  $picture_mapping->mapping = array(
    'breakpoints.theme.hk_theme.tv' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.hk_theme.wide' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.hk_theme.desk' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.hk_theme.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'map-popup',
      ),
    ),
    'breakpoints.theme.hk_theme.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'map-popup-mobile',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'map-popup-mobile',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'map-popup-mobile',
      ),
    ),
  );
  $export['map_popup'] = $picture_mapping;

  return $export;
}

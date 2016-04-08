<?php
/**
 * @file
 * hk_search.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function hk_search_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'karten-block_1-fields';
  $ds_vd->label = 'Karten: More like this Block (Fields)';
  $export['karten-block_1-fields'] = $ds_vd;

  return $export;
}

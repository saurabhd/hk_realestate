<?php
/**
 * @file
 * hk_admin.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function hk_admin_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'admin-page_1';
  $ds_vd->label = 'Admin: Admin Dashboard (Views template)';
  $export['admin-page_1'] = $ds_vd;

  return $export;
}

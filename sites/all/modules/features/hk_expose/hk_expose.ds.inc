<?php
/**
 * @file
 * hk_expose.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function hk_expose_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'expose_link';
  $ds_view_mode->label = 'Exposé Link';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['expose_link'] = $ds_view_mode;

  return $export;
}

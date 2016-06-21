<?php
/**
 * @file
 * hk_crm.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function hk_crm_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search Criteria';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_criteria';
  $fe_block_boxes->body = '<p>Fitter Properties</p>';

  $export['search_criteria'] = $fe_block_boxes;

  return $export;
}

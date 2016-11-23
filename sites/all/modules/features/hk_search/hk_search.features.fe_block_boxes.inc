<?php
/**
 * @file
 * hk_search.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function hk_search_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Copyright block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_copyright_block';
  $fe_block_boxes->body = '<p>Herbert + Kohlmeyer Immobilien GmbH | Lychener Str. 2 | 10437 Berlin | 030 780 870 80 | office@herbert-kohlmeyer.de</p>';

  $export['footer_copyright_block'] = $fe_block_boxes;

  return $export;
}

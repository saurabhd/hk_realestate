<?php
/**
 * @file
 * hk_site_redesign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_site_redesign_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_site_redesign_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hk_site_redesign_node_info() {
  $items = array(
    'testimonials' => array(
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

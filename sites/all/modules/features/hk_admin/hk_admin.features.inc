<?php
/**
 * @file
 * hk_admin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_admin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_admin_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hk_admin_node_info() {
  $items = array(
    'dokument' => array(
      'name' => t('Dokument'),
      'base' => 'node_content',
      'description' => t('Alle benötigten Dokumente zu Wohnung und zum Kunden.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

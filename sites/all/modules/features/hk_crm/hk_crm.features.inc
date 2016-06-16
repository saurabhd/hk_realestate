<?php
/**
 * @file
 * hk_crm.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function hk_crm_default_crm_core_activity_type() {
  $items = array();
  $items['email'] = entity_import('crm_core_activity_type', '{
    "type" : "email",
    "label" : "Email",
    "weight" : 0,
    "activity_string" : "",
    "description" : ""
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_crm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_crm_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

<?php
/**
 * @file
 * hk_social_login.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_social_login_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_social_login_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

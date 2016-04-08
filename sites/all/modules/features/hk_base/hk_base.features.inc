<?php
/**
 * @file
 * hk_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

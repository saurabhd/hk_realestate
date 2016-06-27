<?php
/**
 * @file
 * hk_crm.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hk_crm_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'crm_core_theme';
  $strongarm->value = 'hk_adminimal';
  $export['crm_core_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'crm_core_theme_enabled';
  $strongarm->value = 1;
  $export['crm_core_theme_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'crm_core_theme_replace_links';
  $strongarm->value = 0;
  $export['crm_core_theme_replace_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'crm_core_user_sync_rules';
  $strongarm->value = array(
    0 => array(
      'rid' => '9',
      'contact_type' => 'individual',
      'weight' => '0',
      'enabled' => 1,
    ),
  );
  $export['crm_core_user_sync_rules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short_format';
  $strongarm->value = 'd.m.Y - H:I';
  $export['date_format_short_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_saved_searches_search_ids';
  $strongarm->value = array(
    'solr_node_index' => array(
      'search_api_views:search_area:block' => 'search_api_views:search_area:block',
    ),
  );
  $export['search_api_saved_searches_search_ids'] = $strongarm;

  return $export;
}

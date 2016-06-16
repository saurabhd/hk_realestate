<?php
/**
 * @file
 * hk_crm.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hk_crm_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access contact_search_box search_api_page'.
  $permissions['access contact_search_box search_api_page'] = array(
    'name' => 'access contact_search_box search_api_page',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'agent' => 'agent',
    ),
    'module' => 'search_api_page',
  );

  // Exported permission: 'access search_api_page'.
  $permissions['access search_api_page'] = array(
    'name' => 'access search_api_page',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'agent' => 'agent',
    ),
    'module' => 'search_api_page',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'agent' => 'agent',
    ),
    'module' => 'user',
  );

  // Exported permission: 'use search_api_autocomplete for search_api_page_contact_search_box'.
  $permissions['use search_api_autocomplete for search_api_page_contact_search_box'] = array(
    'name' => 'use search_api_autocomplete for search_api_page_contact_search_box',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'agent' => 'agent',
    ),
    'module' => 'search_api_autocomplete',
  );

  // Exported permission: 'use_search_api_live_results'.
  $permissions['use_search_api_live_results'] = array(
    'name' => 'use_search_api_live_results',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'agent' => 'agent',
    ),
    'module' => 'search_api_live_results',
  );

  return $permissions;
}

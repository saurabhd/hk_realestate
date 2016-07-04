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

  // Exported permission: 'create crm_core_activity entities of bundle email'.
  $permissions['create crm_core_activity entities of bundle email'] = array(
    'name' => 'create crm_core_activity entities of bundle email',
    'roles' => array(
      'agent' => 'agent',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle notes'.
  $permissions['create crm_core_activity entities of bundle notes'] = array(
    'name' => 'create crm_core_activity entities of bundle notes',
    'roles' => array(
      'agent' => 'agent',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle task'.
  $permissions['create crm_core_activity entities of bundle task'] = array(
    'name' => 'create crm_core_activity entities of bundle task',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete any crm_core_activity entity of bundle task'.
  $permissions['delete any crm_core_activity entity of bundle task'] = array(
    'name' => 'delete any crm_core_activity entity of bundle task',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete terms in meeting_type'.
  $permissions['delete terms in meeting_type'] = array(
    'name' => 'delete terms in meeting_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in task_type'.
  $permissions['delete terms in task_type'] = array(
    'name' => 'delete terms in task_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle email'.
  $permissions['edit any crm_core_activity entity of bundle email'] = array(
    'name' => 'edit any crm_core_activity entity of bundle email',
    'roles' => array(
      'agent' => 'agent',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle notes'.
  $permissions['edit any crm_core_activity entity of bundle notes'] = array(
    'name' => 'edit any crm_core_activity entity of bundle notes',
    'roles' => array(
      'agent' => 'agent',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle task'.
  $permissions['edit any crm_core_activity entity of bundle task'] = array(
    'name' => 'edit any crm_core_activity entity of bundle task',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit terms in meeting_type'.
  $permissions['edit terms in meeting_type'] = array(
    'name' => 'edit terms in meeting_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in task_type'.
  $permissions['edit terms in task_type'] = array(
    'name' => 'edit terms in task_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'merge meeting_type terms'.
  $permissions['merge meeting_type terms'] = array(
    'name' => 'merge meeting_type terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge task_type terms'.
  $permissions['merge task_type terms'] = array(
    'name' => 'merge task_type terms',
    'roles' => array(),
    'module' => 'term_merge',
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

  // Exported permission: 'use search_api_saved_searches'.
  $permissions['use search_api_saved_searches'] = array(
    'name' => 'use search_api_saved_searches',
    'roles' => array(
      'Buyer' => 'Buyer',
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'agent' => 'agent',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'Übersetzer' => 'Übersetzer',
      'Übersetzungsgeber' => 'Übersetzungsgeber',
    ),
    'module' => 'search_api_saved_searches',
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

  // Exported permission: 'view any crm_core_activity entity of bundle email'.
  $permissions['view any crm_core_activity entity of bundle email'] = array(
    'name' => 'view any crm_core_activity entity of bundle email',
    'roles' => array(
      'agent' => 'agent',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle notes'.
  $permissions['view any crm_core_activity entity of bundle notes'] = array(
    'name' => 'view any crm_core_activity entity of bundle notes',
    'roles' => array(
      'agent' => 'agent',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle task'.
  $permissions['view any crm_core_activity entity of bundle task'] = array(
    'name' => 'view any crm_core_activity entity of bundle task',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  return $permissions;
}

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

  return $permissions;
}

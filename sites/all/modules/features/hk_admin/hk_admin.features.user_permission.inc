<?php
/**
 * @file
 * hk_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hk_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'Übersetzer' => 'Übersetzer',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'agent' => 'agent',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'admin_menu',
  );

  return $permissions;
}

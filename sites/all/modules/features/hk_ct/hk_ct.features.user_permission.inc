<?php
/**
 * @file
 * hk_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hk_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'Übersetzer' => 'Übersetzer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'create apartment content'.
  $permissions['create apartment content'] = array(
    'name' => 'create apartment content',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create objekt content'.
  $permissions['create objekt content'] = array(
    'name' => 'create objekt content',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create oeffnungszeit content'.
  $permissions['create oeffnungszeit content'] = array(
    'name' => 'create oeffnungszeit content',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create referenz content'.
  $permissions['create referenz content'] = array(
    'name' => 'create referenz content',
    'roles' => array(
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any apartment content'.
  $permissions['delete any apartment content'] = array(
    'name' => 'delete any apartment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any expose content'.
  $permissions['delete any expose content'] = array(
    'name' => 'delete any expose content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any kartenmarker content'.
  $permissions['delete any kartenmarker content'] = array(
    'name' => 'delete any kartenmarker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any objekt content'.
  $permissions['delete any objekt content'] = array(
    'name' => 'delete any objekt content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any oeffnungszeit content'.
  $permissions['delete any oeffnungszeit content'] = array(
    'name' => 'delete any oeffnungszeit content',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any referenz content'.
  $permissions['delete any referenz content'] = array(
    'name' => 'delete any referenz content',
    'roles' => array(
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any apartment content'.
  $permissions['edit any apartment content'] = array(
    'name' => 'edit any apartment content',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any expose content'.
  $permissions['edit any expose content'] = array(
    'name' => 'edit any expose content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any kartenmarker content'.
  $permissions['edit any kartenmarker content'] = array(
    'name' => 'edit any kartenmarker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any objekt content'.
  $permissions['edit any objekt content'] = array(
    'name' => 'edit any objekt content',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any oeffnungszeit content'.
  $permissions['edit any oeffnungszeit content'] = array(
    'name' => 'edit any oeffnungszeit content',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any referenz content'.
  $permissions['edit any referenz content'] = array(
    'name' => 'edit any referenz content',
    'roles' => array(
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'node',
  );

  return $permissions;
}

<?php
/**
 * @file
 * hk_social_login.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hk_social_login_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Buyer' => 'Buyer',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create dokument content'.
  $permissions['create dokument content'] = array(
    'name' => 'create dokument content',
    'roles' => array(
      'Buyer' => 'Buyer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Buyer' => 'Buyer',
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Buyer' => 'Buyer',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own dokument content'.
  $permissions['delete own dokument content'] = array(
    'name' => 'delete own dokument content',
    'roles' => array(
      'Buyer' => 'Buyer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Buyer' => 'Buyer',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own dokument content'.
  $permissions['edit own dokument content'] = array(
    'name' => 'edit own dokument content',
    'roles' => array(
      'Buyer' => 'Buyer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use hybridauth'.
  $permissions['use hybridauth'] = array(
    'name' => 'use hybridauth',
    'roles' => array(
      'Buyer' => 'Buyer',
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'Übersetzer' => 'Übersetzer',
      'Übersetzungsgeber' => 'Übersetzungsgeber',
    ),
    'module' => 'hybridauth',
  );

  return $permissions;
}

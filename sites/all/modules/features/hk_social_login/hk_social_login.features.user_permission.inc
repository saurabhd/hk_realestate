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

  // Exported permission: 'create dokument content'.
  $permissions['create dokument content'] = array(
    'name' => 'create dokument content',
    'roles' => array(
      'Buyer' => 'Buyer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dokument content'.
  $permissions['delete own dokument content'] = array(
    'name' => 'delete own dokument content',
    'roles' => array(
      'Buyer' => 'Buyer',
    ),
    'module' => 'node',
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

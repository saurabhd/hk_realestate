<?php
/**
 * @file
 * hk_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hk_base_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 5,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: admintooluser.
  $roles['admintooluser'] = array(
    'name' => 'admintooluser',
    'weight' => 3,
  );

  return $roles;
}

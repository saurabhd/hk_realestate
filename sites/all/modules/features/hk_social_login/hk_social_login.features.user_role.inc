<?php
/**
 * @file
 * hk_social_login.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hk_social_login_user_default_roles() {
  $roles = array();

  // Exported role: Buyer.
  $roles['Buyer'] = array(
    'name' => 'Buyer',
    'weight' => 7,
  );

  return $roles;
}

<?php
/**
 * @file
 * hk_crm.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hk_crm_user_default_roles() {
  $roles = array();

  // Exported role: agent.
  $roles['agent'] = array(
    'name' => 'agent',
    'weight' => 8,
  );

  return $roles;
}

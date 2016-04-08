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

  // Exported permission: 'access crm_core_profile forms'.
  $permissions['access crm_core_profile forms'] = array(
    'name' => 'access crm_core_profile forms',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_profile',
  );

  // Exported permission: 'administer crm_core_contact entities'.
  $permissions['administer crm_core_contact entities'] = array(
    'name' => 'administer crm_core_contact entities',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_activity entities'.
  $permissions['create crm_core_activity entities'] = array(
    'name' => 'create crm_core_activity entities',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle anfrage'.
  $permissions['create crm_core_activity entities of bundle anfrage'] = array(
    'name' => 'create crm_core_activity entities of bundle anfrage',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle kontaktformular'.
  $permissions['create crm_core_activity entities of bundle kontaktformular'] = array(
    'name' => 'create crm_core_activity entities of bundle kontaktformular',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle meeting'.
  $permissions['create crm_core_activity entities of bundle meeting'] = array(
    'name' => 'create crm_core_activity entities of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_activity entities of bundle phone_call'.
  $permissions['create crm_core_activity entities of bundle phone_call'] = array(
    'name' => 'create crm_core_activity entities of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'create crm_core_contact entities'.
  $permissions['create crm_core_contact entities'] = array(
    'name' => 'create crm_core_contact entities',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle household'.
  $permissions['create crm_core_contact entities of bundle household'] = array(
    'name' => 'create crm_core_contact entities of bundle household',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle individual'.
  $permissions['create crm_core_contact entities of bundle individual'] = array(
    'name' => 'create crm_core_contact entities of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle mitarbeiter'.
  $permissions['create crm_core_contact entities of bundle mitarbeiter'] = array(
    'name' => 'create crm_core_contact entities of bundle mitarbeiter',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'create crm_core_contact entities of bundle organization'.
  $permissions['create crm_core_contact entities of bundle organization'] = array(
    'name' => 'create crm_core_contact entities of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_activity entity of bundle anfrage'.
  $permissions['delete any crm_core_activity entity of bundle anfrage'] = array(
    'name' => 'delete any crm_core_activity entity of bundle anfrage',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete any crm_core_activity entity of bundle kontaktformular'.
  $permissions['delete any crm_core_activity entity of bundle kontaktformular'] = array(
    'name' => 'delete any crm_core_activity entity of bundle kontaktformular',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete any crm_core_activity entity of bundle meeting'.
  $permissions['delete any crm_core_activity entity of bundle meeting'] = array(
    'name' => 'delete any crm_core_activity entity of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete any crm_core_activity entity of bundle phone_call'.
  $permissions['delete any crm_core_activity entity of bundle phone_call'] = array(
    'name' => 'delete any crm_core_activity entity of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle household'.
  $permissions['delete any crm_core_contact entity of bundle household'] = array(
    'name' => 'delete any crm_core_contact entity of bundle household',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle individual'.
  $permissions['delete any crm_core_contact entity of bundle individual'] = array(
    'name' => 'delete any crm_core_contact entity of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle mitarbeiter'.
  $permissions['delete any crm_core_contact entity of bundle mitarbeiter'] = array(
    'name' => 'delete any crm_core_contact entity of bundle mitarbeiter',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'delete any crm_core_contact entity of bundle organization'.
  $permissions['delete any crm_core_contact entity of bundle organization'] = array(
    'name' => 'delete any crm_core_contact entity of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_activity entity'.
  $permissions['edit any crm_core_activity entity'] = array(
    'name' => 'edit any crm_core_activity entity',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle anfrage'.
  $permissions['edit any crm_core_activity entity of bundle anfrage'] = array(
    'name' => 'edit any crm_core_activity entity of bundle anfrage',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle kontaktformular'.
  $permissions['edit any crm_core_activity entity of bundle kontaktformular'] = array(
    'name' => 'edit any crm_core_activity entity of bundle kontaktformular',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle meeting'.
  $permissions['edit any crm_core_activity entity of bundle meeting'] = array(
    'name' => 'edit any crm_core_activity entity of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_activity entity of bundle phone_call'.
  $permissions['edit any crm_core_activity entity of bundle phone_call'] = array(
    'name' => 'edit any crm_core_activity entity of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'edit any crm_core_contact entity'.
  $permissions['edit any crm_core_contact entity'] = array(
    'name' => 'edit any crm_core_contact entity',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle household'.
  $permissions['edit any crm_core_contact entity of bundle household'] = array(
    'name' => 'edit any crm_core_contact entity of bundle household',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle individual'.
  $permissions['edit any crm_core_contact entity of bundle individual'] = array(
    'name' => 'edit any crm_core_contact entity of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle mitarbeiter'.
  $permissions['edit any crm_core_contact entity of bundle mitarbeiter'] = array(
    'name' => 'edit any crm_core_contact entity of bundle mitarbeiter',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'edit any crm_core_contact entity of bundle organization'.
  $permissions['edit any crm_core_contact entity of bundle organization'] = array(
    'name' => 'edit any crm_core_contact entity of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
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

  // Exported permission: 'view any crm_core_activity entity'.
  $permissions['view any crm_core_activity entity'] = array(
    'name' => 'view any crm_core_activity entity',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle anfrage'.
  $permissions['view any crm_core_activity entity of bundle anfrage'] = array(
    'name' => 'view any crm_core_activity entity of bundle anfrage',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle kontaktformular'.
  $permissions['view any crm_core_activity entity of bundle kontaktformular'] = array(
    'name' => 'view any crm_core_activity entity of bundle kontaktformular',
    'roles' => array(),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle meeting'.
  $permissions['view any crm_core_activity entity of bundle meeting'] = array(
    'name' => 'view any crm_core_activity entity of bundle meeting',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_activity entity of bundle phone_call'.
  $permissions['view any crm_core_activity entity of bundle phone_call'] = array(
    'name' => 'view any crm_core_activity entity of bundle phone_call',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_activity',
  );

  // Exported permission: 'view any crm_core_contact entity'.
  $permissions['view any crm_core_contact entity'] = array(
    'name' => 'view any crm_core_contact entity',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle household'.
  $permissions['view any crm_core_contact entity of bundle household'] = array(
    'name' => 'view any crm_core_contact entity of bundle household',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle individual'.
  $permissions['view any crm_core_contact entity of bundle individual'] = array(
    'name' => 'view any crm_core_contact entity of bundle individual',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle mitarbeiter'.
  $permissions['view any crm_core_contact entity of bundle mitarbeiter'] = array(
    'name' => 'view any crm_core_contact entity of bundle mitarbeiter',
    'roles' => array(),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view any crm_core_contact entity of bundle organization'.
  $permissions['view any crm_core_contact entity of bundle organization'] = array(
    'name' => 'view any crm_core_contact entity of bundle organization',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'crm_core_contact',
  );

  // Exported permission: 'view crm dashboard'.
  $permissions['view crm dashboard'] = array(
    'name' => 'view crm dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_ui',
  );

  // Exported permission: 'view match information'.
  $permissions['view match information'] = array(
    'name' => 'view match information',
    'roles' => array(
      'administrator' => 'administrator',
      'admintooluser' => 'admintooluser',
    ),
    'module' => 'crm_core_match',
  );

  return $permissions;
}

<?php
/**
 * @file
 * hk_social_login.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hk_social_login_default_rules_configuration() {
  $items = array();
  $items['rules_create_contact_when_user_register_using_hybridauth'] = entity_import('rules_config', '{ "rules_create_contact_when_user_register_using_hybridauth" : {
      "LABEL" : "Create contact when user register using hybridauth",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "hybridauth", "php", "rules" ],
      "ON" : { "hybridauth_user_insert" : [] },
      "IF" : [
        { "hybridauth_user_created_hybridauth" : { "account" : [ "site:current-user" ] } }
      ],
      "DO" : [
        { "php_eval" : { "code" : "\\u003C?php\\r\\n  \\/\\/ Create a contact\\r\\n  $contact = entity_create(\\u0027crm_core_contact\\u0027, array(\\u0027type\\u0027 =\\u003E \\u0027individual\\u0027));\\r\\n  $contact-\\u003Euid = $hybridauth_user-\\u003Euid;\\r\\n  $contact_name = field_info_instance(\\u0027crm_core_contact\\u0027, \\u0027contact_name\\u0027, \\u0027individual\\u0027);\\r\\n  $contact-\\u003Econtact_name[LANGUAGE_NONE][0] = array(\\r\\n    \\u0027title\\u0027 =\\u003E \\u0027\\u0027,\\r\\n    \\u0027family\\u0027 =\\u003E $hybridauth_user-\\u003Edata[\\u0027hybridauth\\u0027][\\u0027lastName\\u0027],\\r\\n    \\u0027generational\\u0027 =\\u003E \\u0027\\u0027,\\r\\n    \\u0027credentials\\u0027 =\\u003E \\u0027\\u0027,\\r\\n    \\u0027given\\u0027 =\\u003E $hybridauth_user-\\u003Edata[\\u0027hybridauth\\u0027][\\u0027firstName\\u0027],\\r\\n  );\\r\\n  $contact-\\u003Efield_e_mail[LANGUAGE_NONE][0][\\u0027email\\u0027] = $hybridauth_user-\\u003Email;\\r\\n  $contents = file_get_contents($hybridauth_user-\\u003Edata[\\u0027hybridauth\\u0027][\\u0027photoURL\\u0027]);\\r\\n  $file = file_save_data($contents);\\r\\n  $contact-\\u003Efield_profile_picture[LANGUAGE_NONE][0] = (array)$file;\\r\\n  crm_core_contact_save($contact);\\r\\n  \\/\\/$entity = entity_load(\\u0027crm_core_contact\\u0027, array($contact-\\u003Econtact_id));\\r\\n\\r\\n  \\/\\/ Create the relation\\r\\n  $endpoints = array(\\r\\n    array(\\r\\n      \\u0027entity_type\\u0027 =\\u003E \\u0027user\\u0027,\\r\\n      \\u0027entity_bundle\\u0027 =\\u003E \\u0027user\\u0027,\\r\\n      \\u0027entity_id\\u0027 =\\u003E $hybridauth_user-\\u003Euid,\\r\\n    ),\\r\\n    array(\\r\\n      \\u0027entity_type\\u0027 =\\u003E \\u0027crm_core_contact\\u0027,\\r\\n      \\u0027entity_bundle\\u0027 =\\u003E \\u0027individual\\u0027,\\r\\n      \\u0027entity_id\\u0027 =\\u003E $contact-\\u003Econtact_id,\\r\\n    ),\\r\\n  );\\r\\n  $relation = relation_create(\\u0027crm_core_user_sync\\u0027, $endpoints);\\r\\n  $rid = relation_save($relation);\\r\\n?\\u003E" } }
      ]
    }
  }');
  $items['rules_set_user_role_when_user_register_through_hybridauth'] = entity_import('rules_config', '{ "rules_set_user_role_when_user_register_through_hybridauth" : {
      "LABEL" : "Set user role when user register through hybridauth",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "hybridauth" ],
      "ON" : { "hybridauth_user_insert" : [] },
      "DO" : [
        { "user_add_role" : {
            "account" : [ "hybridauth-user" ],
            "roles" : { "value" : { "8" : "8" } }
          }
        }
      ]
    }
  }');
  return $items;
}

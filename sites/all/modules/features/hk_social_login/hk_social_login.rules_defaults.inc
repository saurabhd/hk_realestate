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

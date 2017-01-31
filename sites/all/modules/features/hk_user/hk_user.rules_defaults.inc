<?php
/**
 * @file
 * hk_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hk_user_default_rules_configuration() {
  $items = array();
  $items['rules_after_login_redirect_buyer_user_to_user_page'] = entity_import('rules_config', '{ "rules_after_login_redirect_buyer_user_to_user_page" : {
      "LABEL" : "After login redirect buyer user to user page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "hybridauth", "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT hybridauth_user_created_hybridauth" : { "account" : [ "account" ] } }
      ],
      "DO" : [ { "redirect" : { "url" : "user" } } ]
    }
  }');
  $items['rules_after_registration_assign_buyer_role_to_user'] = entity_import('rules_config', '{ "rules_after_registration_assign_buyer_role_to_user" : {
      "LABEL" : "After registration assign buyer role to user",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "data_set" : { "data" : [ "account:roles" ], "value" : { "value" : { "8" : "8" } } } }
      ]
    }
  }');
  return $items;
}

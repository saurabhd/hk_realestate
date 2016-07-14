<?php
/**
 * @file
 * hk_crm.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hk_crm_default_rules_configuration() {
  $items = array();
  $items['rules_after_login_agent_role_redirect_to_search_page'] = entity_import('rules_config', '{ "rules_after_login_agent_role_redirect_to_search_page" : {
      "LABEL" : "After login agent role redirect to search page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "9" : "9" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "\\/search" } } ]
    }
  }');
  $items['rules_anfrage_status_change'] = entity_import('rules_config', '{ "rules_anfrage_status_change" : {
      "LABEL" : "anfrage status change",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "activity" : { "label" : "acivity", "type" : "crm_core_activity" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "activity" ],
            "type" : "crm_core_activity",
            "bundle" : { "value" : { "anfrage" : "anfrage", "kontaktformular" : "kontaktformular" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "activity:field-activity-status" ],
            "value" : "In Bearbeitung"
          }
        }
      ]
    }
  }');
  $items['rules_change_activity_status'] = entity_import('rules_config', '{ "rules_change_activity_status" : {
      "LABEL" : "change activity status",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "OR" : [
            { "data_is" : { "data" : [ "crm-core-activity:type" ], "value" : "phone_call" } },
            { "data_is" : { "data" : [ "crm-core-activity:type" ], "value" : "email" } },
            { "data_is" : { "data" : [ "crm-core-activity:type" ], "value" : "notes" } }
          ]
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "crm_core_activity",
              "id" : [ "crm-core-activity:field-inquiry:activity-id" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "component_rules_anfrage_status_change" : { "activity" : [ "entity-fetched" ] } },
        { "entity_fetch" : {
            "USING" : {
              "type" : "crm_core_contact",
              "id" : [ "crm-core-activity:field-participants:0:contact-id" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched_contact_id" : "Fetched entity" } }
          }
        },
        { "component_rules_set_responsible_agent_to_contact" : { "contact" : [ "entity-fetched-contact-id" ] } }
      ]
    }
  }');
  $items['rules_set_responsible_agent_to_contact'] = entity_import('rules_config', '{ "rules_set_responsible_agent_to_contact" : {
      "LABEL" : "Set responsible agent to contact",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "contact" : { "label" : "cotact", "type" : "crm_core_contact" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "contact" ],
            "type" : "crm_core_contact",
            "bundle" : { "value" : { "individual" : "individual" } }
          }
        },
        { "data_is_empty" : { "data" : [ "contact:field-responsible-agent" ] } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "contact:field-responsible-agent" ],
            "value" : [ "site:current-user:relation-crm-core-user-sync-crm-core-contact:0" ]
          }
        }
      ]
    }
  }');
  return $items;
}

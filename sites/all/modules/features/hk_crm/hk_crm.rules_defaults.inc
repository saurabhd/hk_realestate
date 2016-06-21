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
            "bundle" : { "value" : { "anfrage" : "anfrage" } }
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
        { "component_rules_anfrage_status_change" : { "activity" : [ "entity-fetched" ] } }
      ]
    }
  }');
  return $items;
}

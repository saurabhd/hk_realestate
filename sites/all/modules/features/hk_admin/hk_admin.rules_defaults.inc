<?php
/**
 * @file
 * hk_admin.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hk_admin_default_rules_configuration() {
  $items = array();
  $items['rules_wenn_workflow_status_nicht_aktiv_setze_auf_unpublished'] = entity_import('rules_config', '{ "rules_wenn_workflow_status_nicht_aktiv_setze_auf_unpublished" : {
      "LABEL" : "Wenn Workflow Status nicht aktiv, setze auf unpublished",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "objekt" : "objekt", "apartment" : "apartment" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_save_workflow" } },
        { "text_matches" : {
            "text" : [ "node:field-save-workflow:value" ],
            "match" : "(Draft|Ready|Archived|Sold)",
            "operation" : "regex"
          }
        }
      ],
      "DO" : [ { "data_set" : { "data" : [ "node:status" ], "value" : "0" } } ]
    }
  }');
  return $items;
}

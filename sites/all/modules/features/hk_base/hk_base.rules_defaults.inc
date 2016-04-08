<?php
/**
 * @file
 * hk_base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hk_base_default_rules_configuration() {
  $items = array();
  $items['rules_verschicke_mail_an_ilka_wenn_fertig_zur_ver_ffentlichung'] = entity_import('rules_config', '{ "rules_verschicke_mail_an_ilka_wenn_fertig_zur_ver_ffentlichung" : {
      "LABEL" : "Verschicke Mail an Ilka, wenn fertig zur Ver\\u00f6ffentlichung",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_i18n", "workflow" ],
      "ON" : { "WorkflowState_insert" : [], "WorkflowState_update" : [] },
      "IF" : [ { "data_is" : { "data" : [ "WorkflowState" ], "value" : "3" } } ],
      "DO" : [
        { "mail" : {
            "to" : "rhalbmann@gmail.com",
            "subject" : "Neues Objekt fertig zur Ver\\u00f6ffentlichung",
            "message" : "Bitte logge ich bald ein, um das Objekt zu ver\\u00f6ffetnlichen. ",
            "from" : "office@herbert-kohlmeyer.de",
            "language" : [ "site:current-page:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_wenn_node_neu_erstellt_oder_bearbeitet_wurde'] = entity_import('rules_config', '{ "rules_wenn_node_neu_erstellt_oder_bearbeitet_wurde" : {
      "LABEL" : "Wenn Node neu erstellt oder bearbeitet wurde",
      "PLUGIN" : "or",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "OR" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "apartment" : "apartment" } }
          }
        }
      ]
    }
  }');
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

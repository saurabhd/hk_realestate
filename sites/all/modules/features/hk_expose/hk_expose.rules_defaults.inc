<?php
/**
 * @file
 * hk_expose.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hk_expose_default_rules_configuration() {
  $items = array();
  $items['rules_create_pdf_expose'] = entity_import('rules_config', '{ "rules_create_pdf_expose" : {
      "LABEL" : "Create PDF Expos\\u00e9",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "custom" ],
      "REQUIRES" : [ "rules", "rules_download" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_apart_expose" } },
        { "node_is_published" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "rules_download_action_generate_path" : {
            "USING" : {
              "path" : "printpdf\\/node\\/[node:nid]\\/expose",
              "cookie" : "1",
              "uri_scheme" : "public",
              "file_directory" : "exposes",
              "temporary" : "0"
            },
            "PROVIDE" : { "rules_download_file" : { "rules_downloaded_expose" : "Downloaded Expos\\u00e9" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-apart-expose:file" ],
            "value" : [ "rules-downloaded-expose" ]
          }
        },
        { "entity_save" : { "data" : [ "node" ] } },
        { "drupal_message" : {
            "message" : "Expos\\u00e9 \\u003Ca href=\\u0022[rules-downloaded-expose:download-url]\\u0022\\u003E[rules-downloaded-expose:name]\\u003C\\/a\\u003E ist erstellt worden.",
            "repeat" : "0"
          }
        }
      ]
    }
  }');
  $items['rules_create_pdf_expose_when_object_or_apart_changed'] = entity_import('rules_config', '{ "rules_create_pdf_expose_when_object_or_apart_changed" : {
      "LABEL" : "Create PDF Expos\\u00e9 when object or apart changed",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "custom" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "apartment" : "apartment" } }
          }
        },
        { "data_is" : {
            "data" : [ "node:field-save-workflow:value" ],
            "op" : "\\u003C",
            "value" : "6"
          }
        }
      ],
      "DO" : [ { "component_rules_create_pdf_expose" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}

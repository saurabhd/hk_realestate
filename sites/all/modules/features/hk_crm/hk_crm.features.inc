<?php
/**
 * @file
 * hk_crm.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function hk_crm_default_crm_core_activity_type() {
  $items = array();
  $items['email'] = entity_import('crm_core_activity_type', '{
    "type" : "email",
    "label" : "Email",
    "weight" : 0,
    "activity_string" : "",
    "description" : ""
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_crm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_crm_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function hk_crm_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_page_contact_search_box'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_page_contact_search_box",
    "name" : "Contact Search Box",
    "index_id" : "crm_contacts",
    "suggester_id" : "server",
    "type" : "search_api_page",
    "enabled" : "1",
    "options" : {
      "suggester_configuration" : { "fields" : [ "contact_name:family", "contact_name:given" ] },
      "min_length" : "1",
      "results" : 1,
      "submit_button_selector" : ":submit",
      "autosubmit" : 1,
      "custom" : { "page_id" : "contact_search_box" }
    }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function hk_crm_default_search_api_index() {
  $items = array();
  $items['crm_contacts'] = entity_import('search_api_index', '{
    "name" : "CRM Contacts",
    "machine_name" : "crm_contacts",
    "description" : null,
    "server" : "solr",
    "item_type" : "crm_core_contact",
    "options" : {
      "datasource" : { "bundles" : [ "individual", "mitarbeiter" ] },
      "fields" : {
        "contact_name:family" : { "type" : "text" },
        "contact_name:given" : { "type" : "text" },
        "field_e_mail" : { "type" : "text" },
        "field_phone" : { "type" : "text" },
        "name" : { "type" : "text" },
        "primary_email" : { "type" : "text" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : [] },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "name" : true,
              "contact_name:given" : true,
              "contact_name:family" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "name" : true,
              "contact_name:given" : true,
              "contact_name:family" : true
            },
            "title" : 1,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : {
              "name" : true,
              "contact_name:given" : true,
              "contact_name:family" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "name" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "name" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_live_results_search().
 */
function hk_crm_default_search_api_live_results_search() {
  $items = array();
  $items['search_api_page_1'] = entity_import('search_api_live_results_search', '{
    "machine_name" : "search_api_page_1",
    "name" : "Contact Search Box",
    "index_id" : "crm_contacts",
    "type" : "search_api_page",
    "enabled" : "1",
    "options" : {
      "custom" : { "page_id" : "1" },
      "result count" : true,
      "num_results" : "5",
      "display" : "view_mode",
      "caching" : 0,
      "entity_type" : "crm_core_contact"
    }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function hk_crm_default_search_api_page() {
  $items = array();
  $items['contact_search_box'] = entity_import('search_api_page', '{
    "index_id" : "crm_contacts",
    "path" : "search",
    "name" : "Contact Search Box",
    "machine_name" : "contact_search_box",
    "description" : "",
    "options" : {
      "mode" : "terms",
      "fields" : [],
      "per_page" : "10",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "live_results_search",
      "language_filter" : [],
      "empty_behavior" : ""
    },
    "enabled" : "1"
  }');
  return $items;
}

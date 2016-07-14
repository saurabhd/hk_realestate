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
  $items['anfrage'] = entity_import('crm_core_activity_type', '{
    "type" : "anfrage",
    "label" : "Anfrage",
    "weight" : 0,
    "activity_string" : "Eine Anfrage wurde gestellt",
    "description" : "jede Anfrage muss einem Makler zugeordnet werden und so schnell wie m\\u00f6glich bearneitet."
  }');
  $items['email'] = entity_import('crm_core_activity_type', '{
    "type" : "email",
    "label" : "E-Mail",
    "weight" : 0,
    "activity_string" : "",
    "description" : ""
  }');
  $items['kontaktformular'] = entity_import('crm_core_activity_type', '{
    "type" : "kontaktformular",
    "label" : "Kontaktformular",
    "weight" : 0,
    "activity_string" : "Jemand hat das Kontaktformular ausgef\\u00fcllt.",
    "description" : ""
  }');
  $items['meeting'] = entity_import('crm_core_activity_type', '{
    "type" : "meeting",
    "label" : "Termin",
    "weight" : 0,
    "activity_string" : "",
    "description" : "A meeting between 2 or more contacts"
  }');
  $items['notes'] = entity_import('crm_core_activity_type', '{
    "type" : "notes",
    "label" : "Notiz",
    "weight" : 0,
    "activity_string" : "",
    "description" : ""
  }');
  $items['phone_call'] = entity_import('crm_core_activity_type', '{
    "type" : "phone_call",
    "label" : "Anruf",
    "weight" : 0,
    "activity_string" : "",
    "description" : "A phone call between 2 or more contacts"
  }');
  $items['task'] = entity_import('crm_core_activity_type', '{
    "type" : "task",
    "label" : "To-do",
    "weight" : 0,
    "activity_string" : "An agent created a task",
    "description" : "Agents can create tasks to fill their personal to-do list on the agent central view."
  }');
  return $items;
}

/**
 * Implements hook_default_crm_core_contact_type().
 */
function hk_crm_default_crm_core_contact_type() {
  $items = array();
  $items['household'] = entity_import('crm_core_contact_type', '{
    "type" : "household",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Household",
    "description" : "A collection of individuals generally located at the same residence.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1"
  }');
  $items['individual'] = entity_import('crm_core_contact_type', '{
    "type" : "individual",
    "label" : null,
    "weight" : 0,
    "primary_fields" : {
      "email" : "field_e_mail",
      "address" : "field_crm_address",
      "phone" : "field_phone"
    },
    "name" : "Kontakt",
    "description" : "Ein individueller Kontakt. Kann weiter als Kunde, Makler, Gesch\\u00e4ftspartner etc. klassifiziert werden.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1"
  }');
  $items['organization'] = entity_import('crm_core_contact_type', '{
    "type" : "organization",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Organization",
    "description" : "A collection of individuals or other organizations that has additional contact data.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1"
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
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
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
 * Implements hook_flag_default_flags().
 */
function hk_crm_flag_default_flags() {
  $flags = array();
  // Exported flag: "Completed".
  $flags['completed'] = array(
    'entity_type' => 'crm_core_activity',
    'title' => 'Completed',
    'global' => 0,
    'types' => array(
      0 => 'task',
    ),
    'flag_short' => 'Mark as completed',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Mark as uncompleted',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
      'live_results_search' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'hk_crm',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

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
      "index_directly" : 1,
      "cron_limit" : "50",
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
  $items['search_api_page_2'] = entity_import('search_api_live_results_search', '{
    "machine_name" : "search_api_page_2",
    "name" : "Dashboard",
    "index_id" : "crm_contacts",
    "type" : "search_api_page",
    "enabled" : "1",
    "options" : {
      "custom" : { "page_id" : "2" },
      "result count" : true,
      "num_results" : "5",
      "display" : "view_mode",
      "caching" : 0,
      "entity_type" : "crm_core_contact"
    }
  }');
  $items['search_api_page_3'] = entity_import('search_api_live_results_search', '{
    "machine_name" : "search_api_page_3",
    "name" : "Dashboard",
    "index_id" : "crm_contacts",
    "type" : "search_api_page",
    "enabled" : "1",
    "options" : {
      "custom" : { "page_id" : "3" },
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
    "name" : "Dashboard",
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

/**
 * Implements hook_default_search_api_saved_searches_settings().
 */
function hk_crm_default_search_api_saved_searches_settings() {
  $items = array();
  $items['solr_node_index'] = entity_import('search_api_saved_searches_settings', '{
    "delta" : "solr_node_index",
    "index_id" : "solr_node_index",
    "enabled" : "1",
    "options" : {
      "date_field" : "",
      "description" : "",
      "registered_choose_mail" : 0,
      "choose_name" : 0,
      "registered_user_delete_key" : 0,
      "show_empty_list" : 1,
      "default_true" : true,
      "ids_list" : [],
      "user_select_interval" : 0,
      "interval_options" : { "86400" : "Daily", "604800" : "Weekly" },
      "set_interval" : "86400",
      "mail" : {
        "activate" : {
          "send" : 0,
          "title" : "Activate your saved search at [site:name]",
          "body" : "A saved search on [site:name] with this e-mail address was created.\\r\\nTo activate this saved search, click the following link:\\r\\n\\r\\n[search-api-saved-search:activate-url]\\r\\n\\r\\nIf you didn\\u0027t create this saved search, just ignore this mail and it will be deleted.\\r\\n\\r\\n--  [site:name] team"
        },
        "notify" : {
          "title" : "New results for your saved search at [site:name]",
          "body" : "[user:name],\\r\\n\\r\\nThere are new results for your saved search on [site:name]:\\r\\n\\r\\n[search-api-saved-searches:results]\\r\\n\\r\\nYou can configure your saved searches at the following address:\\r\\n[user:search-api-saved-searches-url]\\r\\n\\r\\n--  [site:name] team",
          "results" : "New results for search \\u0022[search-api-saved-search:name]\\u0022:\\r\\n[search-api-saved-search:items]\\r\\n[search-api-saved-search:results-capped]",
          "result" : "[search-api-saved-search-result:label] ([search-api-saved-search-result:url])",
          "max_results" : "0",
          "results_capped" : "\\u2026\\r\\nView all results: [search-api-saved-search:view-url]"
        }
      },
      "manual" : {
        "allow" : 1,
        "fulltext" : 0,
        "fields" : [
          "field_save_workflow",
          "field_apart_price",
          "field_bezirk",
          "field_kategorie",
          "field_moving_in_from",
          "field_apart_bathrooms",
          "field_apart_floor",
          "field_apart_living_space",
          "field_apart_rooms",
          "field_apart_sleeping_rooms",
          "field_apart_type",
          "field_ausstattung",
          "field_status_quo"
        ],
        "page" : { "path" : "", "fulltext" : "", "direct_filter_params" : "0" }
      }
    }
  }');
  return $items;
}

<?php
/**
 * @file
 * hk_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function hk_search_default_search_api_index() {
  $items = array();
  $items['solr_node_index'] = entity_import('search_api_index', '{
    "name" : "Solr Node Index",
    "machine_name" : "solr_node_index",
    "description" : null,
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "field_apart_living_space" : { "type" : "decimal" },
        "field_apart_no" : { "type" : "text" },
        "field_apart_price" : { "type" : "decimal" },
        "field_apart_rooms" : { "type" : "integer" },
        "field_bezirk" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_kategorie" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_obj_schattenobjekt" : { "type" : "string" },
        "field_object_ref:field_address:locality" : { "type" : "text" },
        "field_object_ref:field_address:postal_code" : { "type" : "text" },
        "field_object_ref:field_address:thoroughfare" : { "type" : "text" },
        "field_object_ref:field_obj_apartments" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_object_ref:field_obj_apartments:field_obj_apartments" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_object_ref:field_obj_apartments:field_obj_schattenobjekt" : { "type" : "list\\u003Cstring\\u003E" },
        "field_object_ref:field_obj_apartments:field_save_workflow" : { "type" : "list\\u003Cstring\\u003E" },
        "field_object_ref:field_obj_apartments:nid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_object_ref:field_obj_apartments:status" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_object_ref:field_obj_schattenobjekt" : { "type" : "string" },
        "field_object_ref:field_object_images:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_object_ref:field_object_images:file:fid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_object_ref:field_object_images:file:field_file_image_alt_text" : { "type" : "list\\u003Ctext\\u003E" },
        "field_object_ref:field_object_images:file:field_file_image_title_text" : { "type" : "list\\u003Ctext\\u003E" },
        "field_object_ref:field_object_images:file:mime" : { "type" : "list\\u003Ctext\\u003E" },
        "field_object_ref:field_object_images:file:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_object_ref:field_object_images:file:size" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_object_ref:field_object_images:file:type" : { "type" : "list\\u003Cstring\\u003E" },
        "field_object_ref:field_object_images:file:url" : { "type" : "list\\u003Ctext\\u003E" },
        "field_object_ref:field_object_text_schattenobjekt" : { "type" : "text" },
        "field_object_ref:field_object_txt_map_popup:value" : { "type" : "text" },
        "field_object_ref:field_objekt_wkt:geom" : { "type" : "string" },
        "field_object_ref:field_objektid_nunumeric" : { "type" : "text" },
        "field_object_ref:field_save_workflow" : { "type" : "string" },
        "field_object_ref:language" : { "type" : "string" },
        "field_object_ref:nid" : { "type" : "integer" },
        "field_object_ref:status" : { "type" : "integer" },
        "field_object_ref:title_field" : { "type" : "text" },
        "field_save_workflow" : { "type" : "string" },
        "is_new" : { "type" : "boolean" },
        "language" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "apartment" : "apartment" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "lang_field" : "language",
            "languages" : { "de" : "de", "en" : "en", "zh-hans" : "zh-hans" }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "map_popup" } }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : { "status" : 0, "weight" : "15", "settings" : { "fields" : [] } },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
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
 * Implements hook_default_search_api_server().
 */
function hk_search_default_search_api_server() {
  $items = array();
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "SOLR",
    "machine_name" : "solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "127.0.0.1",
      "port" : "8099",
      "path" : "\\/solr\\/d41d8cd98f00b204e9800998ecf8427e.herbert-kohlmeyer.de.o4507778742",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1"
  }');
  return $items;
}

<?php
/**
 * @file
 * hk_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function hk_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_node_index::field_apart_living_space';
  $facet->searcher = 'search_api@solr_node_index';
  $facet->realm = '';
  $facet->facet = 'field_apart_living_space';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
      'reverse_dependency' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 1,
    'default_true' => '0',
    'facet_search_ids' => array(
      'search_api_views:karten:kaufen' => 'search_api_views:karten:kaufen',
      'search_api_views:karten:map_page' => 'search_api_views:karten:map_page',
      'search_api_views:karten:mieten' => 'search_api_views:karten:mieten',
      'search_api_views:karten:freehold' => 'search_api_views:karten:freehold',
      'search_api_views:karten:invest' => 'search_api_views:karten:invest',
      'search_api_views:karten:commercial' => 'search_api_views:karten:commercial',
    ),
    'exclude' => 0,
    'pretty_paths_alias' => 'living_space',
  );
  $export['search_api@solr_node_index::field_apart_living_space'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_node_index::field_apart_price';
  $facet->searcher = 'search_api@solr_node_index';
  $facet->realm = '';
  $facet->facet = 'field_apart_price';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        4 => 0,
        6 => 0,
        5 => 0,
        7 => 0,
        3 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'page' => 0,
        'buero' => 0,
        'efh' => 0,
        'einzelwohnung' => 0,
        'news' => 0,
        'objekt' => 0,
        'residential_commercial_building' => 0,
        'slideshow' => 0,
        'webform' => 0,
        'wohnung' => 0,
        'wohnungsanfrage' => 0,
        'apartment' => 0,
      ),
      'facets' => array(
        'field_apart_rooms' => 0,
        'field_apart_living_space' => 0,
        'field_objekt_ref:field_h_etagen' => 0,
        'field_objekt_ref:field_bezirk' => 0,
        'field_apart_category' => 0,
        'field_ausstattung' => 0,
        'field_zustand' => 0,
        'field_etagenzahl' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_apart_rooms' => '',
      'facet_items_field_apart_living_space' => '',
      'facet_items_field_objekt_ref:field_h_etagen' => '',
      'facet_items_field_objekt_ref:field_bezirk' => '',
      'facet_items_field_apart_category' => '',
      'facet_items_field_ausstattung' => '',
      'facet_items_field_zustand' => '',
      'facet_items_field_etagenzahl' => '',
      'reverse_dependency' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 1,
    'default_true' => '0',
    'facet_search_ids' => array(
      'search_api_views:karten:kaufen' => 'search_api_views:karten:kaufen',
      'search_api_views:karten:map_page' => 'search_api_views:karten:map_page',
      'search_api_views:karten:mieten' => 'search_api_views:karten:mieten',
      'search_api_views:karten:freehold' => 'search_api_views:karten:freehold',
      'search_api_views:karten:invest' => 'search_api_views:karten:invest',
      'search_api_views:karten:commercial' => 'search_api_views:karten:commercial',
    ),
    'exclude' => 0,
    'pretty_paths_alias' => 'price',
  );
  $export['search_api@solr_node_index::field_apart_price'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_node_index::field_apart_rooms';
  $facet->searcher = 'search_api@solr_node_index';
  $facet->realm = '';
  $facet->facet = 'field_apart_rooms';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        4 => 0,
        6 => 0,
        5 => 0,
        7 => 0,
        3 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'page' => 0,
        'buero' => 0,
        'efh' => 0,
        'einzelwohnung' => 0,
        'news' => 0,
        'objekt' => 0,
        'residential_commercial_building' => 0,
        'slideshow' => 0,
        'webform' => 0,
        'wohnung' => 0,
        'wohnungsanfrage' => 0,
        'apartment' => 0,
      ),
      'facets' => array(
        'field_apart_living_space' => 0,
        'field_apart_price' => 0,
        'field_objekt_ref:field_bezirk' => 0,
        'field_apart_category' => 0,
        'field_zustand' => 0,
        'field_etagenzahl' => 0,
      ),
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_apart_living_space' => '',
      'facet_items_field_apart_price' => '',
      'facet_items_field_objekt_ref:field_bezirk' => '',
      'facet_items_field_apart_category' => '',
      'facet_items_field_zustand' => '',
      'facet_items_field_etagenzahl' => '',
      'reverse_dependency' => FALSE,
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 1,
    'default_true' => '0',
    'facet_search_ids' => array(
      'search_api_views:karten:kaufen' => 'search_api_views:karten:kaufen',
      'search_api_views:karten:map_page' => 'search_api_views:karten:map_page',
      'search_api_views:karten:mieten' => 'search_api_views:karten:mieten',
      'search_api_views:karten:freehold' => 'search_api_views:karten:freehold',
      'search_api_views:karten:invest' => 'search_api_views:karten:invest',
      'search_api_views:karten:commercial' => 'search_api_views:karten:commercial',
    ),
    'exclude' => 0,
    'pretty_paths_alias' => 'rooms',
  );
  $export['search_api@solr_node_index::field_apart_rooms'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_node_index::field_bezirk';
  $facet->searcher = 'search_api@solr_node_index';
  $facet->realm = '';
  $facet->facet = 'field_bezirk';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'page' => 0,
        'objekt' => 0,
        'apartment' => 0,
      ),
      'facets' => array(
        'field_apart_rooms' => 0,
        'field_apart_living_space' => 0,
        'field_apart_price' => 0,
        'field_kategorie' => 0,
      ),
      'reverse_dependency' => 0,
      'force_deactivation' => 1,
      'regex' => 0,
      'facet_items_field_apart_rooms' => '',
      'facet_items_field_apart_living_space' => '',
      'facet_items_field_apart_price' => '',
      'facet_items_field_kategorie' => '',
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 1,
    'default_true' => '0',
    'facet_search_ids' => array(
      'search_api_views:karten:kaufen' => 'search_api_views:karten:kaufen',
      'search_api_views:karten:map_page' => 'search_api_views:karten:map_page',
      'search_api_views:karten:mieten' => 'search_api_views:karten:mieten',
      'search_api_views:karten:freehold' => 'search_api_views:karten:freehold',
      'search_api_views:karten:invest' => 'search_api_views:karten:invest',
      'search_api_views:karten:commercial' => 'search_api_views:karten:commercial',
    ),
    'exclude' => 0,
  );
  $export['search_api@solr_node_index::field_bezirk'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@solr_node_index::field_kategorie';
  $facet->searcher = 'search_api@solr_node_index';
  $facet->realm = '';
  $facet->facet = 'field_kategorie';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'facets' => array(),
      'reverse_dependency' => FALSE,
      'force_deactivation' => TRUE,
      'regex' => FALSE,
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 1,
    'default_true' => '0',
    'facet_search_ids' => array(
      'search_api_views:karten:kaufen' => 'search_api_views:karten:kaufen',
      'search_api_views:karten:map_page' => 'search_api_views:karten:map_page',
      'search_api_views:karten:mieten' => 'search_api_views:karten:mieten',
    ),
    'exclude' => 0,
  );
  $export['search_api@solr_node_index::field_kategorie'] = $facet;

  return $export;
}

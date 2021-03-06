<?php
/**
 * @file
 * hk_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hk_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@solr_node_index';
  $strongarm->value = '6';
  $export['facetapi:block_cache:search_api@solr_node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:translator_module';
  $strongarm->value = 'facetapi_i18n';
  $export['facetapi:translator_module'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@solr_node_index';
  $strongarm->value = 0;
  $export['facetapi_pretty_paths_searcher_search_api@solr_node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@solr_node_index_options';
  $strongarm->value = array(
    'sort_path_segments' => 0,
    'base_path_provider' => 'default',
  );
  $export['facetapi_pretty_paths_searcher_search_api@solr_node_index_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_ajax_pages';
  $strongarm->value = '<front>
map
buy
rent';
  $export['search_api_ajax_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_ajax_visibility';
  $strongarm->value = '1';
  $export['search_api_ajax_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'solr_node_index' => array(
      'search_api_views:carto:default' => 'search_api_views:carto:default',
      'search_api_views:carto:page' => 'search_api_views:carto:page',
      'search_api_views:facets_index_block:search_api_views_facets_block_1' => 'search_api_views:facets_index_block:search_api_views_facets_block_1',
      'search_api_views:facets_index_block:search_api_views_facets_block_2' => 'search_api_views:facets_index_block:search_api_views_facets_block_2',
      'search_api_views:global_search:global_search_pane' => 'search_api_views:global_search:global_search_pane',
      'search_api_views:karte_solr:block' => 'search_api_views:karte_solr:block',
      'search_api_views:karte_solr:block_1' => 'search_api_views:karte_solr:block_1',
      'search_api_views:karte_solr:default' => 'search_api_views:karte_solr:default',
      'search_api_views:karte_solr:page' => 'search_api_views:karte_solr:page',
      'search_api_views:karten:block' => 'search_api_views:karten:block',
      'search_api_views:karten:block_1' => 'search_api_views:karten:block_1',
      'search_api_views:karten:commercial' => 'search_api_views:karten:commercial',
      'search_api_views:karten:default' => 'search_api_views:karten:default',
      'search_api_views:karten:embed' => 'search_api_views:karten:embed',
      'search_api_views:karten:feed_1' => 'search_api_views:karten:feed_1',
      'search_api_views:karten:freehold' => 'search_api_views:karten:freehold',
      'search_api_views:karten:geojson' => 'search_api_views:karten:geojson',
      'search_api_views:karten:invest' => 'search_api_views:karten:invest',
      'search_api_views:karten:kaufen' => 'search_api_views:karten:kaufen',
      'search_api_views:karten:map' => 'search_api_views:karten:map',
      'search_api_views:karten:map_block' => 'search_api_views:karten:map_block',
      'search_api_views:karten:map_page' => 'search_api_views:karten:map_page',
      'search_api_views:karten:map_page_mobile' => 'search_api_views:karten:map_page_mobile',
      'search_api_views:karten:mieten' => 'search_api_views:karten:mieten',
      'search_api_views:karten:mlt' => 'search_api_views:karten:mlt',
      'search_api_views:karten:openlayers_1' => 'search_api_views:karten:openlayers_1',
      'search_api_views:karten:page' => 'search_api_views:karten:page',
      'search_api_views:karten:page_1' => 'search_api_views:karten:page_1',
      'search_api_views:karten:page_2' => 'search_api_views:karten:page_2',
      'search_api_views:karten:page_3' => 'search_api_views:karten:page_3',
      'search_api_views:karten:search_api_views_facets_block_1' => 'search_api_views:karten:search_api_views_facets_block_1',
      'search_api_views:karten:search_api_views_facets_block_2' => 'search_api_views:karten:search_api_views_facets_block_2',
      'search_api_views:karten:wug' => 'search_api_views:karten:wug',
      'search_api_views:object_landing_page:block_1' => 'search_api_views:object_landing_page:block_1',
      'search_api_views:object_landing_page:default' => 'search_api_views:object_landing_page:default',
      'search_api_views:object_landing_page:page' => 'search_api_views:object_landing_page:page',
      'search_api_views:search_area:block' => 'search_api_views:search_area:block',
      'search_api_views:wohnungssuche:default' => 'search_api_views:wohnungssuche:default',
      'search_api_views:wohnungssuche:page' => 'search_api_views:wohnungssuche:page',
      'search_api_views:wohnungssuche:search_api_views_facets_block_1' => 'search_api_views:wohnungssuche:search_api_views_facets_block_1',
      'solr_node_index:saved-search' => 'solr_node_index:saved-search',
    ),
    'solr_objekt_index' => array(
      'search_api_views:hk_map_and_search:default' => 'search_api_views:hk_map_and_search:default',
      'search_api_views:hk_map_and_search:page' => 'search_api_views:hk_map_and_search:page',
      'search_api_views:hk_map_and_search:map_front' => 'search_api_views:hk_map_and_search:map_front',
      'search_api_views:solr_map_apartments:default' => 'search_api_views:solr_map_apartments:default',
    ),
    'solr_apartment_index' => array(
      'search_api_views:solr_map_apartments:default' => 'search_api_views:solr_map_apartments:default',
      'search_api_views:solr_map_apartments:page' => 'search_api_views:solr_map_apartments:page',
      'search_api_views:frontpage_map:page' => 'search_api_views:frontpage_map:page',
    ),
    'denormalized_aapart_index' => array(
      'search_api_views:grouped_apartments_map:default' => 'search_api_views:grouped_apartments_map:default',
      'search_api_views:grouped_apartments_map:page' => 'search_api_views:grouped_apartments_map:page',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_backend_url';
  $strongarm->value = '';
  $export['shariff_backend_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_css';
  $strongarm->value = 'complete';
  $export['shariff_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_flattr_category';
  $strongarm->value = '';
  $export['shariff_flattr_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_flattr_user';
  $strongarm->value = '';
  $export['shariff_flattr_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_mail_body';
  $strongarm->value = '';
  $export['shariff_mail_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_mail_subject';
  $strongarm->value = '';
  $export['shariff_mail_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_mail_url';
  $strongarm->value = 'mailto:';
  $export['shariff_mail_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_media_url';
  $strongarm->value = '';
  $export['shariff_media_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_orientation';
  $strongarm->value = 'vertical';
  $export['shariff_orientation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_referrer_track';
  $strongarm->value = '';
  $export['shariff_referrer_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_services';
  $strongarm->value = array(
    'twitter' => 'twitter',
    'facebook' => 'facebook',
    'googleplus' => 'googleplus',
    'linkedin' => 0,
    'pinterest' => 0,
    'xing' => 0,
    'whatsapp' => 0,
    'addthis' => 0,
    'tumblr' => 0,
    'flattr' => 0,
    'diaspora' => 0,
    'reddit' => 0,
    'stumbleupon' => 0,
    'threema' => 0,
    'mail' => 0,
    'info' => 0,
  );
  $export['shariff_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_theme';
  $strongarm->value = 'colored';
  $export['shariff_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shariff_twitter_via';
  $strongarm->value = '';
  $export['shariff_twitter_via'] = $strongarm;

  return $export;
}

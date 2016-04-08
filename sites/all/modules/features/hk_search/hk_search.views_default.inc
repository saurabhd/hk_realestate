<?php
/**
 * @file
 * hk_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'karten';
  $view->description = 'Hauptview mit Karten für Startseite, Hintergrund und Suche für Kaufen und Mieten';
  $view->tag = 'hk';
  $view->base_table = 'search_api_index_solr_node_index';
  $view->human_name = 'Karten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'search_api_views_cache';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_object_ref_field_object_txt_map_popup_value',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox-0';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'field_objekt_wkt' => 'field_objekt_wkt',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['default_marker']['default_marker_color'] = 'Icon_House2';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['tags']['marker_tag'] = 'field_obj_apartments';
  $handler->display->display_options['style_options']['tags']['tag_css_class'] = 'tag-below-marker';
  $handler->display->display_options['style_options']['sync']['2'] = 0;
  $handler->display->display_options['style_options']['sync']['4'] = 0;
  $handler->display->display_options['style_options']['sync']['8'] = 1;
  $handler->display->display_options['style_options']['sync']['16'] = 1;
  $handler->display->display_options['style_options']['full_screen'] = 0;
  $handler->display->display_options['style_options']['scale_metric'] = 1;
  $handler->display->display_options['style_options']['scale_imperial'] = 0;
  $handler->display->display_options['style_options']['zoom_indicator'] = 0;
  $handler->display->display_options['style_options']['map_reset'] = 0;
  $handler->display->display_options['style_options']['map_cluster_toggle'] = 0;
  $handler->display->display_options['style_options']['mini_map']['on'] = 0;
  $handler->display->display_options['style_options']['mini_map']['height'] = '100';
  $handler->display->display_options['style_options']['mini_map']['width'] = '150';
  $handler->display->display_options['style_options']['mini_map']['toggle'] = 1;
  $handler->display->display_options['style_options']['mini_map']['zoom_delta'] = '-5';
  $handler->display->display_options['style_options']['cluster_radius'] = '200';
  $handler->display->display_options['style_options']['disable_clustering_at_zoom'] = '18';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    'field_bezirk' => 'field_bezirk',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['zoom_ranges'] = array(
    1 => '1--11',
    2 => '12--16',
    3 => '17--18',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_tooltips'] = 1;
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_outline'] = '1';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_field'] = 'field_obj_apartments';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'sum';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '10';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '25';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '50';
  $handler->display->display_options['style_options']['empty_map_center'] = '52.541143, 13.414810';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '18';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '12';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  $handler->display->display_options['style_options']['map_options']['separator'] = '';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'We\'re awefully sorry';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results matched your search. Please contact us so that we can help you to find what you are looking for. We always have more offers than we can put on this website, so give it a try and call us!';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Indexed Content: Object */
  $handler->display->display_options['relationships']['field_object_ref']['id'] = 'field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['relationships']['field_object_ref']['field'] = 'field_object_ref';
  /* Relationship: Indexed Content: Borough */
  $handler->display->display_options['relationships']['field_bezirk']['id'] = 'field_bezirk';
  $handler->display->display_options['relationships']['field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['relationships']['field_bezirk']['field'] = 'field_bezirk';
  $handler->display->display_options['relationships']['field_bezirk']['label'] = 'Bezirk';
  /* Field: Object: Object ID (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['id'] = 'field_object_ref_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['field'] = 'field_object_ref_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Field: Object: Titel (indexed) */
  $handler->display->display_options['fields']['field_object_ref_title_field']['id'] = 'field_object_ref_title_field';
  $handler->display->display_options['fields']['field_object_ref_title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_title_field']['field'] = 'field_object_ref_title_field';
  $handler->display->display_options['fields']['field_object_ref_title_field']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Borough */
  $handler->display->display_options['fields']['field_bezirk']['id'] = 'field_bezirk';
  $handler->display->display_options['fields']['field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_bezirk']['field'] = 'field_bezirk';
  $handler->display->display_options['fields']['field_bezirk']['label'] = '';
  $handler->display->display_options['fields']['field_bezirk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bezirk']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_bezirk']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_bezirk']['bypass_access'] = 0;
  /* Field: Content: Object images */
  $handler->display->display_options['fields']['field_object_images']['id'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_object_images']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['relationship'] = 'field_object_ref';
  $handler->display->display_options['fields']['field_object_images']['label'] = '';
  $handler->display->display_options['fields']['field_object_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images']['type'] = 'picture';
  $handler->display->display_options['fields']['field_object_images']['settings'] = array(
    'picture_mapping' => 'map_popup',
    'fallback_image_style' => '',
    'image_link' => 'content',
    'colorbox_settings' => array(
      'colorbox_group' => 'map_popup',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'none',
      'colorbox_caption_custom' => '',
    ),
  );
  $handler->display->display_options['fields']['field_object_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_object_images']['delta_offset'] = '0';
  /* Field: Object » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['id'] = 'field_object_ref_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['field'] = 'field_object_ref_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['alter']['text'] = '[field_object_ref_field_address_thoroughfare]';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Object » Address: Postal code (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_address_postal_code']['id'] = 'field_object_ref_field_address_postal_code';
  $handler->display->display_options['fields']['field_object_ref_field_address_postal_code']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_address_postal_code']['field'] = 'field_object_ref_field_address_postal_code';
  $handler->display->display_options['fields']['field_object_ref_field_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_address_postal_code']['link_to_entity'] = 0;
  /* Field: Object » Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_address_locality']['id'] = 'field_object_ref_field_address_locality';
  $handler->display->display_options['fields']['field_object_ref_field_address_locality']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_address_locality']['field'] = 'field_object_ref_field_address_locality';
  $handler->display->display_options['fields']['field_object_ref_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_address_locality']['link_to_entity'] = 0;
  /* Field: Content: Apartments */
  $handler->display->display_options['fields']['field_obj_apartments']['id'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_obj_apartments']['field'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['relationship'] = 'field_object_ref';
  $handler->display->display_options['fields']['field_obj_apartments']['label'] = '';
  $handler->display->display_options['fields']['field_obj_apartments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_obj_apartments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['list']['mode'] = 'count';
  $handler->display->display_options['fields']['field_obj_apartments']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_obj_apartments']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_obj_apartments']['bypass_access'] = 0;
  /* Field: Indexed Content: Schattenobjekt? */
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['id'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['field'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['label'] = '';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['element_label_colon'] = FALSE;
  /* Field: Text Popup rewrite */
  $handler->display->display_options['fields']['field_object_ref_field_object_txt_map_popup_value']['id'] = 'field_object_ref_field_object_txt_map_popup_value';
  $handler->display->display_options['fields']['field_object_ref_field_object_txt_map_popup_value']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_object_txt_map_popup_value']['field'] = 'field_object_ref_field_object_txt_map_popup_value';
  $handler->display->display_options['fields']['field_object_ref_field_object_txt_map_popup_value']['ui_name'] = 'Text Popup rewrite';
  $handler->display->display_options['fields']['field_object_ref_field_object_txt_map_popup_value']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_object_txt_map_popup_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_object_txt_map_popup_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_object_txt_map_popup_value']['alter']['text'] = '[field_object_images]
<!--<h2>[field_object_ref_title_field]</h2>-->
<p>[field_object_ref_field_object_txt_map_popup_value]</p>
<!--<p>[field_obj_apartments] apartments in total</p>-->
<div class="wo"><i class="icon-hk-icon-location"></i>[field_object_ref_field_address_thoroughfare], [field_object_ref_field_address_postal_code] [field_object_ref_field_address_locality]</div>
<div class="tablehead"><span class="id">Object ID</span><span class="rooms">Rooms</span><span class="space">Space (ca.)</span><span class="price">Price</span><span class="more">&nbsp;</span></div>';
  $handler->display->display_options['fields']['field_object_ref_field_object_txt_map_popup_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_object_txt_map_popup_value']['link_to_entity'] = 0;
  /* Field: Indexed Content: Text Schattenobjekt */
  $handler->display->display_options['fields']['field_object_text_schattenobjekt']['id'] = 'field_object_text_schattenobjekt';
  $handler->display->display_options['fields']['field_object_text_schattenobjekt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_text_schattenobjekt']['field'] = 'field_object_text_schattenobjekt';
  $handler->display->display_options['fields']['field_object_text_schattenobjekt']['label'] = '';
  $handler->display->display_options['fields']['field_object_text_schattenobjekt']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = '';
  $handler->display->display_options['fields']['field_apart_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_no']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = 'Space (ca.)';
  $handler->display->display_options['fields']['field_apart_living_space']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'ja';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_object_text_schattenobjekt] 
';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[field_object_ref_field_object_txt_map_popup_value]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Object: Node ID (indexed) */
  $handler->display->display_options['fields']['field_object_ref_nid']['id'] = 'field_object_ref_nid';
  $handler->display->display_options['fields']['field_object_ref_nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_nid']['field'] = 'field_object_ref_nid';
  $handler->display->display_options['fields']['field_object_ref_nid']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_nid']['separator'] = '';
  $handler->display->display_options['fields']['field_object_ref_nid']['link_to_entity'] = 0;
  /* Field: Apartment list */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Apartment list';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'karten';
  $handler->display->display_options['fields']['view']['display'] = 'page_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!field_object_ref_nid]';
  /* Field: Price (Rewritten as apartment list) */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['ui_name'] = 'Price (Rewritten as apartment list)';
  $handler->display->display_options['fields']['field_apart_price']['label'] = '';
  $handler->display->display_options['fields']['field_apart_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price']['alter']['text'] = '<div class="apart"><span class="id">[field_object_ref_field_objektid_nunumeric]-[field_apart_no]</span><span class="rooms">[field_apart_rooms]</span><span class="space">[field_apart_living_space]</span><span class="price">[field_apart_price]</span><a class="more"  href="/node/[nid]">Details</a></div>';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Object » Apartments: Status (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_obj_apartments_status']['id'] = 'field_object_ref_field_obj_apartments_status';
  $handler->display->display_options['filters']['field_object_ref_field_obj_apartments_status']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_obj_apartments_status']['field'] = 'field_object_ref_field_obj_apartments_status';
  $handler->display->display_options['filters']['field_object_ref_field_obj_apartments_status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_object_ref_field_obj_apartments_status']['group'] = 1;
  /* Filter criterion: Indexed Content: Schattenobjekt? */
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['id'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['field'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['operator'] = '<>';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['group'] = 1;
  /* Filter criterion: Object: Schattenobjekt? (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_obj_schattenobjekt']['id'] = 'field_object_ref_field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_object_ref_field_obj_schattenobjekt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_obj_schattenobjekt']['field'] = 'field_object_ref_field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_object_ref_field_obj_schattenobjekt']['operator'] = '<>';
  $handler->display->display_options['filters']['field_object_ref_field_obj_schattenobjekt']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_object_ref_field_obj_schattenobjekt']['group'] = 1;
  /* Filter criterion: Object » Standort: Well-known text (indexed) */
  $handler->display->display_options['filters']['field_object_ref_field_objekt_wkt_geom']['id'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['filters']['field_object_ref_field_objekt_wkt_geom']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_object_ref_field_objekt_wkt_geom']['field'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['filters']['field_object_ref_field_objekt_wkt_geom']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_object_ref_field_objekt_wkt_geom']['group'] = 1;
  $handler->display->display_options['field_config'] = array(
    'field_object_ref_field_objektid_nunumeric' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'field_object_ref_title_field' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_object_images' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_object_ref_field_address_thoroughfare' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_bezirk' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_object_ref_field_object_txt_map_popup_value' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'nid' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_apart_no' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_apart_rooms' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_apart_living_space' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'title_field' => array(
      'merge_option' => 'count',
      'separator' => ', ',
    ),
    'field_apart_price' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_objekt_wkt' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_obj_schattenobjekt' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_obj_standort_schatten' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_apart_regionbound_counter' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
  );
  $handler->display->display_options['use_ajax_flags'] = array(
    'merken' => 'merken',
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';

  /* Display: Frontpage Map */
  $handler = $view->new_display('page', 'Frontpage Map', 'map_page');
  $handler->display->display_options['display_description'] = 'Karte für die Startseite, als Page in die Systemeinstellungen eingetragen.';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Content: Object */
  $handler->display->display_options['relationships']['field_object_ref']['id'] = 'field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['relationships']['field_object_ref']['field'] = 'field_object_ref';
  $handler->display->display_options['path'] = 'map';

  /* Display: Map Background Block */
  $handler = $view->new_display('block', 'Map Background Block', 'map_block');
  $handler->display->display_options['display_description'] = 'Karte als Hintergrund für alle Seiten außer Front, per views_embed in page.tpl.php eingebunden';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_object_ref_field_object_txt_map_popup_value',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox-0';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'field_objekt_wkt' => 'field_objekt_wkt',
    'field_apart_schattengebiet_wkt' => 'field_apart_schattengebiet_wkt',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['default_marker']['default_marker_color'] = 'Icon_House2';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['tags']['marker_tag'] = 'field_obj_apartments';
  $handler->display->display_options['style_options']['tags']['tag_css_class'] = 'tag-below-marker';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'field_object_ref_title_field';
  $handler->display->display_options['style_options']['sync']['2'] = 0;
  $handler->display->display_options['style_options']['sync']['4'] = 0;
  $handler->display->display_options['style_options']['sync']['8'] = 1;
  $handler->display->display_options['style_options']['sync']['16'] = 1;
  $handler->display->display_options['style_options']['full_screen'] = 0;
  $handler->display->display_options['style_options']['scale_metric'] = 0;
  $handler->display->display_options['style_options']['scale_imperial'] = 0;
  $handler->display->display_options['style_options']['zoom_indicator'] = 0;
  $handler->display->display_options['style_options']['map_reset'] = 0;
  $handler->display->display_options['style_options']['map_cluster_toggle'] = 0;
  $handler->display->display_options['style_options']['mini_map']['on'] = 0;
  $handler->display->display_options['style_options']['mini_map']['height'] = '100';
  $handler->display->display_options['style_options']['mini_map']['width'] = '150';
  $handler->display->display_options['style_options']['mini_map']['toggle'] = 1;
  $handler->display->display_options['style_options']['mini_map']['zoom_delta'] = '-5';
  $handler->display->display_options['style_options']['cluster_radius'] = '50';
  $handler->display->display_options['style_options']['disable_clustering_at_zoom'] = '18';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    'field_bezirk' => 'field_bezirk',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['zoom_ranges'] = array(
    1 => '1--11',
    2 => '12--16',
    3 => '17--18',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_tooltips'] = 1;
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_outline'] = '1';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_field'] = 'field_obj_apartments';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'sum';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '10';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '25';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '50';
  $handler->display->display_options['style_options']['empty_map_center'] = '52.541143, 13.414810';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '18';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '12';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '0';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '0';
  $handler->display->display_options['style_options']['map_options']['separator'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Kaufen */
  $handler = $view->new_display('page', 'Kaufen', 'kaufen');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Buy';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'kaufen';
  $handler->display->display_options['display_description'] = 'Listensuche, als Page unter /buy /kaufen eingebunden';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['language']['format_name'] = 1;
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Object » Standort: Well-known text (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['id'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['field'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['label'] = 'Objektstandort';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['label'] = 'Objektbezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_title']['id'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_title']['field'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['label'] = 'Objekttitel';
  $handler->display->display_options['fields']['field_object_ref_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_title']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['id'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['field'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['label'] = 'Objektbild';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Borough */
  $handler->display->display_options['sorts']['field_bezirk']['id'] = 'field_bezirk';
  $handler->display->display_options['sorts']['field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['field_bezirk']['field'] = 'field_bezirk';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Category */
  $handler->display->display_options['filters']['field_kategorie']['id'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_kategorie']['field'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['value'] = array(
    15 => '15',
    11 => '11',
    7 => '7',
    133 => '133',
  );
  $handler->display->display_options['filters']['field_kategorie']['group'] = 1;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Content: Schattenobjekt? */
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['id'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['field'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['operator'] = '<>';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['group'] = 1;
  $handler->display->display_options['path'] = 'buy';

  /* Display: Kaufen >> Bezugsfreie Wohnungen */
  $handler = $view->new_display('page', 'Kaufen >> Bezugsfreie Wohnungen', 'freehold');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Buy >> Vacant apartments';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'kaufen';
  $handler->display->display_options['display_description'] = 'Listensuche, als Page unter /buy /kaufen eingebunden';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['language']['format_name'] = 1;
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Object » Standort: Well-known text (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['id'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['field'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['label'] = 'Objektstandort';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['label'] = 'Objektbezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_title']['id'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_title']['field'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['label'] = 'Objekttitel';
  $handler->display->display_options['fields']['field_object_ref_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_title']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['id'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['field'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['label'] = 'Objektbild';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Borough */
  $handler->display->display_options['sorts']['field_bezirk']['id'] = 'field_bezirk';
  $handler->display->display_options['sorts']['field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['field_bezirk']['field'] = 'field_bezirk';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Category */
  $handler->display->display_options['filters']['field_kategorie']['id'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_kategorie']['field'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['field_kategorie']['group'] = 1;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Content: Schattenobjekt? */
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['id'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['field'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['operator'] = '<>';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['group'] = 1;
  $handler->display->display_options['path'] = 'buy/freehold-apartments';

  /* Display: Kaufen >> Vermietete Wohnungen */
  $handler = $view->new_display('page', 'Kaufen >> Vermietete Wohnungen', 'invest');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Buy >> Rented apartments';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'kaufen';
  $handler->display->display_options['display_description'] = 'Listensuche, als Page unter /buy /kaufen eingebunden';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['language']['format_name'] = 1;
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Object » Standort: Well-known text (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['id'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['field'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['label'] = 'Objektstandort';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['label'] = 'Objektbezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_title']['id'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_title']['field'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['label'] = 'Objekttitel';
  $handler->display->display_options['fields']['field_object_ref_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_title']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['id'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['field'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['label'] = 'Objektbild';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Borough */
  $handler->display->display_options['sorts']['field_bezirk']['id'] = 'field_bezirk';
  $handler->display->display_options['sorts']['field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['field_bezirk']['field'] = 'field_bezirk';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Category */
  $handler->display->display_options['filters']['field_kategorie']['id'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_kategorie']['field'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['field_kategorie']['group'] = 1;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Content: Schattenobjekt? */
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['id'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['field'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['operator'] = '<>';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['group'] = 1;
  $handler->display->display_options['path'] = 'buy/capital-investment';

  /* Display: Kaufen >> Gewerbe */
  $handler = $view->new_display('page', 'Kaufen >> Gewerbe', 'commercial');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Buy >> Commercial property';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'kaufen';
  $handler->display->display_options['display_description'] = 'Listensuche, als Page unter /buy /kaufen eingebunden';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['language']['format_name'] = 1;
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Object » Standort: Well-known text (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['id'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['field'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['label'] = 'Objektstandort';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['label'] = 'Objektbezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_title']['id'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_title']['field'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['label'] = 'Objekttitel';
  $handler->display->display_options['fields']['field_object_ref_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_title']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['id'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['field'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['label'] = 'Objektbild';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Borough */
  $handler->display->display_options['sorts']['field_bezirk']['id'] = 'field_bezirk';
  $handler->display->display_options['sorts']['field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['field_bezirk']['field'] = 'field_bezirk';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Category */
  $handler->display->display_options['filters']['field_kategorie']['id'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_kategorie']['field'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['field_kategorie']['group'] = 1;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Content: Schattenobjekt? */
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['id'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['field'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['operator'] = '<>';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['group'] = 1;
  $handler->display->display_options['path'] = 'buy/commercial-property-sale';

  /* Display: Mieten */
  $handler = $view->new_display('page', 'Mieten', 'mieten');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Rent';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Listensuche, als Page unter /rent /mieten eingebunden';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'group-card';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'is_new' => 'is_new',
    'field_object_ref_field_kategorie2' => 'field_object_ref_field_kategorie2',
    'field_apart_living_space' => 'field_apart_living_space',
    'field_apart_price' => 'field_apart_price',
    'field_object_ref_field_bezirk' => 'field_object_ref_field_bezirk',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Pictures » The image file. */
  $handler->display->display_options['fields']['field_apart_pictures_file']['id'] = 'field_apart_pictures_file';
  $handler->display->display_options['fields']['field_apart_pictures_file']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_pictures_file']['field'] = 'field_apart_pictures_file';
  $handler->display->display_options['fields']['field_apart_pictures_file']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_pictures_file']['alter']['text'] = '[field_apart_pictures_file]';
  $handler->display->display_options['fields']['field_apart_pictures_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_apart_pictures_file']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_apart_pictures_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_apart_pictures_file']['display'] = 'view';
  $handler->display->display_options['fields']['field_apart_pictures_file']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['field_apart_pictures_file']['bypass_access'] = 0;
  /* Field: Indexed Content: Is new */
  $handler->display->display_options['fields']['is_new_1']['id'] = 'is_new_1';
  $handler->display->display_options['fields']['is_new_1']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['is_new_1']['field'] = 'is_new';
  $handler->display->display_options['fields']['is_new_1']['label'] = '';
  $handler->display->display_options['fields']['is_new_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['is_new_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['is_new_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['is_new_1']['type'] = 'custom';
  $handler->display->display_options['fields']['is_new_1']['type_custom_true'] = 'Neu';
  $handler->display->display_options['fields']['is_new_1']['type_custom_false'] = '0';
  $handler->display->display_options['fields']['is_new_1']['not'] = 0;
  $handler->display->display_options['fields']['is_new_1']['link_to_entity'] = 0;
  /* Field: Indexed Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['language']['format_name'] = 1;
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = '';
  $handler->display->display_options['fields']['field_apart_living_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['label'] = '';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['label'] = '';
  $handler->display->display_options['fields']['field_apart_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['alter']['text'] = 'Neu';
  $handler->display->display_options['fields']['field_apart_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_rooms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed Content: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Object » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['id'] = 'field_object_ref_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['field'] = 'field_object_ref_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_address_thoroughfare']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Indexed taxonomy term fields */
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['id'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['field'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['title'] = 'Mieten > %1';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate_options']['vocabularies'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Category */
  $handler->display->display_options['filters']['field_kategorie']['id'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_kategorie']['field'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['value'] = array(
    131 => '131',
    132 => '132',
  );
  $handler->display->display_options['path'] = 'rent';

  /* Display: More like this Block */
  $handler = $view->new_display('block', 'More like this Block', 'mlt');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ähnliche Wohnungen';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mlt';
  $handler->display->display_options['display_description'] = 'Zeigt ähnliche Wohungen unter einer Wohnung in einer Slideshow an.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'morelikethis';
  $handler->display->display_options['style_options']['id'] = 'mlt';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_apart_living_space' => 'field_apart_living_space',
    'field_apart_price' => 'field_apart_price',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures']['id'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_pictures']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_pictures']['settings'] = array(
    'image_style' => 'map-popup',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_apart_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_apart_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_apart_pictures']['separator'] = '';
  /* Field: Object: Titel (indexed) */
  $handler->display->display_options['fields']['field_object_ref_title_field']['id'] = 'field_object_ref_title_field';
  $handler->display->display_options['fields']['field_object_ref_title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_title_field']['field'] = 'field_object_ref_title_field';
  $handler->display->display_options['fields']['field_object_ref_title_field']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_title_field']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_object_ref_title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = '';
  $handler->display->display_options['fields']['field_apart_living_space']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_living_space']['alter']['text'] = '[field_apart_living_space] / ';
  $handler->display->display_options['fields']['field_apart_living_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['label'] = '';
  $handler->display->display_options['fields']['field_apart_price']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Address » Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: More like this */
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['id'] = 'search_api_views_more_like_this';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['field'] = 'search_api_views_more_like_this';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['validate_options']['types'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['arguments']['search_api_views_more_like_this']['fields'] = array(
    'language' => 'language',
    'field_apart_bathrooms' => 'field_apart_bathrooms',
    'field_apart_living_space' => 'field_apart_living_space',
    'field_apart_price' => 'field_apart_price',
    'field_apart_rooms' => 'field_apart_rooms',
    'field_object_ref' => 'field_object_ref',
    'field_ausstattung' => 'field_ausstattung',
    'field_object_ref:title_field' => 'field_object_ref:title_field',
    'field_object_ref:field_bezirk' => 'field_object_ref:field_bezirk',
    'field_object_ref:field_kategorie' => 'field_object_ref:field_kategorie',
    'field_object_ref:body:value' => 'field_object_ref:body:value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Apartment-List */
  $handler = $view->new_display('page', 'Apartment-List', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Apartment-List';
  $handler->display->display_options['display_description'] = 'Karte für die Startseite, als Page in die Systemeinstellungen eingetragen.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Content: Object */
  $handler->display->display_options['relationships']['field_object_ref']['id'] = 'field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['relationships']['field_object_ref']['field'] = 'field_object_ref';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Object: Object ID (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['id'] = 'field_object_ref_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['field'] = 'field_object_ref_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref_field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Field: Content: Apartments */
  $handler->display->display_options['fields']['field_obj_apartments']['id'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_obj_apartments']['field'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['relationship'] = 'field_object_ref';
  $handler->display->display_options['fields']['field_obj_apartments']['label'] = '';
  $handler->display->display_options['fields']['field_obj_apartments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_obj_apartments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['list']['mode'] = 'count';
  $handler->display->display_options['fields']['field_obj_apartments']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_obj_apartments']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_obj_apartments']['bypass_access'] = 0;
  /* Field: Indexed Content: Schattenobjekt? */
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['id'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['field'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['label'] = '';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = '';
  $handler->display->display_options['fields']['field_apart_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_no']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = 'Space (ca.)';
  $handler->display->display_options['fields']['field_apart_living_space']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  /* Field: Price (Rewritten as apartment list) */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['ui_name'] = 'Price (Rewritten as apartment list)';
  $handler->display->display_options['fields']['field_apart_price']['label'] = '';
  $handler->display->display_options['fields']['field_apart_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price']['alter']['text'] = '<div class="apart"><span class="id">[field_object_ref_field_objektid_nunumeric]-[field_apart_no]</span><span class="rooms">[field_apart_rooms]</span><span class="space">[field_apart_living_space]</span><span class="price">[field_apart_price]</span><a class="more"  href="/node/[nid]">Details</a></div>';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Object: Node ID (indexed) */
  $handler->display->display_options['arguments']['field_object_ref_nid']['id'] = 'field_object_ref_nid';
  $handler->display->display_options['arguments']['field_object_ref_nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['arguments']['field_object_ref_nid']['field'] = 'field_object_ref_nid';
  $handler->display->display_options['arguments']['field_object_ref_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_object_ref_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_object_ref_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_object_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_object_ref_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_object_ref_nid']['not'] = 0;
  $handler->display->display_options['path'] = 'apartment-list';

  /* Display: Kaufen >> Wohn- und Geschäftshäuser */
  $handler = $view->new_display('page', 'Kaufen >> Wohn- und Geschäftshäuser', 'wug');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Buy >> Residential and commercial buildings';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'kaufen';
  $handler->display->display_options['display_description'] = 'Listensuche, als Page unter /buy /kaufen eingebunden';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['language']['format_name'] = 1;
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Object » Standort: Well-known text (indexed) */
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['id'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['field'] = 'field_object_ref_field_objekt_wkt_geom';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['label'] = 'Objektstandort';
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_objekt_wkt_geom']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['id'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['field'] = 'field_object_ref_field_bezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['label'] = 'Objektbezirk';
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_bezirk']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_title']['id'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_title']['field'] = 'field_object_ref_title';
  $handler->display->display_options['fields']['field_object_ref_title']['label'] = 'Objekttitel';
  $handler->display->display_options['fields']['field_object_ref_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_title']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['id'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['field'] = 'field_object_ref_field_apart_pictures_file';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['label'] = 'Objektbild';
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref_field_apart_pictures_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Borough */
  $handler->display->display_options['sorts']['field_bezirk']['id'] = 'field_bezirk';
  $handler->display->display_options['sorts']['field_bezirk']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['field_bezirk']['field'] = 'field_bezirk';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Category */
  $handler->display->display_options['filters']['field_kategorie']['id'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_kategorie']['field'] = 'field_kategorie';
  $handler->display->display_options['filters']['field_kategorie']['value'] = array(
    133 => '133',
  );
  $handler->display->display_options['filters']['field_kategorie']['group'] = 1;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
    0 => '0',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Content: Schattenobjekt? */
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['id'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['field'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['operator'] = '<>';
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_obj_schattenobjekt']['group'] = 1;
  $handler->display->display_options['path'] = 'buy/residential-and-commercial';
  $export['karten'] = $view;

  return $export;
}

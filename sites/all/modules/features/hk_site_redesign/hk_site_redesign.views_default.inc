<?php
/**
 * @file
 * hk_site_redesign.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_site_redesign_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'addweb_happy_clients';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Addweb-Happy Clients';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Addweb-Happy Clients';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Sub Title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['label'] = '';
  $handler->display->display_options['fields']['field_sub_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sub_title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: User Photo */
  $handler->display->display_options['fields']['field_user_photo']['id'] = 'field_user_photo';
  $handler->display->display_options['fields']['field_user_photo']['table'] = 'field_data_field_user_photo';
  $handler->display->display_options['fields']['field_user_photo']['field'] = 'field_user_photo';
  $handler->display->display_options['fields']['field_user_photo']['label'] = '';
  $handler->display->display_options['fields']['field_user_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: User Name */
  $handler->display->display_options['fields']['field_user_name']['id'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name']['table'] = 'field_data_field_user_name';
  $handler->display->display_options['fields']['field_user_name']['field'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_name']['element_label_colon'] = FALSE;
  /* Field: Content: User Designation */
  $handler->display->display_options['fields']['field_user_designation']['id'] = 'field_user_designation';
  $handler->display->display_options['fields']['field_user_designation']['table'] = 'field_data_field_user_designation';
  $handler->display->display_options['fields']['field_user_designation']['field'] = 'field_user_designation';
  $handler->display->display_options['fields']['field_user_designation']['label'] = '';
  $handler->display->display_options['fields']['field_user_designation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment Image */
  $handler->display->display_options['fields']['field_apartment_image']['id'] = 'field_apartment_image';
  $handler->display->display_options['fields']['field_apartment_image']['table'] = 'field_data_field_apartment_image';
  $handler->display->display_options['fields']['field_apartment_image']['field'] = 'field_apartment_image';
  $handler->display->display_options['fields']['field_apartment_image']['label'] = '';
  $handler->display->display_options['fields']['field_apartment_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apartment_image']['alter']['text'] = '<div class=\'happy-client-warp\'>
<div class="sub-title-text">[field_sub_title]</div>
<div class="title-text">[title]</div>
[body]
<div class=\'happy-client-user-info\'>
<div class="user-photo">[field_user_photo]</div>
<div lcass="name-text">[field_user_name]</div>
<div class="user-deg">[field_user_designation]</div>
</div>
</div>
<div class=\'happy-client-apartment-info\'>
[field_apartment_image]
</div>';
  $handler->display->display_options['fields']['field_apartment_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apartment_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apartment_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonials' => 'testimonials',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['addweb_happy_clients'] = $view;

  $view = new view();
  $view->name = 'footer_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_solr_node_index';
  $view->human_name = 'Footer Link';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds_fields';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Footer facets links */
  $handler = $view->new_display('search_api_views_facets_block', 'Footer facets links', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Footer Facets Links';
  $handler->display->display_options['linked_path'] = 'map';
  $handler->display->display_options['facet_field'] = 'field_kategorie';
  $export['footer_link'] = $view;

  $view = new view();
  $view->name = 'latest_apartment_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_solr_node_index';
  $view->human_name = 'Addweb Latest Apartment Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_with_h';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'date_with_h';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Content: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures']['id'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_pictures']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_pictures']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_apart_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_apart_pictures']['delta_offset'] = '0';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'apartment';
  $handler->display->display_options['fields']['view']['display'] = 'objektadresse';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = '';
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
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'See Details';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Quick View';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['label'] = 'Sleeping rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Bathrooms */
  $handler->display->display_options['fields']['field_apart_bathrooms']['id'] = 'field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_bathrooms']['field'] = 'field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_bathrooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_bathrooms']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Floor */
  $handler->display->display_options['fields']['field_apart_floor']['id'] = 'field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_floor']['field'] = 'field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['label'] = '';
  $handler->display->display_options['fields']['field_apart_floor']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_floor']['alter']['text'] = '<div class=\'quick-view\'>
<div class=\'room\'><div class=\'room-label\'>Sleeping rooms</div><div class=\'number\'>[field_apart_rooms]</div></div>
<div class=\'bathrooms\'><div class=\'bathroom-label\'>Bathrooms</div><div class=\'number\'>[field_apart_bathrooms]</div></div>
<div class=\'floor\'><div class=\'floor-label\'>No. of floors</div><div class=\'number\'>[field_apart_floor]</div></div>
</div>';
  $handler->display->display_options['fields']['field_apart_floor']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Content: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Latest Apartment */
  $handler = $view->new_display('block', 'Latest Apartment', 'block');
  $export['latest_apartment_node'] = $view;

  return $export;
}

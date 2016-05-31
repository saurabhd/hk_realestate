<?php
/**
 * @file
 * hk_custom_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_custom_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'facets_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'facets block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'facets block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
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
    'apartment' => 'apartment',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['label'] = '';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price_1']['id'] = 'field_apart_price_1';
  $handler->display->display_options['fields']['field_apart_price_1']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price_1']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price_1']['label'] = '';
  $handler->display->display_options['fields']['field_apart_price_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price_1']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['block_description'] = 'facets price block';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'field_data_field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['label'] = '';
  $handler->display->display_options['fields']['field_apart_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'Facets Rooms Block';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'field_data_field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = '';
  $handler->display->display_options['fields']['field_apart_living_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['block_description'] = 'Facets Space Block';
  $export['facets_block'] = $view;

  return $export;
}

<?php
/**
 * @file
 * hk_expose.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_expose_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'expose';
  $view->description = 'Exportiert Objekt- und Wohnungsdaten als Exposé';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Expose';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_object_ref_target_id']['id'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['field'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['label'] = 'Objekt';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['required'] = TRUE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_per_e_mail_verschicken' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_expose_speichern' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_class'] = 'page-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_class'] = 'apartaddress';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Borough */
  $handler->display->display_options['fields']['field_bezirk']['id'] = 'field_bezirk';
  $handler->display->display_options['fields']['field_bezirk']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['fields']['field_bezirk']['field'] = 'field_bezirk';
  $handler->display->display_options['fields']['field_bezirk']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_bezirk']['label'] = '';
  $handler->display->display_options['fields']['field_bezirk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bezirk']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bezirk']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_bezirk']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bezirk']['type'] = 'taxonomy_term_reference_plain';
  /* Field: 1. Objektbild, wenn keine zwei Grundrisse */
  $handler->display->display_options['fields']['field_object_images_2']['id'] = 'field_object_images_2';
  $handler->display->display_options['fields']['field_object_images_2']['table'] = 'field_data_field_object_images';
  $handler->display->display_options['fields']['field_object_images_2']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images_2']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_images_2']['ui_name'] = '1. Objektbild, wenn keine zwei Grundrisse';
  $handler->display->display_options['fields']['field_object_images_2']['label'] = '';
  $handler->display->display_options['fields']['field_object_images_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images_2']['settings'] = array(
    'image_style' => 'expose',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_object_images_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_object_images_2']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_object_images_2']['separator'] = '';
  /* Field: Hausbeschreibung Ansicht */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Hausbeschreibung Ansicht';
  $handler->display->display_options['fields']['view']['label'] = 'House';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'apartment';
  $handler->display->display_options['fields']['view']['display'] = 'description';
  /* Field: Content: House description */
  $handler->display->display_options['fields']['field_object_description']['id'] = 'field_object_description';
  $handler->display->display_options['fields']['field_object_description']['table'] = 'field_data_field_object_description';
  $handler->display->display_options['fields']['field_object_description']['field'] = 'field_object_description';
  $handler->display->display_options['fields']['field_object_description']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_description']['label'] = 'House';
  $handler->display->display_options['fields']['field_object_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_description']['element_class'] = 'house';
  $handler->display->display_options['fields']['field_object_description']['element_label_colon'] = FALSE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_object_other']['id'] = 'field_object_other';
  $handler->display->display_options['fields']['field_object_other']['table'] = 'field_data_field_object_other';
  $handler->display->display_options['fields']['field_object_other']['field'] = 'field_object_other';
  $handler->display->display_options['fields']['field_object_other']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_other']['label'] = '';
  $handler->display->display_options['fields']['field_object_other']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_other']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment other */
  $handler->display->display_options['fields']['field_apart_other']['id'] = 'field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['table'] = 'field_data_field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['field'] = 'field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['label'] = '';
  $handler->display->display_options['fields']['field_apart_other']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_apart_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_other']['empty'] = '[field_object_other] ';
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Apartment';
  $handler->display->display_options['fields']['field_apart_no']['alter']['text'] = '[field_objektid_nunumeric]-[field_apart_no]';
  $handler->display->display_options['fields']['field_apart_no']['element_label_colon'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_kategorie']['id'] = 'field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['field'] = 'field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['label'] = '';
  $handler->display->display_options['fields']['field_kategorie']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategorie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategorie']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'field_data_field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = 'Space (.ca)';
  $handler->display->display_options['fields']['field_apart_living_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_living_space']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'field_data_field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_rooms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['label'] = 'Price';
  $handler->display->display_options['fields']['field_apart_price']['alter']['text'] = '<div class="essentials"><div class="space"><label>t(\'Space\')</label>[field_apart_living_space]</div>[field_apart_rooms][field_apart_price]</div>';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Header Telephone number */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Header Telephone number';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="phone"><i class="icon-hk-icon-telephone"></i> 030.7808 7080</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Opening div class=apartmerkmale */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Opening div class=apartmerkmale';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="details">Details</div>
<div class="apartmerkmale">';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Content: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms_1']['id'] = 'field_apart_rooms_1';
  $handler->display->display_options['fields']['field_apart_rooms_1']['table'] = 'field_data_field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms_1']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_rooms_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sleeping rooms */
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['id'] = 'field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['table'] = 'field_data_field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['field'] = 'field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['alter']['text'] = '<div class="apartmerkmale">[field_apart_sleeping_rooms]';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Bathrooms */
  $handler->display->display_options['fields']['field_apart_bathrooms']['id'] = 'field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['table'] = 'field_data_field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['field'] = 'field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_bathrooms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_bathrooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Moving in from */
  $handler->display->display_options['fields']['field_moving_in_from']['id'] = 'field_moving_in_from';
  $handler->display->display_options['fields']['field_moving_in_from']['table'] = 'field_data_field_moving_in_from';
  $handler->display->display_options['fields']['field_moving_in_from']['field'] = 'field_moving_in_from';
  $handler->display->display_options['fields']['field_moving_in_from']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_moving_in_from']['hide_empty'] = TRUE;
  /* Field: Content: Floor */
  $handler->display->display_options['fields']['field_apart_floor']['id'] = 'field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['table'] = 'field_data_field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['field'] = 'field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['label'] = 'Etage';
  $handler->display->display_options['fields']['field_apart_floor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_floor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_floor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_floor']['empty_zero'] = TRUE;
  /* Field: Content: No. of floors */
  $handler->display->display_options['fields']['field_no_of_floors']['id'] = 'field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['table'] = 'field_data_field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['field'] = 'field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_no_of_floors']['label'] = 'Etagenzahl';
  $handler->display->display_options['fields']['field_no_of_floors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_no_of_floors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_no_of_floors']['hide_empty'] = TRUE;
  /* Field: Content: Ceiling height */
  $handler->display->display_options['fields']['field_apart_ceiling_height']['id'] = 'field_apart_ceiling_height';
  $handler->display->display_options['fields']['field_apart_ceiling_height']['table'] = 'field_data_field_apart_ceiling_height';
  $handler->display->display_options['fields']['field_apart_ceiling_height']['field'] = 'field_apart_ceiling_height';
  $handler->display->display_options['fields']['field_apart_ceiling_height']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_ceiling_height']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_ceiling_height']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_ceiling_height']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: excl. Commission */
  $handler->display->display_options['fields']['field_apart_commission']['id'] = 'field_apart_commission';
  $handler->display->display_options['fields']['field_apart_commission']['table'] = 'field_data_field_apart_commission';
  $handler->display->display_options['fields']['field_apart_commission']['field'] = 'field_apart_commission';
  $handler->display->display_options['fields']['field_apart_commission']['label'] = 'Commission';
  $handler->display->display_options['fields']['field_apart_commission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_commission']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_commission']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_commission']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: HOA fee */
  $handler->display->display_options['fields']['field_apart_hoa_fee']['id'] = 'field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['table'] = 'field_data_field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['field'] = 'field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['label'] = 'Hausgeld';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Status quo */
  $handler->display->display_options['fields']['field_status_quo']['id'] = 'field_status_quo';
  $handler->display->display_options['fields']['field_status_quo']['table'] = 'field_data_field_status_quo';
  $handler->display->display_options['fields']['field_status_quo']['field'] = 'field_status_quo';
  $handler->display->display_options['fields']['field_status_quo']['label'] = 'Zustand';
  $handler->display->display_options['fields']['field_status_quo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status_quo']['hide_empty'] = TRUE;
  /* Field: Content: Energy Consumption Certificate Type */
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['id'] = 'field_objekt_energieausweistyp';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['table'] = 'field_data_field_objekt_energieausweistyp';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['field'] = 'field_objekt_energieausweistyp';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['empty'] = 'wird bei Bedarf vorgelegt.';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['hide_empty'] = TRUE;
  /* Field: Content: Final energy demand */
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['id'] = 'field_objekt_endenergiebedarf';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['table'] = 'field_data_field_objekt_endenergiebedarf';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['field'] = 'field_objekt_endenergiebedarf';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Energieeffizienzklasse */
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['id'] = 'field_objekt_effizienzklasse';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['table'] = 'field_data_field_objekt_effizienzklasse';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['field'] = 'field_objekt_effizienzklasse';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['hide_empty'] = TRUE;
  /* Field: Content: Energieträger */
  $handler->display->display_options['fields']['field_objekt_energietraeger']['id'] = 'field_objekt_energietraeger';
  $handler->display->display_options['fields']['field_objekt_energietraeger']['table'] = 'field_data_field_objekt_energietraeger';
  $handler->display->display_options['fields']['field_objekt_energietraeger']['field'] = 'field_objekt_energietraeger';
  $handler->display->display_options['fields']['field_objekt_energietraeger']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_energietraeger']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_energietraeger']['hide_empty'] = TRUE;
  /* Field: Content: Year built */
  $handler->display->display_options['fields']['field_year_built']['id'] = 'field_year_built';
  $handler->display->display_options['fields']['field_year_built']['table'] = 'field_data_field_year_built';
  $handler->display->display_options['fields']['field_year_built']['field'] = 'field_year_built';
  $handler->display->display_options['fields']['field_year_built']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_year_built']['alter']['text'] = '<div class="merkmale">
[field_apart_rooms_1]
[field_apart_sleeping_rooms]
[field_apart_bathrooms]
[field_moving_in_from]
[field_apart_floor]
[field_no_of_floors]
[field_apart_commission]
[field_apart_hoa_fee]
[field_status_quo]
[field_objekt_energieausweistyp]
[field_objekt_endenergiebedarf]
[field_objekt_effizienzklasse]
[field_objekt_energietraeger]
[field_year_built]
</div>';
  $handler->display->display_options['fields']['field_year_built']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_built']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_year_built']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_year_built']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: closing div class=apartmerkmale */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'closing div class=apartmerkmale';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Content: Fittings */
  $handler->display->display_options['fields']['field_ausstattung']['id'] = 'field_ausstattung';
  $handler->display->display_options['fields']['field_ausstattung']['table'] = 'field_data_field_ausstattung';
  $handler->display->display_options['fields']['field_ausstattung']['field'] = 'field_ausstattung';
  $handler->display->display_options['fields']['field_ausstattung']['alter']['text'] = '<li>[field_ausstattung]</li>';
  $handler->display->display_options['fields']['field_ausstattung']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ausstattung']['element_label_class'] = 'ausstattung-label';
  $handler->display->display_options['fields']['field_ausstattung']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausstattung']['element_wrapper_class'] = 'ausstattung';
  $handler->display->display_options['fields']['field_ausstattung']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ausstattung']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ausstattung']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ausstattung']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ausstattung']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ausstattung']['multi_type'] = 'ul';
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures']['id'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['table'] = 'field_data_field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_pictures']['settings'] = array(
    'image_style' => 'expose',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_apart_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_apart_pictures']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment description */
  $handler->display->display_options['fields']['field_apart_description']['id'] = 'field_apart_description';
  $handler->display->display_options['fields']['field_apart_description']['table'] = 'field_data_field_apart_description';
  $handler->display->display_options['fields']['field_apart_description']['field'] = 'field_apart_description';
  $handler->display->display_options['fields']['field_apart_description']['label'] = '';
  $handler->display->display_options['fields']['field_apart_description']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_apart_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_description']['hide_empty'] = TRUE;
  /* Field: Content: Floor plan */
  $handler->display->display_options['fields']['field_apart_floor_plan']['id'] = 'field_apart_floor_plan';
  $handler->display->display_options['fields']['field_apart_floor_plan']['table'] = 'field_data_field_apart_floor_plan';
  $handler->display->display_options['fields']['field_apart_floor_plan']['field'] = 'field_apart_floor_plan';
  $handler->display->display_options['fields']['field_apart_floor_plan']['label'] = '';
  $handler->display->display_options['fields']['field_apart_floor_plan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_floor_plan']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_floor_plan']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_floor_plan']['settings'] = array(
    'image_style' => 'expose',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_apart_floor_plan']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_apart_floor_plan']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_apart_floor_plan']['separator'] = '';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_object_location']['id'] = 'field_object_location';
  $handler->display->display_options['fields']['field_object_location']['table'] = 'field_data_field_object_location';
  $handler->display->display_options['fields']['field_object_location']['field'] = 'field_object_location';
  $handler->display->display_options['fields']['field_object_location']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_location']['element_label_colon'] = FALSE;
  /* Field: Content: Apartment location */
  $handler->display->display_options['fields']['field_apart_location']['id'] = 'field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['table'] = 'field_data_field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['field'] = 'field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['label'] = 'Location';
  $handler->display->display_options['fields']['field_apart_location']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_apart_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_location']['empty'] = '[field_object_location]';
  /* Field: Content: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'field_data_field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['alter']['text'] = '<iframe width=\'100%\' height=\'400px\' frameBorder=\'0\' src=\'https://a.tiles.mapbox.com/v4/heliogabal23.l8fho93p/attribution,zoompan,zoomwheel,geocoder,share.html?access_token=pk.eyJ1IjoiaGVsaW9nYWJhbDIzIiwiYSI6IllaSnN4azQifQ.fR5dKirb7efL6hsZD18AOw\'></iframe>';
  $handler->display->display_options['fields']['field_objekt_wkt']['element_class'] = 'mapcontainer';
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['type'] = 'geofield_leaflet';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'leaflet_map' => 'leaflet-mapbox-0',
    'height' => '400',
    'popup' => array(
      'show' => 0,
      'text' => '',
    ),
    'zoom' => array(
      'initialZoom' => '16',
      'minZoom' => '16',
      'maxZoom' => '16',
    ),
    'icon' => array(
      'iconType' => 'marker',
      'iconUrl' => '/sites/all/themes/hk_theme/icons/markers/Icon_House2.png',
      'shadowUrl' => '',
      'html' => '',
      'iconImageStyle' => '',
      'htmlClass' => '',
      'iconSize' => array(
        'x' => '32',
        'y' => '42',
      ),
      'iconAnchor' => array(
        'x' => '0',
        'y' => '0',
      ),
      'shadowAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'popupAnchor' => array(
        'x' => '',
        'y' => '',
      ),
    ),
    'vector_display' => array(
      'stroke_override' => 0,
      'stroke' => 0,
      'color' => '',
      'weight' => '',
      'opacity' => '',
      'dashArray' => '',
      'fill' => 0,
      'fillColor' => '',
      'fillOpacity' => '',
      'clickable' => 0,
    ),
  );
  /* Field: Content: Object images */
  $handler->display->display_options['fields']['field_object_images_1']['id'] = 'field_object_images_1';
  $handler->display->display_options['fields']['field_object_images_1']['table'] = 'field_data_field_object_images';
  $handler->display->display_options['fields']['field_object_images_1']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images_1']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_object_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images_1']['settings'] = array(
    'image_style' => 'expose',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_object_images_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_object_images_1']['delta_offset'] = '1';
  /* Field: Content: Object images */
  $handler->display->display_options['fields']['field_object_images']['id'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['table'] = 'field_data_field_object_images';
  $handler->display->display_options['fields']['field_object_images']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_images']['label'] = '';
  $handler->display->display_options['fields']['field_object_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_object_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images']['settings'] = array(
    'image_style' => 'expose',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_object_images']['delta_offset'] = '2';
  $handler->display->display_options['fields']['field_object_images']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_object_images']['separator'] = '';
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures_1']['id'] = 'field_apart_pictures_1';
  $handler->display->display_options['fields']['field_apart_pictures_1']['table'] = 'field_data_field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures_1']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures_1']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_pictures_1']['settings'] = array(
    'image_style' => 'expose',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_apart_pictures_1']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_apart_pictures_1']['multi_type'] = 'ul';
  /* Field: Content: Ansprechpartner */
  $handler->display->display_options['fields']['field_ansprechpartner']['id'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['table'] = 'field_data_field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['field'] = 'field_ansprechpartner';
  $handler->display->display_options['fields']['field_ansprechpartner']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_ansprechpartner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ansprechpartner']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ansprechpartner']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_ansprechpartner']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Print */
  $handler = $view->new_display('page', 'Print', 'print');
  $handler->display->display_options['display_description'] = 'Using the print module to create the PDF';
  $handler->display->display_options['path'] = 'node/%/expose';
  $export['expose'] = $view;

  return $export;
}

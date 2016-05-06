<?php
/**
 * @file
 * hk_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_admin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin';
  $view->description = 'Admintool für H+K, zur einfachen Bearbeitung von Objekten, Wohnungen und Seiten.';
  $view->tag = 'hk';
  $view->base_table = 'node';
  $view->human_name = 'Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inhalte';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['field_language'] = 'de';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none-debug';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Erweiterte Optionen',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_objektid_nunumeric_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_bezirk_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title' => 'title',
    'edit_node' => 'edit_node',
    'sid' => 'sid',
    'language' => 'language',
    'status' => 'status',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'field_objektid_nunumeric';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kopfbereich: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a class="btn" href="/node/add/objekt?destination=/admin/dash/wohnungen">Neues Objekt erstellen</a> | <a class="btn" href="/node/add/apartment?destination=/admin/dash/wohnungen">Neue Wohnung erstellen</a>';
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['id'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['field'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['label'] = 'Wohnungen';
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_object_ref_target_id']['id'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['field'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['label'] = 'Objekt';
  /* Beziehung: Inhaltsübersetzung: Übersetzungen */
  $handler->display->display_options['relationships']['translation']['id'] = 'translation';
  $handler->display->display_options['relationships']['translation']['table'] = 'node';
  $handler->display->display_options['relationships']['translation']['field'] = 'translation';
  /* Feld: Stapelverarbeitungen: Inhalt */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'language' => 'language',
          'status' => 'status',
          'page::body' => 'page::body',
          'page::title_field' => 'page::title_field',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_status_quo' => 'objekt::field_status_quo',
          'objekt::field_topobjekt' => 'objekt::field_topobjekt',
          'objekt::field_wug_act_rent' => 'objekt::field_wug_act_rent',
          'objekt::field_wug_no_of_units' => 'objekt::field_wug_no_of_units',
          'objekt::field_wug_occupancy' => 'objekt::field_wug_occupancy',
          'objekt::field_wug_opt_constrruct' => 'objekt::field_wug_opt_constrruct',
          'objekt::field_wug_total_space' => 'objekt::field_wug_total_space',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_object_txt_map_popup' => 'objekt::field_object_txt_map_popup',
          'objekt::field_objekt_energieausweistyp' => 'objekt::field_objekt_energieausweistyp',
          'objekt::field_objekt_energietraeger' => 'objekt::field_objekt_energietraeger',
          'objekt::field_objekt_endenergiebedarf' => 'objekt::field_objekt_endenergiebedarf',
          'objekt::field_objekt_effizienzklasse' => 'objekt::field_objekt_effizienzklasse',
          'objekt::field_save_workflow' => 'objekt::field_save_workflow',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_expose' => 'apartment::field_apart_expose',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_net_rent' => 'apartment::field_apart_net_rent',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rate_of_return' => 'apartment::field_apart_rate_of_return',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_apart_type' => 'apartment::field_apart_type',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_save_workflow' => 'apartment::field_save_workflow',
        ),
      ),
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Objekt';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/content/dash" title="Objekt ansehen">[title]</a> | <a href="/node/[nid]/edit?destination=/admin/content/dash">Bearbeiten</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Save Workflow */
  $handler->display->display_options['fields']['field_save_workflow']['id'] = 'field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['table'] = 'field_data_field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['field'] = 'field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['relationship'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['fields']['field_save_workflow']['label'] = 'Status';
  $handler->display->display_options['fields']['field_save_workflow']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_save_workflow']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Apartments */
  $handler->display->display_options['fields']['field_obj_apartments']['id'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['field'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['label'] = 'Wohnungen';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['text'] = '<a href="/node/[field_obj_apartments-target_id]?destination=/admin/content/dash" title="Wohnung ansehen">[field_obj_apartments]</a> | <a href="/node/[field_obj_apartments-target_id]/edit?destination=/admin/content/dash" title="Wohnung bearbeiten">bearbeiten</a> | [field_save_workflow]<!-- | <a href="/node/[field_obj_apartments-target_id]/translate?destination=/admin/content/dash" title="Wohnung übersetzen">übersetzen</a>-->';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['path'] = 'node/[field_obj_apartments-target_id]/edit?destination=admin/content/dash';
  $handler->display->display_options['fields']['field_obj_apartments']['element_class'] = 'aparts';
  $handler->display->display_options['fields']['field_obj_apartments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_obj_apartments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_obj_apartments']['multi_type'] = 'ul';
  /* Feld: Inhalt: Sprache */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  /* Feld: Inhalt: Veröffentlicht */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Feld: Inhalt: Änderungsdatum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Changed';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sortierkriterien: Inhalt: Objekt ID (field_objektid_nunumeric) */
  $handler->display->display_options['sorts']['field_objektid_nunumeric_value']['id'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['sorts']['field_objektid_nunumeric_value']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['sorts']['field_objektid_nunumeric_value']['field'] = 'field_objektid_nunumeric_value';
  /* Sortierkriterien: Inhalt: Apartment No. (field_apart_no) */
  $handler->display->display_options['sorts']['field_apart_no_value']['id'] = 'field_apart_no_value';
  $handler->display->display_options['sorts']['field_apart_no_value']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['sorts']['field_apart_no_value']['field'] = 'field_apart_no_value';
  /* Sortierkriterien: Inhalt: Titel (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Objekt ID / Titel';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title' => 'title',
  );
  /* Filterkriterium: Inhalt: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filterkriterium: Inhalt: Category (field_kategorie) */
  $handler->display->display_options['filters']['field_kategorie_tid']['id'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['field'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_kategorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator_id'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['label'] = 'Kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['identifier'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_kategorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategorie_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_kategorie_tid']['hierarchy'] = 1;
  /* Filterkriterium: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
  /* Filterkriterium: Workflow current: New state name */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 1;
  /* Filterkriterium: Inhalt: Sprache */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    'de' => 'de',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;
  /* Filterkriterium: Inhalt: Sprache */
  $handler->display->display_options['filters']['language_2']['id'] = 'language_2';
  $handler->display->display_options['filters']['language_2']['table'] = 'node';
  $handler->display->display_options['filters']['language_2']['field'] = 'language';
  $handler->display->display_options['filters']['language_2']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['filters']['language_2']['value'] = array(
    'de' => 'de',
  );
  $handler->display->display_options['filters']['language_2']['group'] = 1;
  /* Filterkriterium: Inhalt: Sprache */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    'de' => 'de',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'views_bulk_operations' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'nid' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'edit_node' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_objektid_nunumeric' => array(
      'merge_option' => 'first_value',
      'separator' => ' ',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => '',
    ),
    'sid' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_save_workflow' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_obj_apartments' => array(
      'merge_option' => 'first_value',
      'separator' => '',
    ),
    'language' => array(
      'merge_option' => 'filter',
      'separator' => '',
    ),
    'status' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'changed' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
  );

  /* Display: Inhalte */
  $handler = $view->new_display('page', 'Inhalte', 'dashboard');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title' => 'title',
    'edit_node' => 'edit_node',
    'sid' => 'sid',
    'language' => 'language',
    'status' => 'status',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'field_objektid_nunumeric';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Stapelverarbeitungen: Inhalt */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'objekt::field_obj_verkaeufer' => 'objekt::field_obj_verkaeufer',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'objekt::field_object_desc_commercial' => 'objekt::field_object_desc_commercial',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_description_invest' => 'objekt::field_object_description_invest',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_multi_apart_types' => 'objekt::field_object_multi_apart_types',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_obj_kond_acquise' => 'objekt::field_obj_kond_acquise',
          'objekt::field_wug_act_rent' => 'objekt::field_wug_act_rent',
          'objekt::field_wug_no_of_units' => 'objekt::field_wug_no_of_units',
          'objekt::field_wug_occupancy' => 'objekt::field_wug_occupancy',
          'objekt::field_wug_opt_constrruct' => 'objekt::field_wug_opt_constrruct',
          'objekt::field_wug_total_space' => 'objekt::field_wug_total_space',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_object_txt_map_popup' => 'objekt::field_object_txt_map_popup',
          'objekt::field_objekt_energieausweistyp' => 'objekt::field_objekt_energieausweistyp',
          'objekt::field_objekt_energietraeger' => 'objekt::field_objekt_energietraeger',
          'objekt::field_objekt_endenergiebedarf' => 'objekt::field_objekt_endenergiebedarf',
          'objekt::field_objekt_effizienzklasse' => 'objekt::field_objekt_effizienzklasse',
          'objekt::field_save_workflow' => 'objekt::field_save_workflow',
          'objekt::field_obj_enev_date' => 'objekt::field_obj_enev_date',
          'objekt::field_obj_enev_haustyp' => 'objekt::field_obj_enev_haustyp',
          'objekt::field_obj_konditionen_tipp' => 'objekt::field_obj_konditionen_tipp',
          'objekt::field_obj_tippgeber' => 'objekt::field_obj_tippgeber',
          'objekt::field_obj_kond_gemeingesch' => 'objekt::field_obj_kond_gemeingesch',
          'objekt::field_obj_acquise' => 'objekt::field_obj_acquise',
          'objekt::field_obj_enev_consumption_value' => 'objekt::field_obj_enev_consumption_value',
        ),
      ),
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Objekt';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/content/dash" title="Objekt ansehen">[title]</a> | <a href="/node/[nid]/edit?destination=/admin/content/dash">Bearbeiten</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Sprache */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Feld: Inhalt: Veröffentlicht */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Feld: Inhalt: Änderungsdatum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Changed';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Objekt ID / Titel';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title' => 'title',
  );
  /* Filterkriterium: Inhalt: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filterkriterium: Inhalt: Category (field_kategorie) */
  $handler->display->display_options['filters']['field_kategorie_tid']['id'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['field'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_kategorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator_id'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['label'] = 'Kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['identifier'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_kategorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategorie_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_kategorie_tid']['hierarchy'] = 1;
  /* Filterkriterium: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
  /* Filterkriterium: Workflow current: New state name */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 1;
  /* Filterkriterium: Inhalt: Sprache */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    'de' => 'de',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;
  $handler->display->display_options['field_config'] = array(
    'views_bulk_operations' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'nid' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'edit_node' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_objektid_nunumeric' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'title' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'sid' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_apart_no' => array(
      'merge_option' => 'filter',
      'separator' => '<br />',
    ),
    'field_obj_apartments' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_save_workflow' => array(
      'merge_option' => 'filter',
      'separator' => '',
    ),
    'language' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'status' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'changed' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/dash';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Inhalte';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-admin-menu';

  /* Display: Admin Objekte */
  $handler = $view->new_display('page', 'Admin Objekte', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Objekte';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Stapelverarbeitungen: Inhalt */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'objekt::field_obj_verkaeufer' => 'objekt::field_obj_verkaeufer',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'objekt::field_object_desc_commercial' => 'objekt::field_object_desc_commercial',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_description_invest' => 'objekt::field_object_description_invest',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_multi_apart_types' => 'objekt::field_object_multi_apart_types',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_obj_kond_acquise' => 'objekt::field_obj_kond_acquise',
          'objekt::field_wug_act_rent' => 'objekt::field_wug_act_rent',
          'objekt::field_wug_no_of_units' => 'objekt::field_wug_no_of_units',
          'objekt::field_wug_occupancy' => 'objekt::field_wug_occupancy',
          'objekt::field_wug_opt_constrruct' => 'objekt::field_wug_opt_constrruct',
          'objekt::field_wug_total_space' => 'objekt::field_wug_total_space',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::title_field' => 'objekt::title_field',
          'objekt::field_object_txt_map_popup' => 'objekt::field_object_txt_map_popup',
          'objekt::field_objekt_energieausweistyp' => 'objekt::field_objekt_energieausweistyp',
          'objekt::field_objekt_energietraeger' => 'objekt::field_objekt_energietraeger',
          'objekt::field_objekt_endenergiebedarf' => 'objekt::field_objekt_endenergiebedarf',
          'objekt::field_objekt_effizienzklasse' => 'objekt::field_objekt_effizienzklasse',
          'objekt::field_save_workflow' => 'objekt::field_save_workflow',
          'objekt::field_obj_gemeinschaftsgeschaeft' => 'objekt::field_obj_gemeinschaftsgeschaeft',
          'objekt::field_obj_enev_date' => 'objekt::field_obj_enev_date',
          'objekt::field_obj_enev_haustyp' => 'objekt::field_obj_enev_haustyp',
          'objekt::field_obj_konditionen_tipp' => 'objekt::field_obj_konditionen_tipp',
          'objekt::field_obj_tippgeber' => 'objekt::field_obj_tippgeber',
          'objekt::field_obj_kond_gemeingesch' => 'objekt::field_obj_kond_gemeingesch',
          'objekt::field_obj_acquise' => 'objekt::field_obj_acquise',
          'objekt::field_obj_enev_consumption_value' => 'objekt::field_obj_enev_consumption_value',
        ),
      ),
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_next_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Objekt';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/content/dash" title="Objekt ansehen">[title]</a> | <a href="/node/[nid]/edit?destination=/admin/content/dash">Bearbeiten</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Save Workflow */
  $handler->display->display_options['fields']['field_save_workflow']['id'] = 'field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['table'] = 'field_data_field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['field'] = 'field_save_workflow';
  $handler->display->display_options['fields']['field_save_workflow']['relationship'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['fields']['field_save_workflow']['label'] = 'Status';
  $handler->display->display_options['fields']['field_save_workflow']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_save_workflow']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Apartments */
  $handler->display->display_options['fields']['field_obj_apartments']['id'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['field'] = 'field_obj_apartments';
  $handler->display->display_options['fields']['field_obj_apartments']['label'] = 'Wohnungen';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['text'] = '<a href="/node/[field_obj_apartments-target_id]?destination=/admin/content/dash" title="Wohnung ansehen">[field_obj_apartments]</a> | <a href="/node/[field_obj_apartments-target_id]/edit?destination=/admin/content/dash" title="Wohnung bearbeiten">bearbeiten</a> | [field_save_workflow]<!-- | <a href="/node/[field_obj_apartments-target_id]/translate?destination=/admin/content/dash" title="Wohnung übersetzen">übersetzen</a>-->';
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_obj_apartments']['alter']['path'] = 'node/[field_obj_apartments-target_id]/edit?destination=admin/content/dash';
  $handler->display->display_options['fields']['field_obj_apartments']['element_class'] = 'aparts';
  $handler->display->display_options['fields']['field_obj_apartments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_obj_apartments']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_obj_apartments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_obj_apartments']['multi_type'] = 'ul';
  /* Feld: Inhalt: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['relationship'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Nr';
  $handler->display->display_options['fields']['field_apart_no']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_no']['alter']['text'] = '[field_apart_no] | [field_obj_apartments] | [field_save_workflow]';
  /* Feld: Inhalt: Sprache */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  /* Feld: Inhalt: Veröffentlicht */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Feld: Inhalt: Änderungsdatum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Feld: Inhalt: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'field_data_field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Objekt ID / Titel';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title' => 'title',
  );
  /* Filterkriterium: Inhalt: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filterkriterium: Inhalt: Category (field_kategorie) */
  $handler->display->display_options['filters']['field_kategorie_tid']['id'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['field'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_kategorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator_id'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['label'] = 'Kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['identifier'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_kategorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategorie_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_kategorie_tid']['hierarchy'] = 1;
  /* Filterkriterium: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
  /* Filterkriterium: Workflow current: New state name */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 1;
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'views_bulk_operations' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'nid' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'edit_node' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_objektid_nunumeric' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'sid' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_save_workflow' => array(
      'merge_option' => 'first_value',
      'separator' => '',
    ),
    'field_obj_apartments' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'language' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'status' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'changed' => array(
      'merge_option' => 'merge_unique',
      'separator' => '',
    ),
    'field_apart_no' => array(
      'merge_option' => 'merge_unique',
      'separator' => '<br />',
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/dash/objekte';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Objekte';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Objekte';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-admin-menu';

  /* Display: Admin Objekte Quickedit */
  $handler = $view->new_display('page', 'Admin Objekte Quickedit', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Objekte';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'field_objektid_nunumeric_editable' => 'field_objektid_nunumeric_editable',
    'title_editable' => 'title_editable',
    'field_bezirk_editable' => 'field_bezirk_editable',
    'field_kategorie_editable' => 'field_kategorie_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_objektid_nunumeric_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_bezirk_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_kategorie_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Objekt ID (editable) */
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['id'] = 'field_objektid_nunumeric_editable';
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['field'] = 'field_objektid_nunumeric_editable';
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['label'] = 'Objekt ID';
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_objektid_nunumeric_editable']['suppress_description'] = 1;
  /* Feld: Inhalt: Titel (editable) */
  $handler->display->display_options['fields']['title_editable']['id'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['table'] = 'node';
  $handler->display->display_options['fields']['title_editable']['field'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['label'] = '';
  $handler->display->display_options['fields']['title_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_editable']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_editable']['textfield_size'] = '75';
  /* Feld: Inhalt: Address (editable) */
  $handler->display->display_options['fields']['field_address_editable']['id'] = 'field_address_editable';
  $handler->display->display_options['fields']['field_address_editable']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_editable']['field'] = 'field_address_editable';
  $handler->display->display_options['fields']['field_address_editable']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_editable']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_address_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_address_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Borough (editable) */
  $handler->display->display_options['fields']['field_bezirk_editable']['id'] = 'field_bezirk_editable';
  $handler->display->display_options['fields']['field_bezirk_editable']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['fields']['field_bezirk_editable']['field'] = 'field_bezirk_editable';
  $handler->display->display_options['fields']['field_bezirk_editable']['label'] = 'Bezirk';
  $handler->display->display_options['fields']['field_bezirk_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_bezirk_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_bezirk_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_bezirk_editable']['suppress_description'] = 1;
  /* Feld: Inhalt: Category (editable) */
  $handler->display->display_options['fields']['field_kategorie_editable']['id'] = 'field_kategorie_editable';
  $handler->display->display_options['fields']['field_kategorie_editable']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['fields']['field_kategorie_editable']['field'] = 'field_kategorie_editable';
  $handler->display->display_options['fields']['field_kategorie_editable']['label'] = 'Kategorie';
  $handler->display->display_options['fields']['field_kategorie_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_kategorie_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_kategorie_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_kategorie_editable']['suppress_description'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/dash/objekte/quick';
  $handler->display->display_options['menu']['title'] = 'Quickedit';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Objekte';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Admin Wohnungen */
  $handler = $view->new_display('page', 'Admin Wohnungen', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Dashboard Wohnungen';
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_object_ref',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'field_apart_no' => 'field_apart_no',
    'title_field' => 'title_field',
    'field_apart_price_editable' => 'field_apart_price_editable',
    'language' => 'language',
    'status' => 'status',
    'field_obj_schattenobjekt' => 'field_obj_schattenobjekt',
    'sid' => 'sid',
    'field_kategorie' => 'field_kategorie',
    'created' => 'created',
    'changed' => 'changed',
    'field_object_ref' => 'field_object_ref',
    'title_field_1' => 'title_field_1',
    'field_objekt_wkt_editable' => 'field_objekt_wkt_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_apart_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_apart_price_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_obj_schattenobjekt' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kategorie' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_object_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objekt_wkt_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Nothing to see here';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>&nbsp;</p><p>&nbsp;</p><h1>Nope. Nichts dergleichen zu finden. Such nach was anderem.</h1>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['id'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['field'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['label'] = 'Wohnungen';
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_object_ref_target_id']['id'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['field'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['label'] = 'Objekt';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Stapelverarbeitungen: Inhalt */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_create_pdf_expose' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Einfaches PDF Exposé erstellen',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_expose' => 'apartment::field_apart_expose',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_net_rent' => 'apartment::field_apart_net_rent',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rate_of_return' => 'apartment::field_apart_rate_of_return',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_apart_type' => 'apartment::field_apart_type',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_obj_schattenobjekt' => 'apartment::field_obj_schattenobjekt',
          'apartment::field_save_workflow' => 'apartment::field_save_workflow',
          'apartment::field_apart_ceiling_height' => 'apartment::field_apart_ceiling_height',
          'apartment::field_apart_maintenance_reserve' => 'apartment::field_apart_maintenance_reserve',
          'apartment::field_apart_maint_reserve_value' => 'apartment::field_apart_maint_reserve_value',
          'apartment::field_apart_alloc_incident_costs' => 'apartment::field_apart_alloc_incident_costs',
          'apartment::field_apart_nalloc_incid_cost' => 'apartment::field_apart_nalloc_incid_cost',
          'apartment::field_status_quo' => 'apartment::field_status_quo',
        ),
      ),
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_vbo_change_workflow_status_to_archived' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Archivieren',
    ),
    'rules_component::rules_vbo_change_workflow_status' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Veröffentlichen',
    ),
    'rules_component::rules_vbo_change_workflow_status_to_ready' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Fertig zur Veröffentlichung',
    ),
    'rules_component::hk_rules_vbo_change_workflow_status_to_shadow_apartment' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Als Schattenwohnnung markieren',
    ),
    'rules_component::rules_vbo_change_workflow_status_to_sold' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Als verkauft markieren',
    ),
  );
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Feld: Inhalt: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Nr.';
  $handler->display->display_options['fields']['field_apart_no']['exclude'] = TRUE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[field_apart_no] | <a href="/node/[nid]" title="Wohnung ansehen">[title_field]</a> | <a href="/node/[nid]/edit?destination=/admin/content/dash/wohnungen">Bearbeiten</a> | <a href="/node/[nid]/translate?destination=/admin/content/dash/wohnungen">Übersetzen</a> | <a href="/node/[nid]/clone/confirm?destination=/admin/content/dash/wohnungen">Klonen</a>';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Feld: Inhalt: Purchasing price (editable) */
  $handler->display->display_options['fields']['field_apart_price_editable']['id'] = 'field_apart_price_editable';
  $handler->display->display_options['fields']['field_apart_price_editable']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price_editable']['field'] = 'field_apart_price_editable';
  $handler->display->display_options['fields']['field_apart_price_editable']['label'] = 'Preis';
  $handler->display->display_options['fields']['field_apart_price_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_apart_price_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_apart_price_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_apart_price_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Sprache */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['exclude'] = TRUE;
  /* Feld: Inhalt: Veröffentlicht */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Feld: Inhalt: Schattenwohnung? */
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['id'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['table'] = 'field_data_field_obj_schattenobjekt';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['field'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['label'] = 'Schatten?';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['element_label_colon'] = FALSE;
  /* Feld: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Category */
  $handler->display->display_options['fields']['field_kategorie']['id'] = 'field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['field'] = 'field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['label'] = 'Kategorie';
  $handler->display->display_options['fields']['field_kategorie']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Inhalt: Beitragsdatum */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Erstellungsdatum';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Feld: Inhalt: Änderungsdatum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Feld: Inhalt: Object */
  $handler->display->display_options['fields']['field_object_ref']['id'] = 'field_object_ref';
  $handler->display->display_options['fields']['field_object_ref']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['fields']['field_object_ref']['field'] = 'field_object_ref';
  $handler->display->display_options['fields']['field_object_ref']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_object_ref']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 0;
  /* Feld: Inhalt: Standort (editable) */
  $handler->display->display_options['fields']['field_objekt_wkt_editable']['id'] = 'field_objekt_wkt_editable';
  $handler->display->display_options['fields']['field_objekt_wkt_editable']['table'] = 'field_data_field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt_editable']['field'] = 'field_objekt_wkt_editable';
  $handler->display->display_options['fields']['field_objekt_wkt_editable']['label'] = 'Standort';
  $handler->display->display_options['fields']['field_objekt_wkt_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt_editable']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt_editable']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_objekt_wkt_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_objekt_wkt_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_objekt_wkt_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Objekt ID / Titel';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title_field' => 'title_field',
    'title_field_1' => 'title_field_1',
  );
  /* Filterkriterium: Inhalt: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filterkriterium: Inhalt: Category (field_kategorie) */
  $handler->display->display_options['filters']['field_kategorie_tid']['id'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['field'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_kategorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator_id'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['label'] = 'Kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['identifier'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_kategorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategorie_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_kategorie_tid']['hierarchy'] = 1;
  /* Filterkriterium: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
  $handler->display->display_options['filters']['sid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['sid']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['group_info']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['sid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Todo (Entwurf + Fertig)',
      'operator' => 'in',
      'value' => array(
        2 => '2',
        3 => '3',
      ),
    ),
    2 => array(
      'title' => 'Todo + Veröffentlicht',
      'operator' => 'in',
      'value' => array(
        2 => '2',
        3 => '3',
        4 => '4',
      ),
    ),
    3 => array(
      'title' => 'Entwurf',
      'operator' => 'in',
      'value' => array(
        2 => '2',
      ),
    ),
    4 => array(
      'title' => 'Fertig zur Veröffentlichung',
      'operator' => 'in',
      'value' => array(
        3 => '3',
      ),
    ),
    5 => array(
      'title' => 'Veröffentlicht',
      'operator' => 'in',
      'value' => array(
        4 => '4',
      ),
    ),
    6 => array(
      'title' => 'Veröffentlicht + Schattenwohnungn',
      'operator' => 'in',
      'value' => array(
        4 => '4',
        7 => '7',
      ),
    ),
    7 => array(
      'title' => 'Schattenwohnungen',
      'operator' => 'in',
      'value' => array(
        7 => '7',
      ),
    ),
    8 => array(
      'title' => 'Nicht veröffentlicht (Archiviert + Verkauft))',
      'operator' => 'in',
      'value' => array(
        5 => '5',
        6 => '6',
      ),
    ),
    9 => array(
      'title' => 'Archiviert',
      'operator' => 'in',
      'value' => array(
        5 => '5',
      ),
    ),
    10 => array(
      'title' => 'Verkauft',
      'operator' => 'in',
      'value' => array(
        6 => '6',
      ),
    ),
  );
  /* Filterkriterium: Inhalt: Schattenwohnung? (field_obj_schattenobjekt) */
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['id'] = 'field_obj_schattenobjekt_value';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['table'] = 'field_data_field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['field'] = 'field_obj_schattenobjekt_value';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['group'] = 1;
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['expose']['operator_id'] = 'field_obj_schattenobjekt_value_op';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['expose']['label'] = 'Schattenwohnung?';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['expose']['operator'] = 'field_obj_schattenobjekt_value_op';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['expose']['identifier'] = 'field_obj_schattenobjekt_value';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['group_info']['label'] = 'Schattenwohnung?';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['group_info']['identifier'] = 'field_obj_schattenobjekt_value';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['group_info']['default_group'] = '3';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'ja',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'nein',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
    3 => array(
      'title' => 'alle',
      'operator' => 'or',
      'value' => array(
        0 => '0',
        1 => '1',
      ),
    ),
  );
  /* Filterkriterium: Inhalt: Titel (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'admin/content/dash/wohnungen';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Wohnungen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Admin Wohnungen Quickedit */
  $handler = $view->new_display('page', 'Admin Wohnungen Quickedit', 'wohnungen');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Wohnungen';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'field_apart_no' => 'field_apart_no',
    'title' => 'title',
    'title_field_editable' => 'title_field_editable',
    'field_apart_price' => 'field_apart_price',
    'field_apart_price_editable' => 'field_apart_price_editable',
    'field_kategorie_editable' => 'field_kategorie_editable',
    'field_bezirk_editable' => 'field_bezirk_editable',
    'field_ausstattung_editable' => 'field_ausstattung_editable',
    'language' => 'language',
    'status' => 'status',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title_field_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_price_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_kategorie_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bezirk_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ausstattung_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'language' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Feld: Inhalt: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Nr.';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Feld: Inhalt: Fittings (editable) */
  $handler->display->display_options['fields']['field_ausstattung_editable']['id'] = 'field_ausstattung_editable';
  $handler->display->display_options['fields']['field_ausstattung_editable']['table'] = 'field_data_field_ausstattung';
  $handler->display->display_options['fields']['field_ausstattung_editable']['field'] = 'field_ausstattung_editable';
  $handler->display->display_options['fields']['field_ausstattung_editable']['label'] = 'Ausstattung';
  $handler->display->display_options['fields']['field_ausstattung_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ausstattung_editable']['type'] = 'ds_taxonomy_view_mode';
  $handler->display->display_options['fields']['field_ausstattung_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ausstattung_editable']['widget_type'] = 'autocomplete_deluxe_taxonomy';
  $handler->display->display_options['fields']['field_ausstattung_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_ausstattung_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Purchasing price (editable) */
  $handler->display->display_options['fields']['field_apart_price_editable']['id'] = 'field_apart_price_editable';
  $handler->display->display_options['fields']['field_apart_price_editable']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price_editable']['field'] = 'field_apart_price_editable';
  $handler->display->display_options['fields']['field_apart_price_editable']['label'] = 'Preis';
  $handler->display->display_options['fields']['field_apart_price_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_price_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_apart_price_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_apart_price_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_apart_price_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Category (editable) */
  $handler->display->display_options['fields']['field_kategorie_editable']['id'] = 'field_kategorie_editable';
  $handler->display->display_options['fields']['field_kategorie_editable']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['fields']['field_kategorie_editable']['field'] = 'field_kategorie_editable';
  $handler->display->display_options['fields']['field_kategorie_editable']['label'] = 'Kategorie';
  $handler->display->display_options['fields']['field_kategorie_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategorie_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_kategorie_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_kategorie_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_kategorie_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Borough (editable) */
  $handler->display->display_options['fields']['field_bezirk_editable']['id'] = 'field_bezirk_editable';
  $handler->display->display_options['fields']['field_bezirk_editable']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['fields']['field_bezirk_editable']['field'] = 'field_bezirk_editable';
  $handler->display->display_options['fields']['field_bezirk_editable']['label'] = 'Bezirk';
  $handler->display->display_options['fields']['field_bezirk_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bezirk_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_bezirk_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_bezirk_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_bezirk_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Apartment location (editable) */
  $handler->display->display_options['fields']['field_apart_location_editable']['id'] = 'field_apart_location_editable';
  $handler->display->display_options['fields']['field_apart_location_editable']['table'] = 'field_data_field_apart_location';
  $handler->display->display_options['fields']['field_apart_location_editable']['field'] = 'field_apart_location_editable';
  $handler->display->display_options['fields']['field_apart_location_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_location_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_apart_location_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_apart_location_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Allocable incidental costs (editable) */
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs_editable']['id'] = 'field_apart_alloc_incident_costs_editable';
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs_editable']['table'] = 'field_data_field_apart_alloc_incident_costs';
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs_editable']['field'] = 'field_apart_alloc_incident_costs_editable';
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Not allocable incidental costs (editable) */
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost_editable']['id'] = 'field_apart_nalloc_incid_cost_editable';
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost_editable']['table'] = 'field_data_field_apart_nalloc_incid_cost';
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost_editable']['field'] = 'field_apart_nalloc_incid_cost_editable';
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: HOA fee (editable) */
  $handler->display->display_options['fields']['field_apart_hoa_fee_editable']['id'] = 'field_apart_hoa_fee_editable';
  $handler->display->display_options['fields']['field_apart_hoa_fee_editable']['table'] = 'field_data_field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee_editable']['field'] = 'field_apart_hoa_fee_editable';
  $handler->display->display_options['fields']['field_apart_hoa_fee_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_apart_hoa_fee_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_apart_hoa_fee_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_apart_hoa_fee_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Objekt ID (field_objektid_nunumeric) */
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['id'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['field'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['group'] = 1;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator_id'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['label'] = 'Objekt ID';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['identifier'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filterkriterium: Inhalt: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filterkriterium: Inhalt: Titel (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/dash/wohnungen/quick';
  $handler->display->display_options['menu']['title'] = 'Wohnungen Quick Edit';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Seiten */
  $handler = $view->new_display('page', 'Seiten', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Seiten';
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Stapelverarbeitungen: Inhalt */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'title' => 'title',
          'language' => 'language',
          'status' => 'status',
          'page::body' => 'page::body',
          'page::title_field' => 'page::title_field',
          'objekt::field_address' => 'objekt::field_address',
          'objekt::field_ansprechpartner' => 'objekt::field_ansprechpartner',
          'objekt::field_bezirk' => 'objekt::field_bezirk',
          'objekt::field_developer' => 'objekt::field_developer',
          'objekt::field_heating_type' => 'objekt::field_heating_type',
          'objekt::field_kategorie' => 'objekt::field_kategorie',
          'objekt::field_moving_in_from' => 'objekt::field_moving_in_from',
          'objekt::field_no_of_floors' => 'objekt::field_no_of_floors',
          'objekt::field_obj_apartments' => 'objekt::field_obj_apartments',
          'objekt::field_object_description' => 'objekt::field_object_description',
          'objekt::field_object_images' => 'objekt::field_object_images',
          'objekt::field_object_location' => 'objekt::field_object_location',
          'objekt::field_object_other' => 'objekt::field_object_other',
          'objekt::field_objekt_wkt' => 'objekt::field_objekt_wkt',
          'objekt::field_objektid_nunumeric' => 'objekt::field_objektid_nunumeric',
          'objekt::field_rent_commission' => 'objekt::field_rent_commission',
          'objekt::field_sale_commission' => 'objekt::field_sale_commission',
          'objekt::field_status_quo' => 'objekt::field_status_quo',
          'objekt::field_topobjekt' => 'objekt::field_topobjekt',
          'objekt::field_year_built' => 'objekt::field_year_built',
          'objekt::title_field' => 'objekt::title_field',
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_save_workflow' => 'apartment::field_save_workflow',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid]/edit?destination=admin/dash" title="Objekt bearbeiten">bearbeiten</a> | <a href="/node/[nid]/translate?destination=admin/dash" title="Objekt übersetzen">übersetzen</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Seite';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/content/dash/seiten" title="Objekt ansehen">[title]</a> | [edit_node]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Änderungsdatum */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Letze Änderung';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Feld: Inhalt: Sprache */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Veröffentlicht */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'oeffnungszeit' => 'oeffnungszeit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Veröffentlicht';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/dash/seiten';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Seiten';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Exposekarte */
  $handler = $view->new_display('page', 'Exposekarte', 'exposekarte');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Erweiterte Optionen',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_bezirk_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_kategorie_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'sid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Objekt ID oder Titel eingeben, um einen Marker anzuzeigen';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox-0';
  $handler->display->display_options['style_options']['map_height'] = '100vh';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'field_objekt_wkt' => 'field_objekt_wkt',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['default_marker']['default_marker_color'] = 'Icon_House2';
  $handler->display->display_options['style_options']['center_option'] = '1';
  $handler->display->display_options['style_options']['tags']['tag_css_class'] = 'tag-below-marker';
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
  $handler->display->display_options['style_options']['cluster_radius'] = '0';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    '' => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['zoom_ranges'] = array(
    1 => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_tooltips'] = 1;
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_outline'] = '0';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'average';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '10';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '100';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '1000';
  $handler->display->display_options['style_options']['empty_map_center'] = 'visitor';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '18';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '16';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Stapelverarbeitungen: Inhalt */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Objekt';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?destination=/admin/content/dash" title="Objekt ansehen">[title]</a> | <a href="/node/[nid]/edit?destination=/admin/content/dash">Bearbeiten</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'field_data_field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Beitrags-ID */
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
    'objekt' => 'objekt',
  );
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Objekt ID / Titel';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title' => 'title',
  );
  /* Filterkriterium: Inhalt: Sprache */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filterkriterium: Workflow current: New state name */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 1;
  /* Filterkriterium: Inhalt: Sprache */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;
  $handler->display->display_options['path'] = 'node/%/exposekarte';

  /* Display: Energieausweise */
  $handler = $view->new_display('page', 'Energieausweise', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Wohnungen';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'field_apart_no' => 'field_apart_no',
    'title' => 'title',
    'title_field_editable' => 'title_field_editable',
    'field_apart_price' => 'field_apart_price',
    'field_apart_price_editable' => 'field_apart_price_editable',
    'field_kategorie_editable' => 'field_kategorie_editable',
    'field_bezirk_editable' => 'field_bezirk_editable',
    'field_ausstattung_editable' => 'field_ausstattung_editable',
    'language' => 'language',
    'status' => 'status',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title_field_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_price_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_kategorie_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bezirk_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ausstattung_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'language' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Feld: Inhalt: Energy Consumption Certificate Type (editable) */
  $handler->display->display_options['fields']['field_objekt_energieausweistyp_editable']['id'] = 'field_objekt_energieausweistyp_editable';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp_editable']['table'] = 'field_data_field_objekt_energieausweistyp';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp_editable']['field'] = 'field_objekt_energieausweistyp_editable';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp_editable']['label'] = 'Energieausweistyp';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_objekt_energieausweistyp_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Energieeffizienzklasse (editable) */
  $handler->display->display_options['fields']['field_objekt_effizienzklasse_editable']['id'] = 'field_objekt_effizienzklasse_editable';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse_editable']['table'] = 'field_data_field_objekt_effizienzklasse';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse_editable']['field'] = 'field_objekt_effizienzklasse_editable';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse_editable']['label'] = 'Energieeffizienzklasse';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_objekt_effizienzklasse_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Energieträger (editable) */
  $handler->display->display_options['fields']['field_objekt_energietraeger_editable']['id'] = 'field_objekt_energietraeger_editable';
  $handler->display->display_options['fields']['field_objekt_energietraeger_editable']['table'] = 'field_data_field_objekt_energietraeger';
  $handler->display->display_options['fields']['field_objekt_energietraeger_editable']['field'] = 'field_objekt_energietraeger_editable';
  $handler->display->display_options['fields']['field_objekt_energietraeger_editable']['label'] = 'Energieträger';
  $handler->display->display_options['fields']['field_objekt_energietraeger_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_objekt_energietraeger_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_objekt_energietraeger_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Final energy demand (editable) */
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf_editable']['id'] = 'field_objekt_endenergiebedarf_editable';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf_editable']['table'] = 'field_data_field_objekt_endenergiebedarf';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf_editable']['field'] = 'field_objekt_endenergiebedarf_editable';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf_editable']['label'] = 'Energiebedarf';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Consumption value (editable) */
  $handler->display->display_options['fields']['field_obj_enev_consumption_value_editable']['id'] = 'field_obj_enev_consumption_value_editable';
  $handler->display->display_options['fields']['field_obj_enev_consumption_value_editable']['table'] = 'field_data_field_obj_enev_consumption_value';
  $handler->display->display_options['fields']['field_obj_enev_consumption_value_editable']['field'] = 'field_obj_enev_consumption_value_editable';
  $handler->display->display_options['fields']['field_obj_enev_consumption_value_editable']['label'] = 'Verbrauchskennwert';
  $handler->display->display_options['fields']['field_obj_enev_consumption_value_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_obj_enev_consumption_value_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_obj_enev_consumption_value_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_obj_enev_consumption_value_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Energy Performance Certificate (editable) */
  $handler->display->display_options['fields']['field_obj_enev_file_editable']['id'] = 'field_obj_enev_file_editable';
  $handler->display->display_options['fields']['field_obj_enev_file_editable']['table'] = 'field_data_field_obj_enev_file';
  $handler->display->display_options['fields']['field_obj_enev_file_editable']['field'] = 'field_obj_enev_file_editable';
  $handler->display->display_options['fields']['field_obj_enev_file_editable']['label'] = 'Energieausweis';
  $handler->display->display_options['fields']['field_obj_enev_file_editable']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_obj_enev_file_editable']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_obj_enev_file_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_obj_enev_file_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_obj_enev_file_editable']['suppress_description'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Objekt ID (field_objektid_nunumeric) */
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['id'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['field'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['group'] = 1;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator_id'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['label'] = 'Objekt ID';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['identifier'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filterkriterium: Inhalt: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filterkriterium: Inhalt: Titel (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Veröffentlicht';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterium: Inhalt: Schattenwohnung? (field_obj_schattenobjekt) */
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['id'] = 'field_obj_schattenobjekt_value';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['table'] = 'field_data_field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['field'] = 'field_obj_schattenobjekt_value';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'nid' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_objektid_nunumeric' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'title_field' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_objekt_energieausweistyp_editable' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_objekt_effizienzklasse_editable' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_objekt_energietraeger_editable' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_obj_enev_file_editable' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_objekt_endenergiebedarf_editable' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/dash/energieausweise';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Energieausweise';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Admin Wohnungen Texte */
  $handler = $view->new_display('page', 'Admin Wohnungen Texte', 'admin_wohnungen_texte');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Wohnungen';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'field_apart_no' => 'field_apart_no',
    'title_field' => 'title_field',
    'field_kategorie_editable' => 'field_kategorie_editable',
    'field_apart_description_editable' => 'field_apart_description_editable',
    'field_object_description_editable' => 'field_object_description_editable',
    'field_object_desc_commercial_editable' => 'field_object_desc_commercial_editable',
    'field_object_description_invest_editable' => 'field_object_description_invest_editable',
    'field_object_text_schattenobjekt_editable' => 'field_object_text_schattenobjekt_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_kategorie_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_apart_description_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_object_description_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_object_desc_commercial_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_object_description_invest_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_object_text_schattenobjekt_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['id'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['field'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['label'] = 'Wohnungen';
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_object_ref_target_id']['id'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['field'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['label'] = 'Objekt';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Feld: Inhalt: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Nr.';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Feld: Inhalt: Category (editable) */
  $handler->display->display_options['fields']['field_kategorie_editable']['id'] = 'field_kategorie_editable';
  $handler->display->display_options['fields']['field_kategorie_editable']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['fields']['field_kategorie_editable']['field'] = 'field_kategorie_editable';
  $handler->display->display_options['fields']['field_kategorie_editable']['label'] = 'Kategorie';
  $handler->display->display_options['fields']['field_kategorie_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategorie_editable']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_kategorie_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_kategorie_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_kategorie_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Apartment description (editable) */
  $handler->display->display_options['fields']['field_apart_description_editable']['id'] = 'field_apart_description_editable';
  $handler->display->display_options['fields']['field_apart_description_editable']['table'] = 'field_data_field_apart_description';
  $handler->display->display_options['fields']['field_apart_description_editable']['field'] = 'field_apart_description_editable';
  $handler->display->display_options['fields']['field_apart_description_editable']['label'] = 'Wohnungsbeschreibung';
  $handler->display->display_options['fields']['field_apart_description_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_apart_description_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_apart_description_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: House description (editable) */
  $handler->display->display_options['fields']['field_object_description_editable']['id'] = 'field_object_description_editable';
  $handler->display->display_options['fields']['field_object_description_editable']['table'] = 'field_data_field_object_description';
  $handler->display->display_options['fields']['field_object_description_editable']['field'] = 'field_object_description_editable';
  $handler->display->display_options['fields']['field_object_description_editable']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_description_editable']['label'] = 'Haus-Beschreibung';
  $handler->display->display_options['fields']['field_object_description_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_object_description_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_object_description_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: House Description Commercial (editable) */
  $handler->display->display_options['fields']['field_object_desc_commercial_editable']['id'] = 'field_object_desc_commercial_editable';
  $handler->display->display_options['fields']['field_object_desc_commercial_editable']['table'] = 'field_data_field_object_desc_commercial';
  $handler->display->display_options['fields']['field_object_desc_commercial_editable']['field'] = 'field_object_desc_commercial_editable';
  $handler->display->display_options['fields']['field_object_desc_commercial_editable']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_desc_commercial_editable']['label'] = 'House Description Commercial';
  $handler->display->display_options['fields']['field_object_desc_commercial_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_object_desc_commercial_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_object_desc_commercial_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: House Description Investment (editable) */
  $handler->display->display_options['fields']['field_object_description_invest_editable']['id'] = 'field_object_description_invest_editable';
  $handler->display->display_options['fields']['field_object_description_invest_editable']['table'] = 'field_data_field_object_description_invest';
  $handler->display->display_options['fields']['field_object_description_invest_editable']['field'] = 'field_object_description_invest_editable';
  $handler->display->display_options['fields']['field_object_description_invest_editable']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_description_invest_editable']['label'] = 'House Description Investment';
  $handler->display->display_options['fields']['field_object_description_invest_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_object_description_invest_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_object_description_invest_editable']['suppress_description'] = 0;
  /* Feld: Inhalt: Text Schattenobjekt (editable) */
  $handler->display->display_options['fields']['field_object_text_schattenobjekt_editable']['id'] = 'field_object_text_schattenobjekt_editable';
  $handler->display->display_options['fields']['field_object_text_schattenobjekt_editable']['table'] = 'field_data_field_object_text_schattenobjekt';
  $handler->display->display_options['fields']['field_object_text_schattenobjekt_editable']['field'] = 'field_object_text_schattenobjekt_editable';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Objekt ID (field_objektid_nunumeric) */
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['id'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['field'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['group'] = 1;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator_id'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['label'] = 'Objekt ID';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['operator'] = 'field_objektid_nunumeric_value_op';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['identifier'] = 'field_objektid_nunumeric_value';
  $handler->display->display_options['filters']['field_objektid_nunumeric_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  /* Filterkriterium: Inhalt: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filterkriterium: Inhalt: Titel (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/dash/texte';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Wohnungen Texte';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Übersetzungsübersicht */
  $handler = $view->new_display('page', 'Übersetzungsübersicht', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Dashboard Wohnungen';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_object_ref',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'field_apart_no' => 'field_apart_no',
    'title_field' => 'title_field',
    'status' => 'status',
    'sid' => 'sid',
    'field_object_ref' => 'field_object_ref',
    'title_field_1' => 'title_field_1',
    'language_1' => 'language_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_objektid_nunumeric' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_apart_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_object_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['id'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['table'] = 'field_data_field_obj_apartments';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['field'] = 'field_obj_apartments_target_id';
  $handler->display->display_options['relationships']['field_obj_apartments_target_id']['label'] = 'Wohnungen';
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_object_ref_target_id']['id'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['field'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['label'] = 'Objekt';
  /* Beziehung: Inhalt: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Stapelverarbeitungen: Inhalt */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_create_pdf_expose' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Einfaches PDF Exposé erstellen',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'apartment::field_apart_bathrooms' => 'apartment::field_apart_bathrooms',
          'apartment::field_apart_commission' => 'apartment::field_apart_commission',
          'apartment::field_apart_description' => 'apartment::field_apart_description',
          'apartment::field_apart_expose' => 'apartment::field_apart_expose',
          'apartment::field_apart_floor' => 'apartment::field_apart_floor',
          'apartment::field_apart_floor_plan' => 'apartment::field_apart_floor_plan',
          'apartment::field_apart_hoa_fee' => 'apartment::field_apart_hoa_fee',
          'apartment::field_apart_living_space' => 'apartment::field_apart_living_space',
          'apartment::field_apart_location' => 'apartment::field_apart_location',
          'apartment::field_apart_net_rent' => 'apartment::field_apart_net_rent',
          'apartment::field_apart_no' => 'apartment::field_apart_no',
          'apartment::field_apart_other' => 'apartment::field_apart_other',
          'apartment::field_apart_pictures' => 'apartment::field_apart_pictures',
          'apartment::field_apart_price' => 'apartment::field_apart_price',
          'apartment::field_apart_price_parking' => 'apartment::field_apart_price_parking',
          'apartment::field_apart_rate_of_return' => 'apartment::field_apart_rate_of_return',
          'apartment::field_apart_rooms' => 'apartment::field_apart_rooms',
          'apartment::field_apart_sleeping_rooms' => 'apartment::field_apart_sleeping_rooms',
          'apartment::field_apart_type' => 'apartment::field_apart_type',
          'apartment::field_ausstattung' => 'apartment::field_ausstattung',
          'apartment::field_kategorie' => 'apartment::field_kategorie',
          'apartment::field_moving_in_from' => 'apartment::field_moving_in_from',
          'apartment::field_object_ref' => 'apartment::field_object_ref',
          'apartment::title_field' => 'apartment::title_field',
          'apartment::field_save_workflow' => 'apartment::field_save_workflow',
          'apartment::field_apart_ceiling_height' => 'apartment::field_apart_ceiling_height',
          'apartment::field_apart_maintenance_reserve' => 'apartment::field_apart_maintenance_reserve',
          'apartment::field_apart_maint_reserve_value' => 'apartment::field_apart_maint_reserve_value',
          'apartment::field_apart_alloc_incident_costs' => 'apartment::field_apart_alloc_incident_costs',
          'apartment::field_apart_nalloc_incid_cost' => 'apartment::field_apart_nalloc_incid_cost',
          'apartment::field_status_quo' => 'apartment::field_status_quo',
        ),
      ),
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_vbo_change_workflow_status_to_archived' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Archivieren',
    ),
    'rules_component::rules_vbo_change_workflow_status' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Veröffentlichen',
    ),
    'rules_component::rules_vbo_change_workflow_status_to_ready' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Fertig zur Veröffentlichung',
    ),
    'rules_component::hk_rules_vbo_change_workflow_status_to_shadow_apartment' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Als Schattenwohnnung markieren',
    ),
    'rules_component::rules_vbo_change_workflow_status_to_sold' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Als verkauft markieren',
    ),
  );
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  /* Feld: Inhalt: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Nr.';
  $handler->display->display_options['fields']['field_apart_no']['exclude'] = TRUE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[field_apart_no] | <a href="/node/[nid]" title="Wohnung ansehen">[title_field]</a> | <a href="/node/[nid]/edit?destination=/admin/content/dash/wohnungen">Bearbeiten</a> | <a href="/node/[nid]/translate?destination=/admin/content/dash/wohnungen">Übersetzen</a> | <a href="/node/[nid]/clone/confirm?destination=/admin/content/dash/wohnungen">Klonen</a>';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Feld: Inhalt: Veröffentlicht */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Feld: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Object */
  $handler->display->display_options['fields']['field_object_ref']['id'] = 'field_object_ref';
  $handler->display->display_options['fields']['field_object_ref']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['fields']['field_object_ref']['field'] = 'field_object_ref';
  $handler->display->display_options['fields']['field_object_ref']['label'] = '';
  $handler->display->display_options['fields']['field_object_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_object_ref']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 0;
  /* Feld: Entity translation: Sprache */
  $handler->display->display_options['fields']['language_1']['id'] = 'language_1';
  $handler->display->display_options['fields']['language_1']['table'] = 'entity_translation';
  $handler->display->display_options['fields']['language_1']['field'] = 'language';
  $handler->display->display_options['fields']['language_1']['relationship'] = 'entity_translations';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Objekt ID / Titel';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'title_field' => 'title_field',
    'title_field_1' => 'title_field_1',
  );
  /* Filterkriterium: Inhalt: Borough (field_bezirk) */
  $handler->display->display_options['filters']['field_bezirk_tid']['id'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['table'] = 'field_data_field_bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['field'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_bezirk_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator_id'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['label'] = 'Bezirk';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['operator'] = 'field_bezirk_tid_op';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['identifier'] = 'field_bezirk_tid';
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_bezirk_tid']['expose']['remember_roles'] = array(
    2 => '2',
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_bezirk_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bezirk_tid']['vocabulary'] = 'vocabulary_3';
  $handler->display->display_options['filters']['field_bezirk_tid']['hierarchy'] = 1;
  /* Filterkriterium: Inhalt: Category (field_kategorie) */
  $handler->display->display_options['filters']['field_kategorie_tid']['id'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['field'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_kategorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator_id'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['label'] = 'Kategorie';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['operator'] = 'field_kategorie_tid_op';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['identifier'] = 'field_kategorie_tid';
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_kategorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_kategorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_kategorie_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_kategorie_tid']['hierarchy'] = 1;
  /* Filterkriterium: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '1';
  $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
  $handler->display->display_options['filters']['sid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['sid']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['group_info']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['sid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Todo (Entwurf + Fertig)',
      'operator' => 'in',
      'value' => array(
        2 => '2',
        3 => '3',
      ),
    ),
    2 => array(
      'title' => 'Todo + Veröffentlicht',
      'operator' => 'in',
      'value' => array(
        2 => '2',
        3 => '3',
        4 => '4',
      ),
    ),
    3 => array(
      'title' => 'Entwurf',
      'operator' => 'in',
      'value' => array(
        2 => '2',
      ),
    ),
    4 => array(
      'title' => 'Fertig zur Veröffentlichung',
      'operator' => 'in',
      'value' => array(
        3 => '3',
      ),
    ),
    5 => array(
      'title' => 'Veröffentlicht',
      'operator' => 'in',
      'value' => array(
        4 => '4',
      ),
    ),
    6 => array(
      'title' => 'Veröffentlicht + Schattenwohnungn',
      'operator' => 'in',
      'value' => array(
        4 => '4',
        7 => '7',
      ),
    ),
    7 => array(
      'title' => 'Schattenwohnungen',
      'operator' => 'in',
      'value' => array(
        7 => '7',
      ),
    ),
    8 => array(
      'title' => 'Nicht veröffentlicht (Archiviert + Verkauft))',
      'operator' => 'in',
      'value' => array(
        5 => '5',
        6 => '6',
      ),
    ),
    9 => array(
      'title' => 'Archiviert',
      'operator' => 'in',
      'value' => array(
        5 => '5',
      ),
    ),
    10 => array(
      'title' => 'Verkauft',
      'operator' => 'in',
      'value' => array(
        6 => '6',
      ),
    ),
  );
  /* Filterkriterium: Workflow current: New state name */
  $handler->display->display_options['filters']['sid_1']['id'] = 'sid_1';
  $handler->display->display_options['filters']['sid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid_1']['field'] = 'sid';
  $handler->display->display_options['filters']['sid_1']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    7 => '7',
  );
  $handler->display->display_options['filters']['sid_1']['group'] = 1;
  /* Filterkriterium: Entity translation: Sprache */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Sprache';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['language']['group_info']['label'] = 'Sprache';
  $handler->display->display_options['filters']['language']['group_info']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'DE',
      'operator' => 'not in',
      'value' => array(
        'de' => 'de',
        'all' => 0,
        '***CURRENT_LANGUAGE***' => 0,
        '***DEFAULT_LANGUAGE***' => 0,
        'und' => 0,
        'en' => 0,
        'zh-hans' => 0,
        'ru' => 0,
      ),
    ),
    2 => array(
      'title' => 'EN',
      'operator' => 'not in',
      'value' => array(
        'en' => 'en',
        'all' => 0,
        '***CURRENT_LANGUAGE***' => 0,
        '***DEFAULT_LANGUAGE***' => 0,
        'und' => 0,
        'de' => 0,
        'zh-hans' => 0,
        'ru' => 0,
      ),
    ),
    3 => array(
      'title' => 'RU',
      'operator' => 'not in',
      'value' => array(
        'ru' => 'ru',
        'all' => 0,
        '***CURRENT_LANGUAGE***' => 0,
        '***DEFAULT_LANGUAGE***' => 0,
        'und' => 0,
        'de' => 0,
        'en' => 0,
        'zh-hans' => 0,
      ),
    ),
    4 => array(
      'title' => 'ZH',
      'operator' => 'not in',
      'value' => array(
        'zh-hans' => 'zh-hans',
        'all' => 0,
        '***CURRENT_LANGUAGE***' => 0,
        '***DEFAULT_LANGUAGE***' => 0,
        'und' => 0,
        'de' => 0,
        'en' => 0,
        'ru' => 0,
      ),
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/dash/translate';
  $handler->display->display_options['menu']['title'] = 'Übersetzung';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['admin'] = $view;

  $view = new view();
  $view->name = 'apartment_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Apartment activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Apartment activities';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_dok_wohnung_target_id']['id'] = 'field_dok_wohnung_target_id';
  $handler->display->display_options['relationships']['field_dok_wohnung_target_id']['table'] = 'field_data_field_dok_wohnung';
  $handler->display->display_options['relationships']['field_dok_wohnung_target_id']['field'] = 'field_dok_wohnung_target_id';
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_bes_wohnung_target_id']['id'] = 'field_bes_wohnung_target_id';
  $handler->display->display_options['relationships']['field_bes_wohnung_target_id']['table'] = 'field_data_field_bes_wohnung';
  $handler->display->display_options['relationships']['field_bes_wohnung_target_id']['field'] = 'field_bes_wohnung_target_id';
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_dok_makler_target_id']['id'] = 'field_dok_makler_target_id';
  $handler->display->display_options['relationships']['field_dok_makler_target_id']['table'] = 'field_data_field_dok_makler';
  $handler->display->display_options['relationships']['field_dok_makler_target_id']['field'] = 'field_dok_makler_target_id';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_bes_wohnung_target_id';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Inhalt: Besichtigungstermin */
  $handler->display->display_options['fields']['field_bes_termin']['id'] = 'field_bes_termin';
  $handler->display->display_options['fields']['field_bes_termin']['table'] = 'field_data_field_bes_termin';
  $handler->display->display_options['fields']['field_bes_termin']['field'] = 'field_bes_termin';
  $handler->display->display_options['fields']['field_bes_termin']['relationship'] = 'field_bes_wohnung_target_id';
  $handler->display->display_options['fields']['field_bes_termin']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Feld: Inhalt: Kunde */
  $handler->display->display_options['fields']['field_bes_kunde']['id'] = 'field_bes_kunde';
  $handler->display->display_options['fields']['field_bes_kunde']['table'] = 'field_data_field_bes_kunde';
  $handler->display->display_options['fields']['field_bes_kunde']['field'] = 'field_bes_kunde';
  $handler->display->display_options['fields']['field_bes_kunde']['relationship'] = 'field_bes_wohnung_target_id';
  $handler->display->display_options['fields']['field_bes_kunde']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_bes_kunde']['delta_offset'] = '0';
  /* Feld: Inhalt: Makler */
  $handler->display->display_options['fields']['field_bes_makler']['id'] = 'field_bes_makler';
  $handler->display->display_options['fields']['field_bes_makler']['table'] = 'field_data_field_bes_makler';
  $handler->display->display_options['fields']['field_bes_makler']['field'] = 'field_bes_makler';
  $handler->display->display_options['fields']['field_bes_makler']['relationship'] = 'field_bes_wohnung_target_id';
  $handler->display->display_options['fields']['field_bes_makler']['settings'] = array(
    'link' => 0,
  );
  /* Feld: Inhalt: Wohnung */
  $handler->display->display_options['fields']['field_bes_wohnung']['id'] = 'field_bes_wohnung';
  $handler->display->display_options['fields']['field_bes_wohnung']['table'] = 'field_data_field_bes_wohnung';
  $handler->display->display_options['fields']['field_bes_wohnung']['field'] = 'field_bes_wohnung';
  $handler->display->display_options['fields']['field_bes_wohnung']['relationship'] = 'field_bes_wohnung_target_id';
  $handler->display->display_options['fields']['field_bes_wohnung']['settings'] = array(
    'link' => 0,
  );
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontextfilter: Wohnungsaktivitäten */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Wohnungsaktivitäten';
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
  $handler->display->display_options['arguments']['nid']['validate_options']['access_op'] = 'update';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'apartment-activities';

  /* Display: Anfragen */
  $handler = $view->new_display('page', 'Anfragen', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Anfragen';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/anfragen';
  $export['apartment_activities'] = $view;

  $view = new view();
  $view->name = 'apartment_crm_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Apartment crm activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Apartment crm activities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Feld: CRM Core Aktivität: Typ */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Feld: CRM Core Aktivität: Aktivitäts-ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  /* Feld: CRM Core Aktivität: Date */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['label'] = 'Datum';
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Feld: CRM Core Aktivität: Participants */
  $handler->display->display_options['fields']['field_activity_participants']['id'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['field'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['label'] = 'Teilnehmer';
  $handler->display->display_options['fields']['field_activity_participants']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_activity_participants']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_activity_participants']['delta_offset'] = '1';
  /* Feld: CRM Core Aktivität: Notes */
  $handler->display->display_options['fields']['field_activity_notes']['id'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['table'] = 'field_data_field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['field'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['label'] = 'Bemerkungen';
  /* Feld: CRM Core Aktivität: Status */
  $handler->display->display_options['fields']['field_activity_status']['id'] = 'field_activity_status';
  $handler->display->display_options['fields']['field_activity_status']['table'] = 'field_data_field_activity_status';
  $handler->display->display_options['fields']['field_activity_status']['field'] = 'field_activity_status';
  /* Kontextfilter: CRM Core Aktivität: Inquiry for (field_angefragte_wohnung) */
  $handler->display->display_options['arguments']['field_angefragte_wohnung_target_id']['id'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['arguments']['field_angefragte_wohnung_target_id']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['arguments']['field_angefragte_wohnung_target_id']['field'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['arguments']['field_angefragte_wohnung_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_angefragte_wohnung_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_angefragte_wohnung_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_angefragte_wohnung_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_angefragte_wohnung_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_angefragte_wohnung_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/apartment-crm-activities';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Anfragen';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['apartment_crm_activities'] = $view;

  $view = new view();
  $view->name = 'crm_aktivitaeten';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'CRM Aktivitäten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CRM Aktivitäten';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none-debug';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'activity_id' => 'activity_id',
    'field_activity_participants' => 'field_activity_participants',
    'field_activity_date' => 'field_activity_date',
    'type' => 'type',
    'field_angefragte_wohnung' => 'field_angefragte_wohnung',
    'field_activity_notes' => 'field_activity_notes',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_participants' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_angefragte_wohnung' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['label'] = 'CRM Core Participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['required'] = TRUE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_activity_participants_target_id_1']['id'] = 'field_activity_participants_target_id_1';
  $handler->display->display_options['relationships']['field_activity_participants_target_id_1']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id_1']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id_1']['required'] = TRUE;
  /* Feld: CRM Core Aktivität: Aktivitäts-ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  /* Feld: CRM Core Aktivität: Participants */
  $handler->display->display_options['fields']['field_activity_participants']['id'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['field'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['label'] = 'Name';
  $handler->display->display_options['fields']['field_activity_participants']['alter']['link_class'] = 'ng-lightbox';
  $handler->display->display_options['fields']['field_activity_participants']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_activity_participants']['delta_offset'] = '1';
  /* Feld: CRM Core Aktivität: Date */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['label'] = 'Datum';
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: CRM Core Aktivität: Typ */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Feld: CRM Core Aktivität: Inquiry for */
  $handler->display->display_options['fields']['field_angefragte_wohnung']['id'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['field'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['label'] = 'Anfrage für';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_angefragte_wohnung']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_angefragte_wohnung']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
    'use_content_language' => 1,
  );
  /* Feld: CRM Core Aktivität: Notes */
  $handler->display->display_options['fields']['field_activity_notes']['id'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['table'] = 'field_data_field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['field'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['label'] = 'Bemerkungen';
  /* Sortierkriterien: CRM Core Aktivität: Date (field_activity_date) */
  $handler->display->display_options['sorts']['field_activity_date_value']['id'] = 'field_activity_date_value';
  $handler->display->display_options['sorts']['field_activity_date_value']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['sorts']['field_activity_date_value']['field'] = 'field_activity_date_value';
  $handler->display->display_options['sorts']['field_activity_date_value']['order'] = 'DESC';
  /* Kontextfilter: CRM Core Kontakt: Kontakt ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['contact_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['contact_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['contact_id']['title'] = 'Aktivitäten von %1';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['contact_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['contact_id']['validate']['type'] = 'numeric';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/contact/%/activity';

  /* Display: Letzte Aktivitäten */
  $handler = $view->new_display('page', 'Letzte Aktivitäten', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Datum: Datum (crm_core_activity) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now -30 days';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-1:+1';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_activity_date.field_activity_date_value' => 'field_data_field_activity_date.field_activity_date_value',
  );
  $handler->display->display_options['path'] = 'crm-core/aktivitaeten';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Letzte Aktivitäten';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'crm-core-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['crm_aktivitaeten'] = $view;

  $view = new view();
  $view->name = 'crm_anfragen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'CRM Anfragen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Anfragen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none-debug';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'activity_id' => 'activity_id',
    'field_angefragte_wohnung' => 'field_angefragte_wohnung',
    'field_activity_participants' => 'field_activity_participants',
    'field_activity_notes' => 'field_activity_notes',
    'field_activity_bearbeiter_editable' => 'field_activity_bearbeiter_editable',
    'field_activity_status_editable' => 'field_activity_status_editable',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'activity_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_angefragte_wohnung' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_participants' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_bearbeiter_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Feld: CRM Core Aktivität: Aktivitäts-ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  /* Feld: CRM Core Aktivität: Inquiry for */
  $handler->display->display_options['fields']['field_angefragte_wohnung']['id'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['field'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['label'] = 'Interessiert an folgender Wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['settings'] = array(
    'link' => 1,
  );
  /* Feld: CRM Core Aktivität: Participants */
  $handler->display->display_options['fields']['field_activity_participants']['id'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['field'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['label'] = 'Anfrager';
  $handler->display->display_options['fields']['field_activity_participants']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_activity_participants']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_activity_participants']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_activity_participants']['separator'] = '';
  /* Feld: CRM Core Aktivität: Notes */
  $handler->display->display_options['fields']['field_activity_notes']['id'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['table'] = 'field_data_field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['field'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['label'] = 'Bemerkungen';
  /* Feld: CRM Core Aktivität: Bearbeiter (editable) */
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['id'] = 'field_activity_bearbeiter_editable';
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['table'] = 'field_data_field_activity_bearbeiter';
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['field'] = 'field_activity_bearbeiter_editable';
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['label'] = 'Bearbeiter';
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_activity_bearbeiter_editable']['suppress_description'] = 0;
  /* Feld: CRM Core Aktivität: Status (editable) */
  $handler->display->display_options['fields']['field_activity_status_editable']['id'] = 'field_activity_status_editable';
  $handler->display->display_options['fields']['field_activity_status_editable']['table'] = 'field_data_field_activity_status';
  $handler->display->display_options['fields']['field_activity_status_editable']['field'] = 'field_activity_status_editable';
  $handler->display->display_options['fields']['field_activity_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_activity_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_activity_status_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_activity_status_editable']['suppress_description'] = 0;
  /* Feld: CRM Core Aktivität: Erstellungsdatum */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Filterkriterium: CRM Core Aktivität: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'anfrage' => 'anfrage',
    'kontaktformular' => 'kontaktformular',
  );
  /* Filterkriterium: CRM Core Aktivität: Status (field_activity_status) */
  $handler->display->display_options['filters']['field_activity_status_value']['id'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['table'] = 'field_data_field_activity_status';
  $handler->display->display_options['filters']['field_activity_status_value']['field'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['value'] = array(
    'Frisch Eingetroffen' => 'Frisch Eingetroffen',
    'Einem Makler zugeordnet' => 'Einem Makler zugeordnet',
    'In Bearbeitung' => 'In Bearbeitung',
    'Wiedervorlage' => 'Wiedervorlage',
  );

  /* Display: Alle Anfragen */
  $handler = $view->new_display('page', 'Alle Anfragen', 'page');
  $handler->display->display_options['path'] = 'crm-core/anfragen';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Anfragen';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'crm-core-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Zugeteilte Anfragen */
  $handler = $view->new_display('page', 'Zugeteilte Anfragen', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: CRM Core Aktivität: Bearbeiter (field_activity_bearbeiter) */
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['id'] = 'field_activity_bearbeiter_target_id';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['table'] = 'field_data_field_activity_bearbeiter';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['field'] = 'field_activity_bearbeiter_target_id';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['field_activity_bearbeiter_target_id']['validate_options']['roles'] = array(
    4 => '4',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: CRM Core Aktivität: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'anfrage' => 'anfrage',
  );
  /* Filterkriterium: CRM Core Aktivität: Status (field_activity_status) */
  $handler->display->display_options['filters']['field_activity_status_value']['id'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['table'] = 'field_data_field_activity_status';
  $handler->display->display_options['filters']['field_activity_status_value']['field'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['value'] = array(
    'Einem Makler zugeordnet' => 'Einem Makler zugeordnet',
    'In Bearbeitung' => 'In Bearbeitung',
    'Wiedervorlage' => 'Wiedervorlage',
  );
  $handler->display->display_options['path'] = 'admin/crm/anfragen/%1';

  /* Display: Erledigte Anfragen */
  $handler = $view->new_display('page', 'Erledigte Anfragen', 'page_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: CRM Core Aktivität: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'anfrage' => 'anfrage',
  );
  /* Filterkriterium: CRM Core Aktivität: Status (field_activity_status) */
  $handler->display->display_options['filters']['field_activity_status_value']['id'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['table'] = 'field_data_field_activity_status';
  $handler->display->display_options['filters']['field_activity_status_value']['field'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['value'] = array(
    'Erledigt' => 'Erledigt',
  );
  $handler->display->display_options['path'] = 'admin/crm/anfragen/erledigt';
  $export['crm_anfragen'] = $view;

  $view = new view();
  $view->name = 'crm_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'CRM Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CRM Dashboard';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Erweiterte Optionen',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'keys' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'contact_id' => 'contact_id',
    'contact_name' => 'contact_name',
    'contact_name_1' => 'contact_name_1',
    'field_e_mail' => 'field_e_mail',
    'field_phone' => 'field_phone',
    'field_crm_address' => 'field_crm_address',
  );
  $handler->display->display_options['style_options']['default'] = 'contact_name';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'contact_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'contact_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_e_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_crm_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Kopfbereich: Global: Textbereich */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Aktionslinks';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a class="btn ng-lightbox" href="http://addweb.dev.drupalforgood.eu/crm-core/contact/add?destination=/crm-core/contact">Kontakt erstellen</a>
<a class="btn ng-lightbox" href="http://addweb.dev.drupalforgood.eu/crm-core/contact/activity-add?destination=/crm-core/contact">Aktivität erstellen</a>
<a class="btn ng-lightbox" href="http://addweb.dev.drupalforgood.eu/node/add/besichtigung?destination=/crm-core/contact">Besichtigung erstellen</a>
<a class="btn ng-lightbox" href="http://addweb.dev.drupalforgood.eu/node/add/dokument?destination=/crm-core/contact">Dokument erstellen</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Feld: Stapelverarbeitungen: CRM Core Kontakt */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crm_core_contact_join_into_household_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crm_core_contact_merge_contacts_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crm_core_contact_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Feld: CRM Core Kontakt: Kontakt ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Feld: CRM Core Kontakt: Mitarbeiter */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Nachname';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'family';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'family',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Feld: CRM Core Kontakt: Mitarbeiter */
  $handler->display->display_options['fields']['contact_name_1']['id'] = 'contact_name_1';
  $handler->display->display_options['fields']['contact_name_1']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_1']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Vorname';
  $handler->display->display_options['fields']['contact_name_1']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name_1']['settings'] = array(
    'format' => 'given',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Feld: CRM Core Kontakt: E-Mail */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  /* Feld: CRM Core Kontakt: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Telefon';
  /* Feld: CRM Core Kontakt: Address */
  $handler->display->display_options['fields']['field_crm_address']['id'] = 'field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['table'] = 'field_data_field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['field'] = 'field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['label'] = 'Adresse';
  $handler->display->display_options['fields']['field_crm_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_crm_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Filterkriterium: CRM Core Kontakt: Kontakttyp */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Suchen';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'contact_name' => 'contact_name',
    'contact_name_1' => 'contact_name_1',
    'field_e_mail' => 'field_e_mail',
    'field_phone' => 'field_phone',
    'field_crm_address' => 'field_crm_address',
  );

  /* Display: Kontakte */
  $handler = $view->new_display('page', 'Kontakte', 'page');
  $handler->display->display_options['path'] = 'admin/crm/dash';
  $export['crm_dashboard'] = $view;

  $view = new view();
  $view->name = 'references';
  $view->description = 'A view with references for References Dialog (Objekte in Wohnungen und Wohungen in Objekten)';
  $view->tag = 'hk';
  $view->base_table = 'node';
  $view->human_name = 'References Dialog Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Suchen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Erweiterte Optionen',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title_field_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'apartdialog';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Object images */
  $handler->display->display_options['fields']['field_object_images']['id'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['table'] = 'field_data_field_object_images';
  $handler->display->display_options['fields']['field_object_images']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['label'] = '';
  $handler->display->display_options['fields']['field_object_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_object_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_object_images']['delta_offset'] = '0';
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Titel oder Objekt-ID ';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Sucht beim tippen, damit es schneller geht.';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
  );

  /* Display: Object Search */
  $handler = $view->new_display('references_dialog', 'Object Search', 'references_dialog_object');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_object_ref:apartment',
  );

  /* Display: Apart Search */
  $handler = $view->new_display('references_dialog', 'Apart Search', 'references_dialog_apart');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = 'Wohnungsnr.';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Feld: Inhalt: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures']['id'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['table'] = 'field_data_field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_pictures']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_apart_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_apart_pictures']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Titel oder Objekt-ID ';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Sucht beim tippen, damit es schneller geht.';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    4 => '4',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_objektid_nunumeric' => 'field_objektid_nunumeric',
    'nid' => 'nid',
  );
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_obj_apartments:objekt',
  );
  $export['references'] = $view;

  $view = new view();
  $view->name = 'references_dialog_search_contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'References Dialog Search Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: CRM Core Kontakt: Kontakt ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Feld: CRM Core Kontakt: Mitarbeiter */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Feld: CRM Core Kontakt: Mitarbeiter */
  $handler->display->display_options['fields']['contact_name_1']['id'] = 'contact_name_1';
  $handler->display->display_options['fields']['contact_name_1']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_1']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name_1']['label'] = '';
  $handler->display->display_options['fields']['contact_name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name_1']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name_1']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Filterkriterium: CRM Core Kontakt: Kontakttyp */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
    'mitarbeiter' => 'mitarbeiter',
  );
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Suchen';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'contact_name' => 'contact_name',
    'contact_name_1' => 'contact_name_1',
  );

  /* Display: Contact Search */
  $handler = $view->new_display('references_dialog', 'Contact Search', 'references_dialog_contact');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_obj_tippgeber:objekt',
    1 => 'node:field_obj_acquise:objekt',
  );
  $export['references_dialog_search_contacts'] = $view;

  return $export;
}

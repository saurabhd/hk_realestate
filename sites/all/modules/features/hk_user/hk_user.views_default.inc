<?php
/**
 * @file
 * hk_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Addweb - User Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results Found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: User: Relation: Kontakt (user → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['id'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['field'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_participants_crm_core_activity']['id'] = 'reverse_field_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_participants_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_participants_crm_core_activity']['field'] = 'reverse_field_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_participants_crm_core_activity']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['id'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['field'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['relationship'] = 'reverse_field_participants_crm_core_activity';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: User Activities */
  $handler = $view->new_display('block', 'User Activities', 'user_activities');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Relation: Kontakt (user → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['id'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['field'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['id'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['field'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['id'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['field'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['label'] = '';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['element_label_colon'] = FALSE;
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y.';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'date_with_h';
  /* Field: Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'field_data_field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['field_apart_no']['label'] = '';
  $handler->display->display_options['fields']['field_apart_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_no']['element_label_colon'] = FALSE;
  /* Field: Content: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_objektid_nunumeric']['alter']['text'] = '[field_objektid_nunumeric]-[field_apart_no]';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Field: CRM Core Contact: Mitarbeiter */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
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
  /* Field: CRM Core Activity: Notes */
  $handler->display->display_options['fields']['field_activity_notes']['id'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['table'] = 'field_data_field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['field'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['field_activity_notes']['label'] = '';
  $handler->display->display_options['fields']['field_activity_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: User Notes */
  $handler = $view->new_display('block', 'User Notes', 'user_notes');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_activity_notes' => 'field_activity_notes',
    'field_activity_date' => 'field_activity_date',
    'field_activity_participants' => 'field_activity_participants',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
    'field_activity_date' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Relation: Kontakt (user → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['id'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['field'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['id'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['field'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['id'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['field'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Activity: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: CRM Core Activity: Notes */
  $handler->display->display_options['fields']['field_activity_notes']['id'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['table'] = 'field_data_field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['field'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['field_activity_notes']['element_label_colon'] = FALSE;
  /* Field: CRM Core Activity: Date */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['field_activity_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'format_type' => 'date_with_h',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: CRM Core Activity: Participants */
  $handler->display->display_options['fields']['field_activity_participants']['id'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['field'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['field_activity_participants']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_participants']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_activity_participants']['delta_offset'] = '0';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['filters']['type']['value'] = array(
    'notes' => 'notes',
  );

  /* Display: User Favourites */
  $handler = $view->new_display('block', 'User Favourites', 'block_2');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
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
  /* Relationship: User: Relation: Kontakt (user → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['id'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['field'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['id'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['field'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['id'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['field'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  /* Relationship: Flags: merken */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'merken';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures']['id'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['table'] = 'field_data_field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['field_apart_pictures']['label'] = 'Bild';
  $handler->display->display_options['fields']['field_apart_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_pictures']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_apart_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_apart_pictures']['delta_offset'] = '0';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_kategorie']['id'] = 'field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['field'] = 'field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['field_kategorie']['label'] = 'Kategorie';
  $handler->display->display_options['fields']['field_kategorie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategorie']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'field_data_field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['field_apart_living_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: User Contact Info */
  $handler = $view->new_display('block', 'User Contact Info', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact Information';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/crm-core/contact/[contact_id]/edit" class="contact-edit">Edit</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Relation: Kontakt (user → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['id'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['table'] = 'users';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['field'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_crm_core_user_sync_crm_core_contact']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Contact: Mitarbeiter */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Contact Name';
  $handler->display->display_options['fields']['contact_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'short_full',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: CRM Core Contact: Address */
  $handler->display->display_options['fields']['field_crm_address']['id'] = 'field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['table'] = 'field_data_field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['field'] = 'field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['fields']['field_crm_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_crm_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_crm_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: CRM Core Contact: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  /* Field: CRM Core Contact: E-Mail */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['fields']['field_e_mail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail']['type'] = 'email_plain';
  /* Field: CRM Core Contact: birthday */
  $handler->display->display_options['fields']['field_birthday']['id'] = 'field_birthday';
  $handler->display->display_options['fields']['field_birthday']['table'] = 'field_data_field_birthday';
  $handler->display->display_options['fields']['field_birthday']['field'] = 'field_birthday';
  $handler->display->display_options['fields']['field_birthday']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['fields']['field_birthday']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_birthday']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: CRM Core Contact: Job title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['fields']['field_job_title']['hide_empty'] = TRUE;
  /* Field: CRM Core Contact: Languages */
  $handler->display->display_options['fields']['field_languages']['id'] = 'field_languages';
  $handler->display->display_options['fields']['field_languages']['table'] = 'field_data_field_languages';
  $handler->display->display_options['fields']['field_languages']['field'] = 'field_languages';
  $handler->display->display_options['fields']['field_languages']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['fields']['field_languages']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_languages']['delta_offset'] = '0';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_crm_core_user_sync_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $export['user_profile'] = $view;

  return $export;
}

<?php
/**
 * @file
 * hk_crm.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_crm_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'crm_activity_type';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity_type';
  $view->human_name = 'CRM ACTIVITY TYPE';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '- keine -';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: CRM Core Activity Type: Activity Type ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['id']['field'] = 'id';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="activity-header">Create Activity</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Activity Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['activity_create_link'] = 0;
  /* Field: CRM Core Activity Type: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = 'crm-core/contact/activity-add/[type]';
  $handler->display->display_options['fields']['label']['alter']['link_class'] = 'activity-link';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'CRM Activity type';
  $export['crm_activity_type'] = $view;

  $view = new view();
  $view->name = 'crm_contact_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'CRM Contact page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CRM Contact page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  /* Field: CRM Core Contact: Profile Picture */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
    'mitarbeiter' => 'mitarbeiter',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Contact: Profile Picture */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = '';
  $handler->display->display_options['fields']['contact_name_family']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['element_label_colon'] = FALSE;
  /* Field: Name Components: Given */
  $handler->display->display_options['fields']['contact_name_given']['id'] = 'contact_name_given';
  $handler->display->display_options['fields']['contact_name_given']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_given']['field'] = 'contact_name_given';
  $handler->display->display_options['fields']['contact_name_given']['label'] = '';
  $handler->display->display_options['fields']['contact_name_given']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['contact_name_given']['alter']['text'] = '[contact_name_family] [contact_name_given]';
  $handler->display->display_options['fields']['contact_name_given']['element_label_colon'] = FALSE;
  /* Field: CRM Core Contact: company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['label'] = '';
  $handler->display->display_options['fields']['field_company']['element_label_colon'] = FALSE;
  /* Field: CRM Core Contact: Address */
  $handler->display->display_options['fields']['field_crm_address']['id'] = 'field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['table'] = 'field_data_field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['field'] = 'field_crm_address';
  $handler->display->display_options['fields']['field_crm_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_crm_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: CRM Core Contact: E-Mail */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['label'] = 'Email';
  $handler->display->display_options['fields']['field_e_mail']['type'] = 'email_plain';
  /* Field: CRM Core Contact: Job title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  /* Field: CRM Core Contact: Languages */
  $handler->display->display_options['fields']['field_languages']['id'] = 'field_languages';
  $handler->display->display_options['fields']['field_languages']['table'] = 'field_data_field_languages';
  $handler->display->display_options['fields']['field_languages']['field'] = 'field_languages';
  $handler->display->display_options['fields']['field_languages']['delta_offset'] = '0';
  /* Field: CRM Core Contact: Other */
  $handler->display->display_options['fields']['field_other']['id'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['table'] = 'field_data_field_other';
  $handler->display->display_options['fields']['field_other']['field'] = 'field_other';
  /* Field: CRM Core Contact: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  /* Field: CRM Core Contact: birthday */
  $handler->display->display_options['fields']['field_birthday']['id'] = 'field_birthday';
  $handler->display->display_options['fields']['field_birthday']['table'] = 'field_data_field_birthday';
  $handler->display->display_options['fields']['field_birthday']['field'] = 'field_birthday';
  $handler->display->display_options['fields']['field_birthday']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'individual' => 'individual',
    'organization' => 'organization',
    'household' => 'household',
    'mitarbeiter' => 'mitarbeiter',
  );
  $handler->display->display_options['path'] = 'crm-core/contact/%';
  $export['crm_contact_page'] = $view;

  $view = new view();
  $view->name = 'crm_core_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'CRM CORE CONTACT';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CRM CORE CONTACT';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
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
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
    8 => '8',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'crm_activity_type:block';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['path'] = 'user/%/contact';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Contact';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['crm_core_contact'] = $view;

  $view = new view();
  $view->name = 'dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
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
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none-accelerated';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Suchen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
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
    'uid' => array(
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
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'crm_activity_type:block';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user/[uid]/dashboard';
  $handler->display->display_options['fields']['name']['alter']['link_class'] = 'user-name';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['path'] = 'user/%/dashboard';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Dashboard';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['dashboard'] = $view;

  $view = new view();
  $view->name = 'recipient';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Recipient';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recipient';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_e_mail' => 'field_e_mail',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Contact: E-Mail */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail']['type'] = 'email_plain';
  $export['recipient'] = $view;

  $view = new view();
  $view->name = 'search_area';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_solr_node_index';
  $view->human_name = 'search area';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'search area';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'search_api_views_cache';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures']['id'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_pictures']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_apart_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_pictures']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_apart_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_apart_pictures']['delta_offset'] = '0';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Object ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Apartment No. */
  $handler->display->display_options['fields']['field_apart_no']['id'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_no']['field'] = 'field_apart_no';
  $handler->display->display_options['fields']['field_apart_no']['label'] = '';
  $handler->display->display_options['fields']['field_apart_no']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_no']['alter']['text'] = '[field_objektid_nunumeric]-[field_apart_no]';
  $handler->display->display_options['fields']['field_apart_no']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = '';
  $handler->display->display_options['fields']['field_apart_living_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Sleeping rooms */
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['id'] = 'field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['field'] = 'field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['label'] = '';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['label'] = '';
  $handler->display->display_options['fields']['field_apart_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
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
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $export['search_area'] = $view;

  $view = new view();
  $view->name = 'unclaimed_leads_table_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Unclaimed leads table view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Alle';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '«';
  $handler->display->display_options['pager']['options']['tags']['next'] = '»';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'activity_id' => 'activity_id',
    'field_angefragte_wohnung' => 'field_angefragte_wohnung',
    'field_angefragte_wohnung_1' => 'field_angefragte_wohnung_1',
    'field_activity_participants' => 'field_activity_participants',
    'field_activity_notes' => 'field_activity_notes',
    'field_activity_bearbeiter' => 'field_activity_bearbeiter',
    'created' => 'created',
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
    'field_angefragte_wohnung' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_angefragte_wohnung_1' => array(
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
    'field_activity_bearbeiter' => array(
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
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: CRM Core Activity: Inquiry for */
  $handler->display->display_options['fields']['field_angefragte_wohnung']['id'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['field'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['label'] = 'Bild';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_angefragte_wohnung']['delta_offset'] = '0';
  /* Field: CRM Core Activity: Inquiry for */
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['id'] = 'field_angefragte_wohnung_1';
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['field'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['label'] = 'Anfrage für';
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['delta_offset'] = '0';
  /* Field: CRM Core Activity: Participants */
  $handler->display->display_options['fields']['field_activity_participants']['id'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['field'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['label'] = 'Inquirer';
  $handler->display->display_options['fields']['field_activity_participants']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_activity_participants']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_activity_participants']['delta_offset'] = '0';
  /* Field: CRM Core Activity: Notes */
  $handler->display->display_options['fields']['field_activity_notes']['id'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['table'] = 'field_data_field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['field'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['label'] = 'Nachricht';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Datum';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'anfrage' => 'anfrage',
  );
  /* Filter criterion: CRM Core Activity: Status (field_activity_status) */
  $handler->display->display_options['filters']['field_activity_status_value']['id'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['table'] = 'field_data_field_activity_status';
  $handler->display->display_options['filters']['field_activity_status_value']['field'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['value'] = array(
    'Frisch Eingetroffen' => 'Frisch Eingetroffen',
    'Einem Makler zugeordnet' => 'Einem Makler zugeordnet',
    'In Bearbeitung' => 'In Bearbeitung',
    'Wiedervorlage' => 'Wiedervorlage',
  );

  /* Display: unclaimed table view */
  $handler = $view->new_display('block', 'unclaimed table view', 'block');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    9 => '9',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Activity: Inquiry for */
  $handler->display->display_options['fields']['field_angefragte_wohnung']['id'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['field'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['label'] = 'Bild';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_angefragte_wohnung']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_angefragte_wohnung']['delta_offset'] = '0';
  /* Field: CRM Core Activity: Inquiry for */
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['id'] = 'field_angefragte_wohnung_1';
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['field'] = 'field_angefragte_wohnung';
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['label'] = 'Anfrage für';
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_angefragte_wohnung_1']['delta_offset'] = '0';
  /* Field: CRM Core Activity: Participants */
  $handler->display->display_options['fields']['field_activity_participants']['id'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['field'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['label'] = 'Inquirer';
  $handler->display->display_options['fields']['field_activity_participants']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_activity_participants']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  $handler->display->display_options['fields']['field_activity_participants']['delta_offset'] = '0';
  /* Field: CRM Core Activity: Notes */
  $handler->display->display_options['fields']['field_activity_notes']['id'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['table'] = 'field_data_field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['field'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['label'] = 'Nachricht';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="ng-lightbox unclaimed-email" href="/crm-core/contact/activity-add/email?destination=/search">E-mail</a>
<a class="ng-lightbox unclaimed-phone" href="/crm-core/contact/activity-add/phone_call?destination=/search">Phone</a>
<a class="ng-lightbox unclaimed-notes" href="/crm-core/contact/activity-add/notes?destination=/search">Notes</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Datum';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';

  /* Display: Activities */
  $handler = $view->new_display('block', 'Activities', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['id'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['field'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm.d.Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
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
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_activity_participants_target_id';
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
  $handler->display->display_options['fields']['field_activity_notes']['label'] = '';
  $handler->display->display_options['fields']['field_activity_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'anfrage' => 'anfrage',
    'email' => 'email',
    'kontaktformular' => 'kontaktformular',
    'meeting' => 'meeting',
    'phone_call' => 'phone_call',
  );
  /* Filter criterion: CRM Core Activity: Status (field_activity_status) */
  $handler->display->display_options['filters']['field_activity_status_value']['id'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['table'] = 'field_data_field_activity_status';
  $handler->display->display_options['filters']['field_activity_status_value']['field'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['value'] = array(
    'Frisch Eingetroffen' => 'Frisch Eingetroffen',
    'Einem Makler zugeordnet' => 'Einem Makler zugeordnet',
    'In Bearbeitung' => 'In Bearbeitung',
    'Wiedervorlage' => 'Wiedervorlage',
    'Erledigt' => 'Erledigt',
  );

  /* Display: favourites */
  $handler = $view->new_display('block', 'favourites', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['id'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['table'] = 'field_data_field_angefragte_wohnung';
  $handler->display->display_options['relationships']['field_angefragte_wohnung_target_id']['field'] = 'field_angefragte_wohnung_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  /* Relationship: Flags: merken */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'merken';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_apart_pictures']['id'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['table'] = 'field_data_field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['field'] = 'field_apart_pictures';
  $handler->display->display_options['fields']['field_apart_pictures']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['field_apart_pictures']['label'] = 'Image';
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
  $handler->display->display_options['fields']['field_kategorie']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Purchasing price */
  $handler->display->display_options['fields']['field_apart_price']['id'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['table'] = 'field_data_field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['field'] = 'field_apart_price';
  $handler->display->display_options['fields']['field_apart_price']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['field_apart_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'field_data_field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['relationship'] = 'field_angefragte_wohnung_target_id';
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'anfrage' => 'anfrage',
    'email' => 'email',
    'kontaktformular' => 'kontaktformular',
    'meeting' => 'meeting',
    'phone_call' => 'phone_call',
  );
  /* Filter criterion: CRM Core Activity: Status (field_activity_status) */
  $handler->display->display_options['filters']['field_activity_status_value']['id'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['table'] = 'field_data_field_activity_status';
  $handler->display->display_options['filters']['field_activity_status_value']['field'] = 'field_activity_status_value';
  $handler->display->display_options['filters']['field_activity_status_value']['value'] = array(
    'Frisch Eingetroffen' => 'Frisch Eingetroffen',
    'Einem Makler zugeordnet' => 'Einem Makler zugeordnet',
    'In Bearbeitung' => 'In Bearbeitung',
    'Wiedervorlage' => 'Wiedervorlage',
    'Erledigt' => 'Erledigt',
  );

  /* Display: Notes */
  $handler = $view->new_display('block', 'Notes', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Activity: Notes */
  $handler->display->display_options['fields']['field_activity_notes']['id'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['table'] = 'field_data_field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['field'] = 'field_activity_notes';
  $handler->display->display_options['fields']['field_activity_notes']['label'] = '';
  $handler->display->display_options['fields']['field_activity_notes']['element_label_colon'] = FALSE;
  /* Field: CRM Core Activity: Date */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'format_type' => 'long',
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
  $handler->display->display_options['fields']['field_activity_participants']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_activity_participants']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'notes' => 'notes',
  );
  $export['unclaimed_leads_table_view'] = $view;

  return $export;
}

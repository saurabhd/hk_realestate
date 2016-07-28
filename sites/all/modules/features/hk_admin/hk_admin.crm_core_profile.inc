<?php
/**
 * @file
 * hk_admin.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function hk_admin_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'anfrage';
  $crm_core_profile->label = 'Anfrage';
  $crm_core_profile->entities = array(
    'crm_core_contact' => array(
      'label' => 'CRM Core Kontakt',
      'status' => 1,
      'bundle' => 'individual',
      'fields_container' => array(
        'fields' => array(
          'contact_name' => 'contact_name',
          'field_e_mail' => 'field_e_mail',
          'field_phone' => 'field_phone',
          'field_crm_address' => 0,
        ),
      ),
      'prepopulate' => 1,
      'prepopulate_type' => 'token_contact',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Aktivität',
      'status' => 1,
      'bundle' => 'anfrage',
      'fields_container' => array(
        'fields' => array(
          'field_activity_participants' => 'field_activity_participants',
          'field_activity_notes' => 'field_activity_notes',
          'field_activity_status' => 'field_activity_status',
          'field_activity_bearbeiter' => 'field_activity_bearbeiter',
          'field_angefragte_wohnung' => 'field_angefragte_wohnung',
          'title' => 0,
          'field_activity_date' => 0,
        ),
      ),
    ),
  );
  $crm_core_profile->fields = array(
    'crm_core_contact_individual_contact_name' => array(
      'field_name' => 'contact_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'weight' => '-47',
    ),
    'crm_core_contact_individual_contact_name_title' => array(
      'field_name' => 'contact_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
    'crm_core_contact_individual_contact_name_given' => array(
      'field_name' => 'contact_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-44',
    ),
    'crm_core_contact_individual_contact_name_middle' => array(
      'field_name' => 'contact_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-37',
    ),
    'crm_core_contact_individual_contact_name_family' => array(
      'field_name' => 'contact_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_contact_individual_contact_name_generational' => array(
      'field_name' => 'contact_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-38',
    ),
    'crm_core_contact_individual_contact_name_credentials' => array(
      'field_name' => 'contact_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-45',
    ),
    'crm_core_contact_individual_field_e_mail' => array(
      'field_name' => 'field_e_mail',
      'field_item' => '',
      'handler' => 'emailProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-42',
    ),
    'crm_core_contact_individual_field_phone' => array(
      'field_name' => 'field_phone',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-41',
    ),
    'crm_core_activity_anfrage_field_activity_participants' => array(
      'field_name' => 'field_activity_participants',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'anfrage',
      'status' => 1,
      'hidden' => 1,
      'default' => array(
        0 => array(
          'target_id' => '8',
        ),
      ),
      'weight' => '-50',
    ),
    'crm_core_activity_anfrage_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'anfrage',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-40',
    ),
    'crm_core_activity_anfrage_field_activity_status' => array(
      'field_name' => 'field_activity_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'anfrage',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Frisch Eingetroffen',
      'weight' => '-49',
    ),
    'crm_core_activity_anfrage_field_activity_bearbeiter' => array(
      'field_name' => 'field_activity_bearbeiter',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'anfrage',
      'status' => 1,
      'hidden' => 1,
      'default' => array(
        0 => array(
          'target_id' => NULL,
        ),
      ),
      'weight' => '-39',
    ),
    'crm_core_activity_anfrage_field_angefragte_wohnung' => array(
      'field_name' => 'field_angefragte_wohnung',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'anfrage',
      'status' => 1,
      'hidden' => 0,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-48',
    ),
  );
  $crm_core_profile->block = TRUE;
  $crm_core_profile->block_title = 'Inquiry';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = 'Inquiry';
  $crm_core_profile->page_path = 'anfrage';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = 'Vielen Dank für Ihre Anfrage. Wir melden uns so schnell wie möglich mit einer Antwort. 

Thank you for sending your inquiry. We will get back to you as soon as possible.';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1428845767;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array();
  $export['anfrage'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'call';
  $crm_core_profile->label = 'Phone call';
  $crm_core_profile->entities = array(
    'crm_core_contact' => array(
      'label' => 'CRM Core Kontakt',
      'status' => 1,
      'bundle' => 'individual',
      'fields_container' => array(
        'fields' => array(
          'contact_name' => 'contact_name',
          'field_e_mail' => 'field_e_mail',
          'field_phone' => 'field_phone',
          'field_crm_address' => 0,
        ),
      ),
      'prepopulate' => 1,
      'prepopulate_type' => 'token_contact',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Aktivität',
      'status' => 1,
      'bundle' => 'phone_call',
      'fields_container' => array(
        'fields' => array(
          'field_activity_participants' => 'field_activity_participants',
          'field_activity_notes' => 'field_activity_notes',
          'title' => 0,
          'field_activity_date' => 0,
        ),
      ),
    ),
  );
  $crm_core_profile->fields = array(
    'crm_core_contact_individual_contact_name' => array(
      'field_name' => 'contact_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'weight' => '-47',
    ),
    'crm_core_contact_individual_contact_name_title' => array(
      'field_name' => 'contact_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
    'crm_core_contact_individual_contact_name_given' => array(
      'field_name' => 'contact_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-44',
    ),
    'crm_core_contact_individual_contact_name_middle' => array(
      'field_name' => 'contact_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-37',
    ),
    'crm_core_contact_individual_contact_name_family' => array(
      'field_name' => 'contact_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_contact_individual_contact_name_generational' => array(
      'field_name' => 'contact_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-38',
    ),
    'crm_core_contact_individual_contact_name_credentials' => array(
      'field_name' => 'contact_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-45',
    ),
    'crm_core_contact_individual_field_e_mail' => array(
      'field_name' => 'field_e_mail',
      'field_item' => '',
      'handler' => 'emailProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-42',
    ),
    'crm_core_contact_individual_field_phone' => array(
      'field_name' => 'field_phone',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-41',
    ),
    'crm_core_activity_phone_call_field_activity_participants' => array(
      'field_name' => 'field_activity_participants',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'phone_call',
      'status' => 0,
      'hidden' => 0,
      'default' => array(),
      'weight' => 41,
    ),
    'crm_core_activity_phone_call_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'phone_call',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => 40,
    ),
    'crm_core_activity_phone_call_field_activity_status' => array(
      'field_name' => 'field_activity_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'phone_call',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => 39,
    ),
    'crm_core_activity_phone_call_field_activity_bearbeiter' => array(
      'field_name' => 'field_activity_bearbeiter',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'phone_call',
      'status' => 0,
      'hidden' => 0,
      'weight' => 38,
    ),
    'crm_core_activity_phone_call_field_angefragte_wohnung' => array(
      'field_name' => 'field_angefragte_wohnung',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'phone_call',
      'status' => 0,
      'hidden' => 0,
      'weight' => 37,
    ),
  );
  $crm_core_profile->block = TRUE;
  $crm_core_profile->block_title = 'Inquiry';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = 'Inquiry';
  $crm_core_profile->page_path = 'anfrage';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = 'Vielen Dank für Ihre Anfrage. Wir melden uns so schnell wie möglich mit einer Antwort. 

Thank you for sending your inquiry. We will get back to you as soon as possible.';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1461427230;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array();
  $export['call'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'kontaktformular';
  $crm_core_profile->label = 'Kontaktformular';
  $crm_core_profile->entities = array(
    'crm_core_contact' => array(
      'label' => 'CRM Core Kontakt',
      'status' => 1,
      'bundle' => 'individual',
      'fields_container' => array(
        'fields' => array(
          'contact_name' => 'contact_name',
          'field_e_mail' => 'field_e_mail',
          'field_phone' => 'field_phone',
          'field_crm_address' => 'field_crm_address',
        ),
      ),
      'prepopulate' => 1,
      'prepopulate_type' => 'token_contact',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Aktivität',
      'status' => 1,
      'bundle' => 'kontaktformular',
      'fields_container' => array(
        'fields' => array(
          'field_activity_participants' => 'field_activity_participants',
          'field_activity_date' => 'field_activity_date',
          'field_activity_notes' => 'field_activity_notes',
          'field_activity_bearbeiter' => 'field_activity_bearbeiter',
          'field_activity_status' => 'field_activity_status',
          'title' => 0,
        ),
      ),
    ),
  );
  $crm_core_profile->fields = array(
    'crm_core_contact_individual_contact_name' => array(
      'field_name' => 'contact_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'weight' => '-50',
    ),
    'crm_core_contact_individual_contact_name_title' => array(
      'field_name' => 'contact_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
    'crm_core_contact_individual_contact_name_given' => array(
      'field_name' => 'contact_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
    ),
    'crm_core_contact_individual_contact_name_middle' => array(
      'field_name' => 'contact_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-25',
    ),
    'crm_core_contact_individual_contact_name_family' => array(
      'field_name' => 'contact_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
    'crm_core_contact_individual_contact_name_generational' => array(
      'field_name' => 'contact_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-24',
    ),
    'crm_core_contact_individual_contact_name_credentials' => array(
      'field_name' => 'contact_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_contact_individual_field_e_mail' => array(
      'field_name' => 'field_e_mail',
      'field_item' => '',
      'handler' => 'emailProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-45',
    ),
    'crm_core_contact_individual_field_phone' => array(
      'field_name' => 'field_phone',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-44',
    ),
    'crm_core_contact_individual_field_crm_address' => array(
      'field_name' => 'field_crm_address',
      'field_item' => '',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'weight' => '-43',
    ),
    'crm_core_contact_individual_field_crm_address_country' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'country',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-36',
    ),
    'crm_core_contact_individual_field_crm_address_administrative_area' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'administrative_area',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-35',
    ),
    'crm_core_contact_individual_field_crm_address_sub_administrative_area' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'sub_administrative_area',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-34',
    ),
    'crm_core_contact_individual_field_crm_address_locality' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'locality',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-40',
    ),
    'crm_core_contact_individual_field_crm_address_dependent_locality' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'dependent_locality',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 1,
      'default' => '',
      'weight' => '-33',
    ),
    'crm_core_contact_individual_field_crm_address_postal_code' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'postal_code',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-41',
    ),
    'crm_core_contact_individual_field_crm_address_thoroughfare' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'thoroughfare',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-42',
    ),
    'crm_core_contact_individual_field_crm_address_premise' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'premise',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-32',
    ),
    'crm_core_contact_individual_field_crm_address_sub_premise' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'sub_premise',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-31',
    ),
    'crm_core_contact_individual_field_crm_address_organisation_name' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'organisation_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-30',
    ),
    'crm_core_contact_individual_field_crm_address_name_line' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'name_line',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-29',
    ),
    'crm_core_contact_individual_field_crm_address_first_name' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'first_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-28',
    ),
    'crm_core_contact_individual_field_crm_address_last_name' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'last_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-27',
    ),
    'crm_core_contact_individual_field_crm_address_data' => array(
      'field_name' => 'field_crm_address',
      'field_item' => 'data',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-26',
    ),
    'crm_core_activity_kontaktformular_field_activity_participants' => array(
      'field_name' => 'field_activity_participants',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'kontaktformular',
      'status' => 1,
      'hidden' => 1,
      'default' => array(
        0 => array(
          'target_id' => '8',
        ),
      ),
      'weight' => '-37',
    ),
    'crm_core_activity_kontaktformular_field_activity_date' => array(
      'field_name' => 'field_activity_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'kontaktformular',
      'status' => 1,
      'hidden' => 1,
      'default' => '',
      'weight' => '-38',
    ),
    'crm_core_activity_kontaktformular_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'kontaktformular',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-39',
    ),
    'crm_core_activity_kontaktformular_field_activity_bearbeiter' => array(
      'field_name' => 'field_activity_bearbeiter',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'kontaktformular',
      'status' => 1,
      'hidden' => 1,
      'default' => array(
        0 => array(
          'target_id' => NULL,
        ),
      ),
      'weight' => '23',
    ),
    'crm_core_activity_kontaktformular_field_activity_status' => array(
      'field_name' => 'field_activity_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'kontaktformular',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Frisch Eingetroffen',
      'weight' => '22',
    ),
  );
  $crm_core_profile->block = TRUE;
  $crm_core_profile->block_title = 'Kontaktformular';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = 'Thank you very much for your message. We will get back to you as soon as possible.
your Herbert + Kohlmeyer Team';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1430982462;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array();
  $export['kontaktformular'] = $crm_core_profile;

  return $export;
}

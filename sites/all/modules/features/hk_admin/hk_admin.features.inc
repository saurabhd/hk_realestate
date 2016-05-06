<?php
/**
 * @file
 * hk_admin.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function hk_admin_default_crm_core_activity_type() {
  $items = array();
  $items['anfrage'] = entity_import('crm_core_activity_type', '{
    "type" : "anfrage",
    "label" : "Anfrage",
    "weight" : 0,
    "activity_string" : "Eine Anfrage wurde gestellt",
    "description" : "jede Anfrage muss einem Makler zugeordnet werden und so schnell wie m\\u00f6glich bearneitet."
  }');
  $items['kontaktformular'] = entity_import('crm_core_activity_type', '{
    "type" : "kontaktformular",
    "label" : "Kontaktformular",
    "weight" : 0,
    "activity_string" : "Jemand hat das Kontaktformular ausgef\\u00fcllt.",
    "description" : ""
  }');
  $items['meeting'] = entity_import('crm_core_activity_type', '{
    "type" : "meeting",
    "label" : "Meeting",
    "weight" : 0,
    "activity_string" : "",
    "description" : "A meeting between 2 or more contacts"
  }');
  $items['phone_call'] = entity_import('crm_core_activity_type', '{
    "type" : "phone_call",
    "label" : "Phone call",
    "weight" : 0,
    "activity_string" : "",
    "description" : "A phone call between 2 or more contacts"
  }');
  return $items;
}

/**
 * Implements hook_default_crm_core_contact_type().
 */
function hk_admin_default_crm_core_contact_type() {
  $items = array();
  $items['household'] = entity_import('crm_core_contact_type', '{
    "type" : "household",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Household",
    "description" : "A collection of individuals generally located at the same residence.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1"
  }');
  $items['individual'] = entity_import('crm_core_contact_type', '{
    "type" : "individual",
    "label" : null,
    "weight" : 0,
    "primary_fields" : {
      "email" : "field_e_mail",
      "address" : "field_crm_address",
      "phone" : "field_phone"
    },
    "name" : "Individual",
    "description" : "A single individual.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1"
  }');
  $items['mitarbeiter'] = entity_import('crm_core_contact_type', '{
    "type" : "mitarbeiter",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "field_e_mail", "address" : "", "phone" : "field_phone" },
    "name" : "Mitarbeiter",
    "description" : "An individual that is working here.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0"
  }');
  $items['organization'] = entity_import('crm_core_contact_type', '{
    "type" : "organization",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Organization",
    "description" : "A collection of individuals or other organizations that has additional contact data.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1"
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_admin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_admin_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hk_admin_node_info() {
  $items = array(
    'besichtigung' => array(
      'name' => t('Besichtigung'),
      'base' => 'node_content',
      'description' => t('Eine Besichtigung kann von einem Makler zu einer Wohnung angelegt werden und dann können Kunden eingeladen werden.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dokument' => array(
      'name' => t('Dokument'),
      'base' => 'node_content',
      'description' => t('Alle benötigten Dokumente zu Wohnung und zum Kunden.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

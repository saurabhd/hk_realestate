<?php
/**
 * @file
 * hk_ct.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function hk_ct_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_objekt_import-bundesland-default_value';
  $feeds_tamper->importer = 'd6_objekt_import';
  $feeds_tamper->source = 'Bundesland';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'BE',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['d6_objekt_import-bundesland-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_objekt_import-germany-default_value';
  $feeds_tamper->importer = 'd6_objekt_import';
  $feeds_tamper->source = 'Germany';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'DE',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['d6_objekt_import-germany-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_objekt_import-objektfotos-explode';
  $feeds_tamper->importer = 'd6_objekt_import';
  $feeds_tamper->source = 'Objektfotos';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['d6_objekt_import-objektfotos-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_objekt_import-objektfotos-find_replace';
  $feeds_tamper->importer = 'd6_objekt_import';
  $feeds_tamper->source = 'Objektfotos';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'jpghttp',
    'replace' => 'jpg,http',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'set comma between pics';
  $export['d6_objekt_import-objektfotos-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_objekt_import-sprache-deutsch_de';
  $feeds_tamper->importer = 'd6_objekt_import';
  $feeds_tamper->source = 'Sprache';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Deutsch',
    'replace' => 'DE',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_replace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['d6_objekt_import-sprache-deutsch_de'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_objekt_import-sprache-find_replace';
  $feeds_tamper->importer = 'd6_objekt_import';
  $feeds_tamper->source = 'Sprache';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'English',
    'replace' => 'EN',
    'case_sensitive' => 1,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_replace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['d6_objekt_import-sprache-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-ausstattung-explode';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Ausstattung';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['d6_wohnung_importer-ausstattung-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-ausstattung-find_replace_regex';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Ausstattung';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(?<! )(?<!^)(?<![A-Z])[A-Z]/',
    'replace' => ' $0',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['d6_wohnung_importer-ausstattung-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-galerie-explode';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Galerie';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['d6_wohnung_importer-galerie-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-galerie-set_comma_galerie';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Galerie';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'jpghttp',
    'replace' => 'jpg,http',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'set comma between pics';
  $export['d6_wohnung_importer-galerie-set_comma_galerie'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-grundriss-explode';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Grundriss';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['d6_wohnung_importer-grundriss-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-grundriss-set_comma_pics';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Grundriss';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'jpghttp',
    'replace' => 'jpg,http',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'set comma between pics';
  $export['d6_wohnung_importer-grundriss-set_comma_pics'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-hausgeld-emonat_entfernen';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Hausgeld';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '€/Monat',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = '€/Monat entfernen';
  $export['d6_wohnung_importer-hausgeld-emonat_entfernen'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-kaufpreis-find_replace';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Kaufpreis';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '€',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = '€ entfernen';
  $export['d6_wohnung_importer-kaufpreis-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-kaufpreis_stellplatz-remove_e_stellplatz';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Kaufpreis Stellplatz';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '€',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Remove €';
  $export['d6_wohnung_importer-kaufpreis_stellplatz-remove_e_stellplatz'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-objektfotos-explode';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Objektfotos';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['d6_wohnung_importer-objektfotos-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-objektfotos-find_replace';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Objektfotos';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'jpghttp',
    'replace' => 'jpg,http',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['d6_wohnung_importer-objektfotos-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-ort-default_value';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Ort';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Berlin',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['d6_wohnung_importer-ort-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-plz-find_replace';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'PLZ';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'Berlin',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['d6_wohnung_importer-plz-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-wohnfl_che-find_replace';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Wohnfläche';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'ca.',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'ca. entfernen';
  $export['d6_wohnung_importer-wohnfl_che-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'd6_wohnung_importer-wohnfl_che-qm_entfernen';
  $feeds_tamper->importer = 'd6_wohnung_importer';
  $feeds_tamper->source = 'Wohnfläche';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'm²',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'm² entfernen';
  $export['d6_wohnung_importer-wohnfl_che-qm_entfernen'] = $feeds_tamper;

  return $export;
}

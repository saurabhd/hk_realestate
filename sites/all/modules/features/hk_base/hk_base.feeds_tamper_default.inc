<?php
/**
 * @file
 * hk_base.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function hk_base_feeds_tamper_default() {
  $export = array();

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

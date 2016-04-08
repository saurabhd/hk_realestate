<?php
/**
 * @file
 * hk_base.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function hk_base_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'd6_objekt_import';
  $feeds_importer->config = array(
    'name' => 'Objekt Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Überschrift Objekt',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Bezirk',
            'target' => 'field_bezirk',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Objekt ID',
            'target' => 'field_objektid_nunumeric',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Bezugsfrei ab',
            'target' => 'field_moving_in_from',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Objektfotos',
            'target' => 'field_object_images',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Etagenzahl',
            'target' => 'field_no_of_floors',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Baujahr',
            'target' => 'field_year_built',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Heizung',
            'target' => 'field_heating_type',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Zustand',
            'target' => 'field_status_quo',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Germany',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Straße / Hausnr',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'PLZ',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Ort',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Wohnungsbeschreibung',
            'target' => 'field_object_description',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Lage',
            'target' => 'field_object_location',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Sonstiges',
            'target' => 'field_object_other',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Provision Kauf',
            'target' => 'field_rent_commission',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Textkörper',
            'target' => 'body',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Bundesland',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Kategorie',
            'target' => 'field_kategorie',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          21 => array(
            'source' => 'Sprache',
            'target' => 'language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'objekt',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['d6_objekt_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'd6_wohnung_importer';
  $feeds_importer->config = array(
    'name' => 'D6 Wohnung Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Beitrags-ID',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Titel',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Wohnungsnr.',
            'target' => 'field_apart_no',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Objekt',
            'target' => 'field_object_ref:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Kaufpreis',
            'target' => 'field_apart_price',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Kaufpreis Stellplatz',
            'target' => 'field_apart_price_parking',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Beschreibung',
            'target' => 'field_apart_description',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Lage',
            'target' => 'field_apart_location',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Sonstiges',
            'target' => 'field_apart_other',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Etage',
            'target' => 'field_apart_floor',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Wohnfläche',
            'target' => 'field_apart_living_space',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Hausgeld',
            'target' => 'field_apart_hoa_fee',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Zimmer',
            'target' => 'field_apart_rooms',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Badezimmer',
            'target' => 'field_apart_bathrooms',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Grundriss',
            'target' => 'field_apart_floor_plan',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Galerie',
            'target' => 'field_apart_pictures',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Schlafzimmer',
            'target' => 'field_apart_sleeping_rooms',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Bezugsfrei ab',
            'target' => 'field_moving_in_from',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Provision',
            'target' => 'field_apart_commission',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Ausstattung',
            'target' => 'field_ausstattung',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          20 => array(
            'source' => 'Objekt-ID',
            'target' => 'field_object_ref:objekt:text_feeds_set_target:field_objektid_nunumeric',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Kategorie',
            'target' => 'field_kategorie',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'apartment',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['d6_wohnung_importer'] = $feeds_importer;

  return $export;
}

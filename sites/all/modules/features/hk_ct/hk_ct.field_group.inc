<?php
/**
 * @file
 * hk_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hk_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_akkordeon|node|apartment|default';
  $field_group->group_name = 'group_akkordeon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_text';
  $field_group->data = array(
    'label' => 'Akkordeon',
    'weight' => '54',
    'children' => array(
      0 => 'group_lage',
      1 => 'group_sonstiges',
      2 => 'group_house',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-akkordeon field-group-accordion',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $field_groups['group_akkordeon|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_akkordeon|node|objekt|default';
  $field_group->group_name = 'group_akkordeon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_text';
  $field_group->data = array(
    'label' => 'Akkordeon',
    'weight' => '3',
    'children' => array(
      0 => 'group_lage',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-akkordeon field-group-accordion',
        'effect' => 'bounceslide',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_akkordeon|node|objekt|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_akkordion|node|objekt|wohn_und_geschaeftshaus';
  $field_group->group_name = 'group_akkordion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'wohn_und_geschaeftshaus';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Akkordion',
    'weight' => '5',
    'children' => array(
      0 => 'group_haus',
      1 => 'group_lage',
      2 => 'group_sonstiges',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-akkordion field-group-accordion',
        'effect' => 'bounceslide',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_akkordion|node|objekt|wohn_und_geschaeftshaus'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ansprechpartner|node|objekt|form';
  $field_group->group_name = 'group_ansprechpartner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Objektverwaltung',
    'weight' => '7',
    'children' => array(
      0 => 'field_obj_verkaeufer',
      1 => 'field_ansprechpartner',
      2 => 'field_obj_kond_acquise',
      3 => 'field_obj_gemeinschaftsgeschaeft',
      4 => 'field_obj_konditionen_tipp',
      5 => 'field_obj_tippgeber',
      6 => 'field_obj_kond_gemeingesch',
      7 => 'field_obj_acquise',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Objektverwaltung',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ansprechpartner field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_ansprechpartner|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_apart_publish|node|apartment|form';
  $field_group->group_name = 'group_apart_publish';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Veröffentlichen',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-apart-publish field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_apart_publish|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|apartment|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Basic fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_apart_living_space',
      1 => 'field_apart_no',
      2 => 'field_apart_price',
      3 => 'field_apart_rooms',
      4 => 'field_kategorie',
      5 => 'field_object_ref',
      6 => 'title_field',
      7 => 'field_obj_schattenobjekt',
      8 => 'language',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_basic|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|objekt|teaser';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'card-content',
    'weight' => '2',
    'children' => array(
      0 => 'field_object_txt_map_popup',
      1 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'card-content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-card-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_card_content|node|objekt|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card|node|apartment|teaser';
  $field_group->group_name = 'group_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '0',
    'children' => array(
      0 => 'field_apart_living_space',
      1 => 'field_apart_pictures',
      2 => 'field_apart_price',
      3 => 'field_kategorie',
      4 => 'flag_merken',
      5 => 'neu_label',
      6 => 'adresse',
      7 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-card',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_card|node|apartment|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_costs|node|apartment|form';
  $field_group->group_name = 'group_costs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Costs and returns',
    'weight' => '2',
    'children' => array(
      0 => 'field_apart_commission',
      1 => 'field_apart_hoa_fee',
      2 => 'field_apart_net_rent',
      3 => 'field_apart_price_parking',
      4 => 'field_apart_rate_of_return',
      5 => 'field_apart_maintenance_reserve',
      6 => 'field_apart_maint_reserve_value',
      7 => 'field_apart_alloc_incident_costs',
      8 => 'field_apart_nalloc_incid_cost',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Costs and returns',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-costs field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_costs|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|objekt|wohn_und_geschaeftshaus';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'wohn_und_geschaeftshaus';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '10',
    'children' => array(
      0 => 'field_no_of_floors',
      1 => 'field_wug_act_rent',
      2 => 'field_wug_no_of_units',
      3 => 'field_wug_opt_constrruct',
      4 => 'field_wug_total_space',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-details field-group-html-element apartmerkmale',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_details|node|objekt|wohn_und_geschaeftshaus'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_energieausweis|node|objekt|form';
  $field_group->group_name = 'group_energieausweis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Energieausweis',
    'weight' => '6',
    'children' => array(
      0 => 'field_heating_type',
      1 => 'field_year_built',
      2 => 'field_objekt_energieausweistyp',
      3 => 'field_objekt_energietraeger',
      4 => 'field_objekt_endenergiebedarf',
      5 => 'field_objekt_effizienzklasse',
      6 => 'field_obj_enev_date',
      7 => 'field_obj_enev_haustyp',
      8 => 'field_obj_enev_file',
      9 => 'field_obj_enev_consumption_value',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-energieausweis field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_energieausweis|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_energieausweis|node|objekt|wohn_und_geschaeftshaus';
  $field_group->group_name = 'group_energieausweis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'wohn_und_geschaeftshaus';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Energieausweis',
    'weight' => '16',
    'children' => array(
      0 => 'field_heating_type',
      1 => 'field_wug_occupancy',
      2 => 'field_year_built',
      3 => 'field_objekt_energieausweistyp',
      4 => 'field_objekt_energietraeger',
      5 => 'field_objekt_endenergiebedarf',
      6 => 'field_objekt_effizienzklasse',
      7 => 'field_obj_enev_date',
      8 => 'field_obj_enev_haustyp',
      9 => 'field_obj_enev_file',
      10 => 'field_obj_enev_consumption_value',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Energieausweis',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-energieausweis field-group-html-element energy',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_energieausweis|node|objekt|wohn_und_geschaeftshaus'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_expose|node|apartment|form';
  $field_group->group_name = 'group_expose';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Exposé',
    'weight' => '6',
    'children' => array(
      0 => 'field_apart_expose',
      1 => 'field_apart_erweitertes_expose',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-expose field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_expose|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features|node|apartment|form';
  $field_group->group_name = 'group_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Features',
    'weight' => '5',
    'children' => array(
      0 => 'field_apart_bathrooms',
      1 => 'field_apart_floor',
      2 => 'field_apart_sleeping_rooms',
      3 => 'field_apart_type',
      4 => 'field_ausstattung',
      5 => 'field_moving_in_from',
      6 => 'field_apart_ceiling_height',
      7 => 'field_status_quo',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-features field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_features|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_haus|node|objekt|wohn_und_geschaeftshaus';
  $field_group->group_name = 'group_haus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'wohn_und_geschaeftshaus';
  $field_group->parent_name = 'group_akkordion';
  $field_group->data = array(
    'label' => 'Haus',
    'weight' => '63',
    'children' => array(
      0 => 'field_object_description',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-haus field-group-accordion-item',
      ),
    ),
  );
  $field_groups['group_haus|node|objekt|wohn_und_geschaeftshaus'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|apartment|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Menu',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_costs',
      2 => 'group_expose',
      3 => 'group_features',
      4 => 'group_images',
      5 => 'group_texte',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $field_groups['group_horizontal|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|objekt|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Menu',
    'weight' => '0',
    'children' => array(
      0 => 'group_ansprechpartner',
      1 => 'group_energieausweis',
      2 => 'group_ht_basis',
      3 => 'group_ht_bilder',
      4 => 'group_ht_merkmale',
      5 => 'group_ht_texte',
      6 => 'group_obj_apartments',
      7 => 'group_ort',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $field_groups['group_horizontal|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_house|node|apartment|default';
  $field_group->group_name = 'group_house';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_akkordeon';
  $field_group->data = array(
    'label' => 'House',
    'weight' => '50',
    'children' => array(
      0 => 'haus_beschreibung',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-house field-group-accordion-item',
      ),
    ),
  );
  $field_groups['group_house|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_house|node|objekt|default';
  $field_group->group_name = 'group_house';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Haus',
    'weight' => '37',
    'children' => array(
      0 => 'field_object_desc_commercial',
      1 => 'field_object_description',
      2 => 'field_object_description_invest',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-house field-group-accordion-item',
      ),
    ),
  );
  $field_groups['group_house|node|objekt|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_basis|node|objekt|form';
  $field_group->group_name = 'group_ht_basis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Basisdaten',
    'weight' => '1',
    'children' => array(
      0 => 'field_kategorie',
      1 => 'field_objektid_nunumeric',
      2 => 'title_field',
      3 => 'field_apart_price',
      4 => 'language',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basisdaten',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ht-basis field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ht_basis|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_bilder|node|objekt|form';
  $field_group->group_name = 'group_ht_bilder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Bilder',
    'weight' => '4',
    'children' => array(
      0 => 'field_object_images',
      1 => 'field_apart_floor_plan',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ht-bilder field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ht_bilder|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_merkmale|node|objekt|form';
  $field_group->group_name = 'group_ht_merkmale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Merkmale',
    'weight' => '5',
    'children' => array(
      0 => 'field_developer',
      1 => 'field_moving_in_from',
      2 => 'field_no_of_floors',
      3 => 'field_rent_commission',
      4 => 'field_sale_commission',
      5 => 'field_wug_act_rent',
      6 => 'field_wug_no_of_units',
      7 => 'field_wug_occupancy',
      8 => 'field_wug_opt_constrruct',
      9 => 'field_wug_total_space',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ht-merkmale field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ht_merkmale|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_texte|node|objekt|form';
  $field_group->group_name = 'group_ht_texte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Texte',
    'weight' => '3',
    'children' => array(
      0 => 'field_object_description',
      1 => 'field_object_location',
      2 => 'field_object_other',
      3 => 'field_object_txt_map_popup',
      4 => 'field_object_text_schattenobjekt',
      5 => 'group_multiapart',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ht-texte field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ht_texte|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|apartment|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '4',
    'children' => array(
      0 => 'field_apart_floor_plan',
      1 => 'field_apart_pictures',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_images|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lage|node|apartment|default';
  $field_group->group_name = 'group_lage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_akkordeon';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '51',
    'children' => array(
      0 => 'conditional_location',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'classes' => 'group-lage field-group-accordion-item',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_lage|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lage|node|objekt|default';
  $field_group->group_name = 'group_lage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_akkordeon';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '67',
    'children' => array(
      0 => 'field_object_location',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'classes' => 'group-lage field-group-accordion-item',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_lage|node|objekt|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lage|node|objekt|wohn_und_geschaeftshaus';
  $field_group->group_name = 'group_lage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'wohn_und_geschaeftshaus';
  $field_group->parent_name = 'group_akkordion';
  $field_group->data = array(
    'label' => 'Lage',
    'weight' => '64',
    'children' => array(
      0 => 'field_object_location',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-lage field-group-accordion-item',
      ),
    ),
  );
  $field_groups['group_lage|node|objekt|wohn_und_geschaeftshaus'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_merkmale|node|apartment|default';
  $field_group->group_name = 'group_merkmale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Merkmale',
    'weight' => '31',
    'children' => array(
      0 => 'field_apart_bathrooms',
      1 => 'field_apart_floor',
      2 => 'field_apart_hoa_fee',
      3 => 'field_apart_price_parking',
      4 => 'field_apart_sleeping_rooms',
      5 => 'field_moving_in_from',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Merkmale',
      'instance_settings' => array(
        'classes' => 'group-merkmale',
        'element' => 'table',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_merkmale|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_merkmale|node|objekt|default';
  $field_group->group_name = 'group_merkmale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Merkmale',
    'weight' => '14',
    'children' => array(
      0 => 'field_heating_type',
      1 => 'field_rent_commission',
      2 => 'field_sale_commission',
      3 => 'field_wug_act_rent',
      4 => 'field_wug_no_of_units',
      5 => 'field_wug_occupancy',
      6 => 'field_wug_opt_constrruct',
      7 => 'field_wug_total_space',
      8 => 'field_year_built',
      9 => 'field_objekt_energieausweistyp',
      10 => 'field_objekt_energietraeger',
      11 => 'field_objekt_endenergiebedarf',
      12 => 'field_objekt_effizienzklasse',
      13 => 'field_obj_enev_date',
      14 => 'field_obj_enev_haustyp',
      15 => 'field_obj_enev_file',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Merkmale',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-merkmale',
        'wrapper' => 'aside',
      ),
    ),
  );
  $field_groups['group_merkmale|node|objekt|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multiapart|node|objekt|form';
  $field_group->group_name = 'group_multiapart';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ht_texte';
  $field_group->data = array(
    'label' => 'Mehrere Apartmenttypen im Objekt',
    'weight' => '60',
    'children' => array(
      0 => 'field_object_desc_commercial',
      1 => 'field_object_description_invest',
      2 => 'field_object_multi_apart_types',
      3 => 'field_object_desc_freehold',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-multiapart field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_multiapart|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_obj_apartments|node|objekt|form';
  $field_group->group_name = 'group_obj_apartments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Apartments',
    'weight' => '8',
    'children' => array(
      0 => 'field_obj_apartments',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-obj-apartments field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_obj_apartments|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ort|node|objekt|form';
  $field_group->group_name = 'group_ort';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Ort',
    'weight' => '2',
    'children' => array(
      0 => 'field_address',
      1 => 'field_bezirk',
      2 => 'field_objekt_wkt',
      3 => 'field_address_shadow_object',
      4 => 'field_obj_schattenobjekt',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ort field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ort|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_card|node|objekt|teaser';
  $field_group->group_name = 'group_project_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '0',
    'children' => array(
      0 => 'field_address',
      1 => 'field_object_images',
      2 => 'field_objektid_nunumeric',
      3 => 'field_save_workflow',
      4 => 'field_address_shadow_object',
      5 => 'edit_translate_link',
      6 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'classes' => 'group-project-card clearfix',
        'element' => 'article',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_project_card|node|objekt|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sonstiges|node|apartment|default';
  $field_group->group_name = 'group_sonstiges';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_akkordeon';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '52',
    'children' => array(
      0 => 'conditional_other',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'classes' => 'group-sonstiges field-group-accordion-item',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sonstiges|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sonstiges|node|objekt|default';
  $field_group->group_name = 'group_sonstiges';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sonstiges',
    'weight' => '38',
    'children' => array(
      0 => 'field_object_other',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-sonstiges field-group-accordion-item',
      ),
    ),
  );
  $field_groups['group_sonstiges|node|objekt|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sonstiges|node|objekt|wohn_und_geschaeftshaus';
  $field_group->group_name = 'group_sonstiges';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'wohn_und_geschaeftshaus';
  $field_group->parent_name = 'group_akkordion';
  $field_group->data = array(
    'label' => 'Sonstiges',
    'weight' => '65',
    'children' => array(
      0 => 'field_object_other',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Sonstiges',
      'instance_settings' => array(
        'classes' => 'group-sonstiges field-group-accordion-item',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sonstiges|node|objekt|wohn_und_geschaeftshaus'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_texte|node|apartment|form';
  $field_group->group_name = 'group_texte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Texte',
    'weight' => '3',
    'children' => array(
      0 => 'field_apart_description',
      1 => 'field_apart_location',
      2 => 'field_apart_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-texte field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_texte|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|apartment|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '3',
    'children' => array(
      0 => 'field_apart_description',
      1 => 'group_akkordeon',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text',
        'wrapper' => 'article',
      ),
    ),
  );
  $field_groups['group_text|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|objekt|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '0',
    'children' => array(
      0 => 'field_object_txt_map_popup',
      1 => 'group_akkordeon',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text',
        'wrapper' => 'article',
      ),
    ),
  );
  $field_groups['group_text|node|objekt|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|apartment|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '36',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wrapper field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_wrapper|node|apartment|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Akkordeon');
  t('Akkordion');
  t('Apartments');
  t('Basic fields');
  t('Basisdaten');
  t('Bilder');
  t('Card');
  t('Costs and returns');
  t('Details');
  t('Energieausweis');
  t('Exposé');
  t('Features');
  t('Haus');
  t('Horizontal Menu');
  t('House');
  t('Images');
  t('Lage');
  t('Location');
  t('Mehrere Apartmenttypen im Objekt');
  t('Merkmale');
  t('Objektverwaltung');
  t('Ort');
  t('Other');
  t('Sonstiges');
  t('Text');
  t('Texte');
  t('Veröffentlichen');
  t('Wrapper');
  t('card-content');

  return $field_groups;
}

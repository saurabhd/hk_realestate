<?php
/**
 * @file
 * hk_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hk_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|apartment|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'apartment';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ds_flag_merken' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'adresse' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:1:{s:7:"context";a:1:{i:0;s:25:"argument_entity_id:node_1";}}s:4:"type";s:11:"views_panes";s:7:"subtype";s:23:"apartment-objektadresse";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'haus_beschreibung' => array(
      'weight' => '53',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"apartment-description";}',
        'load_terms' => 1,
        'ft' => array(),
      ),
    ),
    'conditional_location' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:22:"apartment-panel_pane_3";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'conditional_other' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:22:"apartment-panel_pane_4";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'anfrage_button' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'energieausweis' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:16:"apartment-energy";}',
        'load_terms' => 0,
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'apartment_details' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:17:"apartment-details";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_apart_commission' => array(
      'formatter_settings' => array(
        'ft' => array(
          'prefix' => '<strong>* excl.</strong> ',
        ),
      ),
    ),
    'field_apart_living_space' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Price',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_rooms' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_ausstattung' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'ausstattung',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_objektid_nunumeric' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '-',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'objekt-id',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|apartment|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|apartment|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'apartment';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'neu_label' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'adresse' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:2:{s:9:"arguments";a:1:{s:3:"nid";s:10:"[node:nid]";}s:7:"context";a:1:{i:0;s:25:"argument_entity_id:node_1";}}s:4:"type";s:11:"views_panes";s:7:"subtype";s:23:"apartment-objektadresse";}',
        'load_terms' => 0,
        'ft' => array(
          'prefix' => '<div class="address"><i class="icon-hk-icon-location"></i> ',
          'suffix' => '</div>',
        ),
      ),
    ),
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|apartment|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|kartenmarker|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'kartenmarker';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|kartenmarker|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|objekt|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'objekt';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'wohnungsliste' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:23:"apartment-wohnungsliste";}',
        'load_terms' => 1,
        'ft' => array(
          'lb' => 'Apartments',
        ),
      ),
    ),
    'field_objekt_wkt' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'objectmap',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|objekt|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|objekt|map_popup';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'objekt';
  $ds_fieldsetting->view_mode = 'map_popup';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_object_images' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|objekt|map_popup'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|objekt|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'objekt';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'edit_translate_link' => array(
      'weight' => '46',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '41',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|objekt|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|objekt|wohn_und_geschaeftshaus';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'objekt';
  $ds_fieldsetting->view_mode = 'wohn_und_geschaeftshaus';
  $ds_fieldsetting->settings = array(
    'thumbslider' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:28:"apartment-thumbslider_objekt";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'slideshow' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:26:"apartment-slideshow_object";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'field_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'apartaddress',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|objekt|wohn_und_geschaeftshaus'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|oeffnungszeit|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'oeffnungszeit';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|oeffnungszeit|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|oeffnungszeit|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'oeffnungszeit';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_oeffnungszeiten' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|oeffnungszeit|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pdf',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pdf',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|page|print'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|referenz|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'referenz';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ref_adresse' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|referenz|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function hk_ct_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'adresse';
  $ds_field->label = 'Adresse';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['adresse'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'anfrage_button';
  $ds_field->label = 'Anfrage Button';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/anfrage?field_angefragte_wohnung=[node:nid]&destination=/node/[node:nid]&width=600&height=600" class="ng-lightbox btn full"><?php print t("Inquiry")?></a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['anfrage_button'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'energieausweis';
  $ds_field->label = 'Energieausweis';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['energieausweis'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'expose_drucken';
  $ds_field->label = 'Exposé drucken';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/node/[node:nid]/exposes?width=800&height=800&template=colorbox" class="colorbox-load expose"><?php print t("Exposé") ?></a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['expose_drucken'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'haus_beschreibung';
  $ds_field->label = 'Haus Beschreibung';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['haus_beschreibung'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'neu_label';
  $ds_field->label = 'Neu Label';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  if (!empty($entity->created)) {
    $now = new DateTime();
    $interval = ($now->format(\'U\') - $entity->created) / 86400;
    if ($interval <= 30) print t(\'<span class="new">New!&nbsp;</span>\');
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['neu_label'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'oeffnungszeiten';
  $ds_field->label = 'Öffnungszeiten';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['oeffnungszeiten'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hk_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'conditional_other',
        1 => 'conditional_location',
        3 => 'field_apart_gallery',
        4 => 'field_apart_floor_plan',
        5 => 'group_text',
        18 => 'group_house',
        19 => 'group_lage',
        20 => 'field_apart_description',
        21 => 'group_sonstiges',
        22 => 'haus_beschreibung',
        23 => 'group_akkordeon',
      ),
      'header' => array(
        2 => 'adresse',
      ),
      'right' => array(
        6 => 'field_objekt_wkt',
        7 => 'field_objektid_nunumeric',
        8 => 'field_apart_no',
        9 => 'field_apart_living_space',
        10 => 'field_apart_rooms',
        11 => 'field_apart_price',
        12 => 'anfrage_button',
        13 => 'field_apart_commission',
        14 => 'ds_flag_merken',
        15 => 'apartment_details',
        16 => 'energieausweis',
        17 => 'field_ausstattung',
      ),
    ),
    'fields' => array(
      'conditional_other' => 'left',
      'conditional_location' => 'left',
      'adresse' => 'header',
      'field_apart_gallery' => 'left',
      'field_apart_floor_plan' => 'left',
      'group_text' => 'left',
      'field_objekt_wkt' => 'right',
      'field_objektid_nunumeric' => 'right',
      'field_apart_no' => 'right',
      'field_apart_living_space' => 'right',
      'field_apart_rooms' => 'right',
      'field_apart_price' => 'right',
      'anfrage_button' => 'right',
      'field_apart_commission' => 'right',
      'ds_flag_merken' => 'right',
      'apartment_details' => 'right',
      'energieausweis' => 'right',
      'field_ausstattung' => 'right',
      'group_house' => 'left',
      'group_lage' => 'left',
      'field_apart_description' => 'left',
      'group_sonstiges' => 'left',
      'haus_beschreibung' => 'left',
      'group_akkordeon' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|apartment|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'language',
        2 => 'field_kategorie',
        3 => 'field_obj_schattenobjekt',
        5 => 'group_horizontal',
        6 => 'field_apart_no',
        7 => 'group_basic',
        9 => 'field_apart_living_space',
        11 => 'group_costs',
        12 => 'group_texte',
        13 => 'field_save_workflow',
        14 => 'field_apart_rooms',
        15 => 'group_images',
        17 => 'field_apart_price',
        18 => 'field_object_ref',
        20 => 'group_features',
        21 => 'group_expose',
        26 => 'field_apart_description',
        27 => 'field_apart_location',
        28 => 'field_apart_other',
        29 => 'field_apart_hoa_fee',
        30 => 'field_apart_alloc_incident_costs',
        31 => 'field_apart_nalloc_incid_cost',
        32 => 'field_apart_maintenance_reserve',
        33 => 'field_apart_pictures',
        34 => 'field_apart_maint_reserve_value',
        35 => 'field_apart_net_rent',
        36 => 'field_apart_floor_plan',
        37 => 'field_apart_rate_of_return',
        38 => 'field_apart_price_parking',
        39 => 'field_apart_commission',
        40 => 'field_apart_expose',
        41 => 'field_apart_erweitertes_expose',
        42 => 'field_apart_bathrooms',
        43 => 'field_apart_sleeping_rooms',
        44 => 'field_apart_type',
        45 => 'field_status_quo',
        46 => 'field_moving_in_from',
        47 => 'field_apart_floor',
        48 => 'field_apart_ceiling_height',
        49 => 'field_ausstattung',
      ),
      'hidden' => array(
        4 => 'field_objektid_nunumeric',
        8 => 'field_bezirk',
        10 => 'field_objekt_wkt',
        16 => 'path',
        19 => 'group_apart_publish',
        22 => 'redirect',
        23 => 'field_apart_gallery',
        24 => 'field_apart_regionbound_counter',
        25 => 'xmlsitemap',
        50 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'language' => 'ds_content',
      'field_kategorie' => 'ds_content',
      'field_obj_schattenobjekt' => 'ds_content',
      'field_objektid_nunumeric' => 'hidden',
      'group_horizontal' => 'ds_content',
      'field_apart_no' => 'ds_content',
      'group_basic' => 'ds_content',
      'field_bezirk' => 'hidden',
      'field_apart_living_space' => 'ds_content',
      'field_objekt_wkt' => 'hidden',
      'group_costs' => 'ds_content',
      'group_texte' => 'ds_content',
      'field_save_workflow' => 'ds_content',
      'field_apart_rooms' => 'ds_content',
      'group_images' => 'ds_content',
      'path' => 'hidden',
      'field_apart_price' => 'ds_content',
      'field_object_ref' => 'ds_content',
      'group_apart_publish' => 'hidden',
      'group_features' => 'ds_content',
      'group_expose' => 'ds_content',
      'redirect' => 'hidden',
      'field_apart_gallery' => 'hidden',
      'field_apart_regionbound_counter' => 'hidden',
      'xmlsitemap' => 'hidden',
      'field_apart_description' => 'ds_content',
      'field_apart_location' => 'ds_content',
      'field_apart_other' => 'ds_content',
      'field_apart_hoa_fee' => 'ds_content',
      'field_apart_alloc_incident_costs' => 'ds_content',
      'field_apart_nalloc_incid_cost' => 'ds_content',
      'field_apart_maintenance_reserve' => 'ds_content',
      'field_apart_pictures' => 'ds_content',
      'field_apart_maint_reserve_value' => 'ds_content',
      'field_apart_net_rent' => 'ds_content',
      'field_apart_floor_plan' => 'ds_content',
      'field_apart_rate_of_return' => 'ds_content',
      'field_apart_price_parking' => 'ds_content',
      'field_apart_commission' => 'ds_content',
      'field_apart_expose' => 'ds_content',
      'field_apart_erweitertes_expose' => 'ds_content',
      'field_apart_bathrooms' => 'ds_content',
      'field_apart_sleeping_rooms' => 'ds_content',
      'field_apart_type' => 'ds_content',
      'field_status_quo' => 'ds_content',
      'field_moving_in_from' => 'ds_content',
      'field_apart_floor' => 'ds_content',
      'field_apart_ceiling_height' => 'ds_content',
      'field_ausstattung' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|apartment|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_card',
        1 => 'field_apart_pictures',
        2 => 'flag_merken',
        3 => 'neu_label',
        4 => 'field_kategorie',
        5 => 'title',
        6 => 'field_apart_living_space',
        7 => 'field_apart_price',
        8 => 'adresse',
      ),
    ),
    'fields' => array(
      'group_card' => 'ds_content',
      'field_apart_pictures' => 'ds_content',
      'flag_merken' => 'ds_content',
      'neu_label' => 'ds_content',
      'field_kategorie' => 'ds_content',
      'title' => 'ds_content',
      'field_apart_living_space' => 'ds_content',
      'field_apart_price' => 'ds_content',
      'adresse' => 'ds_content',
    ),
    'limit' => array(
      'field_apart_pictures' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|apartment|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'regions' => array(
      'ds_content' => array(
        0 => 'group_text',
        1 => 'wohnungsliste',
        2 => 'field_object_txt_map_popup',
        3 => 'group_akkordeon',
        4 => 'field_objekt_wkt',
        5 => 'field_object_location',
        6 => 'group_lage',
      ),
    ),
    'fields' => array(
      'group_text' => 'ds_content',
      'wohnungsliste' => 'ds_content',
      'field_object_txt_map_popup' => 'ds_content',
      'group_akkordeon' => 'ds_content',
      'field_objekt_wkt' => 'ds_content',
      'field_object_location' => 'ds_content',
      'group_lage' => 'ds_content',
    ),
  );
  $export['node|objekt|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'language',
        2 => 'field_object_txt_map_popup',
        3 => 'field_objektid_nunumeric',
        4 => 'field_object_description',
        5 => 'field_kategorie',
        6 => 'field_apart_price',
        7 => 'field_ansprechpartner',
        8 => 'field_object_multi_apart_types',
        9 => 'group_horizontal',
        10 => 'path',
        11 => 'field_obj_verkaeufer',
        12 => 'field_object_desc_freehold',
        13 => 'field_object_description_invest',
        14 => 'group_ht_basis',
        15 => 'field_obj_gemeinschaftsgeschaeft',
        16 => 'group_ort',
        17 => 'field_object_desc_commercial',
        18 => 'field_save_workflow',
        19 => 'group_ht_texte',
        20 => 'field_object_location',
        21 => 'field_obj_kond_gemeingesch',
        22 => 'group_ht_bilder',
        24 => 'field_object_other',
        25 => 'field_obj_acquise',
        26 => 'field_obj_kond_acquise',
        27 => 'group_ht_merkmale',
        28 => 'field_object_images',
        29 => 'group_energieausweis',
        30 => 'field_obj_tippgeber',
        31 => 'group_ansprechpartner',
        32 => 'field_obj_konditionen_tipp',
        33 => 'field_apart_floor_plan',
        34 => 'group_obj_apartments',
        35 => 'field_obj_apartments',
        36 => 'field_sale_commission',
        38 => 'field_rent_commission',
        39 => 'field_no_of_floors',
        40 => 'field_moving_in_from',
        41 => 'field_developer',
        42 => 'field_wug_total_space',
        43 => 'field_wug_opt_constrruct',
        44 => 'field_wug_no_of_units',
        45 => 'field_wug_occupancy',
        46 => 'field_wug_act_rent',
        47 => 'field_objekt_energieausweistyp',
        48 => 'field_objekt_endenergiebedarf',
        49 => 'field_obj_enev_consumption_value',
        50 => 'field_objekt_energietraeger',
        51 => 'field_objekt_effizienzklasse',
        52 => 'field_heating_type',
        53 => 'field_year_built',
        54 => 'field_bezirk',
        55 => 'field_obj_enev_haustyp',
        56 => 'field_obj_schattenobjekt',
        57 => 'field_address',
        58 => 'field_obj_enev_file',
        59 => 'field_address_shadow_object',
        60 => 'field_obj_enev_date',
        61 => 'field_objekt_wkt',
        62 => 'field_object_text_schattenobjekt',
        63 => 'group_multiapart',
      ),
      'hidden' => array(
        23 => 'redirect',
        37 => 'xmlsitemap',
        64 => 'field_cvm_cvm',
        65 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'language' => 'ds_content',
      'field_object_txt_map_popup' => 'ds_content',
      'field_objektid_nunumeric' => 'ds_content',
      'field_object_description' => 'ds_content',
      'field_kategorie' => 'ds_content',
      'field_apart_price' => 'ds_content',
      'field_ansprechpartner' => 'ds_content',
      'field_object_multi_apart_types' => 'ds_content',
      'group_horizontal' => 'ds_content',
      'path' => 'ds_content',
      'field_obj_verkaeufer' => 'ds_content',
      'field_object_desc_freehold' => 'ds_content',
      'field_object_description_invest' => 'ds_content',
      'group_ht_basis' => 'ds_content',
      'field_obj_gemeinschaftsgeschaeft' => 'ds_content',
      'group_ort' => 'ds_content',
      'field_object_desc_commercial' => 'ds_content',
      'field_save_workflow' => 'ds_content',
      'group_ht_texte' => 'ds_content',
      'field_object_location' => 'ds_content',
      'field_obj_kond_gemeingesch' => 'ds_content',
      'group_ht_bilder' => 'ds_content',
      'redirect' => 'hidden',
      'field_object_other' => 'ds_content',
      'field_obj_acquise' => 'ds_content',
      'field_obj_kond_acquise' => 'ds_content',
      'group_ht_merkmale' => 'ds_content',
      'field_object_images' => 'ds_content',
      'group_energieausweis' => 'ds_content',
      'field_obj_tippgeber' => 'ds_content',
      'group_ansprechpartner' => 'ds_content',
      'field_obj_konditionen_tipp' => 'ds_content',
      'field_apart_floor_plan' => 'ds_content',
      'group_obj_apartments' => 'ds_content',
      'field_obj_apartments' => 'ds_content',
      'field_sale_commission' => 'ds_content',
      'xmlsitemap' => 'hidden',
      'field_rent_commission' => 'ds_content',
      'field_no_of_floors' => 'ds_content',
      'field_moving_in_from' => 'ds_content',
      'field_developer' => 'ds_content',
      'field_wug_total_space' => 'ds_content',
      'field_wug_opt_constrruct' => 'ds_content',
      'field_wug_no_of_units' => 'ds_content',
      'field_wug_occupancy' => 'ds_content',
      'field_wug_act_rent' => 'ds_content',
      'field_objekt_energieausweistyp' => 'ds_content',
      'field_objekt_endenergiebedarf' => 'ds_content',
      'field_obj_enev_consumption_value' => 'ds_content',
      'field_objekt_energietraeger' => 'ds_content',
      'field_objekt_effizienzklasse' => 'ds_content',
      'field_heating_type' => 'ds_content',
      'field_year_built' => 'ds_content',
      'field_bezirk' => 'ds_content',
      'field_obj_enev_haustyp' => 'ds_content',
      'field_obj_schattenobjekt' => 'ds_content',
      'field_address' => 'ds_content',
      'field_obj_enev_file' => 'ds_content',
      'field_address_shadow_object' => 'ds_content',
      'field_obj_enev_date' => 'ds_content',
      'field_objekt_wkt' => 'ds_content',
      'field_object_text_schattenobjekt' => 'ds_content',
      'group_multiapart' => 'ds_content',
      'field_cvm_cvm' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|map_popup';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'map_popup';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_object_images',
        1 => 'title',
        2 => 'field_object_txt_map_popup',
        3 => 'field_obj_apartments',
      ),
    ),
    'fields' => array(
      'field_object_images' => 'ds_content',
      'title' => 'ds_content',
      'field_object_txt_map_popup' => 'ds_content',
      'field_obj_apartments' => 'ds_content',
    ),
    'limit' => array(
      'field_object_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|map_popup'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_project_card',
        1 => 'field_objektid_nunumeric',
        2 => 'title',
        3 => 'field_object_images',
        4 => 'field_address',
        5 => 'field_address_shadow_object',
        6 => 'field_save_workflow',
        7 => 'edit_translate_link',
      ),
    ),
    'fields' => array(
      'group_project_card' => 'ds_content',
      'field_objektid_nunumeric' => 'ds_content',
      'title' => 'ds_content',
      'field_object_images' => 'ds_content',
      'field_address' => 'ds_content',
      'field_address_shadow_object' => 'ds_content',
      'field_save_workflow' => 'ds_content',
      'edit_translate_link' => 'ds_content',
    ),
    'limit' => array(
      'field_object_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|wohn_und_geschaeftshaus';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'wohn_und_geschaeftshaus';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_address',
      ),
      'left' => array(
        1 => 'slideshow',
        2 => 'thumbslider',
        3 => 'field_apart_floor_plan',
        4 => 'field_object_txt_map_popup',
        5 => 'group_akkordion',
        28 => 'group_haus',
        29 => 'group_lage',
        30 => 'field_object_description',
        31 => 'group_sonstiges',
        32 => 'field_object_location',
        33 => 'field_object_other',
      ),
      'right' => array(
        6 => 'field_objekt_wkt',
        7 => 'field_objektid_nunumeric',
        8 => 'field_apart_price',
        9 => 'field_sale_commission',
        10 => 'group_details',
        11 => 'field_no_of_floors',
        12 => 'field_wug_total_space',
        13 => 'field_wug_opt_constrruct',
        14 => 'field_wug_no_of_units',
        15 => 'field_wug_act_rent',
        16 => 'group_energieausweis',
        17 => 'field_wug_occupancy',
        18 => 'field_objekt_energieausweistyp',
        19 => 'field_obj_enev_date',
        20 => 'field_objekt_energietraeger',
        21 => 'field_heating_type',
        22 => 'field_obj_enev_consumption_value',
        23 => 'field_objekt_endenergiebedarf',
        24 => 'field_objekt_effizienzklasse',
        25 => 'field_obj_enev_haustyp',
        26 => 'field_year_built',
        27 => 'field_obj_enev_file',
      ),
    ),
    'fields' => array(
      'field_address' => 'header',
      'slideshow' => 'left',
      'thumbslider' => 'left',
      'field_apart_floor_plan' => 'left',
      'field_object_txt_map_popup' => 'left',
      'group_akkordion' => 'left',
      'field_objekt_wkt' => 'right',
      'field_objektid_nunumeric' => 'right',
      'field_apart_price' => 'right',
      'field_sale_commission' => 'right',
      'group_details' => 'right',
      'field_no_of_floors' => 'right',
      'field_wug_total_space' => 'right',
      'field_wug_opt_constrruct' => 'right',
      'field_wug_no_of_units' => 'right',
      'field_wug_act_rent' => 'right',
      'group_energieausweis' => 'right',
      'field_wug_occupancy' => 'right',
      'field_objekt_energieausweistyp' => 'right',
      'field_obj_enev_date' => 'right',
      'field_objekt_energietraeger' => 'right',
      'field_heating_type' => 'right',
      'field_obj_enev_consumption_value' => 'right',
      'field_objekt_endenergiebedarf' => 'right',
      'field_objekt_effizienzklasse' => 'right',
      'field_obj_enev_haustyp' => 'right',
      'field_year_built' => 'right',
      'field_obj_enev_file' => 'right',
      'group_haus' => 'left',
      'group_lage' => 'left',
      'field_object_description' => 'left',
      'group_sonstiges' => 'left',
      'field_object_location' => 'left',
      'field_object_other' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|objekt|wohn_und_geschaeftshaus'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|oeffnungszeit|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'oeffnungszeit';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'body',
        2 => 'field_oeffnungszeiten',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'body' => 'ds_content',
      'field_oeffnungszeiten' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|oeffnungszeit|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|oeffnungszeit|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'oeffnungszeit';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'redirect',
        1 => 'path',
        2 => 'title_field',
        3 => 'body',
        4 => 'field_oeffnungszeiten',
      ),
      'hidden' => array(
        5 => 'language',
        6 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'redirect' => 'ds_content',
      'path' => 'ds_content',
      'title_field' => 'ds_content',
      'body' => 'ds_content',
      'field_oeffnungszeiten' => 'ds_content',
      'language' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|oeffnungszeit|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|oeffnungszeit|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'oeffnungszeit';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_oeffnungszeiten',
      ),
    ),
    'fields' => array(
      'field_oeffnungszeiten' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|oeffnungszeit|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|page|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|referenz|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'referenz';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_ref_foto',
        3 => 'field_ref_adresse',
        4 => 'field_ref_typ',
        5 => 'field_ref_anzahl_wohnungen',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_ref_foto' => 'ds_content',
      'field_ref_adresse' => 'ds_content',
      'field_ref_typ' => 'ds_content',
      'field_ref_anzahl_wohnungen' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|referenz|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function hk_ct_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'wohn_und_geschaeftshaus';
  $ds_view_mode->label = 'Wohn- und Geschäftshaus';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['wohn_und_geschaeftshaus'] = $ds_view_mode;

  return $export;
}

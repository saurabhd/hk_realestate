<?php
/**
 * @file
 * hk_admin.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hk_admin_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'contact_name'
  $field_bases['contact_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'contact_name',
    'indexes' => array(
      'family' => array(
        0 => 'family',
      ),
      'given' => array(
        0 => 'given',
      ),
    ),
    'locked' => 0,
    'module' => 'name',
    'settings' => array(
      'allow_family_or_given' => 0,
      'autocomplete_separator' => array(
        'credentials' => ', ',
        'family' => ' -',
        'generational' => ' ',
        'given' => ' -',
        'middle' => ' -',
        'title' => ' ',
      ),
      'autocomplete_source' => array(
        'credentials' => array(),
        'family' => array(),
        'generational' => array(
          'generational' => 0,
        ),
        'given' => array(),
        'middle' => array(),
        'title' => array(
          'title' => 0,
        ),
      ),
      'components' => array(
        'credentials' => 'credentials',
        'family' => 'family',
        'generational' => 0,
        'given' => 'given',
        'middle' => 0,
        'title' => 'title',
      ),
      'entity_translation_sync' => FALSE,
      'generational_options' => '-- --
Jr.
Sr.
I
II
III
IV
V
VI
VII
VIII
IX
X',
      'labels' => array(
        'credentials' => 'Credential',
        'family' => 'Last Name',
        'generational' => 'Generational',
        'given' => 'First Name',
        'middle' => 'Middle',
        'title' => 'Salutation',
      ),
      'max_length' => array(
        'credentials' => 255,
        'family' => 63,
        'generational' => 15,
        'given' => 63,
        'middle' => 127,
        'title' => 31,
      ),
      'minimum_components' => array(
        'credentials' => 0,
        'family' => 'family',
        'generational' => 0,
        'given' => 'given',
        'middle' => 0,
        'title' => 'title',
      ),
      'sort_options' => array(
        'generational' => 0,
        'title' => 0,
      ),
      'title_options' => '--please select
[vocabulary:5]',
    ),
    'translatable' => 0,
    'type' => 'name',
  );

  // Exported field_base: 'field_activity_bearbeiter'
  $field_bases['field_activity_bearbeiter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_activity_bearbeiter',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'mitarbeiter' => 'mitarbeiter',
        ),
      ),
      'target_type' => 'crm_core_contact',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_activity_date'
  $field_bases['field_activity_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'crm_core_activity',
    ),
    'field_name' => 'field_activity_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'repeat' => 0,
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_activity_notes'
  $field_bases['field_activity_notes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'crm_core_activity',
    ),
    'field_name' => 'field_activity_notes',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_activity_participants'
  $field_bases['field_activity_participants'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'crm_core_activity',
    ),
    'field_name' => 'field_activity_participants',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'individual' => 'individual',
          'mitarbeiter' => 'mitarbeiter',
        ),
      ),
      'handler_submit' => 'Change handler',
      'target_type' => 'crm_core_contact',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_activity_status'
  $field_bases['field_activity_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_activity_status',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Frisch Eingetroffen' => 'Frisch Eingetroffen',
        'Einem Makler zugeordnet' => 'Einem Makler zugeordnet',
        'In Bearbeitung' => 'In Bearbeitung',
        'Wiedervorlage' => 'Wiedervorlage',
        'Erledigt' => 'Erledigt',
      ),
      'allowed_values_function' => '',
      'allowed_values_no_localization' => 0,
      'entity_translation_sync' => FALSE,
      'values_field' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_angefragte_wohnung'
  $field_bases['field_angefragte_wohnung'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_angefragte_wohnung',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'apartment' => 'apartment',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_crm_address'
  $field_bases['field_crm_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_crm_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'field_e_mail'
  $field_bases['field_e_mail'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_e_mail',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_phone'
  $field_bases['field_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_phone',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'phone',
    'settings' => array(
      'country' => 'int',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'phone',
  );

  return $field_bases;
}

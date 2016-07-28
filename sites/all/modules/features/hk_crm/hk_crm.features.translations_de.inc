<?php
/**
 * @file
 * hk_crm.features.translations_de.inc
 */

/**
 * Implements hook_translations_de_defaults().
 */
function hk_crm_translations_de_defaults() {
  $translations = array();
  $translatables = array();
  $translations['de:quicktabs']['1584798c89c20e738f8074180bf411e3'] = array(
    'source' => 'Notes',
    'context' => 'tab:crm_contact_page-1:title',
    'location' => 'quicktabs:tab:crm_contact_page-1:title',
    'translation' => 'Notizen',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Notes', array(), array('context' => 'tab:crm_contact_page-1:title'));
  $translations['de:quicktabs']['1d20abe7003e0ecac6f8cefb77ff63a7'] = array(
    'source' => 'Agent Calendar',
    'context' => 'title:agent_calendar',
    'location' => 'quicktabs:title:agent_calendar',
    'translation' => 'Mein Kalender',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Agent Calendar', array(), array('context' => 'title:agent_calendar'));
  $translations['de:quicktabs']['5e6a2eb5c3b8027e9b85a4bc5b3491e0'] = array(
    'source' => 'Activities',
    'context' => 'tab:crm_contact_page-0:title',
    'location' => 'quicktabs:tab:crm_contact_page-0:title',
    'translation' => 'Aktivitäten',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Activities', array(), array('context' => 'tab:crm_contact_page-0:title'));
  $translations['de:quicktabs']['9cd6a39c37bf8109b10fed8fe871221e'] = array(
    'source' => 'Favourites',
    'context' => 'tab:crm_contact_page-2:title',
    'location' => 'quicktabs:tab:crm_contact_page-2:title',
    'translation' => 'Favoriten',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Favourites', array(), array('context' => 'tab:crm_contact_page-2:title'));
  return $translations;
}

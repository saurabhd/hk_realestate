<?php
/**
 * @file
 * hk_user.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function hk_user_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'user_profile';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'User Profile';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'user_profile',
      'display' => 'user_activities',
      'args' => '',
      'title' => 'Activities',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'user_profile',
      'display' => 'user_notes',
      'args' => '',
      'title' => 'Notes',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'user_profile',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Favourites',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('Favourites');
  t('Notes');
  t('User Profile');

  $export['user_profile'] = $quicktabs;

  return $export;
}

<?php
/**
 * @file
 * hk_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hk_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-apartment-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'apartment-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'object-landing-page/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'hk_adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_adminimal',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-karten-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'karten-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'object-landing-page/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'hk_adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_adminimal',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}

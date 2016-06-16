<?php
/**
 * @file
 * hk_crm.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hk_crm_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-001b516921acc1670ffb153e391b7f91'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '001b516921acc1670ffb153e391b7f91',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'user/*/dashboard',
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
    'visibility' => 0,
  );

  return $export;
}

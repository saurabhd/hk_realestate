<?php
/**
 * @file
 * hk_custom_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hk_custom_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-00867dffb2fdb3e29afd7cab986c8c2e'] = array(
    'cache' => -1,
    'css_class' => 'facets-borough-block',
    'custom' => 0,
    'delta' => '00867dffb2fdb3e29afd7cab986c8c2e',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'rent
mieten
service
service/*
ueber-uns
ueber-uns/*
kontakt
kontakt/*
offer
offer/*
about-us
about-us/*
contact
contact/*
oeffnungszeiten',
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
        'region' => 'search',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -47,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-093fbd629cf79b37e5deaed189114089'] = array(
    'cache' => -1,
    'css_class' => 'facets-category-block',
    'custom' => 0,
    'delta' => '093fbd629cf79b37e5deaed189114089',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'rent
mieten
service
service/*
ueber-uns
ueber-uns/*
kontakt
kontakt/*
offer
offer/*
about-us
about-us/*
contact
contact/*
oeffnungszeiten',
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
        'region' => 'search',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -46,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-facets_block-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facets_block-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'rent
mieten
service
service/*
ueber-uns
ueber-uns/*
kontakt
kontakt/*
offer
offer/*
about-us
about-us/*
contact
contact/*
oeffnungszeiten',
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
        'region' => 'search',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -45,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-facets_block-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facets_block-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'rent
mieten
service
service/*
ueber-uns
ueber-uns/*
kontakt
kontakt/*
offer
offer/*
about-us
about-us/*
contact
contact/*
oeffnungszeiten',
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
        'region' => 'search',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -44,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-facets_block-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facets_block-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'rent
mieten
service
service/*
ueber-uns
ueber-uns/*
kontakt
kontakt/*
offer
offer/*
about-us
about-us/*
contact
contact/*
oeffnungszeiten',
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
        'region' => 'search',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -42,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}

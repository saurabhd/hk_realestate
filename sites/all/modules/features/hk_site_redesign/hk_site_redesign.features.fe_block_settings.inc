<?php
/**
 * @file
 * hk_site_redesign.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hk_site_redesign_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-buyer_trust_us'] = array(
    'cache' => -1,
    'css_class' => 'buyer-trust-us',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'buyer_trust_us',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
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
      'hk_newtheme' => array(
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => -75,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-call_us_now'] = array(
    'cache' => -1,
    'css_class' => 'call-us-now',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'call_us_now',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => 'header_side',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => 0,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-expert_guidance'] = array(
    'cache' => -1,
    'css_class' => 'expert-guidance',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'expert_guidance',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
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
      'hk_newtheme' => array(
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => -73,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-footer_first'] = array(
    'cache' => -1,
    'css_class' => 'footer-first',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'footer_first',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => -77,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Herbert-Kohlmeyer',
    'visibility' => 0,
  );

  $export['block-list_your_property_for_free'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'list_your_property_for_free',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => 'header_top',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => -69,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-open_hours'] = array(
    'cache' => -1,
    'css_class' => 'open-hours',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'open_hours',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => 'header_top',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => -70,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-sellers_prefer_us'] = array(
    'cache' => -1,
    'css_class' => 'sellers-prefer-us',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'sellers_prefer_us',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
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
      'hk_newtheme' => array(
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => -74,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-why_choose_us'] = array(
    'cache' => -1,
    'css_class' => 'why-choose-us',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'why_choose_us',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
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
      'hk_newtheme' => array(
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => -76,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['lang_dropdown-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'lang_dropdown',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => 'header_top',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => -67,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['lang_dropdown-language_content'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language_content',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'lang_dropdown',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_newtheme',
        'weight' => 0,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => 'useful-links',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => -74,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Useful Links',
    'visibility' => 0,
  );

  $export['menu-menu-page-bottom'] = array(
    'cache' => -1,
    'css_class' => 'page-bottom-menu',
    'custom' => 0,
    'delta' => 'menu-page-bottom',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => 'bottom',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => 0,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['multiblock-1'] = array(
    'cache' => -1,
    'css_class' => 'shariff-sharing-buttons',
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'multiblock',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => -76,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['simplenews-415'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 415,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'simplenews',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => 'bottom',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => 0,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-footer_link-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'footer_link-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
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
      'hk_newtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_newtheme',
        'weight' => 0,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-latest_apartment_node-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'latest_apartment_node-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
      'hk_newtheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'hk_newtheme',
        'weight' => 0,
      ),
      'hk_subdomain' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_subdomain',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}

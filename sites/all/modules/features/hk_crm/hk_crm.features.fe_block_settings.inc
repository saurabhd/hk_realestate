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

  $export['block-search_criteria'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'search_criteria',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<?php
if(arg(0) == \'crm-core\' && arg(1) == \'contact\' && is_numeric(arg(2)) && empty(arg(3))) {
  return true;
} else {
  return false;
}
?>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -36,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -35,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Search Criteria',
    'visibility' => 2,
  );

  $export['facetapi-EVAO1Dik0cL0frYte4IiocJ9Wj7i8YFY'] = array(
    'cache' => 6,
    'css_class' => 'bedrooms',
    'custom' => 0,
    'delta' => 'EVAO1Dik0cL0frYte4IiocJ9Wj7i8YFY',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -30,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -29,
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

  $export['facetapi-MD9nwU0ckZx4U9x9Yq6LhiMOWw1yG2fZ'] = array(
    'cache' => 6,
    'css_class' => 'flaeche',
    'custom' => 0,
    'delta' => 'MD9nwU0ckZx4U9x9Yq6LhiMOWw1yG2fZ',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -31,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -30,
      ),
      'hk_theme' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['facetapi-N3lL2pGyIgIY0V4GiukL4KJsCMRPHy5o'] = array(
    'cache' => 6,
    'css_class' => 'moving-from',
    'custom' => 0,
    'delta' => 'N3lL2pGyIgIY0V4GiukL4KJsCMRPHy5o',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -26,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -25,
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

  $export['facetapi-TiTk5IgH07zFSr6CyqVB835ryHANLc1G'] = array(
    'cache' => 6,
    'css_class' => 'kategorie',
    'custom' => 0,
    'delta' => 'TiTk5IgH07zFSr6CyqVB835ryHANLc1G',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -34,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -33,
      ),
      'hk_theme' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -22,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['facetapi-UAJ4jVUjkE0k0DL7i0hL8AAiIPUWtpTH'] = array(
    'cache' => 6,
    'css_class' => 'zimmer',
    'custom' => 0,
    'delta' => 'UAJ4jVUjkE0k0DL7i0hL8AAiIPUWtpTH',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -32,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -31,
      ),
      'hk_theme' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -20,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['facetapi-du3diR20Hj2mRmP640AjZ9ll1UK5JWZK'] = array(
    'cache' => 6,
    'css_class' => 'floor',
    'custom' => 0,
    'delta' => 'du3diR20Hj2mRmP640AjZ9ll1UK5JWZK',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -27,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -26,
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

  $export['facetapi-gJy3epytLjwvPjU6IQhmi3dtEc22JmM4'] = array(
    'cache' => 6,
    'css_class' => 'fittings',
    'custom' => 0,
    'delta' => 'gJy3epytLjwvPjU6IQhmi3dtEc22JmM4',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -24,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -23,
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

  $export['facetapi-jad3t4v2COeMFwB0yX94d90ie3s200aH'] = array(
    'cache' => 6,
    'css_class' => 'bezirk',
    'custom' => 0,
    'delta' => 'jad3t4v2COeMFwB0yX94d90ie3s200aH',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -35,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -34,
      ),
      'hk_theme' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['facetapi-qLxlPWfptWGUQeUMUZ3wQXDl82p31Hrl'] = array(
    'cache' => 6,
    'css_class' => 'apart-type',
    'custom' => 0,
    'delta' => 'qLxlPWfptWGUQeUMUZ3wQXDl82p31Hrl',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'crm-core/contact/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -28,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -27,
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

  $export['facetapi-us0K51a2I3ChtgWGgkL0DUx1Per0uNpQ'] = array(
    'cache' => 6,
    'css_class' => 'bathrooms',
    'custom' => 0,
    'delta' => 'us0K51a2I3ChtgWGgkL0DUx1Per0uNpQ',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -29,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -28,
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

  $export['facetapi-vL7Z22Ef0ErTIPk0XWchisHpWXueqwAQ'] = array(
    'cache' => 6,
    'css_class' => 'status-quo',
    'custom' => 0,
    'delta' => 'vL7Z22Ef0ErTIPk0XWchisHpWXueqwAQ',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -25,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -24,
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

  $export['facetapi-vih09cZclFZTB71YMojA1b30XzODYv0m'] = array(
    'cache' => 6,
    'css_class' => 'preis',
    'custom' => 0,
    'delta' => 'vih09cZclFZTB71YMojA1b30XzODYv0m',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -33,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -32,
      ),
      'hk_theme' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['hk_custom_crm-crm_contact_type'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'crm_contact_type',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'hk_custom_crm',
    'node_types' => array(),
    'pages' => '<?php
if(arg(0) == \'crm-core\' && arg(1) == \'contact\' && is_numeric(arg(2)) && empty(arg(3)) || arg(0) == \'search\' || arg(1) == \'agent-central\') {
  return true;
} else {
  return false;
}
?>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content_before',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'hk_adminimal' => array(
        'region' => 'content_before',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -40,
      ),
      'hk_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -45,
      ),
    ),
    'title' => '',
    'visibility' => 2,
  );

  $export['hk_custom_crm-custom_saved_search'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'custom_saved_search',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'hk_custom_crm',
    'node_types' => array(),
    'pages' => '<?php
if(arg(0) == \'crm-core\' && arg(1) == \'contact\' && is_numeric(arg(2)) && empty(arg(3))) {
  return true;
} else {
  return false;
}',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
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
    'visibility' => 2,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'css_class' => 'language-switcher',
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'locale',
    'node_types' => array(),
    'pages' => 'search',
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
        'weight' => -24,
      ),
      'hk_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -34,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-crm-core-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-crm-core-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<?php
if(arg(0) == \'crm-core\' && arg(1) == \'contact\' && is_numeric(arg(2)) && empty(arg(3)) || arg(0) == \'search\' || arg(1) == \'agent-central\') {
  return true;
} else {
  return false;
}
?>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'hk_adminimal' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -32,
      ),
    ),
    'title' => '<none>',
    'visibility' => 2,
  );

  $export['menu-menu-service-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-service-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'search',
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
        'weight' => -25,
      ),
      'hk_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -35,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['quicktabs-agent_calendar'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'agent_calendar',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'crm-core/agent-central/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'hk_adminimal' => array(
        'region' => 'content_before',
        'status' => 1,
        'theme' => 'hk_adminimal',
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

  $export['quicktabs-crm_contact_page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'crm_contact_page',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => '<?php
if(arg(0) == \'crm-core\' && arg(1) == \'contact\' && is_numeric(arg(2)) && empty(arg(3))) {
  return true;
} else {
  return false;
}
?>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -29,
      ),
      'hk_adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => 0,
      ),
      'hk_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -40,
      ),
    ),
    'title' => '<none>',
    'visibility' => 2,
  );

  $export['search_api_page-contact_search_box'] = array(
    'cache' => 5,
    'css_class' => 'search-block',
    'custom' => 0,
    'delta' => 'contact_search_box',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search_api_page',
    'node_types' => array(),
    'pages' => '<?php
if(arg(0) == \'crm-core\' && arg(1) == \'contact\' && is_numeric(arg(2)) && empty(arg(3)) || arg(1) == \'agent-central\') {
  return true;
} else {
  return false;
}
?>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'hk_adminimal' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -34,
      ),
      'hk_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -33,
      ),
    ),
    'title' => '<none>',
    'visibility' => 2,
  );

  $export['search_api_saved_searches-solr_node_index'] = array(
    'cache' => 5,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'solr_node_index',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search_api_saved_searches',
    'node_types' => array(),
    'pages' => '<?php
if(arg(0) == \'crm-core\' && arg(1) == \'contact\' && is_numeric(arg(2)) && empty(arg(3))) {
  return true;
} else {
  return false;
}',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'hk_adminimal',
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
    'visibility' => 2,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => 'hauptmenu',
    'custom' => 0,
    'delta' => 'main-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => 'search',
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
        'weight' => -25,
      ),
      'hk_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -37,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-001b516921acc1670ffb153e391b7f91'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '001b516921acc1670ffb153e391b7f91',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'search',
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
        'weight' => -39,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-ab8e5f645812c25bdab53ec78e960cb5'] = array(
    'cache' => -1,
    'css_class' => 'to-do-task',
    'custom' => 0,
    'delta' => 'ab8e5f645812c25bdab53ec78e960cb5',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'crm-core/agent-central/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'hk_adminimal' => array(
        'region' => 'content_before',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -39,
      ),
      'hk_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'To-do Task',
    'visibility' => 1,
  );

  $export['views-calendar-block_2'] = array(
    'cache' => -1,
    'css_class' => 'agent-calendar',
    'custom' => 0,
    'delta' => 'calendar-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'crm-core/agent-central/*',
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
        'weight' => -38,
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

  $export['views-crm_activity_type-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'crm_activity_type-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<?php
if(arg(0) == \'crm-core\' && arg(1) == \'contact\' && is_numeric(arg(2)) && empty(arg(3)) || arg(0) == \'search\' || arg(1) == \'agent-central\') {
  return true;
} else {
  return false;
}
?>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content_before',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'hk_adminimal' => array(
        'region' => 'content_before',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -41,
      ),
      'hk_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => -46,
      ),
    ),
    'title' => '<none>',
    'visibility' => 2,
  );

  $export['views-last_saved_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'last_saved_searches-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<?php
if(arg(0) == \'crm-core\' && arg(1) == \'contact\' && is_numeric(arg(2)) && empty(arg(3))) {
  return true;
} else {
  return false;
}',
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
        'region' => '',
        'status' => 0,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 2,
  );

  $export['views-search_area-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search_area-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<?php
if(arg(0) == \'crm-core\' && arg(1) == \'contact\' && is_numeric(arg(2)) && empty(arg(3))) {
  return true;
} else {
  return false;
}
?>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'sidebar_right_top',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -36,
      ),
      'hk_adminimal' => array(
        'region' => 'sidebar_right_top',
        'status' => 1,
        'theme' => 'hk_adminimal',
        'weight' => -36,
      ),
      'hk_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'hk_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 2,
  );

  return $export;
}

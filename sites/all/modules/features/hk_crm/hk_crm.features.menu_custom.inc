<?php
/**
 * @file
 * hk_crm.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function hk_crm_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-crm-core-menu.
  $menus['menu-crm-core-menu'] = array(
    'menu_name' => 'menu-crm-core-menu',
    'title' => 'CRM Core Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CRM Core Menu');

  return $menus;
}

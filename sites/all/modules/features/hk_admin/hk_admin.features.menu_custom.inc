<?php
/**
 * @file
 * hk_admin.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function hk_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-service-menu.
  $menus['menu-service-menu'] = array(
    'menu_name' => 'menu-service-menu',
    'title' => 'Service Menu',
    'description' => 'Das Service Menu enthält die Icons für die Favoriten, Telefon und Suche.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Das Service Menu enthält die Icons für die Favoriten, Telefon und Suche.');
  t('Footer Menu');
  t('Management');
  t('Service Menu');
  t('The <em>Management</em> menu contains links for administrative tasks.');


  return $menus;
}

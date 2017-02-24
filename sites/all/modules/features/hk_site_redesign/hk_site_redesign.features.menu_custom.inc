<?php
/**
 * @file
 * hk_site_redesign.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function hk_site_redesign_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-page-bottom.
  $menus['menu-page-bottom'] = array(
    'menu_name' => 'menu-page-bottom',
    'title' => 'Page Bottom ',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Page Bottom ');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');

  return $menus;
}

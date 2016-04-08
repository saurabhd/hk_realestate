<?php
/**
 * @file
 * hk_search.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hk_search_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_buy:buy
  $menu_links['main-menu_buy:buy'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'buy',
    'router_path' => 'buy',
    'link_title' => 'Buy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'main-menu_buy:buy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Buy');

  return $menu_links;
}

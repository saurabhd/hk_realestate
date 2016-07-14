<?php
/**
 * @file
 * hk_crm.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hk_crm_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-crm-core-menu_agent-central:<front>.
  $menu_links['menu-crm-core-menu_agent-central:<front>'] = array(
    'menu_name' => 'menu-crm-core-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Agent Central',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-crm-core-menu_agent-central:<front>',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-agent-central',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-crm-core-menu_ausloggen:user/logout.
  $menu_links['menu-crm-core-menu_ausloggen:user/logout'] = array(
    'menu_name' => 'menu-crm-core-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Ausloggen',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-logout',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-crm-core-menu_ausloggen:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'de',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-crm-core-menu_dashboard:search.
  $menu_links['menu-crm-core-menu_dashboard:search'] = array(
    'menu_name' => 'menu-crm-core-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Dashboard',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-crm-core-menu_dashboard:search',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-dashboard',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-crm-core-menu_login:user/login.
  $menu_links['menu-crm-core-menu_login:user/login'] = array(
    'menu_name' => 'menu-crm-core-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-login',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-crm-core-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-crm-core-menu_logout:user/logout.
  $menu_links['menu-crm-core-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-crm-core-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-crm-core-menu_logout:user/logout',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => ' menu-logout',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Agent Central');
  t('Ausloggen');
  t('Dashboard');
  t('Login');
  t('Logout');

  return $menu_links;
}

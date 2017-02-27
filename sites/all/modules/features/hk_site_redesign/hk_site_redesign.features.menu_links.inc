<?php
/**
 * @file
 * hk_site_redesign.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hk_site_redesign_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-page-bottom_contact:<front>.
  $menu_links['menu-page-bottom_contact:<front>'] = array(
    'menu_name' => 'menu-page-bottom',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact',
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
        'class' => 'footer-contact',
        'style' => '',
      ),
      'identifier' => 'menu-page-bottom_contact:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-page-bottom_feedback:<front>.
  $menu_links['menu-page-bottom_feedback:<front>'] = array(
    'menu_name' => 'menu-page-bottom',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Feedback',
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
        'class' => 'footer-feedback',
        'style' => '',
      ),
      'identifier' => 'menu-page-bottom_feedback:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-page-bottom_list-your-property-for-free:<front>.
  $menu_links['menu-page-bottom_list-your-property-for-free:<front>'] = array(
    'menu_name' => 'menu-page-bottom',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'List your property for free',
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
        'class' => 'footer-list-your-property',
        'style' => '',
      ),
      'identifier' => 'menu-page-bottom_list-your-property-for-free:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-page-bottom_wishlist:favorites.
  $menu_links['menu-page-bottom_wishlist:favorites'] = array(
    'menu_name' => 'menu-page-bottom',
    'link_path' => 'favorites',
    'router_path' => 'favorites',
    'link_title' => 'Wishlist',
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
        'class' => 'footer-wishlist',
        'style' => '',
      ),
      'identifier' => 'menu-page-bottom_wishlist:favorites',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_favorites:favorites.
  $menu_links['user-menu_favorites:favorites'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'favorites',
    'router_path' => 'favorites',
    'link_title' => 'Favorites',
    'options' => array(
      'alter' => TRUE,
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper' => 1,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title-hide',
        'breadcrumb' => 0,
      ),
      'attributes' => array(
        'class' => array(
          0 => 'unflagged',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'favorite-icon',
        'style' => '',
      ),
      'identifier' => 'user-menu_favorites:favorites',
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
  // Exported menu link: user-menu_sign-in:user/login.
  $menu_links['user-menu_sign-in:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'sign in',
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
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_sign-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_sign-up:user/register.
  $menu_links['user-menu_sign-up:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'sign up',
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
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_sign-up:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Favorites');
  t('Feedback');
  t('List your property for free');
  t('User account');
  t('Wishlist');
  t('sign in');
  t('sign up');

  return $menu_links;
}

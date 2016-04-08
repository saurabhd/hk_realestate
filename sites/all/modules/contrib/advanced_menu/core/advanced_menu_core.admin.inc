<?php
// $Id: advanced_menu_core.admin.inc $

/**
 * @file
 * Administrative page callbacks for advanced_menu_core module.
 */

/**
 * Menu callback which shows an overview page of all the custom menus and their descriptions.
 */
function advanced_menu_core_overview_page() {
  global $user;
  $header = array(t('Title'), array('data' => t('Operations'), 'colspan' => '3'));
  if (module_exists('advanced_menu_submenu') && user_access('use sub menus')) {
    $header = array(t('Title'), array('data' => t('Operations'), 'colspan' => '4'));
  }
  $rows = array();
  // User #1 has all privileges as does the 'administer menu' permission
  if ($user->uid == 1 || user_access('administer menu')) {
    $result = db_select('menu_custom')->fields('menu_custom')->orderBy('title', 'ASC')->execute();
  }
  else {
    if (module_exists('advanced_menu_menu_admin')) {
      //Build the SELECT conditions based on the current user roles
      $role_ids = array();
      foreach ($user->roles as $key => $value) {
        $role_ids[] = $key;
      }
      $menu_select = db_select('menu_custom','c')->fields('c')->condition('r.rid', $role_ids, 'IN')->orderBy('c.title', 'ASC');
      $menu_select->join('advanced_menu_menu_admin_roles','r','r.menu_name = c.menu_name');
      $result = $menu_select->execute();
    }
  }
  foreach ($result as $menu) {
    $row = array(theme('menu_admin_overview', array('title' => $menu->title, 'name' => $menu->menu_name, 'description' => $menu->description)));
    $row[] = array('data' => l(t('list links'), 'admin/structure/menu/manage/' . $menu->menu_name));
    $row[] = array('data' => l(t('edit menu'), 'admin/structure/menu/manage/' . $menu->menu_name . '/edit'));
    $row[] = array('data' => l(t('add link'), 'admin/structure/menu/manage/' . $menu->menu_name . '/add'));
    if (module_exists('advanced_menu_submenu') && user_access('use sub menus')) {
      $row[] = array('data' => l(t('add submenu'), 'admin/structure/menu/manage/' . $menu->menu_name . '/add-submenu'));
    }
    $rows[] = $row;
  }
  return theme('table', array('header' => $header, 'rows' => $rows));
}

/**
 * Menu callback which provides a short description of the Advanced Menu module.
 */
function advanced_menu_core_about_page() {
  $output = '<table class="system-status-report">';
  $output .= '<tr class="ok"><td colspan="2">Advanced Menus has been enabled and is active.</td></tr>';
  $output .= '<tr><td class="info" width="25%"><h2>Core</h2></td>';

  if (module_exists('advanced_menu_core')) {
    $output .= '<td class="ok">Core has been enabled and is active.';
  } else {
    $output .= '<td class="error">Core has not been enabled and is not active.';
  }
  $output .= ' This sub-module overrides Drupal Core access and page render functions as they relate to the menu module.</td></tr>';

  $output .= '<tr><td class="info"><h2>Admin</h2></td>';

  if (module_exists('advanced_menu_menu_admin')) {
    $output .= '<td class="ok">Admin has been enabled and is active.';
  } else {
    $output .= '<td class="error">Admin has not been enabled and is not active.';
  }
  $output .= ' This sub-module allows for role based menu editors to be specificed and alters the menu forms.</td></tr>';

  $output .= '<tr><td class="info"><h2>Blocks</h2></td>';

  if (module_exists('advanced_menu_blocks')) {
    $output .= '<td class="ok">Blocks has been enabled and is active.';
  } else {
    $output .= '<td class="error">Blocks has not been enabled and is not active.';
  }
  $output .= ' This sub-module allows for the customization of menu blocks as displayed on the blocks admin page.</td></tr>';

  $output .= '<tr><td class="info"><h2>Attributes</h2></td>';

  if (module_exists('advanced_menu_menu_attributes')) {
    $output .= '<td class="ok">Attributes has been enabled and is active.';
  } else {
    $output .= '<td class="error">Attributes has not been enablted and is not active.';
  }
  $output .= ' This sub-module allows for additional menu and item attributes. At present, this provides an expiration date for menu items.</td></tr>';

  $output .= '<tr><td class="info"><h2>Sub Menus</h2></td>';

  if (module_exists('advanced_menu_submenu')) {
    $output .= '<td class="ok">Sub Menus has been enabled and is active.';
  } else {
    $output .= '<td class="error">Sub Menus has not been enabled and is not active.';
  }
  $output .= ' This sub-module allows for menus to be added as links within other menus. This permits sub menus, or merged menus, to be shown as a single menu.</td></tr>';

  $output .= '<tr><td class="info"><h2>Users</h2></td>';

  $output .= '</table>';

  return $output;
}

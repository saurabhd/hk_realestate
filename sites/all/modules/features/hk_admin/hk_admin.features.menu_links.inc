<?php
/**
 * @file
 * hk_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hk_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: crm-core-menu_contacts:crm-core/contact
  $menu_links['crm-core-menu_contacts:crm-core/contact'] = array(
    'menu_name' => 'crm-core-menu',
    'link_path' => 'crm-core/contact',
    'router_path' => 'crm-core',
    'link_title' => 'Contacts',
    'options' => array(
      'identifier' => 'crm-core-menu_contacts:crm-core/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: crm-core-menu_dashboard:crm-core/dashboard
  $menu_links['crm-core-menu_dashboard:crm-core/dashboard'] = array(
    'menu_name' => 'crm-core-menu',
    'link_path' => 'crm-core/dashboard',
    'router_path' => 'crm-core',
    'link_title' => 'Dashboard',
    'options' => array(
      'identifier' => 'crm-core-menu_dashboard:crm-core/dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: crm-core-menu_reports:crm-core/reports
  $menu_links['crm-core-menu_reports:crm-core/reports'] = array(
    'menu_name' => 'crm-core-menu',
    'link_path' => 'crm-core/reports',
    'router_path' => 'crm-core',
    'link_title' => 'Reports',
    'options' => array(
      'identifier' => 'crm-core-menu_reports:crm-core/reports',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: menu-admin-menu_anfragen:admin/crm/anfragen
  $menu_links['menu-admin-menu_anfragen:admin/crm/anfragen'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/crm/anfragen',
    'router_path' => 'admin/crm/anfragen',
    'link_title' => 'Anfragen',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-menu_anfragen:admin/crm/anfragen',
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
    'parent_identifier' => 'menu-admin-menu_kontakte:crm-core',
  );
  // Exported menu link: menu-admin-menu_bersetzungsbersicht:admin/tmgmt
  $menu_links['menu-admin-menu_bersetzungsbersicht:admin/tmgmt'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/tmgmt',
    'router_path' => 'admin/tmgmt',
    'link_title' => 'Übersetzungsübersicht',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'bundle' => 'fontawesome_light',
        'icon' => 'icon-target',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'identifier' => 'menu-admin-menu_bersetzungsbersicht:admin/tmgmt',
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
  // Exported menu link: menu-admin-menu_inhalte:admin/content/dash
  $menu_links['menu-admin-menu_inhalte:admin/content/dash'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/content/dash',
    'router_path' => 'admin/content/dash',
    'link_title' => 'Inhalte',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'bundle' => 'fontawesome_light',
        'icon' => 'icon-doc-text',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'identifier' => 'menu-admin-menu_inhalte:admin/content/dash',
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
  // Exported menu link: menu-admin-menu_kategorisierung:admin/structure/taxonomy
  $menu_links['menu-admin-menu_kategorisierung:admin/structure/taxonomy'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Kategorisierung',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'bundle' => 'fontawesome_light',
        'icon' => 'icon-folder-open-empty',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'identifier' => 'menu-admin-menu_kategorisierung:admin/structure/taxonomy',
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
  // Exported menu link: menu-admin-menu_kontakte:crm-core
  $menu_links['menu-admin-menu_kontakte:crm-core'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'crm-core',
    'router_path' => 'crm-core',
    'link_title' => 'Kontakte',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'bundle' => 'fontawesome_light',
        'icon' => 'icon-user',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'identifier' => 'menu-admin-menu_kontakte:crm-core',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_meine-bersetzungsauftrge:/translate
  $menu_links['menu-admin-menu_meine-bersetzungsauftrge:/translate'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => '/translate',
    'router_path' => '',
    'link_title' => 'Meine Übersetzungsaufträge',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-admin-menu_meine-bersetzungsauftrge:/translate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_objekt-erstellen:node/add/objekt
  $menu_links['menu-admin-menu_objekt-erstellen:node/add/objekt'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'node/add/objekt',
    'router_path' => 'node/add/objekt',
    'link_title' => 'Objekt erstellen',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-menu_objekt-erstellen:node/add/objekt',
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
    'parent_identifier' => 'menu-admin-menu_objekte:admin/content/dash',
  );
  // Exported menu link: menu-admin-menu_objekte:admin/content/dash
  $menu_links['menu-admin-menu_objekte:admin/content/dash'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/content/dash',
    'router_path' => 'admin/content/dash',
    'link_title' => 'Objekte',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-admin-menu_objekte:admin/content/dash',
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
    'parent_identifier' => 'menu-admin-menu_inhalte:admin/content/dash',
  );
  // Exported menu link: menu-admin-menu_quickedit:admin/content/dash/objekte/quick
  $menu_links['menu-admin-menu_quickedit:admin/content/dash/objekte/quick'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/content/dash/objekte/quick',
    'router_path' => 'admin/content/dash/objekte/quick',
    'link_title' => 'Quickedit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-admin-menu_quickedit:admin/content/dash/objekte/quick',
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
    'parent_identifier' => 'menu-admin-menu_objekte:admin/content/dash',
  );
  // Exported menu link: menu-admin-menu_quickedit:admin/content/dash/wohnungen/quick
  $menu_links['menu-admin-menu_quickedit:admin/content/dash/wohnungen/quick'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/content/dash/wohnungen/quick',
    'router_path' => 'admin/content/dash/wohnungen/quick',
    'link_title' => 'Quickedit',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-menu_quickedit:admin/content/dash/wohnungen/quick',
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
    'parent_identifier' => 'menu-admin-menu_wohnungen:admin/content/dash/wohnungen',
  );
  // Exported menu link: menu-admin-menu_seiten:admin/content/dash/seiten
  $menu_links['menu-admin-menu_seiten:admin/content/dash/seiten'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/content/dash/seiten',
    'router_path' => 'admin/content/dash/seiten',
    'link_title' => 'Seiten',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-menu_seiten:admin/content/dash/seiten',
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
    'parent_identifier' => 'menu-admin-menu_inhalte:admin/content/dash',
  );
  // Exported menu link: menu-admin-menu_wohnung-erstellen:node/add/apartment
  $menu_links['menu-admin-menu_wohnung-erstellen:node/add/apartment'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'node/add/apartment',
    'router_path' => 'node/add/apartment',
    'link_title' => 'Wohnung erstellen',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-menu_wohnung-erstellen:node/add/apartment',
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
    'parent_identifier' => 'menu-admin-menu_wohnungen:admin/content/dash/wohnungen',
  );
  // Exported menu link: menu-admin-menu_wohnungen:admin/content/dash/wohnungen
  $menu_links['menu-admin-menu_wohnungen:admin/content/dash/wohnungen'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/content/dash/wohnungen',
    'router_path' => 'admin/content/dash/wohnungen',
    'link_title' => 'Wohnungen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-admin-menu_wohnungen:admin/content/dash/wohnungen',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-admin-menu_inhalte:admin/content/dash',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Anfragen');
  t('Contacts');
  t('Dashboard');
  t('Inhalte');
  t('Kategorisierung');
  t('Kontakte');
  t('Meine Übersetzungsaufträge');
  t('Objekt erstellen');
  t('Objekte');
  t('Quickedit');
  t('Reports');
  t('Seiten');
  t('Wohnung erstellen');
  t('Wohnungen');
  t('Übersetzungsübersicht');

  return $menu_links;
}

<?php

/**
 * @file
 * Leaflet MapBox module admin file.
 */

/**
 * Admin settings.
 */
function leaflet_mapbox_configuration_form($form, &$form_state) {

  $form['#theme'] = 'system_settings_form';
  $form['#attached']['css'][] = drupal_get_path('module', 'leaflet_mapbox') . '/leaflet_mapbox.css';

  $map_configs = variable_get('leaflet_mapbox_configs', array());
   _leaflet_mapbox_add_map_configs($form, $form_state, $map_configs);
   
  $form['actions'] = array(
    '#type' => 'actions',
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Save'),
    ),
  );
  return $form;
}
function _leaflet_mapbox_add_map_configs(&$form, &$form_state, $map_configs) {
  $num_maps = isset($form_state['num_maps']) ? $form_state['num_maps'] : count($map_configs);

  $form['map_configs'] = array(
   '#type' => 'fieldset',
    '#title' => t('Map configurations'),
    '#description' => '',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    // The id in the prefix must match the AJAX submit handlers below.
    '#prefix' => '<div id="mapbox-configs-wrapper">',
    '#suffix' => '</div>',
    '#tree' => TRUE,
  );
  $m = 0;
 // First the existing map configrations.
  foreach ($map_configs as $map_config) {
    if ($m >= $num_maps) {
      break;
    }
    _leaflet_mapbox_add_map_config($form['map_configs'], $m++, $map_config);
  }
  if (!isset($form_state['num_maps'])) {
    $form_state['num_maps'] = $m;
  }
  // Now add empty map config field sets until we reached num_maps.
  while ($m < $form_state['num_maps']) {
    _leaflet_mapbox_add_map_config($form['map_configs'], $m++);
  }

  $form['map_configs']['add_another'] = array(
    '#value' => empty($form_state['num_maps']) ? t('Add map configuration') : t('Add another map configuration'),
    '#type' => 'submit',
    '#submit' => array('_leaflet_mapbox_add_config_submit'),
    '#ajax' => array(
      'callback' => '_leaflet_mapbox_refresh_config_fieldset_js',
      'wrapper' => 'mapbox-configs-wrapper',
      'effect' => 'fade',
      'speed' => 'fast',
    ),
  );
  if (!empty($form_state['num_maps'])) {
    $form['map_configs']['remove'] = array(
      '#value' => t('Remove map configuration'),
      '#type' => 'submit',
      '#submit' => array('_leaflet_mapbox_remove_config_submit'),
      '#ajax' => array(
        'callback' => '_leaflet_mapbox_refresh_config_fieldset_js',
        'wrapper' => 'mapbox-configs-wrapper',
        'effect' => 'none',
        'speed' => 'fast',
      ),
    );
  }
}
/**
 * Ajax callback in response to new rows.
 *
 * @param array $form
 *   The form.
 * @param array $form_state
 *   The form state.
 *
 * At this point the $form has already been rebuilt. All we have to do here is
 * tell AJAX what part of the form needs to be updated.
 */
function _leaflet_mapbox_refresh_config_fieldset_js($form, &$form_state) {
  // Return the updated fieldset, so that ajax.inc can issue commands to the
  // browser to update only the targeted sections of the page.
  return $form['map_configs'];
}

/**
 * Submit handler for the "Add map" button.
 *
 * @param array $form
 *   The form.
 * @param array $form_state
 *   The form state.
 *
 * Increments the map counter and forces a form rebuild.
 */
function _leaflet_mapbox_add_config_submit($form, &$form_state) {
  $form_state['num_maps']++;
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for the "Remove product" button.
 *
 * @param array $form
 *   The form.
 * @param array $form_state
 *   The form state.
 *
 * Decrements the map counter and forces a form rebuild.
 */
function _leaflet_mapbox_remove_config_submit($form, &$form_state) {
  $form_state['num_maps']--;
  $form_state['rebuild'] = TRUE;
}

function _leaflet_mapbox_add_map_config(&$form, $id, $map_config = array()) {
  $form[$id] = array(
    '#type' => 'fieldset',
    '#title' => t('Map configuration #@id', array('@id' => $id + 1)),
    '#collapsible' => TRUE,
    '#collapsed' => !empty($form[$id]['mapbox_code']),
    '#attributes' => array(
      'id' => drupal_html_id('map_config_' . $id),
      'class' => array(drupal_html_class('map_config')),
    ),
  );
  $form[$id]['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Map label'),
    '#size' => 35,
    '#default_value' => isset($map_config['label']) ? $map_config['label'] : '',
    '#description' => t('Give your map a name, this will be the name shown on the display options form.'),
  );

  $form['leaflet_mapbox_api_version'] = array(
    '#type' => 'select',
    '#title' => t('API version'),
    '#required' => TRUE,
    '#default_value' => variable_get('leaflet_mapbox_api_version', '3'),
    '#options' => array(
      '3' => t('3 (Mapbox Studio Classic)'),
      '4' => t('4 (Mapbox Studio)'),
    ),
  );

  $form[$id]['mapbox_code'] = array(
    '#type' => 'textfield',
    '#title' => t('Map code'),
    '#size' => 35,
    '#default_value' => isset($map_config['mapbox_code']) ? $map_config['mapbox_code'] : '',
    '#description' => t('This code is obtained from MapBox by clicking on the mapbox.js button after publishing your map'),
    '#states' => array(
      'visible' => array(
        ':input[name="leaflet_mapbox_api_version"]' => array('value' => '3'),
      ),
      'required' => array(
        ':input[name="leaflet_mapbox_api_version"]' => array('value' => '3'),
      ),
    ),
  );

  $form['leaflet_mapbox_style_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Style URL'),
    '#default_value' => variable_get('leaflet_mapbox_style_url', ''),
    '#description' => t('Copy and paste the style URL. Example: %url.', array(
      '%url' => 'mapbox://styles/johndoe/erl4zrwto008ob3f2ijepsbszg',
    )),
    '#states' => array(
      'visible' => array(
        ':input[name="leaflet_mapbox_api_version"]' => array('value' => '4'),
      ),
      'required' => array(
        ':input[name="leaflet_mapbox_api_version"]' => array('value' => '4'),
      ),
    ),
  );

  $form['leaflet_mapbox_token'] = array(
    '#type' => 'textfield',
    '#title' => t('Map access token'),
    '#required' => TRUE,
    '#default_value' => variable_get('leaflet_mapbox_token', ''),
    '#description' => t('You will find this in the mapbox user account settings'),
  );

  $form[$id]['zoomlevel'] = array(
    '#type' => 'textfield',
    '#title' => t('Initial zoom level'),
    '#size' => 2,
    '#default_value' => isset($map_config['zoomlevel']) ? $map_config['zoomlevel'] : '',
    '#description' => t('Typical range: 0..17'),
  );

  $form[$id]['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Map description'),
    '#rows' => 2,
    '#default_value' => isset($map_config['description']) ? filter_xss($map_config['description']) : '',
  );
  $form[$id]['attribution'] = array(
    '#type' => 'textfield',
    '#title' => t('Mapbox attribution'),
    '#size' => 80,
    '#maxlength' => 255,
    '#default_value' => isset($map_config['attribution']) ? filter_xss_admin($map_config['attribution']) : '',
    '#description' => t('You may use safe HTML tags. If left blank, defaults to<br/>%def_attr', array('%def_attr' => LEAFLET_MAPBOX_DEF_ATTRIBUTION)),
  );
}

/**
 * Save the values on the configuration form to the database.
 *
 * @param array $form
 *   The submitted configuration form.
 * @param array $form_state
 *   The submitted configuration form state.
 */
function leaflet_mapbox_configuration_form_submit($form, &$form_state) {

  // All validation is done here upon submit, rather than in hook_validate
  // function to avoid interference with the Add and Remove buttons.
  $errors = _leaflet_mapbox_configuration_form_validate($form, $form_state);

  if (empty($errors)) {
    variable_set('leaflet_mapbox_configs', $form_state['values']['map_configs']);
    drupal_set_message(t('The map configurations have been saved.'));

    // Refresh the cache table or hook_leaflet_map_info() won't be called.
    cache_clear_all('*', 'cache', TRUE);
  }
}

/**
 * Validate the configuration form.
 *
 * @param array $form
 *   The submitted configuration form.
 * @param array $form_state
 *   The submitted configuration form state.
 *
 * The is not a hook implementation. It will be if the underscore prefix is
 * dropped from its name. However it will get called every time "Add" or
 * "Remove" buttons are pressed.
 */
function _leaflet_mapbox_configuration_form_validate($form, &$form_state) {
  // Remove unnecessary elements from the form values.
  form_state_values_clean($form_state);
  
  $errors = 0;
  foreach ($form_state['values']['map_configs'] as $id => $map_config) {
    if (empty($map_config['label'])) {
      form_set_error("map_configs][$id][label", t('Label for map #@id is required.', array('@id' => $id + 1)));
      $errors++;
    }
    if (empty($map_config['mapbox_code'])) {
      form_set_error("map_configs][$id][mapbox_code", t('Mapbox code for map #@id is required.', array('@id' => $id + 1)));
      $errors++;
    }
    if (!empty($map_config['zoomlevel']) && !is_numeric($map_config['zoomlevel'])) {
      form_set_error("map_configs][$id][zoomlevel", t('Zoom level for map #@id is invalid.', array('@id' => $id + 1)));
      $errors++;
    }
  }
  return $errors;
}

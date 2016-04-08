<?php
/**
 * @file
 * hk_expose.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_expose_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_expose_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function hk_expose_image_default_styles() {
  $styles = array();

  // Exported image style: expose.
  $styles['expose'] = array(
    'label' => 'Exposé Landschaft',
    'effects' => array(
      38 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 2480,
          'height' => 1675,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 1,
          'style_name' => 'expose',
          '#imageinfo_cache_effect_callback' => 'manualcrop_crop_and_scale_effect',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hk_expose_node_info() {
  $items = array(
    'expose' => array(
      'name' => t('Exposé'),
      'base' => 'node_content',
      'description' => t('Ein Exposé verbindet einen Kontakt, ein Objekt und ein oder mehrere Wohungen zusammen mit AGB und Widerrufsbelehrung zu einem PDF.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

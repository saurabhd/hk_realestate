<?php
/**
 * @file
 * hk_search.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function hk_search_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'suchseiten';
  $item->label = 'Suchseiten';
  $item->settings = array(
    'items' => array(
      'results' => array(
        'id' => 'text',
        'label' => 'Results',
        'text' => '[facetapi_results:result-count] offer',
        'plural' => 1,
        'text_plural' => '[facetapi_results:result-count] offers',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 1,
        'element' => 'strong',
        'css' => 0,
        'classes' => '',
        'weight' => '-50',
      ),
      'reset' => array(
        'id' => 'reset_filters',
        'label' => 'Reset',
        'text' => 'Reset',
        'plural' => 0,
        'text_plural' => '',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 0,
        'element' => 'strong',
        'css' => 0,
        'classes' => '',
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '3',
    ),
  );
  $export['suchseiten'] = $item;

  return $export;
}

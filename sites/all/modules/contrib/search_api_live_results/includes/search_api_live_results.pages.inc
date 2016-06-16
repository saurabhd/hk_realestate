<?php

/**
 * @file
 * Contains page callbacks and theme functions for the frontend UI.
 */

/**
 * Page callback for getting live results.
 */
function search_api_live_results_json(SearchApiLiveResultsSearch $search, $keys = '') {
  $ret = array();

  $keys = explode(' ', $keys);
  $query = $search->getQuery($keys);

  if ($query) {
    // Get the entity type
    $entity_type = (!empty($search->options['entity_type']))? $search->options['entity_type'] : 'node';

    $max_items = (!empty($search->options['num_results']))? $search->options['num_results'] : 5;
    $query->range(0, $max_items);
    $results = $query->execute();
    foreach ((array) $results['results'] as $result) {
      $entity = entity_load($entity_type, array($result['id']));
      if ($search->options['display'] == 'view_mode') {
        $ret[] = drupal_render(entity_view($entity_type, $entity, 'live_results_search'));
      }
      else {
        $ret[] = l(entity_label($entity_type, $entity), entity_uri($entity_type, $entity));
      }
    }    
  }

  drupal_json_output($ret);
}

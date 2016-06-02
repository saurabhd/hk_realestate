<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php $rows = $view->style_plugin->rendered_fields; ?>
<?php
foreach ($rows as $key => $value) {
	$space_array[] = $value['field_apart_living_space']; 
}
$maxSpace = max($space_array);

// Get min-max range value for living space facets block.
$searcher = 'search_api@solr_node_index';
$facet = facetapi_facet_load('field_apart_living_space', $searcher);
$adapter = facetapi_adapter_load($searcher);
$facet_settings = $adapter->getFacet($facet)->getSettings('block');
$spaceRange = $facet_settings->settings['range_simple'];

$start_space = 0;
$count = 0;
while ($start_space <= $maxSpace) {
  $space_range_array[$count]['min'] = $start_space;
  $start_space += $spaceRange; 
  $space_range_array[$count]['max'] = $start_space;
  $count++;
}
?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <a class="space-select facet-select">Space (ca.)</a>
  <ul>
    <?php foreach ($space_range_array as $id => $row):?>
      <?php
        $min_space = number_format($row['min'],0," ",",");
        $max_space = number_format($row['max'],0," ",",");
        $minspace = $row['min'];
        $maxspace = $row['max'];

        $query = db_select('node','n');
        $query->join('field_data_field_apart_living_space','fp','fp.entity_id = n.nid');
        $query->fields('n',array('nid'))
              ->condition('n.status', '1', '=')
              ->condition('n.type', 'apartment', '=')
              ->condition('fp.field_apart_living_space_value', $minspace, '>=')
              ->condition('fp.field_apart_living_space_value', $maxspace, '<=');
        $result = $query->execute()->fetchAll();
        $node_count = count($result);
      ?>
      <?php if($node_count > 0) {?>
      <li class="<?php print $classes_array[$id]; ?>">
      	<div class="views-field views-field-field-apart-living-space">        
  				<div class="field-content"><a href="<?php print '/buy?f[0]=field_apart_living_space:['.$minspace.' TO '.$maxspace.']'; ?>"><?php print $min_space.' - '.$max_space.'('.$node_count.')'; ?></a></div>  
  		  </div>
      </li>
      <?php } ?>
    <?php endforeach; ?>
  </ul>

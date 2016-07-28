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
	$price_array[] = $value['field_apart_price']; 
}
$maxPrice = max($price_array);

// Get min-max range value for price facets block.
$searcher = 'search_api@solr_node_index';
$facet = facetapi_facet_load('field_apart_price', $searcher);
$adapter = facetapi_adapter_load($searcher);
$facet_settings = $adapter->getFacet($facet)->getSettings('block');
$princeRange = $facet_settings->settings['range_simple'];
$start_price = 0;
$count = 0;
while ($start_price <= $maxPrice) {
  $price_range_array[$count]['min'] = $start_price;
  $start_price += $princeRange; 
  $price_range_array[$count]['max'] = $start_price;
  $count++;
}
?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <a class="price-select facet-select">Price</a>
  <ul>
    <?php foreach ($price_range_array as $id => $row):?>
      <?php
        $min_price = number_format($row['min'],0," ",",");
        $max_price = number_format($row['max'],0," ",",");
        $minprice = $row['min'];
        $maxprice = $row['max'];

        $query = db_select('node','n');
        $query->join('field_data_field_apart_price','fp','fp.entity_id = n.nid');
        $query->join('field_data_field_obj_schattenobjekt','fos','fos.entity_id = n.nid');
        $query->join('field_data_field_kategorie','fk','fk.entity_id = n.nid');
        $query->join('taxonomy_term_data','t','fk.field_kategorie_tid = t.tid');
        $query->fields('n',array('nid'))
              ->condition('n.status', '1', '=')
              ->condition('n.type', 'apartment', '=')
              ->condition('fos.field_obj_schattenobjekt_value', '1', '!=')
              ->condition('fp.field_apart_price_value', $minprice, '>=')
              ->condition('fp.field_apart_price_value', $maxprice, '<');
        $result = $query->execute()->fetchAll(); 
        $node_count = count($result);
      ?>
      <?php if($node_count > 0) {?>
      <li class="<?php print $classes_array[$id]; ?>">
      	<div class="views-field views-field-field-apart-price">        
  				<div class="field-content"><a href="<?php print '/buy?f[0]=field_apart_price:['.$minprice.' TO '.$maxprice.']'; ?>"><?php print $min_price.' - '.$max_price.'('.$node_count.')'; ?></a></div>  
  		  </div>
      </li>
      <?php } ?>
    <?php endforeach; ?>
  </ul>

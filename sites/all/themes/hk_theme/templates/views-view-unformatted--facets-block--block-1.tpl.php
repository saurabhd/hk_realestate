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
	$room_array[] = $value['field_apart_rooms']; 
}
$maxRooms = max($room_array);

// Get min-max range value for rooms facets block.
$searcher = 'search_api@solr_node_index';
$facet = facetapi_facet_load('field_apart_rooms', $searcher);
$adapter = facetapi_adapter_load($searcher);
$facet_settings = $adapter->getFacet($facet)->getSettings('block');
$roomRange = $facet_settings->settings['range_simple'];
$start_room = 0;
$count = 0;

while ($start_room <= $maxRooms) {
  $room_range_array[$count]['min'] = $start_room;
  $start_room += $roomRange; 
  $room_range_array[$count]['max'] = $start_room;
  $count++;
}
?>
  <?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <a class="rooms-select facet-select">Rooms</a>
  <ul>
    <?php foreach ($room_range_array as $id => $row):?>
      <?php
        $min_room = number_format($row['min'],0," ",",");
        $max_room = number_format($row['max'],0," ",",");
        $minroom = $row['min'];
        $maxroom = $row['max'];

        $query = db_select('node','n');
        $query->join('field_data_field_apart_rooms','fp','fp.entity_id = n.nid');
        $query->join('field_data_field_obj_schattenobjekt','fos','fos.entity_id = n.nid');
        $query->join('field_data_field_kategorie','fk','fk.entity_id = n.nid');
        $query->join('taxonomy_term_data','t','fk.field_kategorie_tid = t.tid');
        $query->fields('n',array('nid'))
              ->condition('n.status', '1', '=')
              ->condition('n.type', 'apartment', '=')
              ->condition('fos.field_obj_schattenobjekt_value', '1', '!=')
              ->condition('fp.field_apart_rooms_value', $minroom, '>=')
              ->condition('fp.field_apart_rooms_value', $maxroom, '<');
        $result = $query->execute()->fetchAll(); 
        $node_count = count($result);
      ?>
      <?php if($node_count > 0) {?>
      <li class="<?php print $classes_array[$id]; ?>">
      	<div class="views-field views-field-field-apart-rooms">        
  				<div class="field-content"><a href="<?php print '/buy?f[0]=field_apart_rooms:['.$minroom.' TO '.$maxroom.']'; ?>"><?php print $min_room.' - '.$max_room.'('.$node_count.')'; ?></a></div>  
  		  </div>
      </li>
      <?php } ?>
    <?php endforeach; ?>
  </ul>

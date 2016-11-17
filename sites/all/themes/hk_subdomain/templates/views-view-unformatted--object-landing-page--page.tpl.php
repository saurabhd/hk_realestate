<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php 
  global $base_url;
  $rows = $view->style_plugin->rendered_fields; 
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php
  $nid = $row['nid'];
  $url = '/'.drupal_get_path_alias('node/'.$nid);
  ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <div class="group-card">
  <div class="field field-name-field-apart-pictures">
    <a href="<?php print $url; ?>"><?php print $row['field_apart_pictures']; ?></a>
  </div>  
  <div class="flag-outer flag-outer-merken">
    <?php print flag_create_link('merken', $nid); ?>
  </div>
  <div class="field field-name-field-kategorie"><?php print $row['field_kategorie']; ?></div>
  <div class="field field-name-title">
    <h2><a href="<?php print $url; ?>"><?php print $row['title']; ?></a></h2>
  </div>
  <div class="field field-name-field-apart-living-space"><?php print $row['field_apart_living_space']; ?></div>
  <div class="field field-name-field-apart-price"><?php print $row['field_apart_price']; ?></div>
  <div class="field field-name-adresse">
    <div class="view view-apartment view-id-apartment view-display-id-objektadresse apartaddress view-dom-id-91a1f3a3b2521a66f2eb507dbb6f44d0">
      <i class="icon-hk-icon-location"></i><?php print $row['field_object_ref_field_address_thoroughfare']; ?><br><span class="plz"><?php print $row['field_object_ref_field_address_postal_code'].' '.$row['field_object_ref_field_address_locality']; ?></span>   
    </div>
  </div>
</div>
  </div>
<?php endforeach; ?>
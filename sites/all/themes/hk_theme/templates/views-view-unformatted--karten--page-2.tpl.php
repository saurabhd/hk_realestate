<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $rows = $view->style_plugin->rendered_fields; ?>
<?php foreach ($rows as $id => $row): ?>
  
<div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
  <div class="popup-content">
    <div class="apart">
        <span class="inquiry-checkbox"><input type="checkbox" class="inquiry" name="inquiry" value="<?php print $row['nid']; ?>"></span>
        <span class="rooms"><?php print $row['field_apart_rooms']; ?></span>
        <span class="space"><?php print $row['field_apart_living_space']; ?></span>
        <span class="price"><?php print $row['field_apart_price']; ?></span>
    </div>
  </div>
</div>  
<?php endforeach; ?>
<?php
end($rows); 
$last_key = key($rows);
$output = '/anfrage?field_angefragte_wohnung=';
foreach ($rows as $key => $row) {
  if($key == $last_key) {
    $output .= $row['nid'];
  } else {
    $output .= $row['nid'].',';
  }
}
?>
<div class="inquiry-button">
  <span>Markierte Wohnungen anfragen und Exposé bestellen</span>
  <a href="<?php print $output; ?>" class="ng-lightbox home-page-popup-inquiry"><?php print t('Anfrage stellen'); ?></a>
</div>

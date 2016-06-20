<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php $rows = $view->style_plugin->rendered_fields; ?>
<div class="content-header">
  <div class="block-title">Matching Apartments</div>
  <div class="sub-title">Similar Properties</div>
</div>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <div class="top-content">
      <div class="left-content">
        <div class="views-field views-field-picture">
          <span class="field-content"><?php print $row['field_apart_pictures']; ?></span>
        </div>
      </div>
      <div class="right-content">
        <div class="views-field views-field-title">
          <span class="field-content"><?php print $row['title']; ?></span>
        </div>
        <div class="content-apart-no-email">
          <div class="views-field views-field-apart-no">
            <span class="field-content"><?php print $row['field_apart_no']; ?></span>
          </div>
          <div class="views-field views-field-email">
            <span class="field-content"><?php print 'email-link'; ?></span>
          </div>
        </div>
        <div class="content-space-rooms">
          <div class="views-field views-field-living-space">
            <span class="field-content"><?php print $row['field_apart_living_space']; ?></span>
          </div>
          <div class="views-field views-field-email">
            <span class="field-content"><?php print $row['field_apart_sleeping_rooms']; ?></span>
          </div>
        </div>
      </div>
    </div>
    <div class="bottom-content">
      <div class="views-field views-field-price">
            <span class="field-content"><?php print $row['field_apart_price']; ?></span>
          </div>
    </div>
  </div>
<?php endforeach; ?>
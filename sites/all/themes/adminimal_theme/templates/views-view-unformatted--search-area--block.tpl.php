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
<div class="content-section">
<?php foreach ($rows as $id => $row): ?>
  <div <?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
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
            <span class="field-content"><a class="ng-lightbox unclaimed-email" href="/crm-core/contact/activity-add/email?destination=/crm-core/contact/<?php print arg(2);?>">E-mail</a></span>
          </div>
        </div>
        <div class="content-space-rooms">
          <div class="views-field views-field-living-space">
            <span class="field-content"><?php print $row['field_apart_living_space']; ?></span>
          </div>
          <div class="views-field views-field-bedrooms">
            <span class="field-content">
            <?php 
            if(isset($row['field_apart_sleeping_rooms']) && !empty($row['field_apart_sleeping_rooms'])) {
              print $row['field_apart_sleeping_rooms'].t('-Zimmer'); 
            }
            ?>
            </span>
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
</div> 

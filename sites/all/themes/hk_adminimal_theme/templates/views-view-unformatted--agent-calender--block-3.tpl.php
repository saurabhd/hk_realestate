<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php $rows = $view->style_plugin->rendered_fields; ?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <div class="left-section">
      <div class="views-field views-field-activity-date">        
        <span class="field-content"><?php print date('d M', strtotime($row['field_activity_date'])); ?></span>  
      </div>
    </div>
    <div class="right-section">
      <div class="left-content">
        <div class="views-field views-field-title">        
          <span class="field-content"><?php print $row['title']; ?></span>  
        </div>
        <div class="views-field views-field-activity-edit">        
          <span class="field-content"><?php print $row['edit_crm_activity']; ?></span>  
        </div>
        <div class="views-field views-field-activity-time">        
          <span class="field-content"><?php print date('H:i A', strtotime($row['field_activity_date'])); ?></span>  
        </div>
      </div>
      <div class="right-content">
        <span class="notes-plus-icon"></span>
      </div> 
    </div>
    <div class="views-field views-field-notes hide-notes">        
      <span class="field-content"><?php print $row['field_activity_notes']; ?></span>  
    </div>
  </div>
<?php endforeach; ?>
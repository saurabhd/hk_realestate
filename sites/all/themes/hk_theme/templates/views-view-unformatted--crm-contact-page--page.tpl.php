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
    <div class="top-container">
      <div class="left-content">
        <div class="views-field views-field-field-profile-picture">  
          <div class="field-content"><?php print $row['field_profile_picture']; ?></div>
        </div>
      </div>
      <div class="right-content">
        <div class="views-field views-field-field-name">  
          <div class="field-content"><?php print $row['contact_name_given']; ?></div>
        </div>
        <div class="views-field views-field-field-company-name">  
          <div class="field-content"><?php print $row['field_company']; ?></div>
        </div>
        <div class="views-field views-field-field-address"> 
          <span class="field-label">Address</span> 
          <div class="field-content"><?php print $row['field_crm_address']; ?></div>
        </div>
        <div class="views-field views-field-field-email">  
          <span class="field-label">Email</span> 
          <div class="field-content"><?php print $row['field_e_mail']; ?></div>
        </div>
        <div class="views-field views-field-field-phone"> 
          <span class="field-label">Phone</span>
          <div class="field-content"><?php print $row['field_phone']; ?></div>
        </div>
      </div>  
    </div>
    <div class="bottom-container">
      <div class="views-field views-field-field-job-title"> 
        <span class="field-label">Job Title:</span>
        <div class="field-content"><?php print $row['field_job_title']; ?></div>
      </div>
      <div class="views-field views-field-field-languages"> 
        <span class="field-label">Languages:</span>
        <div class="field-content"><?php print $row['field_languages']; ?></div>
      </div> 
      <div class="views-field views-field-field-birthday"> 
        <span class="field-label">Birthday:</span>
        <?php
        $date = date('d.m.', strtotime($row['field_birthday']));
        ?>
        <div class="field-content"><?php print $date; ?></div>
      </div>
      <div class="views-field views-field-field-other"> 
        <span class="field-label">Other:</span>
        <div class="field-content"><?php print $row['field_other']; ?></div>
      </div>
    </div>  
  </div>
<?php endforeach; ?>
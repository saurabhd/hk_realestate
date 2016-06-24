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
        <?php if(isset($row['field_profile_picture']) && !empty($row['field_profile_picture'])) { ?>
        <div class="views-field views-field-field-profile-picture">  
          <div class="field-content"><?php print $row['field_profile_picture']; ?></div>
        </div>
        <?php } ?>
      </div>
      <div class="right-content">
        <?php if(isset($row['contact_name_given']) && !empty($row['contact_name_given'])) { ?>
        <div class="views-field views-field-field-name">  
          <div class="field-content"><?php print $row['contact_name_given']; ?></div>
        </div>
        <?php } ?>
        <?php if(isset($row['field_company']) && !empty($row['field_company'])) { ?>
        <div class="views-field views-field-field-company-name">  
          <div class="field-content"><?php print $row['field_company']; ?></div>
        </div>
        <?php } ?>
        <?php if(isset($row['field_crm_address']) && !empty($row['field_crm_address'])) { ?>
        <div class="views-field views-field-field-address"> 
          <span class="field-label">Address</span> 
          <div class="field-content"><?php print $row['field_crm_address']; ?></div>
        </div>
        <?php } ?>
        <?php if(isset($row['field_e_mail']) && !empty($row['field_e_mail'])) { ?>
        <div class="views-field views-field-field-email">  
          <span class="field-label">Email</span> 
          <div class="field-content"><?php print $row['field_e_mail']; ?></div>
        </div>
        <?php } ?>
        <?php if(isset($row['field_phone']) && !empty($row['field_phone'])) { ?>
        <div class="views-field views-field-field-phone"> 
          <span class="field-label">Phone</span>
          <div class="field-content"><?php print $row['field_phone']; ?></div>
        </div>
        <?php } ?>
      </div>  
    </div>
    <div class="bottom-container">
      <?php if(isset($row['field_job_title']) && !empty($row['field_job_title'])) { ?>
      <div class="views-field views-field-field-job-title"> 
        <span class="field-label">Job Title:</span>
        <div class="field-content"><?php print $row['field_job_title']; ?></div>
      </div>
      <?php } ?>
      <?php if(isset($row['field_languages']) && !empty($row['field_languages'])) { ?>
      <div class="views-field views-field-field-languages"> 
        <span class="field-label">Languages:</span>
        <div class="field-content"><?php print $row['field_languages']; ?></div>
      </div>
      <?php } ?> 
      <?php if(isset($row['field_birthday']) && !empty($row['field_birthday'])) { ?>
      <div class="views-field views-field-field-birthday"> 
        <span class="field-label">Birthday:</span>
        <div class="field-content"><?php print $row['field_birthday']; ?></div>
      </div>
      <?php } ?>
      <?php if(isset($row['field_other']) && !empty($row['field_other'])) { ?>
      <div class="views-field views-field-field-other"> 
        <span class="field-label">Other:</span>
        <div class="field-content"><?php print $row['field_other']; ?></div>
      </div>
      <?php } ?>
    </div>  
  </div>
<?php endforeach; ?>
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
<?php foreach ($rows as $id => $row):?>
<?php
$date = $row['field_activity_date'];
$time_ago = strtotime($date);
$cur_time   = time();
$time_elapsed   = $cur_time - $time_ago;
$days     = round($time_elapsed / 86400 );
$weeks    = round($time_elapsed / 604800);
$months   = round($time_elapsed / 2600640 );
$years    = round($time_elapsed / 31207680 );
$left_time = '';
 //Days
 if($days <= 7){
   if($days==1){
     $left_time =  "yesterday";
   }else{
     $left_time =  $days." days Before";
   }
 }
 //Weeks
 else if($weeks <= 4.3){
   if($weeks==1){
     $left_time =  "1 week Before";
   }else{
     $left_time =  $weeks." weeks Before";
   }
 }
 //Months
 else if($months <=12){
   if($months==1){
     $left_time =  "1 month Before";
   }else{
     $left_time =  $months." months Before";
   }
 }
 //Years
 else{
   if($years==1){
     $left_time =  "1 year Before";
   }else{
     $left_time =  $years." years Before";
   }
 }
?>
  <td class="views-field views-field-activity-date"><?php print $left_time; ?></td>
  <td class="views-field views-field-activity-type"><?php print $row['type']; ?><span class="plus-icon"></span></td>
  <td class="views-field views-field-action"><?php print $row['nothing']; ?></td>
  <?php if(isset($row['field_activity_notes']) && !empty($row['field_activity_notes'])) { ?>
  <tr class="hide-notes"><td colspan="5"><?php print $row['field_activity_notes']; ?></td></tr>
  <?php } ?>
<?php endforeach; ?>
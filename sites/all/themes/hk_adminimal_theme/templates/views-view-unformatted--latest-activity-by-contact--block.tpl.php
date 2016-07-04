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
  <td class="views-field views-field-activity-date"><?php print $row['field_activity_date']; ?></td>
  <td class="views-field views-field-activity-type"><?php print $row['type']; ?><span></span></td>
  <td class="views-field views-field-action"><?php print $row['nothing']; ?></td>
  <tr class="hide-notes"><td colspan="5"><?php print $row['field_activity_notes']; ?></td></tr>
<?php endforeach; ?>
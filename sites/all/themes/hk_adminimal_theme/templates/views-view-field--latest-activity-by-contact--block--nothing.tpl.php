<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php $destination = $_SERVER['REQUEST_URI']; ?>
<a class="ng-lightbox unclaimed-email" href="/crm-core/contact/activity-add/email?field_inquiry=[activity_id]&destination=<?php print $destination; ?>" title="E-Mail senden">E-Mail</a>

<a class="ng-lightbox unclaimed-meeting" href="/crm-core/contact/activity-add/meeting?field_inquiry=[activity_id]&destination=<?php print $destination; ?>" title="Arrange meeting">Meeting</a> 

<a class="ng-lightbox unclaimed-phone" href="/crm-core/contact/activity-add/phone_call?field_inquiry=[activity_id]&destination=<?php print $destination; ?>" title="Telefonanruf zusammenfassen">Telefonanruf</a> 

<a class="ng-lightbox unclaimed-task" href="/crm-core/contact/activity-add/task?field_inquiry=[activity_id]&destination=<?php print $destination; ?>" title="Add Task">Task</a>

<a class="ng-lightbox unclaimed-notes" href="/crm-core/contact/activity-add/notes?field_inquiry=[activity_id]&destination=<?php print $destination; ?>" title="Notiz erstellen">Notiz</a>


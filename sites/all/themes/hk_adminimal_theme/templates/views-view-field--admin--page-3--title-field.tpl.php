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
<?php //print $output;
  $query = $_SERVER['QUERY_STRING'];
  $nid = $row->nid;
  $apt_no = $row->field_field_apart_no[0]['rendered']['#markup'];
  $title = $row->field_title_field[0]['rendered']['#markup'];
  print $apt_no.'| <a href="/node/'.$nid.'" title="Wohnung ansehen">'.$title.'</a> | <a href="/node/'.$nid.'/edit?destination=/admin/content/dash/wohnungen?'.$query.'">Bearbeiten</a> | <a href="/node/'.$nid.'/translate?destination=/admin/content/dash/wohnungen?'.$query.'">Übersetzen</a> | <a href="/node/'.$nid.'/clone/confirm?destination=/admin/content/dash/wohnungen?'.$query.'">Klonen</a>';
?>
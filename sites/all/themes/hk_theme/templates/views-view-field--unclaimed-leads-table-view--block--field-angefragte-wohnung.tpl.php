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
  global $base_url;
  $nid = $output;
  $node = node_load($nid);
  $public_path = variable_get('file_public_path', conf_path() . '/files');
  $image_path = '';
  if(isset($node->field_apart_pictures[LANGUAGE_NONE]) && !empty($node->field_apart_pictures[LANGUAGE_NONE])) {
    $image_path = $node->field_apart_pictures[LANGUAGE_NONE][0]['uri'];
    $image_path = str_replace('public://', '', $image_path);
    $image_path = $base_url.'/'.$public_path.'/'.$image_path;
  }
  $output = '<img src="'.$image_path.'" height="50px" width="50px"/>'
?>
<?php print $output; ?>
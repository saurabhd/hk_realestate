<?php
/**
 * @file
 * hk_expose.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function hk_expose_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'expose_link';
  $formatter->label = 'Exposé Link';
  $formatter->description = 'A link that outputs "Print Exposé"';
  $formatter->mode = 'token';
  $formatter->field_types = 'file';
  $formatter->code = '<a class="expose" href="[file:download-url]" title="[file:basename]">Exposé</a>';
  $formatter->fapi = '';
  $export['expose_link'] = $formatter;

  return $export;
}

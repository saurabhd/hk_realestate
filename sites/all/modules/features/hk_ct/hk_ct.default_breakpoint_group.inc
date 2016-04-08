<?php
/**
 * @file
 * hk_ct.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function hk_ct_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'hk_theme';
  $breakpoint_group->name = 'HK Theme';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.hk_theme.tv',
    1 => 'breakpoints.theme.hk_theme.wide',
    2 => 'breakpoints.theme.hk_theme.desk',
    3 => 'breakpoints.theme.hk_theme.narrow',
    4 => 'breakpoints.theme.hk_theme.mobile',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['hk_theme'] = $breakpoint_group;

  return $export;
}

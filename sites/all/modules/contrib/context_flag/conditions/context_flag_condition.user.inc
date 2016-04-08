<?php
/**
 * @file
 * Context integration for Flags applied to the currently active user account.
 */

/**
 * Current logged in user has active flag.
 */
class ContextFlagUserAccountActive extends context_condition {
  // Name used for the context setting value with the options_form.
  public $contextSettingName = 'flag_user_account_active';
  // Context condition values.
  function condition_values() {
    $flags = flag_get_flags('user');
    $values = array();
    foreach ($flags as $flag) {
      $values[$flag->name] = $flag->title;
    }
    return $values;
  }
  // Context form modifications.
  function options_form($context) {
    $defaults = $this->fetch_from_context($context, 'options');
    $default_value = isset($defaults[$this->contextSettingName]) ? $defaults[$this->contextSettingName] : FALSE;
    return _context_flag_requireall_form($this->contextSettingName, $default_value);
  }
  // Context check execution.
  function execute($account) {
    if ($this->condition_used() && !empty($account->uid)) {
      // Check if this flag is active for this display.
      $flags = flag_get_flags('user');
      $arr_flags = array();
      foreach ($flags as $flag) {
        $obj_flag = flag_get_flag($flag->name);
        $arr_flags[$flag->name] = $obj_flag->is_flagged($account->uid);
      }
      // Trigger results.
      foreach ($this->get_contexts() as $context) {
        $options = $this->fetch_from_context($context, 'options');
        $require_all = isset($options[$this->contextSettingName]) ? $options[$this->contextSettingName] : FALSE;
        $arr_trigger_flags = $context->conditions['flag_user_account_active']['values'];
        if (!$require_all) {
          foreach ($arr_trigger_flags as $flag_name) {
            if ($arr_flags[$flag_name]) {
              $this->condition_met($context);
            }
          }
        }
        else {
          $is_all_active = TRUE;
          foreach ($arr_trigger_flags as $delta => $flag_name) {
            if (!$arr_flags[$delta]) {
              $is_all_active = FALSE;
            }
          }
          if ($is_all_active) {
            $this->condition_met($context);
          }
        }
      }
    }
  }
}

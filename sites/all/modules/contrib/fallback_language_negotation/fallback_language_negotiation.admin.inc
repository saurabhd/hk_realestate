<?php
/**
 * @file
 * Admin UI settings form.
 */

/**
 * The URL language provider configuration form.
 */
function fallback_language_negotiation_fallback_form($form, &$form_state) {

  // get a list of installed languages and build select options for it.
  $options = array();
  foreach (language_list() as $language_code => $language) {
    $options[$language_code] = check_plain($language->name);
  }

  $form['fallback_language_negotiation_langcode'] = array(
    '#title' => t('Select a language as fallback language'),
    '#type' => 'select',
    '#options' => $options,
    '#default_value' => variable_get('fallback_language_negotiation_langcode', NULL),
    '#description' => t('Select a fallback language for the language negotiation.'),
  );

  $form_state['redirect'] = 'admin/config/regional/language/configure';

  return system_settings_form($form);
}

 <?php
drupal_add_library('system','ui.dialog');
drupal_add_library('system', 'ui.tooltip');
/**
 * Implements template_preprocess_html().
 * Adds path variables.
 */
function hk_theme_preprocess_html(&$variables, $hook) {
  // Add variables and paths needed for HTML5 and responsive support.
  $variables['base_path'] = base_path();
  $variables['path_to_bear_skin'] = drupal_get_path('theme', 'hk_theme');
}

/**
 * Implements theme_links().
 * Enables sub-menu item display for main menu.
 */
function hk_theme_links($variables) {
  if (array_key_exists('id', $variables['attributes']) && $variables['attributes']['id'] == 'block-system-main-menu') {
    $pid = variable_get('menu_main_links_source', 'block-system-main-menu');
    $tree = menu_tree($pid);
    return drupal_render($tree);
  }
  return theme_links($variables);
}

// Hide active language in language switcher block
function hk_theme_links__locale_block($variables) {
  global $language;
  unset($variables['links'][$language->language]);
  return theme('links', $variables);
}

/**
 * Implements template_preprocess_views_view_unformatted().
 */
function hk_theme_preprocess_views_view_unformatted(&$vars) {
  $view = $vars['view'];
  $content_only = array('apartment');
    if (in_array($view->name, $content_only)) {
      $vars['theme_hook_suggestions'] = array('views_view_unformatted__content_only');
    }
}

/**
 * Implements hook_language_negotiation_info_alter().
 *
 * Remove the 'cache' setting from LOCALE_LANGUAGE_NEGOTIATION_BROWSER since
 * the code that utilizes this setting will in fact prevent browser negotiation.
 */
 function hk_theme_language_negotiation_info_alter(&$negotiation_info) {
     unset($negotiation_info[LOCALE_LANGUAGE_NEGOTIATION_BROWSER]['cache']);
 }

function hk_theme_preprocess_views_view(&$vars) {
  // Get the current view info
  $view = $vars['view'];

  // Add JS/CSS based on current view display
  if ($view->current_display == 'print') {
    //drupal_add_js( /* parameters */ );
    drupal_add_css(path_to_theme() . '/css/pdfprint.css');
  }
 }

/**
 * Implements hook_wysiwyg_editor_settings_alter()
 *
 * @see http://docs.cksource.com/CKEditor_3.x/Howto/Enabling_SCAYT
 */
function hk_theme_wysiwyg_editor_settings_alter(&$settings, $context) {
  // The $context variable contains information about the wysiwyg profile we're using
  // In this case we just need to check that the editor being used is ckeditor
  if ($context['profile']->editor == 'ckeditor') {
    // Make Scayt enabled by default.
    $settings['scayt_autoStartup'] = 'true';
    $settings['scayt_sLang'] = 'de_DE';
  }
}

function hk_theme_process_token_tree(&$variables) {
  $variables['recursion_limit'] = variable_get('token_recursion_limit', 1);
}

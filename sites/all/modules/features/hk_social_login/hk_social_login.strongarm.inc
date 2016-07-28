<?php
/**
 * @file
 * hk_social_login.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hk_social_login_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_debug';
  $strongarm->value = 0;
  $export['hybridauth_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_destination';
  $strongarm->value = '';
  $export['hybridauth_destination'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_destination_error';
  $strongarm->value = '';
  $export['hybridauth_destination_error'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_disable_username_change';
  $strongarm->value = 1;
  $export['hybridauth_disable_username_change'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_display_name';
  $strongarm->value = '[user:hybridauth:firstName] [user:hybridauth:lastName]';
  $export['hybridauth_display_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_duplicate_emails';
  $strongarm->value = '1';
  $export['hybridauth_duplicate_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification';
  $strongarm->value = '0';
  $export['hybridauth_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification_body';
  $strongarm->value = '[user:name],

Thank you for registering at [site:name]. You need to confirm your e-mail address by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and activate your account.

After that, you will be able to log in at [site:login-url] using your [user:hybridauth:provider] account.

--  [site:name] team';
  $export['hybridauth_email_verification_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name]';
  $export['hybridauth_email_verification_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_forms';
  $strongarm->value = array(
    'user_login' => 'user_login',
    'user_login_block' => 'user_login_block',
    'user_register_form' => 0,
    'comment_form' => 0,
  );
  $export['hybridauth_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_override_realname';
  $strongarm->value = 0;
  $export['hybridauth_override_realname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_pictures';
  $strongarm->value = 1;
  $export['hybridauth_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_providers';
  $strongarm->value = array(
    'Twitter' => 'Twitter',
    'AOL' => 0,
    'Facebook' => 0,
    'Foursquare' => 0,
    'Google' => 0,
    'LinkedIn' => 0,
    'Live' => 0,
    'MySpace' => 0,
    'OpenID' => 0,
    'Yahoo' => 0,
    'px500' => 0,
    'Disqus' => 0,
    'FamilySearch' => 0,
    'Geni' => 0,
    'GitHub' => 0,
    'Goodreads' => 0,
    'Identica' => 0,
    'Instagram' => 0,
    'LastFM' => 0,
    'Mailru' => 0,
    'Murmur' => 0,
    'MyHeritage' => 0,
    'Odnoklassniki' => 0,
    'Pixnet' => 0,
    'Plurk' => 0,
    'QQ' => 0,
    'Sina' => 0,
    'Skyrock' => 0,
    'Steam' => 0,
    'Tumblr' => 0,
    'TwitchTV' => 0,
    'Viadeo' => 0,
    'Vimeo' => 0,
    'Vkontakte' => 0,
    'Yandex' => 0,
  );
  $export['hybridauth_providers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Twitter_keys_key';
  $strongarm->value = ' D7JUFOjn74O4TbbQ8b0vl1k62';
  $export['hybridauth_provider_Twitter_keys_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Twitter_keys_secret';
  $strongarm->value = 'rv9U7OXp13hRo6w4D5ndRySwcuPDDL6p7Q5YU1MyQ7CekC6Cx1';
  $export['hybridauth_provider_Twitter_keys_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Twitter_window_height';
  $strongarm->value = '500';
  $export['hybridauth_provider_Twitter_window_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Twitter_window_type';
  $strongarm->value = 'popup';
  $export['hybridauth_provider_Twitter_window_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Twitter_window_width';
  $strongarm->value = '800';
  $export['hybridauth_provider_Twitter_window_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_register';
  $strongarm->value = '1';
  $export['hybridauth_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_registration_password';
  $strongarm->value = 0;
  $export['hybridauth_registration_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_registration_username_change';
  $strongarm->value = 0;
  $export['hybridauth_registration_username_change'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_remove_password_fields';
  $strongarm->value = 1;
  $export['hybridauth_remove_password_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_required_fields';
  $strongarm->value = array(
    'email' => 'email',
    'firstName' => 0,
    'lastName' => 0,
    'gender' => 0,
  );
  $export['hybridauth_required_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_username';
  $strongarm->value = '[user:hybridauth:firstName] [user:hybridauth:lastName]';
  $export['hybridauth_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_hide_links';
  $strongarm->value = 0;
  $export['hybridauth_widget_hide_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_icon_pack';
  $strongarm->value = 'hybridauth_32';
  $export['hybridauth_widget_icon_pack'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_link_text';
  $strongarm->value = 'Social network account';
  $export['hybridauth_widget_link_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_link_title';
  $strongarm->value = 'Social network account';
  $export['hybridauth_widget_link_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_title';
  $strongarm->value = 'Or log in with...';
  $export['hybridauth_widget_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_type';
  $strongarm->value = 'list';
  $export['hybridauth_widget_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_use_overlay';
  $strongarm->value = 1;
  $export['hybridauth_widget_use_overlay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_weight';
  $strongarm->value = '100';
  $export['hybridauth_widget_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tabtamer_tab_settings';
  $strongarm->value = array(
    'crm-core/contact' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'crm-core/contact',
      'tabtamer_title' => '',
    ),
    'crm-core/reports' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'crm-core/reports',
      'tabtamer_title' => '',
    ),
    'crm-core/dashboard' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'crm-core/dashboard',
      'tabtamer_title' => '',
    ),
    'crm-core/aktivitaeten' => array(
      'weight' => '6',
      'action' => 'enabled',
      'tabtamer_original_path' => 'crm-core/aktivitaeten',
      'tabtamer_title' => '',
    ),
    'crm-core/anfragen' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'crm-core/anfragen',
      'tabtamer_title' => '',
    ),
    'crm-core/contact/%/activity' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'crm-core/contact/%/activity',
      'tabtamer_title' => '',
    ),
    'crm-core/activity/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'crm-core/activity/%crm_core_activity/view',
      'tabtamer_title' => '',
    ),
    'crm-core/activity/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'crm-core/activity/%crm_core_activity/edit',
      'tabtamer_title' => '',
    ),
    'node/%/revisions' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/revisions',
      'tabtamer_title' => '',
    ),
    'node/%/import' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/import',
      'tabtamer_title' => '',
    ),
    'node/%/delete-items' => array(
      'weight' => '11',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/delete-items',
      'tabtamer_title' => '',
    ),
    'node/%/unlock' => array(
      'weight' => '11',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/unlock',
      'tabtamer_title' => '',
    ),
    'node/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/view',
      'tabtamer_title' => '',
    ),
    'node/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/edit',
      'tabtamer_title' => '',
    ),
    'node/%/delete' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/delete',
      'tabtamer_title' => '',
    ),
    'node/%/simplenews' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/simplenews',
      'tabtamer_title' => '',
    ),
    'node/%/translate' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/translate',
      'tabtamer_title' => '',
    ),
    'node/%/display' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/display',
      'tabtamer_title' => '',
    ),
    'node/%/workflow' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%node/workflow',
      'tabtamer_title' => '',
    ),
    'node/%/apartment-crm-activities' => array(
      'weight' => '4',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%/apartment-crm-activities',
      'tabtamer_title' => '',
    ),
    'node/%/log' => array(
      'weight' => '12',
      'action' => 'enabled',
      'tabtamer_original_path' => 'node/%views_arg/log',
      'tabtamer_title' => '',
    ),
    'import/%/import' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%feeds_importer/import',
      'tabtamer_title' => '',
    ),
    'import/%/delete-items' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%feeds_importer/delete-items',
      'tabtamer_title' => '',
    ),
    'import/%/unlock' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%feeds_importer/unlock',
      'tabtamer_title' => '',
    ),
    'import/%/log' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'import/%/log',
      'tabtamer_title' => '',
    ),
    'file/add/upload' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/add/upload',
      'tabtamer_title' => '',
    ),
    'file/add/upload/file' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/add/upload/file',
      'tabtamer_title' => '',
    ),
    'file/add/upload/archive' => array(
      'weight' => '-5',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/add/upload/archive',
      'tabtamer_title' => '',
    ),
    'file/%/view' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/view',
      'tabtamer_title' => '',
    ),
    'file/%/usage' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/usage',
      'tabtamer_title' => '',
    ),
    'file/%/edit' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/edit',
      'tabtamer_title' => '',
    ),
    'file/%/delete' => array(
      'weight' => '1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'file/%file/delete',
      'tabtamer_title' => '',
    ),
    'user/%/hybridauth' => array(
      'weight' => '-96',
      'action' => 'disabled',
      'tabtamer_original_path' => 'user/%user/hybridauth',
      'tabtamer_title' => '',
    ),
    'user/%/view' => array(
      'weight' => '-100',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/view',
      'tabtamer_title' => '',
    ),
    'user/%/edit' => array(
      'weight' => '-99',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/edit',
      'tabtamer_title' => '',
    ),
    'user/%/display' => array(
      'weight' => '-98',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/display',
      'tabtamer_title' => '',
    ),
    'user/%/document' => array(
      'weight' => '-97',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%/document',
      'tabtamer_title' => '',
    ),
    'user/%/edit/account' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user_category/edit/account',
      'tabtamer_title' => '',
    ),
    'user/%/edit/simplenews' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user_category/edit/simplenews',
      'tabtamer_title' => '',
    ),
    'user/%/edit/twitter' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/%user/edit/twitter',
      'tabtamer_title' => '',
    ),
    'user/login' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/login',
      'tabtamer_title' => '',
    ),
    'user/register' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/register',
      'tabtamer_title' => '',
    ),
    'user/password' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'user/password',
      'tabtamer_title' => '',
    ),
    'search/node' => array(
      'weight' => '-10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/node',
      'tabtamer_title' => '',
    ),
    'search/user' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/user',
      'tabtamer_title' => '',
    ),
    'search/node/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/node/%menu_tail',
      'tabtamer_title' => '',
    ),
    'search/user/%' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'search/user/%menu_tail',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/view' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/view',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/edit' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/edit',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/merge' => array(
      'weight' => '10',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/merge',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/display' => array(
      'weight' => '11',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/display',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/merge/default' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/merge/default',
      'tabtamer_title' => '',
    ),
    'taxonomy/term/%/merge/duplicates' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'taxonomy/term/%taxonomy_term/merge/duplicates',
      'tabtamer_title' => '',
    ),
    'workflow/summary' => array(
      'weight' => '-1',
      'action' => 'enabled',
      'tabtamer_original_path' => 'workflow/summary',
      'tabtamer_title' => '',
    ),
    'workflow/my' => array(
      'weight' => '0',
      'action' => 'enabled',
      'tabtamer_original_path' => 'workflow/my',
      'tabtamer_title' => '',
    ),
    'workflow/pending' => array(
      'weight' => '2',
      'action' => 'enabled',
      'tabtamer_original_path' => 'workflow/pending',
      'tabtamer_title' => '',
    ),
    'workflow/history' => array(
      'weight' => '3',
      'action' => 'enabled',
      'tabtamer_original_path' => 'workflow/history',
      'tabtamer_title' => '',
    ),
  );
  $export['tabtamer_tab_settings'] = $strongarm;

  return $export;
}

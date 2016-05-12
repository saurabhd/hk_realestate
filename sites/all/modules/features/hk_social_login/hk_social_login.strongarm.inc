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
  $strongarm->value = '1';
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
    'Facebook' => 0,
    'AOL' => 0,
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

  return $export;
}

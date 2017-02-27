<?php
/**
 * @file
 * hk_site_redesign.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function hk_site_redesign_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Buyer Trust Us';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'buyer_trust_us';
  $fe_block_boxes->body = '<div class="main-buyer-trust-us"><div class="buyer-trust-us-image">&nbsp;</div><div class="buyer-trust-us-title">Buyer Trust Us</div><div class="buyer-trust-us-description">Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged.</div></div>';

  $export['buyer_trust_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Call Us Now';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'call_us_now';
  $fe_block_boxes->body = '<div class=\'call-us-now-wrap\'><div class=\'call-us-now-text\'>call us now</div><div class=\'call-us-now-number\'>+49 30 780 870 80</div></div>';

  $export['call_us_now'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Expert Guidance';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'expert_guidance';
  $fe_block_boxes->body = '<div class="main-expert-guidance"><div class="expert-guidance-image">&nbsp;</div><div class="expert-guidance-title">Buyer Trust Us</div><div class="expert-guidance-description">Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged.</div></div>';

  $export['expert_guidance'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer First';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_first';
  $fe_block_boxes->body = '<div class="main-address"><div class="address"><p>Lychener Str.2</p><p>10 437 Berlin - prenzlauer Berg</p></div><div class="phone"><p>+49 30 780 870 80</p></div><div class="Email">hk@gmail.com</div></div>';

  $export['footer_first'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'List Your Property For Free';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'list_your_property_for_free';
  $fe_block_boxes->body = '<p><a href="#">List Your Property For Free</a></p>';

  $export['list_your_property_for_free'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Open Hours';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'open_hours';
  $fe_block_boxes->body = '<div class="open-hours"><div class="open-hours-text">Open Hours : Monday to Saturday - 8am to 6pm</div></div>';

  $export['open_hours'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Sellers Prefer Us';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'sellers_prefer_us';
  $fe_block_boxes->body = '<div class="main-sellers-prefer-us"><div class="sellers-prefer-us-image">&nbsp;</div><div class="sellers-prefer-us-title">Sellers Prefer Us</div><div class="sellers-prefer-us-description">Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged.</div></div>';

  $export['sellers_prefer_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Why Choose Us';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'why_choose_us';
  $fe_block_boxes->body = '<div class="main-why-choose-us"><div class="why-choose-us-design">&nbsp;</div><div why-choose-us-text="">Why Choose Us</div><div why-choose-us-design="">&nbsp;</div></div>';

  $export['why_choose_us'] = $fe_block_boxes;

  return $export;
}

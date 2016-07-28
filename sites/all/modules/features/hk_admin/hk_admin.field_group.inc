<?php
/**
 * @file
 * hk_admin.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hk_admin_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|crm_core_contact|individual|default';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_contact_card';
  $field_group->data = array(
    'label' => 'card content',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'card content',
      'instance_settings' => array(
        'classes' => 'group-card-content',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_card_content|crm_core_contact|individual|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_card|crm_core_contact|individual|default';
  $field_group->group_name = 'group_contact_card';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'individual';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '4',
    'children' => array(
      0 => 'group_card_content',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'classes' => 'group-contact-card clearfix',
        'element' => 'aside',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_contact_card|crm_core_contact|individual|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Card');
  t('card content');

  return $field_groups;
}

<?php
/**
 * @file
 * roblib_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function roblib_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_image|paragraphs_item|media_object|form';
  $field_group->group_name = 'group_featured_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'media_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_image_caption',
      1 => 'field_image_link',
      2 => 'field_image_upload',
      3 => 'field_image_alignment',
      4 => 'field_image_size',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Featured Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-featured-image field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_featured_image|paragraphs_item|media_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_image|paragraphs_item|text_block_with_embedded_image|form';
  $field_group->group_name = 'group_featured_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_block_with_embedded_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_pg_inline_text_image__img',
      1 => 'field_pg_inline_text_image__cap',
      2 => 'field_pg_inline_text_image__size',
      3 => 'field_pg_inline_text_image__pos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Featured Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-featured-image field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_featured_image|paragraphs_item|text_block_with_embedded_image|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Image');

  return $field_groups;
}

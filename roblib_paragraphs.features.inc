<?php
/**
 * @file
 * roblib_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function roblib_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function roblib_paragraphs_image_default_styles() {
  $styles = array();

  // Exported image style: paragraphs_media_object_image.
  $styles['paragraphs_media_object_image'] = array(
    'label' => 'paragraphs media object image',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function roblib_paragraphs_node_info() {
  $items = array(
    'basic_page_paragraphs' => array(
      'name' => t('Basic Page (Paragraphs)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function roblib_paragraphs_paragraphs_info() {
  $items = array(
    'basic_text_block' => array(
      'name' => 'Basic Text Block',
      'bundle' => 'basic_text_block',
      'locked' => '1',
    ),
    'media_object' => array(
      'name' => 'Media Object',
      'bundle' => 'media_object',
      'locked' => '1',
    ),
    'text_block_with_embedded_image' => array(
      'name' => 'Text Block with Embedded Image',
      'bundle' => 'text_block_with_embedded_image',
      'locked' => '1',
    ),
  );
  return $items;
}

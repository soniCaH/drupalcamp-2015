<?php
/**
 * @file
 * drupalcamp_sponsor.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupalcamp_sponsor_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-sponsor-field_sponsor_logo_black_white'
  $field_instances['node-sponsor-field_sponsor_logo_black_white'] = array(
    'bundle' => 'sponsor',
    'deleted' => 0,
    'description' => 'Optional image to display in the header (for diamond sponsors)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'sponsor_footer_diamond' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'cod_sponsors',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'sponsor_footer_gold' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'sponsor_teaser_diamond' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'sponsor_teaser_gold' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'sponsor_teaser_silver' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sponsor_logo_black_white',
    'label' => 'Logo Diamond Front (Light text)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'sponsor-logo-white',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Logo Diamond Front (Light text)');
  t('Optional image to display in the header (for diamond sponsors)');

  return $field_instances;
}

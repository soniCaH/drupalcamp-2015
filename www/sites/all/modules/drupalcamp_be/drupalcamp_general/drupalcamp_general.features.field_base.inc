<?php
/**
 * @file
 * drupalcamp_general.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupalcamp_general_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_track_color'
  $field_bases['field_track_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_track_color',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'rgb' => array(
        0 => 'rgb',
      ),
    ),
    'locked' => 0,
    'module' => 'color_field',
    'settings' => array(
      'default_colors' => '#CF1940, #0491C6, #30b101, #C66904, #06D39B, #283360',
    ),
    'translatable' => 0,
    'type' => 'color_field_rgb',
  );

  return $field_bases;
}

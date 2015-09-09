<?php
/**
 * @file
 * drupalcamp_general.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupalcamp_general_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-session_tracks_1-field_track_color'
  $field_instances['taxonomy_term-session_tracks_1-field_track_color'] = array(
    'bundle' => 'session_tracks_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_track_color',
    'label' => 'Track Color',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_default_widget',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Track Color');

  return $field_instances;
}

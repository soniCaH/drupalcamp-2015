<?php
/**
 * @file
 * drupalcamp_profile.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupalcamp_profile_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_profile_days'
  $field_bases['field_profile_days'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_profile_days',
    'field_permissions' => array(
      'type' => 1,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'friday' => 'Friday (November 6th)',
        'saturday' => 'Saturday (November 7th)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'og_user_node'
  $field_bases['og_user_node'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'og_user_node',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'og',
      'handler_settings' => array(
        'behaviors' => array(
          'og_behavior' => array(
            'status' => TRUE,
          ),
        ),
        'membership_type' => 'og_membership_type_default',
        'target_bundles' => array(),
      ),
      'handler_submit' => 'Change handler',
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}

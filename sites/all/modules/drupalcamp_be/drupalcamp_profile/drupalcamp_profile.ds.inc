<?php
/**
 * @file
 * drupalcamp_profile.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drupalcamp_profile_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_attendees_overview';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_attendees_overview';
  $ds_fieldsetting->settings = array(
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_userpics',
    ),
  );
  $export['user|user|user_attendees_overview'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function drupalcamp_profile_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_attendees_overview';
  $ds_view_mode->label = 'user-attendees-overview';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_attendees_overview'] = $ds_view_mode;

  return $export;
}

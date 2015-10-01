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
  $ds_fieldsetting->id = 'user|user|full';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'ds_user_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_picture_square_large',
    ),
  );
  $export['user|user|full'] = $ds_fieldsetting;

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
 * Implements hook_ds_layout_settings_info().
 */
function drupalcamp_profile_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_3col_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'above_left' => array(
        0 => 'field_profile_first',
      ),
      'above_middle' => array(
        1 => 'ds_user_picture',
      ),
      'above_right' => array(
        2 => 'field_profile_last',
      ),
      'middle' => array(
        3 => 'field_country',
        4 => 'field_profile_job_title',
        5 => 'field_profile_org',
        6 => 'field_profile_bio',
        7 => 'field_profile_days',
        8 => 'field_volunteer',
        9 => 'field_facebook_url',
        10 => 'field_twitter_url',
        11 => 'field_linkedin_url',
      ),
      'bottom' => array(
        12 => 'flag_featured_speaker',
      ),
    ),
    'fields' => array(
      'field_profile_first' => 'above_left',
      'ds_user_picture' => 'above_middle',
      'field_profile_last' => 'above_right',
      'field_country' => 'middle',
      'field_profile_job_title' => 'middle',
      'field_profile_org' => 'middle',
      'field_profile_bio' => 'middle',
      'field_profile_days' => 'middle',
      'field_volunteer' => 'middle',
      'field_facebook_url' => 'middle',
      'field_twitter_url' => 'middle',
      'field_linkedin_url' => 'middle',
      'flag_featured_speaker' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'above_left' => 'div',
      'above_middle' => 'div',
      'above_right' => 'div',
      'middle' => 'div',
      'below_left' => 'div',
      'below_middle' => 'div',
      'below_right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_attendees_overview';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_attendees_overview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
        1 => 'field_profile_first',
        2 => 'field_profile_last',
        3 => 'field_profile_org',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'field_profile_first' => 'ds_content',
      'field_profile_last' => 'ds_content',
      'field_profile_org' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|user_attendees_overview'] = $ds_layout;

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

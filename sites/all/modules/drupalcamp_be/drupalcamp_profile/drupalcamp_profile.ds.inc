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
      'weight' => '0',
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
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
      ),
      'right' => array(
        1 => 'field_profile_first',
        2 => 'field_profile_last',
        3 => 'field_country',
        4 => 'field_profile_org',
        5 => 'field_profile_job_title',
        6 => 'field_profile_days',
        7 => 'field_volunteer',
      ),
      'footer' => array(
        8 => 'field_profile_bio',
        9 => 'group_social_media',
        10 => 'field_facebook_url',
        11 => 'field_twitter_url',
        12 => 'field_linkedin_url',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'field_profile_first' => 'right',
      'field_profile_last' => 'right',
      'field_country' => 'right',
      'field_profile_org' => 'right',
      'field_profile_job_title' => 'right',
      'field_profile_days' => 'right',
      'field_volunteer' => 'right',
      'field_profile_bio' => 'footer',
      'group_social_media' => 'footer',
      'field_facebook_url' => 'footer',
      'field_twitter_url' => 'footer',
      'field_linkedin_url' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
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

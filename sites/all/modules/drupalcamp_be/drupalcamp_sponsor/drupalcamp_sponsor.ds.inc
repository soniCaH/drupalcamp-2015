<?php
/**
 * @file
 * drupalcamp_sponsor.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function drupalcamp_sponsor_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sponsor|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sponsor';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_sponsor_logo',
      ),
      'right' => array(
        1 => 'field_sponsor_sponsorship_level',
        2 => 'field_sponsor_url',
        3 => 'field_sponsor_related_attendees',
      ),
      'footer' => array(
        4 => 'field_sponsor_body',
      ),
    ),
    'fields' => array(
      'field_sponsor_logo' => 'left',
      'field_sponsor_sponsorship_level' => 'right',
      'field_sponsor_url' => 'right',
      'field_sponsor_related_attendees' => 'right',
      'field_sponsor_body' => 'footer',
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
    'layout_disable_css' => 0,
  );
  $export['node|sponsor|default'] = $ds_layout;

  return $export;
}

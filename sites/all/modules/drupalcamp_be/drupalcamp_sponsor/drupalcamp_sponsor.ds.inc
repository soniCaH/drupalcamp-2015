<?php
/**
 * @file
 * drupalcamp_sponsor.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drupalcamp_sponsor_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sponsor|sponsor_teaser_diamond';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sponsor';
  $ds_fieldsetting->view_mode = 'sponsor_teaser_diamond';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|sponsor|sponsor_teaser_diamond'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sponsor|sponsor_teaser_gold';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sponsor';
  $ds_fieldsetting->view_mode = 'sponsor_teaser_gold';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|sponsor|sponsor_teaser_gold'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sponsor|sponsor_teaser_silver';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sponsor';
  $ds_fieldsetting->view_mode = 'sponsor_teaser_silver';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|sponsor|sponsor_teaser_silver'] = $ds_fieldsetting;

  return $export;
}

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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sponsor|sponsor_teaser_diamond';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sponsor';
  $ds_layout->view_mode = 'sponsor_teaser_diamond';
  $ds_layout->layout = 'zf_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_sponsor_logo',
      ),
      'right' => array(
        1 => 'field_sponsor_body',
        2 => 'field_sponsor_url',
      ),
    ),
    'fields' => array(
      'field_sponsor_logo' => 'left',
      'field_sponsor_body' => 'right',
      'field_sponsor_url' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|sponsor|sponsor_teaser_diamond'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sponsor|sponsor_teaser_gold';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sponsor';
  $ds_layout->view_mode = 'sponsor_teaser_gold';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sponsor_logo',
        1 => 'field_sponsor_url',
      ),
    ),
    'fields' => array(
      'field_sponsor_logo' => 'ds_content',
      'field_sponsor_url' => 'ds_content',
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
  $export['node|sponsor|sponsor_teaser_gold'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sponsor|sponsor_teaser_silver';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sponsor';
  $ds_layout->view_mode = 'sponsor_teaser_silver';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sponsor_logo',
      ),
    ),
    'fields' => array(
      'field_sponsor_logo' => 'ds_content',
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
  $export['node|sponsor|sponsor_teaser_silver'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function drupalcamp_sponsor_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sponsor_footer_diamond';
  $ds_view_mode->label = 'Sponsor Footer Diamond';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['sponsor_footer_diamond'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sponsor_footer_gold';
  $ds_view_mode->label = 'Sponsor Footer Gold';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['sponsor_footer_gold'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sponsor_teaser_diamond';
  $ds_view_mode->label = 'Sponsor Teaser Diamond';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['sponsor_teaser_diamond'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sponsor_teaser_gold';
  $ds_view_mode->label = 'Sponsor Teaser Gold';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['sponsor_teaser_gold'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sponsor_teaser_silver';
  $ds_view_mode->label = 'Sponsor Teaser Silver';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['sponsor_teaser_silver'] = $ds_view_mode;

  return $export;
}

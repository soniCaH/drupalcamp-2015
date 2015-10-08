<?php
/**
 * @file
 * cod_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cod_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cod_sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function cod_sponsors_image_default_styles() {
  $styles = array();

  // Exported image style: cod_sponsors.
  $styles['cod_sponsors'] = array(
    'label' => 'COD Sponsors',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 1,
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
function cod_sponsors_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('An event sponsor'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

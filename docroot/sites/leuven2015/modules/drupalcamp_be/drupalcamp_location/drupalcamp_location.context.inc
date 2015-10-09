<?php
/**
 * @file
 * drupalcamp_location.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcamp_location_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcamp_location';
  $context->description = 'Place blocks on the "getting-there" page';
  $context->tag = 'DrupalCamp Belgium';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'location' => 'location',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'drupalcamp_location-gmaps' => array(
          'module' => 'drupalcamp_location',
          'delta' => 'gmaps',
          'region' => 'content',
          'weight' => '-10',
        ),
        'drupalcamp_routeplanner-delijn' => array(
          'module' => 'drupalcamp_routeplanner',
          'delta' => 'delijn',
          'region' => 'content',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCamp Belgium');
  t('Place blocks on the "getting-there" page');
  $export['drupalcamp_location'] = $context;

  return $export;
}

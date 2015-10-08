<?php
/**
 * @file
 * drupalcamp_sponsor.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcamp_sponsor_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcamp_sponsor_landing';
  $context->description = 'Sponsor blocks on the Landing page';
  $context->tag = 'DrupalCamp Belgium';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sponsors' => 'sponsors',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sponsors-block' => array(
          'module' => 'views',
          'delta' => 'sponsors-block',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-sponsors-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsors-block_1',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-sponsors-block_2' => array(
          'module' => 'views',
          'delta' => 'sponsors-block_2',
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
  t('Sponsor blocks on the Landing page');
  $export['drupalcamp_sponsor_landing'] = $context;

  return $export;
}

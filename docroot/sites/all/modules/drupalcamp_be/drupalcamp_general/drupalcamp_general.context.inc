<?php
/**
 * @file
 * drupalcamp_general.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcamp_general_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcampbe_context_sitewide';
  $context->description = 'DCL - Sitewide context (always active)';
  $context->tag = 'DrupalCamp Belgium';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'drupalcamp_general-footer_text' => array(
          'module' => 'drupalcamp_general',
          'delta' => 'footer_text',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DCL - Sitewide context (always active)');
  t('DrupalCamp Belgium');
  $export['drupalcampbe_context_sitewide'] = $context;

  return $export;
}

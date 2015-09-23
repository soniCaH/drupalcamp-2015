<?php
/**
 * @file
 * drupalcamp_speaker.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcamp_speaker_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupalcampbe_context_frontpage';
  $context->description = 'Frontpage context';
  $context->tag = 'DrupalCamp Belgium';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_speakers-block' => array(
          'module' => 'views',
          'delta' => 'featured_speakers-block',
          'region' => 'featured',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCamp Belgium');
  t('Frontpage context');
  $export['drupalcampbe_context_frontpage'] = $context;

  return $export;
}
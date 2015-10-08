<?php
/**
 * @file
 * DrupalCamp block(s) regarding speakers.
 */

/**
 * Block to render the "propose a session" CTA block.
 *
 * @return array
 *   The block array.
 */
function _drupalcamp_speaker_propose_view() {
  $block = array(
    'subject' => t('Become a speaker!'),
    'content' => '<p>' . t('We are pleased to invite you as a speaker for our conference. If you have some knowledge related to the Drupal community, this is your time to get on the stage and share it with your fellow (or future) Drupalistas.') . '</p>' . '<p class="text-center">' . l(t('Propose a session'), 'propose-session', array('attributes' => array('class' => array('button')))) . '</p>',
  );

  return $block;
}

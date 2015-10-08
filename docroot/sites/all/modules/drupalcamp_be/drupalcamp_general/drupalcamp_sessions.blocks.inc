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
function _drupalcamp_sessions_register_cta_view() {
  $img = drupal_get_path('module', 'drupalcamp_sessions') . DIRECTORY_SEPARATOR . 'images' . DIRECTORY_SEPARATOR . 'subscribe_LR.png';
  $url = url('user/register');

  $block = array(
    'subject' => '',
    'content' => '<p class="text-center">' . '<a href="' . $url . '"><img src="' . $img . '" alt="Register now and join these beautiful people"/></a>' . '</p>',
  );

  return $block;
}

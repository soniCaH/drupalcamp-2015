<?php
/**
 * @file
 * All general DrupalCamp blocks.
 */


/**
 * Configure the video block.
 *
 * @return array
 *   Form array.
 */
function _drupalcamp_general_footer_text_configure() {
  $form['footer_text'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Footer credits/social settings'),
  );
  $form['footer_text']['drupalcamp_general_footer_text_facebook'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Full URL of the DrupalCamp Facebook account.'),
    '#default_value' => variable_get(
      'drupalcamp_general_footer_text_facebook',
      'https://www.facebook.com/DrupalcampBelgium'
    ),
  );
  $form['footer_text']['drupalcamp_general_footer_text_twitter'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Full URL of the DrupalCamp Twitter account.'),
    '#default_value' => variable_get(
      'drupalcamp_general_footer_text_twitter',
      'https://twitter.com/drupalcampbe'
    ),
  );
  $form['footer_text']['drupalcamp_general_footer_text_googleplus'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Full URL of the DrupalCamp Google+ page.'),
    '#default_value' => variable_get(
      'drupalcamp_general_footer_text_googleplus',
      'https://plus.google.com/u/0/+DrupalcampBe/posts'
    ),
  );

  return $form;
}

/**
 * Save the video block configuration.
 *
 * @param array $edit
 *   The data as received from the block config form.
 */
function _drupalcamp_general_footer_text_save($edit) {
  variable_set(
    'drupalcamp_general_footer_text_facebook',
    $edit['drupalcamp_general_footer_text_facebook']
  );
  variable_set(
    'drupalcamp_general_footer_text_twitter',
    $edit['drupalcamp_general_footer_text_twitter']
  );
  variable_set(
    'drupalcamp_general_footer_text_googleplus',
    $edit['drupalcamp_general_footer_text_googleplus']
  );
}

/**
 * Block to render the social links and credits in the footer.
 *
 * @return array
 *   The block array.
 */
function _drupalcamp_general_footer_text_view() {
  $content = '';

  $content .= theme_html_tag(
    array(
      'element' => array(
        '#tag'   => 'p',
        '#value' => t(
          'Follow us on: <a href="@facebook" target="_blank">Facebook</a>, <a href="@twitter" target="_blank">Twitter</a> or <a href="@googleplus" target="_blank">Google+</a>.',
          array(
            '@facebook'   => variable_get(
              'drupalcamp_general_footer_text_facebook',
              'https://www.facebook.com/DrupalcampBelgium'
            ),
            '@twitter'    => variable_get(
              'drupalcamp_general_footer_text_twitter',
              'https://twitter.com/drupalcampbe'
            ),
            '@googleplus' => variable_get(
              'drupalcamp_general_footer_text_googleplus',
              'https://plus.google.com/u/0/+DrupalcampBe/posts'
            ),
          )
        )
      )
    )
  );

  $block = array(
    'subject' => NULL,
    'content' => $content,
  );

  return $block;
}

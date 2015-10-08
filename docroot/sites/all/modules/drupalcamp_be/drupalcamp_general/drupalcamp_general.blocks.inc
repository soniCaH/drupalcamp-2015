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
  $form['footer_text_social'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Footer social settings'),
  );
  $form['footer_text_social']['drupalcamp_general_footer_text_facebook'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Full URL of the DrupalCamp Facebook account.'),
    '#default_value' => variable_get(
      'drupalcamp_general_footer_text_facebook',
      'https://www.facebook.com/DrupalcampBelgium'
    ),
  );

  $form['footer_text_social']['drupalcamp_general_footer_text_twitter'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Full URL of the DrupalCamp Twitter account.'),
    '#default_value' => variable_get(
      'drupalcamp_general_footer_text_twitter',
      'https://twitter.com/drupalcampbe'
    ),
  );

  $form['footer_text_social']['drupalcamp_general_footer_text_googleplus'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Full URL of the DrupalCamp Google+ page.'),
    '#default_value' => variable_get(
      'drupalcamp_general_footer_text_googleplus',
      'https://plus.google.com/u/0/+DrupalcampBe/posts'
    ),
  );

  $form['footer_text_credits'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Footer credits'),
  );

  $form['footer_text_credits']['drupalcamp_general_footer_text_contact'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Page to link to contact page.'),
    '#description'   => t(
      'Relative path to the contact page of drupalcamp volunteers (e.g. "contact" for "www.drupalcamp.be/contact")'
    ),
    '#default_value' => variable_get(
      'drupalcamp_general_footer_text_contact', 'contact'
    ),
  );

  $form['footer_text_credits']['drupalcamp_general_footer_text_volunteers'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Page to link to volunteers.'),
    '#description'   => t(
      'Relative path to the overview/thank you/... page of drupalcamp volunteers (e.g. "volunteers" for "www.drupalcamp.be/volunteers")'
    ),
    '#default_value' => variable_get(
      'drupalcamp_general_footer_text_volunteers', 'volunteers'
    ),
  );

  $form['footer_text_credits']['drupalcamp_general_footer_text_design_url'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Full URL of the designer.'),
    '#default_value' => variable_get(
      'drupalcamp_general_footer_text_design_url', NULL
    ),
  );

  $form['footer_text_credits']['drupalcamp_general_footer_text_design_name'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Name of the designer/themer.'),
    '#default_value' => variable_get(
      'drupalcamp_general_footer_text_design_name', NULL
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
function _drupalcamp_general_footer_text_save(array $edit) {
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
  variable_set(
    'drupalcamp_general_footer_text_contact',
    $edit['drupalcamp_general_footer_text_contact']
  );
  variable_set(
    'drupalcamp_general_footer_text_volunteers',
    $edit['drupalcamp_general_footer_text_volunteers']
  );
  variable_set(
    'drupalcamp_general_footer_text_design_url',
    $edit['drupalcamp_general_footer_text_design_url']
  );
  variable_set(
    'drupalcamp_general_footer_text_design_name',
    $edit['drupalcamp_general_footer_text_design_name']
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
        ),
      ),
    )
  );

  $content .= theme_html_tag(
    array(
      'element' => array(
        '#tag'   => 'p',
        '#value' => t(
          '<a href="http://www.drupalcamp.be">Drupalcamp Belgium</a> is brought to you by an <a href="@organisation">amazing team of volunteers</a>. Have a question? <a href="@contact">Contact Us</a>.',
          array(
            '@organisation' => url(
              variable_get(
                'drupalcamp_general_footer_text_volunteers', 'volunteers'
              )
            ),
            '@contact'      => url(
              variable_get(
                'drupalcamp_general_footer_text_contact', 'contact'
              )
            ),
          )
        ),
      ),
    )
  );

  $designer_url = variable_get(
    'drupalcamp_general_footer_text_design_url', NULL
  );
  $designer_name = variable_get(
    'drupalcamp_general_footer_text_design_name', NULL
  );
  $designer = !empty($designer_name) ? (!empty($designer_url) ? l(
    $designer_name, $designer_url
  ) : $designer_name) : NULL;

  $content .= theme_html_tag(
    array(
      'element' => array(
        '#tag'   => 'p',
        '#value' => t(
          'Built on <a href="http://usecod.com/" target="_blank">COD</a>.'
        ) . (!empty($designer) ? ' ' . t(
          'Designed by @designer.', array('@designer' => $designer)
        ) : '') . '<br />' . t(
          '<a href="http://drupal.org/" target="_blank">Drupal</a> is a <a href="http://drupal.com/trademark" target="_blank">registered trademark</a> of <a href="http://buytaert.net/" target="_blank">Dries Buytaert</a>.'
        ),
      ),
    )
  );

  $block = array(
    'subject' => NULL,
    'content' => $content,
  );

  return $block;
}

/**
 * Block to render the "propose a session" CTA block.
 *
 * @return array
 *   The block array.
 */
function _drupalcamp_general_register_cta_view() {
  $img = drupal_get_path('module', 'drupalcamp_general') . DIRECTORY_SEPARATOR . 'images' . DIRECTORY_SEPARATOR . 'subscribe_LR.png';
  $url = url('user/register');

  $block = array(
    'subject' => '',
    'content' => '<p class="text-center">' . '<a href="' . $url . '"><img src="' . $img . '" alt="Register now and join these beautiful people"/></a>' . '</p>',
  );

  return $block;
}

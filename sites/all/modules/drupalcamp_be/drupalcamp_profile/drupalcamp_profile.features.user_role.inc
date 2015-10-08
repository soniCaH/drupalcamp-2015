<?php
/**
 * @file
 * drupalcamp_profile.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalcamp_profile_user_default_roles() {
  $roles = array();

  // Exported role: volunteer.
  $roles['volunteer'] = array(
    'name' => 'volunteer',
    'weight' => 3,
  );

  return $roles;
}

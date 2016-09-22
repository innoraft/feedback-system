<?php
/**
 * @file
 * role_mentor.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function role_mentor_user_default_roles() {
  $roles = array();

  // Exported role: mentor.
  $roles['mentor'] = array(
    'name' => 'mentor',
    'weight' => 3,
  );

  return $roles;
}

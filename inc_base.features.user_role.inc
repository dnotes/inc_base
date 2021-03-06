<?php

/**
 * Implementation of hook_user_default_roles().
 */
function inc_base_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  // Exported role: site manager
  $roles['site manager'] = array(
    'name' => 'site manager',
  );

  // Exported role: user manager
  $roles['user manager'] = array(
    'name' => 'user manager',
  );

  return $roles;
}

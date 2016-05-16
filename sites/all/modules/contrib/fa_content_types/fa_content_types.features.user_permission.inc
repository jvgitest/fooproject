<?php
/**
 * @file
 * fa_content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fa_content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create mycontentfeed content'.
  $permissions['create mycontentfeed content'] = array(
    'name' => 'create mycontentfeed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any mycontentfeed content'.
  $permissions['delete any mycontentfeed content'] = array(
    'name' => 'delete any mycontentfeed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own mycontentfeed content'.
  $permissions['delete own mycontentfeed content'] = array(
    'name' => 'delete own mycontentfeed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any mycontentfeed content'.
  $permissions['edit any mycontentfeed content'] = array(
    'name' => 'edit any mycontentfeed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own mycontentfeed content'.
  $permissions['edit own mycontentfeed content'] = array(
    'name' => 'edit own mycontentfeed content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}

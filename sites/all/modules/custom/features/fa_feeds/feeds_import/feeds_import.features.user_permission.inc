<?php
/**
 * @file
 * feeds_import.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feeds_import_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear node feeds'.
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear result_csv feeds'.
  $permissions['clear result_csv feeds'] = array(
    'name' => 'clear result_csv feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear user feeds'.
  $permissions['clear user feeds'] = array(
    'name' => 'clear user feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import node feeds'.
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import result_csv feeds'.
  $permissions['import result_csv feeds'] = array(
    'name' => 'import result_csv feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import user feeds'.
  $permissions['import user feeds'] = array(
    'name' => 'import user feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock node feeds'.
  $permissions['unlock node feeds'] = array(
    'name' => 'unlock node feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock result_csv feeds'.
  $permissions['unlock result_csv feeds'] = array(
    'name' => 'unlock result_csv feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock user feeds'.
  $permissions['unlock user feeds'] = array(
    'name' => 'unlock user feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}

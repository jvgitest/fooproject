<?php
/**
 * @file
 * fa_blocks_content.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fa_blocks_content_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-block1'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'block1',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sky' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'sky',
        'weight' => 0,
      ),
    ),
    'title' => 'My block 1',
    'visibility' => 0,
  );

  $export['block-block2'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'block2',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sky' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'sky',
        'weight' => 0,
      ),
    ),
    'title' => 'My block 2',
    'visibility' => 0,
  );

  $export['menu-menu-a-propos'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-a-propos',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sky' => array(
        'region' => 'menu_bar',
        'status' => 1,
        'theme' => 'sky',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-langue'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-langue',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sky' => array(
        'region' => 'top_menu',
        'status' => 1,
        'theme' => 'sky',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sky' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'sky',
        'weight' => 0,
      ),
    ),
    'title' => 'maincontent',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sky' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sky',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 10,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'sky' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'sky',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}

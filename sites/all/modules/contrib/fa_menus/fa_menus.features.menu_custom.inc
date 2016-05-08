<?php
/**
 * @file
 * fa_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function fa_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-a-propos.
  $menus['menu-a-propos'] = array(
    'menu_name' => 'menu-a-propos',
    'title' => 'Menu Bar',
    'description' => 'Menu bar principal',
  );
  // Exported menu: menu-langue.
  $menus['menu-langue'] = array(
    'menu_name' => 'menu-langue',
    'title' => 'Langue',
    'description' => 'Langue du site',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Langue');
  t('Langue du site');
  t('Menu Bar');
  t('Menu bar principal');

  return $menus;
}

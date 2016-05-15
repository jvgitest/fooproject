<?php
/**
 * @file
 * fa_taxonomy.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function fa_taxonomy_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_generate-terms:admin/config/development/generate/taxonomy.
  $menu_links['management_generate-terms:admin/config/development/generate/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/taxonomy',
    'router_path' => 'admin/config/development/generate/taxonomy',
    'link_title' => 'Generate terms',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of terms. Optionally delete current terms.',
      ),
      'identifier' => 'management_generate-terms:admin/config/development/generate/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Generate terms');

  return $menu_links;
}

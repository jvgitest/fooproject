<?php
/**
 * @file
 * fa_content_types.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function fa_content_types_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_mycontentfeed:node/add/mycontentfeed.
  $menu_links['navigation_mycontentfeed:node/add/mycontentfeed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/mycontentfeed',
    'router_path' => 'node/add/mycontentfeed',
    'link_title' => 'mycontentfeed',
    'options' => array(
      'identifier' => 'navigation_mycontentfeed:node/add/mycontentfeed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('mycontentfeed');

  return $menu_links;
}

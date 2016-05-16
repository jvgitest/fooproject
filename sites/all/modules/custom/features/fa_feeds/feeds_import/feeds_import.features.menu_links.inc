<?php
/**
 * @file
 * feeds_import.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feeds_import_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_feeds-importers:admin/structure/feeds.
  $menu_links['management_feeds-importers:admin/structure/feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/feeds',
    'router_path' => 'admin/structure/feeds',
    'link_title' => 'Feeds importers',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure one or more Feeds importers to aggregate RSS and Atom feeds, import CSV files or more.',
      ),
      'identifier' => 'management_feeds-importers:admin/structure/feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_feeds-log:admin/reports/feeds.
  $menu_links['management_feeds-log:admin/reports/feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/feeds',
    'router_path' => 'admin/reports/feeds',
    'link_title' => 'Feeds log',
    'options' => array(
      'attributes' => array(
        'title' => 'Review log messages of imports and subscriptions to feeds.',
      ),
      'identifier' => 'management_feeds-log:admin/reports/feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Feeds importers');
  t('Feeds log');

  return $menu_links;
}

<?php
/**
 * @file
 * fa_content_types.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fa_content_types_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_age'.
  $field_bases['field_age'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_age',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  return $field_bases;
}

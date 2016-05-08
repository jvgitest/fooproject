<?php
/**
 * @file
 * fa_theme_sky.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fa_theme_sky_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

<?php
/**
 * @file
 * saic_platform_main_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function saic_platform_main_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function saic_platform_main_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

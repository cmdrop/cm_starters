<?php
/**
 * @file
 * cm_starter_tv_schedule_feed_importer_telvue.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cm_starter_tv_schedule_feed_importer_telvue_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

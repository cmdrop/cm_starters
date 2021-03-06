<?php
/**
 * @file
 * cm_starter_tv_schedule_feed_importer_cablecast.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function cm_starter_tv_schedule_feed_importer_cablecast_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cm_starter_tv_schedule_import_cablecast';
  $feeds_importer->config = array(
    'name' => 'Channel 12 Airings',
    'description' => 'importer for airings on channel 12',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCablecastParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsEntityProcessorAiring',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'field_airing_title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'channel',
            'target' => 'field_airing_channel',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'cablecast_start_datetime',
            'target' => 'field_airing_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'cablecast_end_datetime',
            'target' => 'field_airing_date:end',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'airing',
        'values' => array(),
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['cm_starter_tv_schedule_import_cablecast'] = $feeds_importer;

  return $export;
}

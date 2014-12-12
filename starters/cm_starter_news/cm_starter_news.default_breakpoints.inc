<?php
/**
 * @file
 * cm_starter_news.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function cm_starter_news_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.cm_theme_zen.mobile';
  $breakpoint->name = 'mobile';
  $breakpoint->breakpoint = '(min-width: 0px)';
  $breakpoint->source = 'cm_theme_zen';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 0;
  $breakpoint->weight = 16;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.cm_theme_zen.mobile'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.cm_theme_zen.narrow';
  $breakpoint->name = 'narrow';
  $breakpoint->breakpoint = '(min-width: 48.25em)';
  $breakpoint->source = 'cm_theme_zen';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 0;
  $breakpoint->weight = 14;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.cm_theme_zen.narrow'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.cm_theme_zen.wide';
  $breakpoint->name = 'wide';
  $breakpoint->breakpoint = '(min-width: 60em)';
  $breakpoint->source = 'cm_theme_zen';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 0;
  $breakpoint->weight = 11;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.cm_theme_zen.wide'] = $breakpoint;

  return $export;
}

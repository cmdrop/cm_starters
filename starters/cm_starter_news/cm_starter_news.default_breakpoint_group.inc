<?php
/**
 * @file
 * cm_starter_news.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function cm_starter_news_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.cm_theme_zen.tv';
  $breakpoints[] = 'breakpoints.theme.cm_theme_zen.wide';
  $breakpoints[] = 'breakpoints.theme.cm_theme_zen.narrow';
  $breakpoints[] = 'breakpoints.theme.cm_theme_zen.mobile';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'cm_theme_zen';
  $breakpoint_group->name = 'Community Media Theme 2 - Zen';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['cm_theme_zen'] = $breakpoint_group;

  return $export;
}

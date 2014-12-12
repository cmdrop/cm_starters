<?php
/**
 * @file
 * cm_starter_news.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function cm_starter_news_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'thumbnails';
  $picture_mapping->machine_name = 'thumbnails';
  $picture_mapping->breakpoint_group = 'cm_theme_zen';
  $picture_mapping->mapping = array(
    'breakpoints.theme.cm_theme_zen.tv' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.cm_theme_zen.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'thumbnail_wide_1x',
      ),
    ),
    'breakpoints.theme.cm_theme_zen.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'thumbnail_narrow_1x',
      ),
    ),
    'breakpoints.theme.cm_theme_zen.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'thumbnail_mobile_1x',
      ),
    ),
  );
  $export['thumbnails'] = $picture_mapping;

  return $export;
}

<?php
/**
 * @file
 * redhen_raiser_styles.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function redhen_raiser_styles_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Banner Image';
  $picture_mapping->machine_name = 'banner_image';
  $picture_mapping->breakpoint_group = 'raiser';
  $picture_mapping->mapping = array(
    'breakpoints.theme.raiser.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_s',
      ),
    ),
    'breakpoints.theme.raiser.large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_l',
      ),
    ),
    'breakpoints.theme.raiser.xlarge' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_xl',
      ),
    ),
  );
  $export['banner_image'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Story Image';
  $picture_mapping->machine_name = 'story_image';
  $picture_mapping->breakpoint_group = 'raiser';
  $picture_mapping->mapping = array(
    'breakpoints.theme.raiser.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'story_s',
      ),
    ),
    'breakpoints.theme.raiser.large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'story_l',
      ),
    ),
    'breakpoints.theme.raiser.xlarge' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'story_xl',
      ),
    ),
  );
  $export['story_image'] = $picture_mapping;

  return $export;
}

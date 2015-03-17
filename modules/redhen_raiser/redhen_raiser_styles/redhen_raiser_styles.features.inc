<?php
/**
 * @file
 * redhen_raiser_styles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redhen_raiser_styles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function redhen_raiser_styles_image_default_styles() {
  $styles = array();

  // Exported image style: avatar.
  $styles['avatar'] = array(
    'label' => 'Avatar (100x100)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_l.
  $styles['banner_l'] = array(
    'label' => 'Banner L (?)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 603,
          'height' => 263,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_s.
  $styles['banner_s'] = array(
    'label' => 'Banner S (?)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 403,
          'height' => 183,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_xl.
  $styles['banner_xl'] = array(
    'label' => 'Banner XL (820x300)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 820,
          'height' => 300,
        ),
        'weight' => -10,
      ),
    ),
  );

  // Exported image style: mini-avatar.
  $styles['mini-avatar'] = array(
    'label' => 'Mini-Avatar (50x50)',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: snippet_tile.
  $styles['snippet_tile'] = array(
    'label' => 'Snippet Tile (50x50)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: story_l.
  $styles['story_l'] = array(
    'label' => 'Story L (?)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 423,
          'height' => 203,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: story_s.
  $styles['story_s'] = array(
    'label' => 'Story S (?)',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: story_xl.
  $styles['story_xl'] = array(
    'label' => 'Story XL (?)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 623,
          'height' => 303,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser_image.
  $styles['teaser_image'] = array(
    'label' => 'Teaser Image (277x200)',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 277,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tile.
  $styles['tile'] = array(
    'label' => 'Tile (200x200)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

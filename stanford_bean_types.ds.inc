<?php
/**
 * @file
 * stanford_bean_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_bean_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'bean|stanford_icon_block|default';
  $ds_fieldsetting->entity_type = 'bean';
  $ds_fieldsetting->bundle = 'stanford_icon_block';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['bean|stanford_icon_block|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'bean|stanford_postcard|stanford_button_card';
  $ds_fieldsetting->entity_type = 'bean';
  $ds_fieldsetting->bundle = 'stanford_postcard';
  $ds_fieldsetting->view_mode = 'stanford_button_card';
  $ds_fieldsetting->settings = array(
    'title_wrapper' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'stanford_field_formatters',
      'formatter_settings' => array(
        'html_tag' => '',
        'link_field' => '',
        'custom_link_to_entity' => 0,
        'custom_prefix' => '',
        'custom_suffix' => '',
        'custom_reverse' => 0,
        'custom_trim' => 0,
        'custom_strtolower' => 0,
        'custom_strtoupper' => 0,
        'custom_ucfirst' => 0,
        'custom_ucwords' => 0,
        'custom_strip_tags' => 0,
        'custom_strip_preserve' => '',
      ),
    ),
  );
  $export['bean|stanford_postcard|stanford_button_card'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_bean_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|stanford_icon_block|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'stanford_icon_block';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_postcard',
        1 => 'group_postcard_icon',
        2 => 'title',
        3 => 'group_postcard_content',
        4 => 'field_s_icon_body',
        5 => 'field_s_icon_icon',
        6 => 'field_s_icon_link',
      ),
    ),
    'fields' => array(
      'group_postcard' => 'ds_content',
      'group_postcard_icon' => 'ds_content',
      'title' => 'ds_content',
      'group_postcard_content' => 'ds_content',
      'field_s_icon_body' => 'ds_content',
      'field_s_icon_icon' => 'ds_content',
      'field_s_icon_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['bean|stanford_icon_block|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|stanford_postcard|stanford_button_card';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'stanford_postcard';
  $ds_layout->view_mode = 'stanford_button_card';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_button_card_style',
        1 => 'field_s_image_info',
        2 => 'title_wrapper',
        3 => 'group_button_card_link_style',
      ),
    ),
    'fields' => array(
      'group_button_card_style' => 'ds_content',
      'field_s_image_info' => 'ds_content',
      'title_wrapper' => 'ds_content',
      'group_button_card_link_style' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['bean|stanford_postcard|stanford_button_card'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|stanford_postcard|stanford_large_card';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'stanford_postcard';
  $ds_layout->view_mode = 'stanford_large_card';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_large_card_styles',
        1 => 'title_wrapper',
        2 => 'field_s_postcard_body',
        3 => 'field_s_postcard_link',
        4 => 'field_s_image_info',
        5 => 'group_contained_styles',
      ),
    ),
    'fields' => array(
      'group_large_card_styles' => 'ds_content',
      'title_wrapper' => 'ds_content',
      'field_s_postcard_body' => 'ds_content',
      'field_s_postcard_link' => 'ds_content',
      'field_s_image_info' => 'ds_content',
      'group_contained_styles' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['bean|stanford_postcard|stanford_large_card'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|stanford_postcard|stanford_small_card';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'stanford_postcard';
  $ds_layout->view_mode = 'stanford_small_card';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_s_postcard_body',
        1 => 'field_s_postcard_file',
        2 => 'field_s_postcard_link',
        3 => 'field_s_image_info',
      ),
    ),
    'fields' => array(
      'field_s_postcard_body' => 'ds_content',
      'field_s_postcard_file' => 'ds_content',
      'field_s_postcard_link' => 'ds_content',
      'field_s_image_info' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['bean|stanford_postcard|stanford_small_card'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_bean_types_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'stanford_12_col_banner_tall';
  $ds_view_mode->label = 'Banner 12 Column Tall';
  $ds_view_mode->entities = array(
    'bean' => 'bean',
    'field_collection_item' => 'field_collection_item',
  );
  $export['stanford_12_col_banner_tall'] = $ds_view_mode;

  return $export;
}

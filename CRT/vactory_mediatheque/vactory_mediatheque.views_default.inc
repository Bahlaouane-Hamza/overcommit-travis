<?php
/**
 * @file
 * vactory_mediatheque.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vactory_mediatheque_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mediatheque_homepage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Médiathèque Homepage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Médiathèque';
  $handler->display->display_options['css_class'] = 'masonry mediatheque';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'year_select' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Filtrer par thématique',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_field_mediatheque_type_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Filtrer par type media',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'media-item';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/mediatheque" class="more-link btn-label icon-arrow-right">Voir toute la Médiathèque</a>';
  /* Field: Content: Vignette */
  $handler->display->display_options['fields']['field_field_mediatheque_image']['id'] = 'field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['table'] = 'field_data_field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['field'] = 'field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['settings'] = array(
    'image_style' => 'mediatheque_image',
    'image_link' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_field_mediatheque_date']['id'] = 'field_field_mediatheque_date';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['table'] = 'field_data_field_field_mediatheque_date';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['field'] = 'field_field_mediatheque_date';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_date']['settings'] = array(
    'format_type' => 'sacd',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_field_mediatheque_type']['id'] = 'field_field_mediatheque_type';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['table'] = 'field_data_field_field_mediatheque_type';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['field'] = 'field_field_mediatheque_type';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_type']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Lien Youtube,Dailymotion,Vimeo */
  $handler->display->display_options['fields']['field_field_mediatheque_url']['id'] = 'field_field_mediatheque_url';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['table'] = 'field_data_field_field_mediatheque_url';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['field'] = 'field_field_mediatheque_url';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_url']['element_default_classes'] = FALSE;
  /* Field: Content: Thème */
  $handler->display->display_options['fields']['field_mediatheque_theme']['id'] = 'field_mediatheque_theme';
  $handler->display->display_options['fields']['field_mediatheque_theme']['table'] = 'field_data_field_mediatheque_theme';
  $handler->display->display_options['fields']['field_mediatheque_theme']['field'] = 'field_mediatheque_theme';
  $handler->display->display_options['fields']['field_mediatheque_theme']['label'] = '';
  $handler->display->display_options['fields']['field_mediatheque_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediatheque_theme']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mediatheque_theme']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_mediatheque_theme']['field_api_classes'] = TRUE;
  /* Field: Content: field_mediatheque_thum_lar */
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['id'] = 'field_field_mediatheque_thum_lar';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['table'] = 'field_data_field_field_mediatheque_thum_lar';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['field'] = 'field_field_mediatheque_thum_lar';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['type'] = 'text_plain';
  /* Field: Content: field_mediatheque_thum_med */
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['id'] = 'field_field_mediatheque_thum_med';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['table'] = 'field_data_field_field_mediatheque_thum_med';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['field'] = 'field_field_mediatheque_thum_med';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['field_api_classes'] = TRUE;
  /* Field: Content: field_mediatheque_thum_sma */
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['id'] = 'field_field_mediatheque_thum_sma';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['table'] = 'field_data_field_field_mediatheque_thum_sma';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['field'] = 'field_field_mediatheque_thum_sma';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_default_classes'] = FALSE;
  /* Field: Content: Vignette */
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['id'] = 'field_field_mediatheque_image_1';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['table'] = 'field_data_field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['field'] = 'field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['settings'] = array(
    'text' => 'Download',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mediatheque' => 'mediatheque',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Médiathèque Homepage */
  $handler = $view->new_display('block', 'Médiathèque Homepage', 'block_mediatheque_homepage');
  $handler->display->display_options['block_description'] = 'Médiathèque Homepage';
  $translatables['mediatheque_homepage'] = array(
    t('Master'),
    t('Médiathèque'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Options avancées'),
    t('Select any filter and click on Apply to see results'),
    t('<a href="/mediatheque" class="more-link btn-label icon-arrow-right">Voir toute la Médiathèque</a>'),
    t('Médiathèque Homepage'),
    t('more'),
  );
  $export['mediatheque_homepage'] = $view;

  $view = new view();
  $view->name = 'mediatheque_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Médiathèque Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Médiathèque';
  $handler->display->display_options['css_class'] = 'masonry mediatheque';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'year_select' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Filtrer par thématique',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_field_mediatheque_type_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Filtrer par type media',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'tid_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Par territoire',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'media-item';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Vignette */
  $handler->display->display_options['fields']['field_field_mediatheque_image']['id'] = 'field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['table'] = 'field_data_field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['field'] = 'field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_field_mediatheque_date']['id'] = 'field_field_mediatheque_date';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['table'] = 'field_data_field_field_mediatheque_date';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['field'] = 'field_field_mediatheque_date';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_date']['settings'] = array(
    'format_type' => 'sacd',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_field_mediatheque_type']['id'] = 'field_field_mediatheque_type';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['table'] = 'field_data_field_field_mediatheque_type';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['field'] = 'field_field_mediatheque_type';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_type']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Lien Youtube,Dailymotion,Vimeo */
  $handler->display->display_options['fields']['field_field_mediatheque_url']['id'] = 'field_field_mediatheque_url';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['table'] = 'field_data_field_field_mediatheque_url';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['field'] = 'field_field_mediatheque_url';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_url']['element_default_classes'] = FALSE;
  /* Field: Content: Thème */
  $handler->display->display_options['fields']['field_mediatheque_theme']['id'] = 'field_mediatheque_theme';
  $handler->display->display_options['fields']['field_mediatheque_theme']['table'] = 'field_data_field_mediatheque_theme';
  $handler->display->display_options['fields']['field_mediatheque_theme']['field'] = 'field_mediatheque_theme';
  $handler->display->display_options['fields']['field_mediatheque_theme']['label'] = '';
  $handler->display->display_options['fields']['field_mediatheque_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediatheque_theme']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mediatheque_theme']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_mediatheque_theme']['field_api_classes'] = TRUE;
  /* Field: Content: field_mediatheque_thum_lar */
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['id'] = 'field_field_mediatheque_thum_lar';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['table'] = 'field_data_field_field_mediatheque_thum_lar';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['field'] = 'field_field_mediatheque_thum_lar';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['type'] = 'text_plain';
  /* Field: Content: field_mediatheque_thum_med */
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['id'] = 'field_field_mediatheque_thum_med';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['table'] = 'field_data_field_field_mediatheque_thum_med';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['field'] = 'field_field_mediatheque_thum_med';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['field_api_classes'] = TRUE;
  /* Field: Content: field_mediatheque_thum_sma */
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['id'] = 'field_field_mediatheque_thum_sma';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['table'] = 'field_data_field_field_mediatheque_thum_sma';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['field'] = 'field_field_mediatheque_thum_sma';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_default_classes'] = FALSE;
  /* Field: Content: Vignette */
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['id'] = 'field_field_mediatheque_image_1';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['table'] = 'field_data_field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['field'] = 'field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['settings'] = array(
    'text' => 'Download',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mediatheque' => 'mediatheque',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['year_select']['id'] = 'year_select';
  $handler->display->display_options['filters']['year_select']['table'] = 'field_data_field_field_mediatheque_year';
  $handler->display->display_options['filters']['year_select']['field'] = 'year_select';
  $handler->display->display_options['filters']['year_select']['value'] = array(
    2016 => '2016',
  );
  $handler->display->display_options['filters']['year_select']['exposed'] = TRUE;
  $handler->display->display_options['filters']['year_select']['expose']['operator_id'] = 'year_select_op';
  $handler->display->display_options['filters']['year_select']['expose']['operator'] = 'year_select_op';
  $handler->display->display_options['filters']['year_select']['expose']['identifier'] = 'annee';
  $handler->display->display_options['filters']['year_select']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['year_select']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'theme';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'theme';
  /* Filter criterion: Content: Type (field_field_mediatheque_type) */
  $handler->display->display_options['filters']['field_field_mediatheque_type_value']['id'] = 'field_field_mediatheque_type_value';
  $handler->display->display_options['filters']['field_field_mediatheque_type_value']['table'] = 'field_data_field_field_mediatheque_type';
  $handler->display->display_options['filters']['field_field_mediatheque_type_value']['field'] = 'field_field_mediatheque_type_value';
  $handler->display->display_options['filters']['field_field_mediatheque_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_field_mediatheque_type_value']['expose']['operator_id'] = 'field_field_mediatheque_type_value_op';
  $handler->display->display_options['filters']['field_field_mediatheque_type_value']['expose']['operator'] = 'field_field_mediatheque_type_value_op';
  $handler->display->display_options['filters']['field_field_mediatheque_type_value']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_field_mediatheque_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'block_mediatheque');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Vignette */
  $handler->display->display_options['fields']['field_field_mediatheque_image']['id'] = 'field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['table'] = 'field_data_field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['field'] = 'field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_field_mediatheque_image']['settings'] = array(
    'image_style' => 'mediatheque_image',
    'image_link' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_field_mediatheque_date']['id'] = 'field_field_mediatheque_date';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['table'] = 'field_data_field_field_mediatheque_date';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['field'] = 'field_field_mediatheque_date';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_date']['settings'] = array(
    'format_type' => 'sacd',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_field_mediatheque_type']['id'] = 'field_field_mediatheque_type';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['table'] = 'field_data_field_field_mediatheque_type';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['field'] = 'field_field_mediatheque_type';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_type']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Lien Youtube,Dailymotion,Vimeo */
  $handler->display->display_options['fields']['field_field_mediatheque_url']['id'] = 'field_field_mediatheque_url';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['table'] = 'field_data_field_field_mediatheque_url';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['field'] = 'field_field_mediatheque_url';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_url']['element_default_classes'] = FALSE;
  /* Field: Content: Thème */
  $handler->display->display_options['fields']['field_mediatheque_theme']['id'] = 'field_mediatheque_theme';
  $handler->display->display_options['fields']['field_mediatheque_theme']['table'] = 'field_data_field_mediatheque_theme';
  $handler->display->display_options['fields']['field_mediatheque_theme']['field'] = 'field_mediatheque_theme';
  $handler->display->display_options['fields']['field_mediatheque_theme']['label'] = '';
  $handler->display->display_options['fields']['field_mediatheque_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediatheque_theme']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mediatheque_theme']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_mediatheque_theme']['field_api_classes'] = TRUE;
  /* Field: Content: field_mediatheque_thum_lar */
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['id'] = 'field_field_mediatheque_thum_lar';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['table'] = 'field_data_field_field_mediatheque_thum_lar';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['field'] = 'field_field_mediatheque_thum_lar';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_lar']['type'] = 'text_plain';
  /* Field: Content: field_mediatheque_thum_med */
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['id'] = 'field_field_mediatheque_thum_med';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['table'] = 'field_data_field_field_mediatheque_thum_med';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['field'] = 'field_field_mediatheque_thum_med';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_med']['field_api_classes'] = TRUE;
  /* Field: Content: field_mediatheque_thum_sma */
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['id'] = 'field_field_mediatheque_thum_sma';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['table'] = 'field_data_field_field_mediatheque_thum_sma';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['field'] = 'field_field_mediatheque_thum_sma';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_thum_sma']['element_default_classes'] = FALSE;
  /* Field: Content: Vignette */
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['id'] = 'field_field_mediatheque_image_1';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['table'] = 'field_data_field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['field'] = 'field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_field_mediatheque_image_1']['settings'] = array(
    'text' => 'Download',
  );
  /* Field: Vignette Original */
  $handler->display->display_options['fields']['field_field_mediatheque_image_2']['id'] = 'field_field_mediatheque_image_2';
  $handler->display->display_options['fields']['field_field_mediatheque_image_2']['table'] = 'field_data_field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image_2']['field'] = 'field_field_mediatheque_image';
  $handler->display->display_options['fields']['field_field_mediatheque_image_2']['ui_name'] = 'Vignette Original';
  $handler->display->display_options['fields']['field_field_mediatheque_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_field_mediatheque_image_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_mediatheque_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_field_mediatheque_image_2']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Térritoire */
  $handler->display->display_options['fields']['field_territoire']['id'] = 'field_territoire';
  $handler->display->display_options['fields']['field_territoire']['table'] = 'field_data_field_territoire';
  $handler->display->display_options['fields']['field_territoire']['field'] = 'field_territoire';
  $handler->display->display_options['fields']['field_territoire']['label'] = '';
  $handler->display->display_options['fields']['field_territoire']['element_type'] = '0';
  $handler->display->display_options['fields']['field_territoire']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_territoire']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_territoire']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_territoire']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_territoire']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mediatheque' => 'mediatheque',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['year_select']['id'] = 'year_select';
  $handler->display->display_options['filters']['year_select']['table'] = 'field_data_field_field_mediatheque_year';
  $handler->display->display_options['filters']['year_select']['field'] = 'year_select';
  $handler->display->display_options['filters']['year_select']['value'] = array(
    2016 => '2016',
  );
  $handler->display->display_options['filters']['year_select']['group'] = 1;
  $handler->display->display_options['filters']['year_select']['exposed'] = TRUE;
  $handler->display->display_options['filters']['year_select']['expose']['operator_id'] = 'year_select_op';
  $handler->display->display_options['filters']['year_select']['expose']['operator'] = 'year_select_op';
  $handler->display->display_options['filters']['year_select']['expose']['identifier'] = 'annee';
  $handler->display->display_options['filters']['year_select']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['year_select']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'theme';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'theme';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'territoire';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 't_rritoire_m_diath_que_';
  $handler->display->display_options['path'] = 'mediatheque';
  $translatables['mediatheque_view'] = array(
    t('Master'),
    t('Médiathèque'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Options avancées'),
    t('Filtrer par thématique'),
    t('Filtrer par type media'),
    t('Select any filter and click on Apply to see results'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('dernier »'),
    t('Page'),
    t('more'),
    t('Par territoire'),
  );
  $export['mediatheque_view'] = $view;

  return $export;
}

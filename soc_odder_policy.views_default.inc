<?php
/**
 * @file
 * soc_odder_policy.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function soc_odder_policy_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'soc_odder_policy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Arbejdsprogram';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Arbejdsprogram 2014-2017';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Med arbejdsprogrammet for perioden 2014-2017 belyser vi mulighederne for at Odder Kommune fortsat kan være en attraktiv bosætningskommune og understøtte det fællesskab som kommunen udgør. Vi er stolte af, at være en del af en selvstændig og veldrevet kommune, og vi ønsker fortsat at udvikle og synliggøre kommunens værdier og alt det gode, som kommunen er.
 
Herunder kan du læse mere om hvordan vi prioriterer en række indsats-områder.
 
Vi håber du vil deltage i debatten under dem hver især. Det er gennem dialog at vi får alle idéer frem og sammen kan sætte visionerne for Odder Kommune.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'soc_odder_policy' => 'soc_odder_policy',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'arbejdsprogram';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Arbejdsprogram';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['soc_odder_policy'] = array(
    t('Master'),
    t('Arbejdsprogram 2014-2017'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Med arbejdsprogrammet for perioden 2014-2017 belyser vi mulighederne for at Odder Kommune fortsat kan være en attraktiv bosætningskommune og understøtte det fællesskab som kommunen udgør. Vi er stolte af, at være en del af en selvstændig og veldrevet kommune, og vi ønsker fortsat at udvikle og synliggøre kommunens værdier og alt det gode, som kommunen er.
 
Herunder kan du læse mere om hvordan vi prioriterer en række indsats-områder.
 
Vi håber du vil deltage i debatten under dem hver især. Det er gennem dialog at vi får alle idéer frem og sammen kan sætte visionerne for Odder Kommune.'),
    t('Page'),
  );
  $export['soc_odder_policy'] = $view;

  return $export;
}

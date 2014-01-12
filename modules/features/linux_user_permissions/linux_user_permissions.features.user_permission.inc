<?php
/**
 * @file
 * linux_user_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function linux_user_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access example charts'.
  $permissions['access example charts'] = array(
    'name' => 'access example charts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'charts',
  );

  // Exported permission: 'access news feeds'.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'add terms in directory_sections'.
  $permissions['add terms in directory_sections'] = array(
    'name' => 'add terms in directory_sections',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in distributions'.
  $permissions['add terms in distributions'] = array(
    'name' => 'add terms in distributions',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in event_category'.
  $permissions['add terms in event_category'] = array(
    'name' => 'add terms in event_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in forums'.
  $permissions['add terms in forums'] = array(
    'name' => 'add terms in forums',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in gallery_category'.
  $permissions['add terms in gallery_category'] = array(
    'name' => 'add terms in gallery_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in imagex_blog_category'.
  $permissions['add terms in imagex_blog_category'] = array(
    'name' => 'add terms in imagex_blog_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in linux_sections'.
  $permissions['add terms in linux_sections'] = array(
    'name' => 'add terms in linux_sections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in linux_user_tags'.
  $permissions['add terms in linux_user_tags'] = array(
    'name' => 'add terms in linux_user_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in manual_section'.
  $permissions['add terms in manual_section'] = array(
    'name' => 'add terms in manual_section',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in manual_sub_sections'.
  $permissions['add terms in manual_sub_sections'] = array(
    'name' => 'add terms in manual_sub_sections',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in media_folders'.
  $permissions['add terms in media_folders'] = array(
    'name' => 'add terms in media_folders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in question_category'.
  $permissions['add terms in question_category'] = array(
    'name' => 'add terms in question_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tags'.
  $permissions['add terms in tags'] = array(
    'name' => 'add terms in tags',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in wiki_topics'.
  $permissions['add terms in wiki_topics'] = array(
    'name' => 'add terms in wiki_topics',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in workbench_section'.
  $permissions['add terms in workbench_section'] = array(
    'name' => 'add terms in workbench_section',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer Compact Forms'.
  $permissions['administer Compact Forms'] = array(
    'name' => 'administer Compact Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'compact_forms',
  );

  // Exported permission: 'administer advanced forum'.
  $permissions['administer advanced forum'] = array(
    'name' => 'administer advanced forum',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer charts'.
  $permissions['administer charts'] = array(
    'name' => 'administer charts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'charts',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer coveritlive'.
  $permissions['administer coveritlive'] = array(
    'name' => 'administer coveritlive',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'linux_coveritlive',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer flickr'.
  $permissions['administer flickr'] = array(
    'name' => 'administer flickr',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'flickr',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'forum',
  );

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node advpoll defaults'.
  $permissions['administer panelizer node advpoll defaults'] = array(
    'name' => 'administer panelizer node advpoll defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node answer content'.
  $permissions['administer panelizer node answer content'] = array(
    'name' => 'administer panelizer node answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node answer context'.
  $permissions['administer panelizer node answer context'] = array(
    'name' => 'administer panelizer node answer context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node answer layout'.
  $permissions['administer panelizer node answer layout'] = array(
    'name' => 'administer panelizer node answer layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node answer overview'.
  $permissions['administer panelizer node answer overview'] = array(
    'name' => 'administer panelizer node answer overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node answer settings'.
  $permissions['administer panelizer node answer settings'] = array(
    'name' => 'administer panelizer node answer settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest choice'.
  $permissions['administer panelizer node contest choice'] = array(
    'name' => 'administer panelizer node contest choice',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest_entry choice'.
  $permissions['administer panelizer node contest_entry choice'] = array(
    'name' => 'administer panelizer node contest_entry choice',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest_entry content'.
  $permissions['administer panelizer node contest_entry content'] = array(
    'name' => 'administer panelizer node contest_entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest_entry context'.
  $permissions['administer panelizer node contest_entry context'] = array(
    'name' => 'administer panelizer node contest_entry context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest_entry layout'.
  $permissions['administer panelizer node contest_entry layout'] = array(
    'name' => 'administer panelizer node contest_entry layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest_entry overview'.
  $permissions['administer panelizer node contest_entry overview'] = array(
    'name' => 'administer panelizer node contest_entry overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node contest_entry settings'.
  $permissions['administer panelizer node contest_entry settings'] = array(
    'name' => 'administer panelizer node contest_entry settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event content'.
  $permissions['administer panelizer node event content'] = array(
    'name' => 'administer panelizer node event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event context'.
  $permissions['administer panelizer node event context'] = array(
    'name' => 'administer panelizer node event context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event defaults'.
  $permissions['administer panelizer node event defaults'] = array(
    'name' => 'administer panelizer node event defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event layout'.
  $permissions['administer panelizer node event layout'] = array(
    'name' => 'administer panelizer node event layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event overview'.
  $permissions['administer panelizer node event overview'] = array(
    'name' => 'administer panelizer node event overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event settings'.
  $permissions['administer panelizer node event settings'] = array(
    'name' => 'administer panelizer node event settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq_topic choice'.
  $permissions['administer panelizer node faq_topic choice'] = array(
    'name' => 'administer panelizer node faq_topic choice',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq_topic content'.
  $permissions['administer panelizer node faq_topic content'] = array(
    'name' => 'administer panelizer node faq_topic content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq_topic context'.
  $permissions['administer panelizer node faq_topic context'] = array(
    'name' => 'administer panelizer node faq_topic context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq_topic defaults'.
  $permissions['administer panelizer node faq_topic defaults'] = array(
    'name' => 'administer panelizer node faq_topic defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq_topic layout'.
  $permissions['administer panelizer node faq_topic layout'] = array(
    'name' => 'administer panelizer node faq_topic layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq_topic overview'.
  $permissions['administer panelizer node faq_topic overview'] = array(
    'name' => 'administer panelizer node faq_topic overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faq_topic settings'.
  $permissions['administer panelizer node faq_topic settings'] = array(
    'name' => 'administer panelizer node faq_topic settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery content'.
  $permissions['administer panelizer node gallery content'] = array(
    'name' => 'administer panelizer node gallery content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery context'.
  $permissions['administer panelizer node gallery context'] = array(
    'name' => 'administer panelizer node gallery context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery defaults'.
  $permissions['administer panelizer node gallery defaults'] = array(
    'name' => 'administer panelizer node gallery defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery layout'.
  $permissions['administer panelizer node gallery layout'] = array(
    'name' => 'administer panelizer node gallery layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery overview'.
  $permissions['administer panelizer node gallery overview'] = array(
    'name' => 'administer panelizer node gallery overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery settings'.
  $permissions['administer panelizer node gallery settings'] = array(
    'name' => 'administer panelizer node gallery settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node imagex_news content'.
  $permissions['administer panelizer node imagex_news content'] = array(
    'name' => 'administer panelizer node imagex_news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node imagex_news context'.
  $permissions['administer panelizer node imagex_news context'] = array(
    'name' => 'administer panelizer node imagex_news context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node imagex_news defaults'.
  $permissions['administer panelizer node imagex_news defaults'] = array(
    'name' => 'administer panelizer node imagex_news defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node imagex_news layout'.
  $permissions['administer panelizer node imagex_news layout'] = array(
    'name' => 'administer panelizer node imagex_news layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node imagex_news overview'.
  $permissions['administer panelizer node imagex_news overview'] = array(
    'name' => 'administer panelizer node imagex_news overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node imagex_news settings'.
  $permissions['administer panelizer node imagex_news settings'] = array(
    'name' => 'administer panelizer node imagex_news settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landing_page choice'.
  $permissions['administer panelizer node landing_page choice'] = array(
    'name' => 'administer panelizer node landing_page choice',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landing_page content'.
  $permissions['administer panelizer node landing_page content'] = array(
    'name' => 'administer panelizer node landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landing_page context'.
  $permissions['administer panelizer node landing_page context'] = array(
    'name' => 'administer panelizer node landing_page context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landing_page defaults'.
  $permissions['administer panelizer node landing_page defaults'] = array(
    'name' => 'administer panelizer node landing_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landing_page layout'.
  $permissions['administer panelizer node landing_page layout'] = array(
    'name' => 'administer panelizer node landing_page layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landing_page overview'.
  $permissions['administer panelizer node landing_page overview'] = array(
    'name' => 'administer panelizer node landing_page overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node landing_page settings'.
  $permissions['administer panelizer node landing_page settings'] = array(
    'name' => 'administer panelizer node landing_page settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page choice'.
  $permissions['administer panelizer node page choice'] = array(
    'name' => 'administer panelizer node page choice',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node question content'.
  $permissions['administer panelizer node question content'] = array(
    'name' => 'administer panelizer node question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node question context'.
  $permissions['administer panelizer node question context'] = array(
    'name' => 'administer panelizer node question context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node question defaults'.
  $permissions['administer panelizer node question defaults'] = array(
    'name' => 'administer panelizer node question defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node question layout'.
  $permissions['administer panelizer node question layout'] = array(
    'name' => 'administer panelizer node question layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node question overview'.
  $permissions['administer panelizer node question overview'] = array(
    'name' => 'administer panelizer node question overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node question settings'.
  $permissions['administer panelizer node question settings'] = array(
    'name' => 'administer panelizer node question settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user content'.
  $permissions['administer panelizer user user content'] = array(
    'name' => 'administer panelizer user user content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user context'.
  $permissions['administer panelizer user user context'] = array(
    'name' => 'administer panelizer user user context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user layout'.
  $permissions['administer panelizer user user layout'] = array(
    'name' => 'administer panelizer user user layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user overview'.
  $permissions['administer panelizer user user overview'] = array(
    'name' => 'administer panelizer user user overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user settings'.
  $permissions['administer panelizer user user settings'] = array(
    'name' => 'administer panelizer user user settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer radioactivity'.
  $permissions['administer radioactivity'] = array(
    'name' => 'administer radioactivity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'radioactivity',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'create directory content'.
  $permissions['create directory content'] = array(
    'name' => 'create directory content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_assignment_user_notify'.
  $permissions['create field_assignment_user_notify'] = array(
    'name' => 'create field_assignment_user_notify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contest_entry_contest'.
  $permissions['create field_contest_entry_contest'] = array(
    'name' => 'create field_contest_entry_contest',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contest_entry_status'.
  $permissions['create field_contest_entry_status'] = array(
    'name' => 'create field_contest_entry_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_linux_user_tags'.
  $permissions['create field_linux_user_tags'] = array(
    'name' => 'create field_linux_user_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gallery content'.
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create manual content'.
  $permissions['create manual content'] = array(
    'name' => 'create manual content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create question content'.
  $permissions['create question content'] = array(
    'name' => 'create question content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create whitepaper content'.
  $permissions['create whitepaper content'] = array(
    'name' => 'create whitepaper content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gallery content'.
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any manual content'.
  $permissions['delete any manual content'] = array(
    'name' => 'delete any manual content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any question content'.
  $permissions['delete any question content'] = array(
    'name' => 'delete any question content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any whitepaper content'.
  $permissions['delete any whitepaper content'] = array(
    'name' => 'delete any whitepaper content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gallery content'.
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own manual content'.
  $permissions['delete own manual content'] = array(
    'name' => 'delete own manual content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own question content'.
  $permissions['delete own question content'] = array(
    'name' => 'delete own question content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete own whitepaper content'.
  $permissions['delete own whitepaper content'] = array(
    'name' => 'delete own whitepaper content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in directory_sections'.
  $permissions['delete terms in directory_sections'] = array(
    'name' => 'delete terms in directory_sections',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in distributions'.
  $permissions['delete terms in distributions'] = array(
    'name' => 'delete terms in distributions',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in event_category'.
  $permissions['delete terms in event_category'] = array(
    'name' => 'delete terms in event_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in forums'.
  $permissions['delete terms in forums'] = array(
    'name' => 'delete terms in forums',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in gallery_category'.
  $permissions['delete terms in gallery_category'] = array(
    'name' => 'delete terms in gallery_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in imagex_blog_category'.
  $permissions['delete terms in imagex_blog_category'] = array(
    'name' => 'delete terms in imagex_blog_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in linux_sections'.
  $permissions['delete terms in linux_sections'] = array(
    'name' => 'delete terms in linux_sections',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in linux_user_tags'.
  $permissions['delete terms in linux_user_tags'] = array(
    'name' => 'delete terms in linux_user_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in manual_section'.
  $permissions['delete terms in manual_section'] = array(
    'name' => 'delete terms in manual_section',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in manual_sub_sections'.
  $permissions['delete terms in manual_sub_sections'] = array(
    'name' => 'delete terms in manual_sub_sections',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_folders'.
  $permissions['delete terms in media_folders'] = array(
    'name' => 'delete terms in media_folders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in question_category'.
  $permissions['delete terms in question_category'] = array(
    'name' => 'delete terms in question_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in wiki_topics'.
  $permissions['delete terms in wiki_topics'] = array(
    'name' => 'delete terms in wiki_topics',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in workbench_section'.
  $permissions['delete terms in workbench_section'] = array(
    'name' => 'delete terms in workbench_section',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gallery content'.
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any manual content'.
  $permissions['edit any manual content'] = array(
    'name' => 'edit any manual content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any question content'.
  $permissions['edit any question content'] = array(
    'name' => 'edit any question content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any whitepaper content'.
  $permissions['edit any whitepaper content'] = array(
    'name' => 'edit any whitepaper content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_assignment_user_notify'.
  $permissions['edit field_assignment_user_notify'] = array(
    'name' => 'edit field_assignment_user_notify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contest_entry_contest'.
  $permissions['edit field_contest_entry_contest'] = array(
    'name' => 'edit field_contest_entry_contest',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contest_entry_status'.
  $permissions['edit field_contest_entry_status'] = array(
    'name' => 'edit field_contest_entry_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_linux_user_tags'.
  $permissions['edit field_linux_user_tags'] = array(
    'name' => 'edit field_linux_user_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own field_assignment_user_notify'.
  $permissions['edit own field_assignment_user_notify'] = array(
    'name' => 'edit own field_assignment_user_notify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contest_entry_contest'.
  $permissions['edit own field_contest_entry_contest'] = array(
    'name' => 'edit own field_contest_entry_contest',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contest_entry_status'.
  $permissions['edit own field_contest_entry_status'] = array(
    'name' => 'edit own field_contest_entry_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_linux_user_tags'.
  $permissions['edit own field_linux_user_tags'] = array(
    'name' => 'edit own field_linux_user_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gallery content'.
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own manual content'.
  $permissions['edit own manual content'] = array(
    'name' => 'edit own manual content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own question content'.
  $permissions['edit own question content'] = array(
    'name' => 'edit own question content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit own whitepaper content'.
  $permissions['edit own whitepaper content'] = array(
    'name' => 'edit own whitepaper content',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit radioactivity'.
  $permissions['edit radioactivity'] = array(
    'name' => 'edit radioactivity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'radioactivity',
  );

  // Exported permission: 'edit terms in directory_sections'.
  $permissions['edit terms in directory_sections'] = array(
    'name' => 'edit terms in directory_sections',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in distributions'.
  $permissions['edit terms in distributions'] = array(
    'name' => 'edit terms in distributions',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in event_category'.
  $permissions['edit terms in event_category'] = array(
    'name' => 'edit terms in event_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in forums'.
  $permissions['edit terms in forums'] = array(
    'name' => 'edit terms in forums',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in gallery_category'.
  $permissions['edit terms in gallery_category'] = array(
    'name' => 'edit terms in gallery_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in imagex_blog_category'.
  $permissions['edit terms in imagex_blog_category'] = array(
    'name' => 'edit terms in imagex_blog_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in linux_sections'.
  $permissions['edit terms in linux_sections'] = array(
    'name' => 'edit terms in linux_sections',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in linux_user_tags'.
  $permissions['edit terms in linux_user_tags'] = array(
    'name' => 'edit terms in linux_user_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in manual_section'.
  $permissions['edit terms in manual_section'] = array(
    'name' => 'edit terms in manual_section',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in manual_sub_sections'.
  $permissions['edit terms in manual_sub_sections'] = array(
    'name' => 'edit terms in manual_sub_sections',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_folders'.
  $permissions['edit terms in media_folders'] = array(
    'name' => 'edit terms in media_folders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in question_category'.
  $permissions['edit terms in question_category'] = array(
    'name' => 'edit terms in question_category',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in wiki_topics'.
  $permissions['edit terms in wiki_topics'] = array(
    'name' => 'edit terms in wiki_topics',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in workbench_section'.
  $permissions['edit terms in workbench_section'] = array(
    'name' => 'edit terms in workbench_section',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flag imagex_node_like'.
  $permissions['flag imagex_node_like'] = array(
    'name' => 'flag imagex_node_like',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag inappropriate_content_comment'.
  $permissions['flag inappropriate_content_comment'] = array(
    'name' => 'flag inappropriate_content_comment',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag inappropriate_content_node'.
  $permissions['flag inappropriate_content_node'] = array(
    'name' => 'flag inappropriate_content_node',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'override default scheduler time'.
  $permissions['override default scheduler time'] = array(
    'name' => 'override default scheduler time',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler_workbench',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'see coveritlive ajax refresh'.
  $permissions['see coveritlive ajax refresh'] = array(
    'name' => 'see coveritlive ajax refresh',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'linux_coveritlive',
  );

  // Exported permission: 'show format selection for assignment'.
  $permissions['show format selection for assignment'] = array(
    'name' => 'show format selection for assignment',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for bean'.
  $permissions['show format selection for bean'] = array(
    'name' => 'show format selection for bean',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for flagging'.
  $permissions['show format selection for flagging'] = array(
    'name' => 'show format selection for flagging',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for og_membership'.
  $permissions['show format selection for og_membership'] = array(
    'name' => 'show format selection for og_membership',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for og_membership_type'.
  $permissions['show format selection for og_membership_type'] = array(
    'name' => 'show format selection for og_membership_type',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'unflag imagex_node_like'.
  $permissions['unflag imagex_node_like'] = array(
    'name' => 'unflag imagex_node_like',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag inappropriate_content_comment'.
  $permissions['unflag inappropriate_content_comment'] = array(
    'name' => 'unflag inappropriate_content_comment',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag inappropriate_content_node'.
  $permissions['unflag inappropriate_content_node'] = array(
    'name' => 'unflag inappropriate_content_node',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use Rules component rules_imagex_contest_entry_as_finalist'.
  $permissions['use Rules component rules_imagex_contest_entry_as_finalist'] = array(
    'name' => 'use Rules component rules_imagex_contest_entry_as_finalist',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_imagex_contest_entry_as_winner'.
  $permissions['use Rules component rules_imagex_contest_entry_as_winner'] = array(
    'name' => 'use Rules component rules_imagex_contest_entry_as_winner',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_imagex_contest_entry_vote_single'.
  $permissions['use Rules component rules_imagex_contest_entry_vote_single'] = array(
    'name' => 'use Rules component rules_imagex_contest_entry_vote_single',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use search_api_sorts'.
  $permissions['use search_api_sorts'] = array(
    'name' => 'use search_api_sorts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_sorts',
  );

  // Exported permission: 'use text format xbbcode'.
  $permissions['use text format xbbcode'] = array(
    'name' => 'use text format xbbcode',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view all flickr photos'.
  $permissions['view all flickr photos'] = array(
    'name' => 'view all flickr photos',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'flickr',
  );

  // Exported permission: 'view field_assignment_user_notify'.
  $permissions['view field_assignment_user_notify'] = array(
    'name' => 'view field_assignment_user_notify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contest_entry_contest'.
  $permissions['view field_contest_entry_contest'] = array(
    'name' => 'view field_contest_entry_contest',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contest_entry_status'.
  $permissions['view field_contest_entry_status'] = array(
    'name' => 'view field_contest_entry_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_linux_user_tags'.
  $permissions['view field_linux_user_tags'] = array(
    'name' => 'view field_linux_user_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view forum statistics'.
  $permissions['view forum statistics'] = array(
    'name' => 'view forum statistics',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'view last edited notice'.
  $permissions['view last edited notice'] = array(
    'name' => 'view last edited notice',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'administrator' => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  // Exported permission: 'view liked counter'.
  $permissions['view liked counter'] = array(
    'name' => 'view liked counter',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'imagex_content_likes',
  );

  // Exported permission: 'view own field_assignment_user_notify'.
  $permissions['view own field_assignment_user_notify'] = array(
    'name' => 'view own field_assignment_user_notify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contest_entry_contest'.
  $permissions['view own field_contest_entry_contest'] = array(
    'name' => 'view own field_contest_entry_contest',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contest_entry_status'.
  $permissions['view own field_contest_entry_status'] = array(
    'name' => 'view own field_contest_entry_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_linux_user_tags'.
  $permissions['view own field_linux_user_tags'] = array(
    'name' => 'view own field_linux_user_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own flickr photos'.
  $permissions['view own flickr photos'] = array(
    'name' => 'view own flickr photos',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'flickr',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view rate results page'.
  $permissions['view rate results page'] = array(
    'name' => 'view rate results page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rate',
  );

  // Exported permission: 'view who liked this node tab'.
  $permissions['view who liked this node tab'] = array(
    'name' => 'view who liked this node tab',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'imagex_content_likes',
  );

  features_alter_code('user_permission', $permissions);

  return $permissions;
}

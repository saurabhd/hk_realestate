<?php 


$options['db_type'] = 'mysql';
$options['db_host'] = 'localhost';
$options['db_port'] = '3306';
$options['db_passwd'] = 'nr4VLGtRhM';
$options['db_name'] = 'hkaddweb7431pr_0';
$options['db_user'] = 'hkaddweb7431pr_0';
$options['packages'] = array (
  'platforms' => 
  array (
    'drupal' => 
    array (
      'short_name' => 'drupal',
      'version' => '7.43',
      'description' => 'This platform is running Drupal 7.43',
    ),
  ),
  'profiles' => 
  array (
    'hk2' => 
    array (
      'name' => 'hk2',
      'filename' => './profiles/hk2/hk2.profile',
      'info' => 
      array (
        'name' => 'hk2',
        'description' => 'Install Profile for Herbert & Kohlmeyer',
        'exclusive' => '1',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'hk2.profile',
        ),
        'dependencies' => 
        array (
          0 => 'admin_menu',
          1 => 'admin_views',
          2 => 'adminimal_admin_menu',
          3 => 'block_class',
          4 => 'module_filter',
          5 => 'fpa',
          6 => 'dhtml_menu',
          7 => 'better_exposed_filters',
          8 => 'ctools',
          9 => 'views_content',
          10 => 'block',
          11 => 'contextual',
          12 => 'field',
          13 => 'field_sql_storage',
          14 => 'field_ui',
          15 => 'file',
          16 => 'filter',
          17 => 'help',
          18 => 'image',
          19 => 'list',
          20 => 'locale',
          21 => 'menu',
          22 => 'node',
          23 => 'number',
          24 => 'options',
          25 => 'path',
          26 => 'system',
          27 => 'taxonomy',
          28 => 'taxonomy_manager',
          29 => 'term_merge',
          30 => 'text',
          31 => 'translation',
          32 => 'user',
          33 => 'ds',
          34 => 'ds_extras',
          35 => 'ds_forms',
          36 => 'ds_ui',
          37 => 'feeds',
          38 => 'feeds_tamper',
          39 => 'feeds_tamper_ui',
          40 => 'feeds_ui',
          41 => 'addressfield',
          42 => 'computed_field',
          43 => 'field_conditional_state',
          44 => 'email',
          45 => 'entityreference',
          46 => 'references_dialog',
          47 => 'field_group',
          48 => 'geofield',
          49 => 'name',
          50 => 'phone',
          51 => 'title',
          52 => 'flag',
          53 => 'flexslider',
          54 => 'flexslider_fields',
          55 => 'flexslider_views',
          56 => 'manualcrop',
          57 => 'smartcrop',
          58 => 'leaflet',
          59 => 'leaflet_mapbox',
          60 => 'leaflet_markercluster',
          61 => 'ip_geoloc',
          62 => 'file_entity',
          63 => 'media',
          64 => 'plupload',
          65 => 'translation_helpers',
          66 => 'entity_translation',
          67 => 'entity_translation_i18n_menu',
          68 => 'i18n',
          69 => 'i18n_menu',
          70 => 'i18n_path',
          71 => 'i18n_translation',
          72 => 'i18n_variable',
          73 => 'i18nviews',
          74 => 'localize_fields',
          75 => 'facetapi_i18n',
          76 => 'breakpoints',
          77 => 'colorbox',
          78 => 'diff',
          79 => 'editableviews',
          80 => 'entity',
          81 => 'geocoder',
          82 => 'geophp',
          83 => 'hreflang',
          84 => 'icon',
          85 => 'icon_menu',
          86 => 'fontello',
          87 => 'job_scheduler',
          88 => 'libraries',
          89 => 'linkit',
          90 => 'mailsystem',
          91 => 'mandrill',
          92 => 'menu_block',
          93 => 'rules',
          94 => 'entity_rules',
          95 => 'strongarm',
          96 => 'token',
          97 => 'globalredirect',
          98 => 'pathauto',
          99 => 'redirect',
          100 => 'robotstxt',
          101 => 'transliteration',
          102 => 'entitycache',
          103 => 'cdn',
          104 => 'httprl',
          105 => 'flexslider_picture',
          106 => 'picture',
          107 => 'search_api',
          108 => 'search_api_facetapi',
          109 => 'search_api_solr',
          110 => 'search_api_views',
          111 => 'content_menu',
          112 => 'jquery_update',
          113 => 'wysiwyg',
          114 => 'variable',
          115 => 'views',
          116 => 'views_accelerator',
          117 => 'views_bulk_operations',
          118 => 'views_cache_bully',
          119 => 'views_flag_refresh',
          120 => 'views_ui',
          121 => 'workflow',
          122 => 'workflowfield',
          123 => 'xmlsitemap',
          124 => 'hk_leaflet',
          125 => 'hk_flexslider',
          126 => 'hk_mergimg',
          127 => 'features',
          128 => 'hk_ct',
          129 => 'hk_search',
          130 => 'hk_translations',
          131 => 'hk_rules',
          132 => 'hk_expose',
        ),
        'version' => NULL,
        'php' => '5.2.4',
        'languages' => 
        array (
          0 => 'en',
        ),
      ),
      'version' => '7.43',
      'status' => 1,
    ),
  ),
  'modules' => 
  array (
    'aggregator' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/aggregator/aggregator.module',
      'name' => 'aggregator',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Aggregator',
        'description' => 'Aggregates syndicated content (RSS, RDF, and Atom feeds).',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'aggregator.test',
        ),
        'configure' => 'admin/config/services/aggregator/settings',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'aggregator.css',
          ),
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'block' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/block/block.module',
      'name' => 'block',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7009',
      'weight' => '-5',
      'info' => 
      array (
        'name' => 'Block',
        'description' => 'Controls the visual building blocks a page is constructed with. Blocks are boxes of content rendered into an area, or region, of a web page.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'block.test',
        ),
        'configure' => 'admin/structure/block',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'blog' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/blog/blog.module',
      'name' => 'blog',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Blog',
        'description' => 'Enables multi-user blogs.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'blog.test',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'book' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/book/book.module',
      'name' => 'book',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Book',
        'description' => 'Allows users to create and organize related content in an outline.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'book.test',
        ),
        'configure' => 'admin/content/book/settings',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'book.css',
          ),
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'color' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/color/color.module',
      'name' => 'color',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Color',
        'description' => 'Allows administrators to change the color scheme of compatible themes.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'color.test',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'comment' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/comment/comment.module',
      'name' => 'comment',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Comment',
        'description' => 'Allows users to comment on and discuss published content.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'text',
        ),
        'files' => 
        array (
          0 => 'comment.module',
          1 => 'comment.test',
        ),
        'configure' => 'admin/content/comment',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'comment.css',
          ),
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'contact' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/contact/contact.module',
      'name' => 'contact',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Contact',
        'description' => 'Enables the use of both personal and site-wide contact forms.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'contact.test',
        ),
        'configure' => 'admin/structure/contact',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'contextual' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/contextual/contextual.module',
      'name' => 'contextual',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Contextual links',
        'description' => 'Provides contextual links to perform actions related to elements on a page.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'contextual.test',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'dashboard' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/dashboard/dashboard.module',
      'name' => 'dashboard',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Dashboard',
        'description' => 'Provides a dashboard page in the administrative interface for organizing administrative tasks and tracking information within your site.',
        'core' => '7.x',
        'package' => 'Core',
        'version' => '7.43',
        'files' => 
        array (
          0 => 'dashboard.test',
        ),
        'dependencies' => 
        array (
          0 => 'block',
        ),
        'configure' => 'admin/dashboard/customize',
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'dblog' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/dblog/dblog.module',
      'name' => 'dblog',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Database logging',
        'description' => 'Logs and records system events to the database.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'dblog.test',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'field' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/field/field.module',
      'name' => 'field',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7003',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field',
        'description' => 'Field API to add fields to entities like nodes and users.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'field.module',
          1 => 'field.attach.inc',
          2 => 'field.info.class.inc',
          3 => 'tests/field.test',
        ),
        'dependencies' => 
        array (
          0 => 'field_sql_storage',
        ),
        'required' => true,
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'theme/field.css',
          ),
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'field_sql_storage' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/field/modules/field_sql_storage/field_sql_storage.module',
      'name' => 'field_sql_storage',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field SQL storage',
        'description' => 'Stores field data in an SQL database.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'field_sql_storage.test',
        ),
        'required' => true,
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'list' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/field/modules/list/list.module',
      'name' => 'list',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'List',
        'description' => 'Defines list field types. Use with Options to create selection lists.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'options',
        ),
        'files' => 
        array (
          0 => 'tests/list.test',
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'number' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/field/modules/number/number.module',
      'name' => 'number',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Number',
        'description' => 'Defines numeric field types.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'number.test',
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'options' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/field/modules/options/options.module',
      'name' => 'options',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Options',
        'description' => 'Defines selection, check box and radio button widgets for text and numeric fields.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'options.test',
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'text' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/field/modules/text/text.module',
      'name' => 'text',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7000',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Text',
        'description' => 'Defines simple text field types.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'text.test',
        ),
        'required' => true,
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'field_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/field_ui/field_ui.module',
      'name' => 'field_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field UI',
        'description' => 'User interface for the Field API.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'field_ui.test',
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'file' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/file/file.module',
      'name' => 'file',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'File',
        'description' => 'Defines a file field type.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'tests/file.test',
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'filter' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/filter/filter.module',
      'name' => 'filter',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7010',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Filter',
        'description' => 'Filters content in preparation for display.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'filter.test',
        ),
        'required' => true,
        'configure' => 'admin/config/content/formats',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'forum' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/forum/forum.module',
      'name' => 'forum',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Forum',
        'description' => 'Provides discussion forums.',
        'dependencies' => 
        array (
          0 => 'taxonomy',
          1 => 'comment',
        ),
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'forum.test',
        ),
        'configure' => 'admin/structure/forum',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'forum.css',
          ),
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'help' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/help/help.module',
      'name' => 'help',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Help',
        'description' => 'Manages the display of online help.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'help.test',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'image' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/image/image.module',
      'name' => 'image',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7005',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Image',
        'description' => 'Provides image manipulation tools.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'file',
        ),
        'files' => 
        array (
          0 => 'image.test',
        ),
        'configure' => 'admin/config/media/image-styles',
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'locale' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/locale/locale.module',
      'name' => 'locale',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7005',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Locale',
        'description' => 'Adds language handling functionality and enables the translation of the user interface to languages other than English.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'locale.test',
        ),
        'configure' => 'admin/config/regional/language',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'menu' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/menu/menu.module',
      'name' => 'menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7003',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Menu',
        'description' => 'Allows administrators to customize the site navigation menu.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'menu.test',
        ),
        'configure' => 'admin/structure/menu',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'node' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/node/node.module',
      'name' => 'node',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7015',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node',
        'description' => 'Allows content to be submitted to the site and displayed on pages.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'node.module',
          1 => 'node.test',
        ),
        'required' => true,
        'configure' => 'admin/structure/types',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'node.css',
          ),
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'openid' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/openid/openid.module',
      'name' => 'openid',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'OpenID',
        'description' => 'Allows users to log into your site using OpenID.',
        'version' => '7.43',
        'package' => 'Core',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'openid.test',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'overlay' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/overlay/overlay.module',
      'name' => 'overlay',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Overlay',
        'description' => 'Displays the Drupal administration interface in an overlay.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'admin' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/admin/admin.module',
      'name' => 'admin',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Admin',
        'description' => 'UI helpers for Drupal admins and managers.',
        'package' => 'Administration',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'admin.admin.inc',
          1 => 'admin.install',
          2 => 'admin.module',
          3 => 'includes/admin.devel.inc',
          4 => 'includes/admin.theme.inc',
          5 => 'theme/admin-panes.tpl.php',
          6 => 'theme/admin-toolbar.tpl.php',
          7 => 'theme/theme.inc',
        ),
        'version' => '7.x-2.0-beta3',
        'project' => 'admin',
        'datestamp' => '1292541646',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta3',
    ),
    'blockcache_alter' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/blockcache_alter/blockcache_alter.module',
      'name' => 'blockcache_alter',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Block Cache Alter',
        'description' => 'Alter the cache settings per block.',
        'core' => '7.x',
        'package' => 'Performance and scalability',
        'configure' => 'admin/config/development/performance/blockcache_alter',
        'version' => '7.x-1.1-beta1+0-dev',
        'project' => 'blockcache_alter',
        'datestamp' => '1415445181',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1-beta1+0-dev',
    ),
    'boost' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/boost/boost.module',
      'name' => 'boost',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Boost',
        'description' => 'Caches generated output as a static file to be served directly from the webserver.',
        'package' => 'Performance and scalability',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'boost.module',
          1 => 'boost.admin.inc',
          2 => 'boost.blocks.inc',
        ),
        'recommends' => 
        array (
          0 => 'expire',
        ),
        'configure' => 'admin/config/system/boost',
        'version' => '7.x-1.0',
        'project' => 'boost',
        'datestamp' => '1399056528',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'boost_crawler' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/boost/boost_crawler/boost_crawler.module',
      'name' => 'boost_crawler',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Boost Crawler',
        'description' => 'Minimal crawler to regenerate the cache as pages are expired.',
        'package' => 'Performance and scalability',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'boost_crawler.module',
        ),
        'recommends' => 
        array (
          0 => 'boost',
        ),
        'dependencies' => 
        array (
          0 => 'httprl',
          1 => 'expire',
        ),
        'configure' => 'admin/config/system/boost/crawler',
        'version' => '7.x-1.0',
        'project' => 'boost',
        'datestamp' => '1399056528',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'cdn' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/cdn/cdn.module',
      'name' => 'cdn',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '7210',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CDN',
        'description' => 'Integrates your site with a CDN, through altering file URLs.',
        'core' => '7.x',
        'package' => 'Performance and scalability',
        'configure' => 'admin/config/development/cdn',
        'files' => 
        array (
          0 => 'tests/cdn.test',
        ),
        'version' => '7.x-2.7',
        'project' => 'cdn',
        'datestamp' => '1455104040',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.7',
    ),
    'config_perms' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/config_perms/config_perms.module',
      'name' => 'config_perms',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Custom Permissions',
        'description' => 'Allows additional permissions to be created and managed through an administration form.
<br /><small>Machine name: config_perms</small>',
        'core' => '7.x',
        'package' => 'Permissions',
        'configure' => 'admin/people/custom_permissions',
        'version' => '7.x-2.1',
        'project' => 'config_perms',
        'datestamp' => '1434074882',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.1',
    ),
    'css_emimage' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/css_emimage/css_emimage.module',
      'name' => 'css_emimage',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CSS Embedded Images',
        'description' => 'Replaces image URLs in CSS files with embedded images when CSS optimization is enabled.',
        'core' => '7.x',
        'package' => 'Performance and scalability',
        'configure' => 'admin/config/development/performance',
        'version' => '7.x-1.3+3-dev',
        'project' => 'css_emimage',
        'datestamp' => '1380568223',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3+3-dev',
    ),
    'display_cache' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/display_cache/display_cache.module',
      'name' => 'display_cache',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Display Cache',
        'description' => 'Provides views and panels plugins to display rendered entities from cache.',
        'package' => 'Performance',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'entity',
        ),
        'files' => 
        array (
          0 => 'tests/display_cache.test',
        ),
        'version' => '7.x-1.3',
        'project' => 'display_cache',
        'datestamp' => '1435913350',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'entitycache' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/entitycache/entitycache.module',
      'name' => 'entitycache',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7003',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity cache',
        'description' => 'Provides caching for core entities including nodes and taxonomy terms.',
        'core' => '7.x',
        'package' => 'Performance and scalability',
        'files' => 
        array (
          0 => 'includes/entitycache.entitycachecontrollerhelper.inc',
          1 => 'includes/entitycache.comment.inc',
          2 => 'includes/entitycache.defaultentitycontroller.inc',
          3 => 'includes/entitycache.node.inc',
          4 => 'includes/entitycache.taxonomy.inc',
          5 => 'includes/entitycache.user.inc',
          6 => 'entitycache.test',
        ),
        'dependencies' => 
        array (
          0 => 'system (>=7.36)',
        ),
        'version' => '7.x-1.5',
        'project' => 'entitycache',
        'datestamp' => '1445943840',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'esi' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/esi/esi.module',
      'name' => 'esi',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'ESI - Edge Side Includes',
        'description' => 'Allow Drupal components to be delivered via ESI (Edge-Side Includes).  Requires an ESI-capable proxy.',
        'package' => 'Caching',
        'recommends' => 
        array (
          0 => 'varnish',
        ),
        'core' => '7.x',
        'version' => '7.x-3.0-alpha1+21-dev',
        'project' => 'esi',
        'datestamp' => '1446759851',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0-alpha1+21-dev',
    ),
    'esi_block' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/esi/modules/esi_block/esi_block.module',
      'name' => 'esi_block',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'ESI - Block',
        'description' => 'Deliver Drupal blocks via ESI.',
        'core' => '7.x',
        'package' => 'Caching',
        'dependencies' => 
        array (
          0 => 'block',
          1 => 'esi',
        ),
        'files' => 
        array (
          0 => 'esi_block.test',
        ),
        'version' => '7.x-3.0-alpha1+21-dev',
        'project' => 'esi',
        'datestamp' => '1446759851',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0-alpha1+21-dev',
    ),
    'esi_context' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/esi/modules/esi_context/esi_context.module',
      'name' => 'esi_context',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'ESI - Context integration',
        'description' => 'Deliver context-controlled blocks via ESI.',
        'core' => '7.x',
        'package' => 'Caching',
        'dependencies' => 
        array (
          0 => 'context',
          1 => 'esi',
          2 => 'esi_block',
        ),
        'version' => '7.x-3.0-alpha1+21-dev',
        'project' => 'esi',
        'datestamp' => '1446759851',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0-alpha1+21-dev',
    ),
    'esi_panels' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/esi/modules/esi_panels/esi_panels.module',
      'name' => 'esi_panels',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'ESI - Panels',
        'description' => 'Deliver panel-panes via ESI.',
        'core' => '7.x',
        'package' => 'Caching',
        'dependencies' => 
        array (
          0 => 'panels',
          1 => 'page_manager',
          2 => 'esi',
        ),
        'version' => '7.x-3.0-alpha1+21-dev',
        'project' => 'esi',
        'datestamp' => '1446759851',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0-alpha1+21-dev',
    ),
    'expire' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/expire/expire.module',
      'name' => 'expire',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '7201',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Cache Expiration',
        'description' => 'Logic for expiring cached pages.',
        'package' => 'Performance and scalability',
        'core' => '7.x',
        'configure' => 'admin/config/system/expire',
        'files' => 
        array (
          0 => 'includes/expire.api.inc',
          1 => 'includes/expire.comment.inc',
          2 => 'includes/expire.domain.inc',
          3 => 'includes/expire.interface.inc',
          4 => 'includes/expire.menu_link.inc',
          5 => 'includes/expire.node.inc',
          6 => 'includes/expire.user.inc',
          7 => 'includes/expire.votingapi.inc',
          8 => 'includes/expire.file.inc',
        ),
        'version' => '7.x-2.0-rc4',
        'project' => 'expire',
        'datestamp' => '1414746830',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-rc4',
    ),
    'filefield_nginx_progress' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/filefield_nginx_progress/filefield_nginx_progress.module',
      'name' => 'filefield_nginx_progress',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'FileField Nginx Progress',
        'description' => 'Adds upload progress functionality for Nginx',
        'files' => 
        array (
          0 => 'filefield_nginx_progress.install',
          1 => 'filefield_nginx_progress.module',
        ),
        'dependencies' => 
        array (
          0 => 'file',
        ),
        'package' => 'Fields',
        'core' => '7.x',
        'php' => '5.2',
        'version' => '7.x-2.3+1-dev',
        'project' => 'filefield_nginx_progress',
        'datestamp' => '1380579093',
      ),
      'version' => '7.x-2.3+1-dev',
    ),
    'flood_control' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/flood_control/flood_control.module',
      'name' => 'flood_control',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Flood control',
        'description' => 'Interface for hidden flood control options.',
        'core' => '7.x',
        'configure' => 'admin/config/system/flood-control',
        'version' => '7.x-1.x-dev',
        'project' => 'flood_control',
        'datestamp' => '1380579747',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.x-dev',
    ),
    'force_password_change' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/force_password_change/force_password_change.module',
      'name' => 'force_password_change',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Force Password Change',
        'description' => 'Allows administrators to force users to change their password',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'force_password_change.install',
          1 => 'force_password_change.module',
          2 => 'force_password_change.pages.inc',
        ),
        'version' => '7.x-1.0',
        'project' => 'force_password_change',
        'datestamp' => '1449157452',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'fpa' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/fpa/fpa.module',
      'name' => 'fpa',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Fast Permissions Administration',
        'description' => 'Fast filtering on permissions administration form.',
        'core' => '7.x',
        'package' => 'Administration',
        'version' => '7.x-2.6',
        'project' => 'fpa',
        'datestamp' => '1408744435',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.6',
    ),
    'httprl' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/httprl/httprl.module',
      'name' => 'httprl',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HTTP Parallel Request Library',
        'description' => 'Send http requests out in parallel in a blocking or non-blocking manner.',
        'package' => 'Performance and scalability',
        'core' => '7.x',
        'version' => '7.x-1.14',
        'project' => 'httprl',
        'datestamp' => '1388542110',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.14',
    ),
    'js' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/js/js.module',
      'name' => 'js',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'JavaScript callback handler',
        'description' => 'A high-performance JavaScript callback handler for 3rd party modules.',
        'package' => 'Performance',
        'core' => '7.x',
        'configure' => 'admin/config/system/js',
        'version' => '7.x-1.0+5-dev',
        'project' => 'js',
        'datestamp' => '1394174606',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0+5-dev',
    ),
    'js_test' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/js/tests/js_test.module',
      'name' => 'js_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'JavaScript callback handler tests',
        'description' => 'Tests for the JS module.',
        'package' => 'Performance',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'js_test.test',
        ),
        'version' => '7.x-1.0+5-dev',
        'project' => 'js',
        'datestamp' => '1394174606',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0+5-dev',
    ),
    'login_security' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/login_security/login_security.module',
      'name' => 'login_security',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Login Security',
        'description' => 'Enable security options in the login flow of the site.',
        'files' => 
        array (
          0 => 'login_security.test',
        ),
        'core' => '7.x',
        'configure' => 'admin/config/people/login_security',
        'version' => '7.x-1.9',
        'project' => 'login_security',
        'datestamp' => '1392987818',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'nocurrent_pass' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/nocurrent_pass/nocurrent_pass.module',
      'name' => 'nocurrent_pass',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'No Current Password',
        'description' => 'Make the "current password" requirement on the user edit form optional.',
        'package' => 'Other',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'project' => 'nocurrent_pass',
        'datestamp' => '1328692247',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'panels_content_cache' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/panels_content_cache/panels_content_cache.module',
      'name' => 'panels_content_cache',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Panels Content Cache',
        'core' => '7.x',
        'package' => 'Panels',
        'description' => 'A content based caching plugin for panels. Allows panel caches to be expired based on content creation / updates.',
        'dependencies' => 
        array (
          0 => 'panels (>=3.4)',
        ),
        'version' => '7.x-1.3',
        'project' => 'panels_content_cache',
        'datestamp' => '1438997653',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'print' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/print/print.module',
      'name' => 'print',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7203',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Printer-friendly pages',
        'description' => 'Generates a printer-friendly version of Drupal pages.',
        'core' => '7.x',
        'package' => 'Printer, email and PDF versions',
        'files' => 
        array (
          0 => 'print_join_page_counter.inc',
        ),
        'dependencies' => 
        array (
          0 => 'node',
        ),
        'configure' => 'admin/config/user-interface/print',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'print_epub_phpepub' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/print/print_epub/lib_handlers/print_epub_phpepub/print_epub_phpepub.module',
      'name' => 'print_epub_phpepub',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'PHPePub library handler',
        'description' => 'EPUB generation library using PHPePub.',
        'core' => '7.x',
        'package' => 'Printer, email and PDF versions',
        'dependencies' => 
        array (
          0 => 'print_epub',
        ),
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'print_epub' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/print/print_epub/print_epub.module',
      'name' => 'print_epub',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'EPUB version',
        'description' => 'Adds the capability to export pages as EPUB. Requires an EPUB library and the respective handler module.',
        'core' => '7.x',
        'package' => 'Printer, email and PDF versions',
        'dependencies' => 
        array (
          0 => 'print',
        ),
        'configure' => 'admin/config/user-interface/print/epub',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'print_mail' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/print/print_mail/print_mail.module',
      'name' => 'print_mail',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Send by email',
        'description' => 'Provides the capability to send the web page by email',
        'core' => '7.x',
        'package' => 'Printer, email and PDF versions',
        'dependencies' => 
        array (
          0 => 'print',
        ),
        'configure' => 'admin/config/user-interface/print/email',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'print_pdf_dompdf' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/print/print_pdf/lib_handlers/print_pdf_dompdf/print_pdf_dompdf.module',
      'name' => 'print_pdf_dompdf',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'dompdf library handler',
        'description' => 'PDF generation library using dompdf.',
        'core' => '7.x',
        'package' => 'Printer, email and PDF versions',
        'dependencies' => 
        array (
          0 => 'print_pdf',
        ),
        'configure' => 'admin/config/user-interface/print/pdf/dompdf',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'print_pdf_mpdf' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/print/print_pdf/lib_handlers/print_pdf_mpdf/print_pdf_mpdf.module',
      'name' => 'print_pdf_mpdf',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'mPDF library handler',
        'description' => 'PDF generation library using mPDF.',
        'core' => '7.x',
        'package' => 'Printer, email and PDF versions',
        'dependencies' => 
        array (
          0 => 'print_pdf',
        ),
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'print_pdf_tcpdf' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/print/print_pdf/lib_handlers/print_pdf_tcpdf/print_pdf_tcpdf.module',
      'name' => 'print_pdf_tcpdf',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'TCPDF library handler',
        'description' => 'PDF generation library using TCPDF.',
        'core' => '7.x',
        'package' => 'Printer, email and PDF versions',
        'dependencies' => 
        array (
          0 => 'print_pdf',
        ),
        'files' => 
        array (
          0 => 'print_pdf_tcpdf.class.inc',
        ),
        'configure' => 'admin/config/user-interface/print/pdf/tcpdf',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'print_pdf_wkhtmltopdf' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/print/print_pdf/lib_handlers/print_pdf_wkhtmltopdf/print_pdf_wkhtmltopdf.module',
      'name' => 'print_pdf_wkhtmltopdf',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'wkhtmltopdf library handler',
        'description' => 'PDF generation library using wkhtmltopdf.',
        'core' => '7.x',
        'package' => 'Printer, email and PDF versions',
        'dependencies' => 
        array (
          0 => 'print_pdf',
        ),
        'configure' => 'admin/config/user-interface/print/pdf/wkhtmltopdf',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'print_pdf' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/print/print_pdf/print_pdf.module',
      'name' => 'print_pdf',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7205',
      'weight' => '2',
      'info' => 
      array (
        'name' => 'PDF version',
        'description' => 'Adds the capability to export pages as PDF. Requires a PDF library and the respective handler module.',
        'core' => '7.x',
        'package' => 'Printer, email and PDF versions',
        'dependencies' => 
        array (
          0 => 'print',
        ),
        'configure' => 'admin/config/user-interface/print/pdf',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'print_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/print/print_ui/print_ui.module',
      'name' => 'print_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Printer-friendly pages UI',
        'description' => 'Manages the printer-friendly versions link display conditions. Without this module, those links are not displayed.',
        'core' => '7.x',
        'package' => 'Printer, email and PDF versions',
        'dependencies' => 
        array (
          0 => 'print',
        ),
        'configure' => 'admin/config/user-interface/print/ui',
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'purge' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/purge/purge.module',
      'name' => 'purge',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Purge',
        'description' => 'Purge clears urls from reverse proxy caches like Varnish and Squid by issuing HTTP PURGE requests.',
        'package' => 'Performance and scalability',
        'core' => '7.x',
        'files ' => 
        array (
          0 => 'purge.module',
          1 => 'purge.inc',
        ),
        'configure' => 'admin/config/development/performance/purge',
        'version' => '7.x-1.7',
        'project' => 'purge',
        'datestamp' => '1430234654',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.7',
    ),
    'readonlymode' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/readonlymode/readonlymode.module',
      'name' => 'readonlymode',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Read Only Mode',
        'description' => 'This module will lock your site for any form postings.',
        'core' => '7.x',
        'package' => 'Administration',
        'configure' => 'admin/config/development/maintenance',
        'files' => 
        array (
          0 => 'readonlymode.test',
        ),
        'version' => '7.x-1.2',
        'project' => 'readonlymode',
        'datestamp' => '1402574630',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'reroute_email' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/reroute_email/reroute_email.module',
      'name' => 'reroute_email',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Reroute emails',
        'description' => 'Reroutes emails send from the site to a predefined email. Useful for test sites.',
        'package' => 'Development',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'reroute_email.test',
        ),
        'configure' => 'admin/config/development/reroute_email',
        'version' => '7.x-1.2',
        'project' => 'reroute_email',
        'datestamp' => '1414831432',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'securesite' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/securesite/securesite.module',
      'name' => 'securesite',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Secure Site',
        'description' => 'Enables HTTP Auth security or an HTML form to restrict site access.',
        'core' => '7.x',
        'configure' => 'admin/config/system/securesite',
        'files' => 
        array (
          0 => 'securesite.test',
          1 => 'securesite.inc',
        ),
        'version' => '7.x-2.0-beta3',
        'project' => 'securesite',
        'datestamp' => '1428145089',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta3',
    ),
    'session_expire' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/session_expire/session_expire.module',
      'name' => 'session_expire',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Session Expire',
        'description' => 'Expires rows from the session table older than a certain time.',
        'core' => '7.x',
        'configure' => 'admin/config/system/session_expire',
        'files' => 
        array (
          0 => 'session_expire.module',
        ),
        'version' => '7.x-1.0-alpha1+7-dev',
        'project' => 'session_expire',
        'datestamp' => '1417209266',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-alpha1+7-dev',
    ),
    'site_verify' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/site_verify/site_verify.module',
      'name' => 'site_verify',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Site Verification',
        'description' => 'Verifies ownership of a site for use with search engines.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'site_verify.module',
          1 => 'site_verify.admin.inc',
          2 => 'site_verify.install',
          3 => 'site_verify.test',
        ),
        'configure' => 'admin/config/search/verifications',
        'version' => '7.x-1.1',
        'project' => 'site_verify',
        'datestamp' => '1395656959',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1',
    ),
    'speedy' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/speedy/speedy.module',
      'name' => 'speedy',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Speedy',
        'description' => 'Tools to improve the front end performance of your site.',
        'core' => '7.x',
        'configure' => 'admin/config/development/performance',
        'version' => '7.x-1.23',
        'project' => 'speedy',
        'datestamp' => '1456348337',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.23',
    ),
    'taxonomy_edge' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/taxonomy_edge/taxonomy_edge.module',
      'name' => 'taxonomy_edge',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Taxonomy Edge',
        'description' => 'Edge lists for taxonomies',
        'package' => 'Taxonomy',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'taxonomy',
        ),
        'configure' => 'admin/structure/taxonomy/edge',
        'files' => 
        array (
          0 => 'tests/tree.test',
          1 => 'tests/unit.test',
        ),
        'version' => '7.x-1.9',
        'project' => 'taxonomy_edge',
        'datestamp' => '1409109835',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'views_taxonomy_edge' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/taxonomy_edge/views_taxonomy_edge/views_taxonomy_edge.module',
      'name' => 'views_taxonomy_edge',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Taxonomy Edge',
        'description' => 'Views for taxonomies using Taxonomy Edge',
        'package' => 'Views',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'taxonomy_edge',
          1 => 'views',
        ),
        'files' => 
        array (
          0 => 'handlers/views_handler_argument_term_edge_node_tid_depth.inc',
          1 => 'handlers/views_handler_argument_term_edge_node_tid_depth_modifier.inc',
          2 => 'handlers/views_handler_filter_term_edge_node_tid_depth.inc',
          3 => 'handlers/views_join_term_edge.inc',
          4 => 'handlers/views_handler_sort_term_edge_hierarchy.inc',
        ),
        'version' => '7.x-1.9',
        'project' => 'taxonomy_edge',
        'datestamp' => '1409109835',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'textile' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/textile/textile.module',
      'name' => 'textile',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Textile',
        'description' => 'Allows content to be submitted using Textile, a simple, plain text syntax that is filtered into valid XHTML.',
        'package' => 'Input filters',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'vars (> 1.0)',
        ),
        'version' => '7.x-2.0-rc11',
        'project' => 'textile',
        'datestamp' => '1319231138',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-rc11',
    ),
    'variable_clean' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/variable_clean/variable_clean.module',
      'name' => 'variable_clean',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Variable Cleanup',
        'description' => 'Allows you to remove variables not currently used.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'variable_clean.module',
          1 => 'variable_clean.test',
        ),
        'version' => '7.x-1.x-dev',
        'project' => 'variable_clean',
        'datestamp' => '1382151358',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.x-dev',
    ),
    'vars' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/vars/vars.module',
      'name' => 'vars',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Variable API',
        'description' => 'Implements an API to handle persistent variables.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'vars.classes.inc',
          1 => 'tests/vars.test',
        ),
        'version' => '7.x-2.0-alpha10',
        'project' => 'vars',
        'datestamp' => '1318969538',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-alpha10',
    ),
    'views404' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/views404/views404.module',
      'name' => 'views404',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views 404',
        'description' => 'Return 404 if the path doesn\'t match the view path.',
        'package' => 'Views',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'version' => '7.x-1.0-beta1',
        'project' => 'views404',
        'datestamp' => '1418590460',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta1',
    ),
    'views_accelerator' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/views_accelerator/views_accelerator.module',
      'name' => 'views_accelerator',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '-10',
      'info' => 
      array (
        'name' => 'Views Accelerator',
        'description' => 'Performance booster for views that are receptive to render optimisations.',
        'core' => '7.x',
        'configure' => 'admin/config/system/views-accelerator',
        'package' => 'Views',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'files' => 
        array (
          0 => 'views/plugins/views_plugin_cache_none_accelerated.inc',
          1 => 'views/plugins/views_plugin_cache_none_debug.inc',
        ),
        'version' => '7.x-1.0-beta1',
        'project' => 'views_accelerator',
        'datestamp' => '1415076828',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta1',
    ),
    'views_cache_bully' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/views_cache_bully/views_cache_bully.module',
      'name' => 'views_cache_bully',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Cache Bully',
        'description' => 'Forcibily cache all views, come hell or high water.',
        'core' => '7.x',
        'package' => 'views',
        'files' => 
        array (
          0 => 'views_cache_bully.views.inc',
        ),
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'version' => '7.x-3.1',
        'project' => 'views_cache_bully',
        'datestamp' => '1389886710',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.1',
    ),
    'views_content_cache' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/o_contrib_seven/views_content_cache/views_content_cache.module',
      'name' => 'views_content_cache',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Content Cache',
        'description' => 'Provides a views cache plugin based on content type changes.',
        'package' => 'Views',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'views',
          1 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'plugins/views_content_cache/base.inc',
          1 => 'plugins/views_content_cache/comment.inc',
          2 => 'plugins/views_content_cache/node.inc',
          3 => 'plugins/views_content_cache/node_only.inc',
          4 => 'plugins/views_content_cache/og.inc',
          5 => 'plugins/views_content_cache/votingapi.inc',
          6 => 'views/views_content_cache_plugin_cache.inc',
          7 => 'tests/views_content_cache.test',
        ),
        'version' => '7.x-3.0-alpha3',
        'project' => 'views_content_cache',
        'datestamp' => '1383658110',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0-alpha3',
    ),
    'path' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/path/path.module',
      'name' => 'path',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Path',
        'description' => 'Allows users to rename URLs.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'path.test',
        ),
        'configure' => 'admin/config/search/path',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'php' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/php/php.module',
      'name' => 'php',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'PHP filter',
        'description' => 'Allows embedded PHP code/snippets to be evaluated.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'php.test',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'poll' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/poll/poll.module',
      'name' => 'poll',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Poll',
        'description' => 'Allows your site to capture votes on different topics in the form of multiple choice questions.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'poll.test',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'poll.css',
          ),
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'rdf' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/rdf/rdf.module',
      'name' => 'rdf',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'RDF',
        'description' => 'Enriches your content with metadata to let other applications (e.g. search engines, aggregators) better understand its relationships and attributes.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'rdf.test',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'search' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/search/search.module',
      'name' => 'search',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7000',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search',
        'description' => 'Enables site-wide keyword searching.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'search.extender.inc',
          1 => 'search.test',
        ),
        'configure' => 'admin/config/search/settings',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'search.css',
          ),
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'shortcut' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/shortcut/shortcut.module',
      'name' => 'shortcut',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Shortcut',
        'description' => 'Allows users to manage customizable lists of shortcut links.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'shortcut.test',
        ),
        'configure' => 'admin/config/user-interface/shortcut',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'simpletest' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/simpletest/simpletest.module',
      'name' => 'simpletest',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Testing',
        'description' => 'Provides a framework for unit and functional testing.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'simpletest.test',
          1 => 'drupal_web_test_case.php',
          2 => 'tests/actions.test',
          3 => 'tests/ajax.test',
          4 => 'tests/batch.test',
          5 => 'tests/boot.test',
          6 => 'tests/bootstrap.test',
          7 => 'tests/cache.test',
          8 => 'tests/common.test',
          9 => 'tests/database_test.test',
          10 => 'tests/entity_crud.test',
          11 => 'tests/entity_crud_hook_test.test',
          12 => 'tests/entity_query.test',
          13 => 'tests/error.test',
          14 => 'tests/file.test',
          15 => 'tests/filetransfer.test',
          16 => 'tests/form.test',
          17 => 'tests/graph.test',
          18 => 'tests/image.test',
          19 => 'tests/lock.test',
          20 => 'tests/mail.test',
          21 => 'tests/menu.test',
          22 => 'tests/module.test',
          23 => 'tests/pager.test',
          24 => 'tests/password.test',
          25 => 'tests/path.test',
          26 => 'tests/registry.test',
          27 => 'tests/schema.test',
          28 => 'tests/session.test',
          29 => 'tests/tablesort.test',
          30 => 'tests/theme.test',
          31 => 'tests/unicode.test',
          32 => 'tests/update.test',
          33 => 'tests/xmlrpc.test',
          34 => 'tests/upgrade/upgrade.test',
          35 => 'tests/upgrade/upgrade.comment.test',
          36 => 'tests/upgrade/upgrade.filter.test',
          37 => 'tests/upgrade/upgrade.forum.test',
          38 => 'tests/upgrade/upgrade.locale.test',
          39 => 'tests/upgrade/upgrade.menu.test',
          40 => 'tests/upgrade/upgrade.node.test',
          41 => 'tests/upgrade/upgrade.taxonomy.test',
          42 => 'tests/upgrade/upgrade.trigger.test',
          43 => 'tests/upgrade/upgrade.translatable.test',
          44 => 'tests/upgrade/upgrade.upload.test',
          45 => 'tests/upgrade/upgrade.user.test',
          46 => 'tests/upgrade/update.aggregator.test',
          47 => 'tests/upgrade/update.trigger.test',
          48 => 'tests/upgrade/update.field.test',
          49 => 'tests/upgrade/update.user.test',
        ),
        'configure' => 'admin/config/development/testing/settings',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'statistics' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/statistics/statistics.module',
      'name' => 'statistics',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Statistics',
        'description' => 'Logs access statistics for your site.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'statistics.test',
        ),
        'configure' => 'admin/config/system/statistics',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'syslog' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/syslog/syslog.module',
      'name' => 'syslog',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Syslog',
        'description' => 'Logs and records system events to syslog.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'syslog.test',
        ),
        'configure' => 'admin/config/development/logging',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'system' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/system/system.module',
      'name' => 'system',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7080',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'System',
        'description' => 'Handles general site configuration for administrators.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'system.archiver.inc',
          1 => 'system.mail.inc',
          2 => 'system.queue.inc',
          3 => 'system.tar.inc',
          4 => 'system.updater.inc',
          5 => 'system.test',
        ),
        'required' => true,
        'configure' => 'admin/config/system',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'taxonomy' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/taxonomy/taxonomy.module',
      'name' => 'taxonomy',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7011',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Taxonomy',
        'description' => 'Enables the categorization of content.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'options',
        ),
        'files' => 
        array (
          0 => 'taxonomy.module',
          1 => 'taxonomy.test',
        ),
        'configure' => 'admin/structure/taxonomy',
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'toolbar' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/toolbar/toolbar.module',
      'name' => 'toolbar',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Toolbar',
        'description' => 'Provides a toolbar that shows the top-level administration menu items and links from other modules.',
        'core' => '7.x',
        'package' => 'Core',
        'version' => '7.43',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'tracker' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/tracker/tracker.module',
      'name' => 'tracker',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Tracker',
        'description' => 'Enables tracking of recent content for users.',
        'dependencies' => 
        array (
          0 => 'comment',
        ),
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'tracker.test',
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'translation' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/translation/translation.module',
      'name' => 'translation',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Content translation',
        'description' => 'Allows content to be translated into different languages.',
        'dependencies' => 
        array (
          0 => 'locale',
        ),
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'translation.test',
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'trigger' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/trigger/trigger.module',
      'name' => 'trigger',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Trigger',
        'description' => 'Enables actions to be fired on certain system events, such as when new content is created.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'trigger.test',
        ),
        'configure' => 'admin/structure/trigger',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'update' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/update/update.module',
      'name' => 'update',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Update manager',
        'description' => 'Checks for available updates, and can securely install or update modules and themes via a web interface.',
        'version' => '7.43',
        'package' => 'Core',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'update.test',
        ),
        'configure' => 'admin/reports/updates/settings',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'user' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/modules/user/user.module',
      'name' => 'user',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7018',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'User',
        'description' => 'Manages the user registration and login system.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'user.module',
          1 => 'user.test',
        ),
        'required' => true,
        'configure' => 'admin/config/people',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'user.css',
          ),
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'addressfield' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/addressfield/addressfield.module',
      'name' => 'addressfield',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Address Field',
        'description' => 'Manage a flexible address field, implementing the xNAL standard.',
        'core' => '7.x',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'addressfield.migrate.inc',
          1 => 'views/addressfield_views_handler_field_administrative_area.inc',
          2 => 'views/addressfield_views_handler_field_country.inc',
          3 => 'views/addressfield_views_handler_filter_country.inc',
        ),
        'version' => '7.x-1.2',
        'project' => 'addressfield',
        'datestamp' => '1444254070',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'addressfield_autocomplete' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/addressfield_autocomplete/addressfield_autocomplete.module',
      'name' => 'addressfield_autocomplete',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Addressfield Autocomplete',
        'description' => 'Uses google maps api to help users fill in addresses, if they can\'t find their address then they can add one manually',
        'package' => 'Other',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'addressfield',
          1 => 'gmap',
          2 => 'libraries',
        ),
        'version' => '7.x-1.0-beta5+13-dev',
        'project' => 'addressfield_autocomplete',
        'datestamp' => '1449665550',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta5+13-dev',
    ),
    'adminimal_admin_menu' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/adminimal_admin_menu/adminimal_admin_menu.module',
      'name' => 'adminimal_admin_menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7100',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Administration menu Adminimal Theme',
        'description' => 'Clean and minimal theme for the administration menu module.',
        'package' => 'Administration',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'admin_menu',
        ),
        'version' => '7.x-1.7',
        'project' => 'adminimal_admin_menu',
        'datestamp' => '1449182323',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.7',
    ),
    'admin_language' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/admin_language/admin_language.module',
      'name' => 'admin_language',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '-1',
      'info' => 
      array (
        'name' => 'Administration language',
        'description' => 'Makes sure all administration pages are displayed in the preferred language of the administrator.',
        'dependencies' => 
        array (
          0 => 'locale',
        ),
        'package' => 'Multilanguage',
        'core' => '7.x',
        'configure' => 'admin/config/regional/language/admin_language',
        'version' => '7.x-1.0-beta1',
        'project' => 'admin_language',
        'datestamp' => '1391010215',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta1',
    ),
    'admin_devel' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/admin_menu/admin_devel/admin_devel.module',
      'name' => 'admin_devel',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Administration Development tools',
        'description' => 'Administration and debugging functionality for developers and site builders.',
        'package' => 'Administration',
        'core' => '7.x',
        'scripts' => 
        array (
          0 => 'admin_devel.js',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'admin_menu',
        'datestamp' => '1419029284',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0-rc5',
    ),
    'admin_menu' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/admin_menu/admin_menu.module',
      'name' => 'admin_menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7304',
      'weight' => '100',
      'info' => 
      array (
        'name' => 'Administration menu',
        'description' => 'Provides a dropdown menu to most administrative tasks and other common destinations (to users with the proper permissions).',
        'package' => 'Administration',
        'core' => '7.x',
        'configure' => 'admin/config/administration/admin_menu',
        'dependencies' => 
        array (
          0 => 'system (>7.10)',
        ),
        'files' => 
        array (
          0 => 'tests/admin_menu.test',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'admin_menu',
        'datestamp' => '1419029284',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0-rc5',
    ),
    'admin_menu_toolbar' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/admin_menu/admin_menu_toolbar/admin_menu_toolbar.module',
      'name' => 'admin_menu_toolbar',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Administration menu Toolbar style',
        'description' => 'A better Toolbar.',
        'package' => 'Administration',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'admin_menu',
        ),
        'version' => '7.x-3.0-rc5',
        'project' => 'admin_menu',
        'datestamp' => '1419029284',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0-rc5',
    ),
    'admin_menu_source' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/admin_menu_source/admin_menu_source.module',
      'name' => 'admin_menu_source',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Administration Menu Source',
        'description' => 'Use a different menu as the Administration Menu.',
        'dependencies' => 
        array (
          0 => 'menu',
          1 => 'admin_menu',
        ),
        'package' => 'Administration',
        'core' => '7.x',
        'configure' => 'admin/config/administration/admin_menu/source',
        'version' => '7.x-1.1',
        'project' => 'admin_menu_source',
        'datestamp' => '1459490342',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1',
    ),
    'admin_theme' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/admin_theme/admin_theme.module',
      'name' => 'admin_theme',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '10',
      'info' => 
      array (
        'name' => 'Administration theme',
        'description' => 'Enable the administration theme on more pages than possible with Drupal\'s default administration page.',
        'core' => '7.x',
        'package' => 'Administration',
        'files' => 
        array (
          0 => 'admin_theme.module',
          1 => 'admin_theme.install',
        ),
        'configure' => 'admin/appearance',
        'version' => '7.x-1.0',
        'project' => 'admin_theme',
        'datestamp' => '1291630844',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'admin_views' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/admin_views/admin_views.module',
      'name' => 'admin_views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '12',
      'info' => 
      array (
        'name' => 'Administration views',
        'description' => 'Replaces all system object management pages in Drupal core with real views.',
        'package' => 'Administration',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'views',
          1 => 'views_bulk_operations (>=7.x-3.2)',
        ),
        'files' => 
        array (
          0 => 'plugins/views_plugin_display_system.inc',
          1 => 'plugins/views_plugin_access_menu.inc',
          2 => 'tests/admin_views.test',
        ),
        'version' => '7.x-1.5',
        'project' => 'admin_views',
        'datestamp' => '1436376676',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'advagg' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg.module',
      'name' => 'advagg',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '7213',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Advanced CSS/JS Aggregation',
        'description' => 'Aggregates multiple CSS/JS files in a way that prevents 404 from happening when accessing a CSS or JS file.',
        'package' => 'Advanced CSS/JS Aggregation',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'tests/advagg.test',
        ),
        'configure' => 'admin/config/development/performance/advagg',
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advagg_bundler' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg_bundler/advagg_bundler.module',
      'name' => 'advagg_bundler',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '7201',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AdvAgg Bundler',
        'description' => 'Provides intelligent bundling of CSS and JS files by grouping files that belong together.',
        'package' => 'Advanced CSS/JS Aggregation',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'advagg',
        ),
        'configure' => 'admin/config/development/performance/advagg/bundler',
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advagg_css_cdn' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg_css_cdn/advagg_css_cdn.module',
      'name' => 'advagg_css_cdn',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AdvAgg CDN CSS',
        'description' => 'Use a shared CDN for CSS libraries, Google Libraries API currently.',
        'package' => 'Advanced CSS/JS Aggregation',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'advagg',
        ),
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advagg_css_compress' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg_css_compress/advagg_css_compress.module',
      'name' => 'advagg_css_compress',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '7202',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AdvAgg Compress CSS',
        'description' => 'Compress CSS with a 3rd party compressor, YUI currently.',
        'package' => 'Advanced CSS/JS Aggregation',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'advagg',
        ),
        'configure' => 'admin/config/development/performance/advagg/css-compress',
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advagg_ext_compress' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg_ext_compress/advagg_ext_compress.module',
      'name' => 'advagg_ext_compress',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AdvAgg External Compression',
        'description' => 'Compress Javascript and/or CSS with a command line compressor.',
        'package' => 'Advanced CSS/JS Aggregation',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'advagg',
        ),
        'configure' => 'admin/config/development/performance/advagg/ext-compress',
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advagg_font' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg_font/advagg_font.module',
      'name' => 'advagg_font',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AdvAgg Async Font Loader',
        'description' => 'Allows one to load fonts in an async manner',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'advagg',
        ),
        'package' => 'Advanced CSS/JS Aggregation',
        'configure' => 'admin/config/development/performance/advagg/font',
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advagg_js_cdn' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg_js_cdn/advagg_js_cdn.module',
      'name' => 'advagg_js_cdn',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AdvAgg CDN Javascript',
        'description' => 'Use a shared CDN for javascript libraries, Google Libraries API currently.',
        'package' => 'Advanced CSS/JS Aggregation',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'advagg',
        ),
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advagg_js_compress' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg_js_compress/advagg_js_compress.module',
      'name' => 'advagg_js_compress',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '7203',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AdvAgg Compress Javascript',
        'description' => 'Compress Javascript with a 3rd party compressor; JSMin+, JSMin c ext, JShrink, and JSqueeze currently.',
        'package' => 'Advanced CSS/JS Aggregation',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'advagg',
        ),
        'configure' => 'admin/config/development/performance/advagg/js-compress',
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advagg_mod' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg_mod/advagg_mod.module',
      'name' => 'advagg_mod',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AdvAgg Modifier',
        'description' => 'Allows one to alter the CSS and JS array.',
        'package' => 'Advanced CSS/JS Aggregation',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'advagg',
        ),
        'configure' => 'admin/config/development/performance/advagg/mod',
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advagg_sri' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg_sri/advagg_sri.module',
      'name' => 'advagg_sri',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AdvAgg Subresource Integrity',
        'description' => 'Provide the integrity attribute for CSS and JS files.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'advagg',
        ),
        'package' => 'Advanced CSS/JS Aggregation',
        'configure' => 'admin/config/development/performance/advagg/sri',
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advagg_validator' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advagg/advagg_validator/advagg_validator.module',
      'name' => 'advagg_validator',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AdvAgg CSS/JS Validator',
        'description' => 'Validate the CSS and JS files used in Aggregation for syntax errors.',
        'package' => 'Advanced CSS/JS Aggregation',
        'core' => '7.x',
        'configure' => 'admin/config/development/performance/advagg/validator',
        'version' => '7.x-2.18',
        'project' => 'advagg',
        'datestamp' => '1459291143',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.18',
    ),
    'advanced_menu_blocks' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advanced_menu/blocks/advanced_menu_blocks.module',
      'name' => 'advanced_menu_blocks',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AM Blocks',
        'description' => 'Provides for customization of the menu block settings.',
        'package' => 'Advanced Menu',
        'dependencies' => 
        array (
          0 => 'menu',
          1 => 'advanced_menu_core',
        ),
        'core' => '7.x',
        'version' => '7.x-1.9+4-dev',
        'project' => 'advanced_menu',
        'datestamp' => '1380553045',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9+4-dev',
    ),
    'advanced_menu_core' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advanced_menu/core/advanced_menu_core.module',
      'name' => 'advanced_menu_core',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AM Core',
        'description' => 'Builds upon the menu module to enable advanced features.',
        'package' => 'Advanced Menu',
        'dependencies' => 
        array (
          0 => 'menu',
        ),
        'core' => '7.x',
        'version' => '7.x-1.9+4-dev',
        'project' => 'advanced_menu',
        'datestamp' => '1380553045',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9+4-dev',
    ),
    'advanced_menu_menu_admin' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advanced_menu/menu_admin/advanced_menu_menu_admin.module',
      'name' => 'advanced_menu_menu_admin',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AM Menu Admin',
        'description' => 'Allows menus to be administered based on roles in addition to permissions.',
        'package' => 'Advanced Menu',
        'dependencies' => 
        array (
          0 => 'menu',
          1 => 'advanced_menu_core',
        ),
        'core' => '7.x',
        'version' => '7.x-1.9+4-dev',
        'project' => 'advanced_menu',
        'datestamp' => '1380553045',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9+4-dev',
    ),
    'advanced_menu_menu_attributes' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advanced_menu/menu_attributes/advanced_menu_menu_attributes.module',
      'name' => 'advanced_menu_menu_attributes',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AM Menu Attributes',
        'description' => 'Adds additional attribute fields to menu items.',
        'package' => 'Advanced Menu',
        'dependencies' => 
        array (
          0 => 'menu',
          1 => 'advanced_menu_core',
        ),
        'core' => '7.x',
        'version' => '7.x-1.9+4-dev',
        'project' => 'advanced_menu',
        'datestamp' => '1380553045',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9+4-dev',
    ),
    'advanced_menu_submenu' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/advanced_menu/submenu/advanced_menu_submenu.module',
      'name' => 'advanced_menu_submenu',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'AM Sub Menu',
        'description' => 'Allows menus to be inserted into other menus.',
        'package' => 'Advanced Menu',
        'dependencies' => 
        array (
          0 => 'menu',
          1 => 'advanced_menu_core',
        ),
        'core' => '7.x',
        'version' => '7.x-1.9+4-dev',
        'project' => 'advanced_menu',
        'datestamp' => '1380553045',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9+4-dev',
    ),
    'autocomplete_deluxe' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/autocomplete_deluxe/autocomplete_deluxe.module',
      'name' => 'autocomplete_deluxe',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Autocomplete Deluxe',
        'description' => 'Enhanced autocomplete using Jquery UI autocomplete.',
        'package' => 'User interface',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'autocomplete_deluxe.module',
        ),
        'dependencies' => 
        array (
          0 => 'taxonomy',
        ),
        'version' => '7.x-2.1',
        'project' => 'autocomplete_deluxe',
        'datestamp' => '1426503185',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.1',
    ),
    'better_exposed_filters' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/better_exposed_filters/better_exposed_filters.module',
      'name' => 'better_exposed_filters',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Better Exposed Filters',
        'description' => 'Allow the use of checkboxes or radio buttons for exposed Views filters',
        'core' => '7.x',
        'package' => 'Views',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'files' => 
        array (
          0 => 'better_exposed_filters_exposed_form_plugin.inc',
          1 => 'tests/better_exposed_filters.test',
        ),
        'version' => '7.x-3.2',
        'project' => 'better_exposed_filters',
        'datestamp' => '1428077889',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.2',
    ),
    'better_formats' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/better_formats/better_formats.module',
      'name' => 'better_formats',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Better Formats',
        'description' => 'Enhances the core input format system by managing input format defaults and settings.',
        'core' => '7.x',
        'configure' => 'admin/config/content/formats',
        'version' => '7.x-1.0-beta1',
        'project' => 'better_formats',
        'datestamp' => '1343262404',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta1',
    ),
    'block_class' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/block_class/block_class.module',
      'name' => 'block_class',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7103',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Block Class',
        'description' => 'Allows assigning CSS classes to blocks.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'block',
        ),
        'files' => 
        array (
          0 => 'block_class.test',
        ),
        'test_dependencies' => 
        array (
          0 => 'context',
          1 => 'features (2.x)',
          2 => 'features_extra',
        ),
        'version' => '7.x-2.3',
        'project' => 'block_class',
        'datestamp' => '1450415951',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.3',
    ),
    'breakpoints' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/breakpoints/breakpoints.module',
      'name' => 'breakpoints',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7102',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Breakpoints',
        'description' => 'Manage breakpoints',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'breakpoints.module',
          1 => 'breakpoints.test',
        ),
        'configure' => 'admin/config/media/breakpoints',
        'version' => '7.x-1.4',
        'project' => 'breakpoints',
        'datestamp' => '1450195709',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.4',
    ),
    'colorbox' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/colorbox/colorbox.module',
      'name' => 'colorbox',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7202',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Colorbox',
        'description' => 'A light-weight, customizable lightbox plugin for jQuery 1.4.3+.',
        'dependencies' => 
        array (
          0 => 'libraries (>=2.x)',
        ),
        'core' => '7.x',
        'configure' => 'admin/config/media/colorbox',
        'files' => 
        array (
          0 => 'views/colorbox_handler_field_colorbox.inc',
        ),
        'version' => '7.x-2.10',
        'project' => 'colorbox',
        'datestamp' => '1443691449',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.10',
    ),
    'compact_forms' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/compact_forms/compact_forms.module',
      'name' => 'compact_forms',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Compact Forms',
        'description' => 'Overlays form fields with their respective labels using JavaScript.',
        'package' => 'User interface',
        'core' => '7.x',
        'configure' => 'admin/config/user-interface/compact_forms',
        'version' => '7.x-1.0',
        'project' => 'compact_forms',
        'datestamp' => '1294554354',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'computed_field' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/computed_field/computed_field.module',
      'name' => 'computed_field',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Computed Field',
        'description' => 'Defines a field type that allows values to be "computed" via PHP code.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'package' => 'Fields',
        'version' => '7.x-1.1',
        'project' => 'computed_field',
        'datestamp' => '1453389259',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1',
    ),
    'content_menu' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/content_menu/content_menu.module',
      'name' => 'content_menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '1',
      'info' => 
      array (
        'name' => 'Content Menu',
        'dependencies' => 
        array (
          0 => 'menu',
        ),
        'description' => 'Content centric menu management interface for editors.',
        'package' => 'User interface',
        'core' => '7.x',
        'php' => '5.2.4',
        'version' => '7.x-1.0',
        'project' => 'content_menu',
        'datestamp' => '1361228328',
      ),
      'version' => '7.x-1.0',
    ),
    'context' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/context/context.module',
      'name' => 'context',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7000',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Context',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'description' => 'Provide modules with a cache that lasts for a single page request.',
        'package' => 'Context',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'tests/context.test',
          1 => 'tests/context.conditions.test',
          2 => 'tests/context.reactions.test',
        ),
        'version' => '7.x-3.6',
        'project' => 'context',
        'datestamp' => '1420573188',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.6',
    ),
    'context_layouts' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/context/context_layouts/context_layouts.module',
      'name' => 'context_layouts',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Context layouts',
        'description' => 'Allow theme layer to provide multiple region layouts and integrate with context.',
        'dependencies' => 
        array (
          0 => 'context',
        ),
        'package' => 'Context',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'plugins/context_layouts_reaction_block.inc',
        ),
        'version' => '7.x-3.6',
        'project' => 'context',
        'datestamp' => '1420573188',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.6',
    ),
    'context_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/context/context_ui/context_ui.module',
      'name' => 'context_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Context UI',
        'description' => 'Provides a simple UI for settings up a site structure using Context.',
        'dependencies' => 
        array (
          0 => 'context',
        ),
        'package' => 'Context',
        'core' => '7.x',
        'configure' => 'admin/structure/context',
        'files' => 
        array (
          0 => 'context.module',
          1 => 'tests/context_ui.test',
        ),
        'version' => '7.x-3.6',
        'project' => 'context',
        'datestamp' => '1420573188',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.6',
    ),
    'contextual_view_modes' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/contextual_view_modes/contextual_view_modes.module',
      'name' => 'contextual_view_modes',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Contextual View Modes',
        'description' => 'Creates the ability for authors to change view modes on nodes by context (module) conditions',
        'package' => 'Context',
        'version' => '7.x-1.2',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'contextual_view_modes.module',
          1 => 'contextual_view_modes.install',
          2 => 'contextual_view_modes.admin.inc',
        ),
        'dependencies' => 
        array (
          0 => 'context',
          1 => 'ds',
          2 => 'ds_extras',
        ),
        'project' => 'contextual_view_modes',
        'datestamp' => '1357786268',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'context_block_disable' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/context_block_disable/context_block_disable.module',
      'name' => 'context_block_disable',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7200',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Context Block Disable',
        'description' => 'Allows disabling of blocks as a Context reaction',
        'package' => 'Context',
        'core' => '7.x',
        'version' => '7.x-2.1',
        'project' => 'context_block_disable',
        'datestamp' => '1426529585',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.1',
    ),
    'context_flag' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/context_flag/context_flag.module',
      'name' => 'context_flag',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Context Flag',
        'description' => 'Provides integration between the Context and Flag modules.',
        'core' => '7.x',
        'package' => 'Context',
        'dependencies' => 
        array (
          0 => 'context',
          1 => 'flag (>3.0)',
        ),
        'version' => '7.x-1.2',
        'project' => 'context_flag',
        'datestamp' => '1400950428',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'context_mobile_switch' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/context_mobile_switch/context_mobile_switch.module',
      'name' => 'context_mobile_switch',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Context Mobile Switch',
        'description' => 'Add conditional contexts based on the Mobile Switch device detection.',
        'dependencies' => 
        array (
          0 => 'context',
          1 => 'mobile_switch (2.x)',
        ),
        'core' => '7.x',
        'package' => 'Context',
        'files' => 
        array (
          0 => 'context_condition_mobile_switch.inc',
        ),
        'version' => '7.x-2.0-alpha1',
        'project' => 'context_mobile_switch',
        'datestamp' => '1391012007',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-alpha1',
    ),
    'crm_core' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/crm_core.module',
      'name' => 'crm_core',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core',
        'description' => 'Provides basic functionality for a CRM Core.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_activity' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_activity/crm_core_activity.module',
      'name' => 'crm_core_activity',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7005',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core Activity',
        'description' => 'Provides an entity for recording a contact\'s activities.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'crm_core_contact',
          1 => 'entityreference',
          2 => 'date_api',
          3 => 'date',
          4 => 'date_popup',
          5 => 'date_views',
        ),
        'files' => 
        array (
          0 => 'includes/crm_core_activity.controller.inc',
          1 => 'views/handlers/crm_core_activity_handler_field_links.inc',
          2 => 'views/handlers/views_handler_field_activity_type.inc',
          3 => 'views/handlers/views_handler_filter_activity_type.inc',
          4 => 'includes/crm_core_activity.migrate.inc',
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_activity_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_activity_ui/crm_core_activity_ui.module',
      'name' => 'crm_core_activity_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '20',
      'info' => 
      array (
        'name' => 'CRM Core Activity UI',
        'description' => 'User Interface for activities.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'configure' => 'admin/structure/crm-core/activity-types',
        'dependencies' => 
        array (
          0 => 'crm_core_activity',
          1 => 'crm_core_contact_ui',
        ),
        'files' => 
        array (
          0 => 'crm_core_activity_ui.module',
          1 => 'crm_core_activity_ui.test',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'crm_core_activity_ui.css',
          ),
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_contact' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_contact/crm_core_contact.module',
      'name' => 'crm_core_contact',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7006',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core Contact',
        'description' => 'Provides default CRM Core Contact entities and the ability to create more.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'crm_core',
          1 => 'entity',
          2 => 'field_ui',
          3 => 'views',
          4 => 'field_group',
          5 => 'name',
        ),
        'files' => 
        array (
          0 => 'crm_core_contact.test',
          1 => 'includes/crm_core_contact.controller.inc',
          2 => 'includes/crm_core_contact_type.controller.inc',
          3 => 'includes/views/crm_core_contact.views.inc',
          4 => 'includes/views/handlers/crm_core_contact_handler_field_contact.inc',
          5 => 'includes/views/handlers/crm_core_contact_handler_field_contact_revision.inc',
          6 => 'includes/views/handlers/crm_core_contact_handler_field_contact_revert.inc',
          7 => 'includes/views/handlers/crm_core_contact_handler_field_contact_type.inc',
          8 => 'includes/crm_core_contact.migrate.inc',
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_contact_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_contact_ui/crm_core_contact_ui.module',
      'name' => 'crm_core_contact_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core Contact UI',
        'description' => 'Provides a user interface for CRM Core Contact.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'configure' => 'admin/structure/crm-core/contact-types',
        'dependencies' => 
        array (
          0 => 'crm_core_contact',
          1 => 'crm_core_ui',
          2 => 'search',
          3 => 'views_bulk_operations',
        ),
        'files' => 
        array (
          0 => 'crm_core_contact_ui.module',
          1 => 'views/crm_core_contact_ui.views.inc',
          2 => 'crm_core_contact_ui.test',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'crm_core_contact_ui.css',
          ),
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_data_import' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_data_import/crm_core_data_import.module',
      'name' => 'crm_core_data_import',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core Data Import',
        'description' => 'Handles data imports for CRM Core',
        'package' => 'CRM Core',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'migrate (>2.5)',
          1 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'includes/controllers/CRMCoreDataImport.inc',
          1 => 'includes/controllers/MigrationDataImport.inc',
          2 => 'includes/controllers/CRMCoreMigrateSQLMap.inc',
          3 => 'plugins/source/CRMCoreDataSourceHandler.inc',
          4 => 'plugins/destination/CRMCoreDataDestinationHandler.inc',
          5 => 'plugins/settings/CRMCoreDataImportSettings.inc',
          6 => 'plugins/source_plugins/civicrm/CivicrmEntityType.inc',
          7 => 'plugins/source/CsvDataSourceHandler.inc',
          8 => 'plugins/source/CivicrmDataSourceHandler.inc',
          9 => 'plugins/destination/CRMCoreContactDataDestinationHandler.inc',
          10 => 'plugins/destination/CRMCoreActivityDataDestinationHandler.inc',
          11 => 'plugins/destination/NodeDestinationHandler.inc',
          12 => 'plugins/destination/UserDestinationHandler.inc',
          13 => 'plugins/settings/LinkedImportSettings.inc',
          14 => 'plugins/settings/RelationsImportSettings.inc',
          15 => 'plugins/settings/ReferencesImportSettings.inc',
          16 => 'plugins/settings/UserContactImportSettings.inc',
          17 => 'plugins/settings/RelationsCiviCrmImportSettings.inc',
          18 => 'plugins/settings/ReferencesCiviCrmImportSettings.inc',
          19 => 'plugins/source_plugins/civicrm/CivicrmContactEntityType.inc',
          20 => 'plugins/source_plugins/civicrm/CivicrmActivityEntityType.inc',
          21 => 'plugins/source_plugins/civicrm/CivicrmRelationshipEntityType.inc',
          22 => 'plugins/conversion/CRMCoreConversionHandler.inc',
          23 => 'plugins/conversion/CiviCrmCoreFields.inc',
          24 => 'plugins/settings/ReferencesImportSettingsBase.inc',
          25 => 'plugins/settings/RelationsImportSettingsBase.inc',
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_default_matching_engine' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_default_matching_engine/crm_core_default_matching_engine.module',
      'name' => 'crm_core_default_matching_engine',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core Default Matching Engine',
        'description' => 'Provides a simple matching engine for finding duplicate contacts in CRM Core.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'crm_core_match',
        ),
        'files' => 
        array (
          0 => 'includes/DefaultMatchingEngine.inc',
          1 => 'includes/NameMatchField.inc',
          2 => 'includes/TextMatchField.inc',
          3 => 'includes/SelectMatchField.inc',
          4 => 'includes/EmailMatchField.inc',
          5 => 'includes/DateMatchField.inc',
          6 => 'includes/AddressFieldMatchField.inc',
          7 => 'includes/TelephoneMatchField.inc',
          8 => 'includes/Phone_NumberMatchField.inc',
          9 => 'includes/Number_IntegerMatchField.inc',
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_match' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_match/crm_core_match.module',
      'name' => 'crm_core_match',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core Match',
        'description' => 'Provides framework for identifying duplicate contacts in CRM Core contact records.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'configure' => 'admin/config/crm-core/match',
        'files' => 
        array (
          0 => 'includes/crm_core_match.inc',
        ),
        'dependencies' => 
        array (
          0 => 'crm_core_contact',
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_relationship' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_relationship/crm_core_relationship.module',
      'name' => 'crm_core_relationship',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core Relationship',
        'description' => 'Provide relationship between contacts',
        'package' => 'CRM Core',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'list',
          1 => 'crm_core_contact',
          2 => 'relation',
        ),
        'files' => 
        array (
          0 => 'crm_core_relationship.module',
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_relationship_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_relationship_ui/crm_core_relationship_ui.module',
      'name' => 'crm_core_relationship_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core Relationship UI',
        'description' => 'User Interface for relationships between contacts. Back end is Relation module.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'configure' => 'admin/structure/crm-core/relationship-types',
        'dependencies' => 
        array (
          0 => 'crm_core_relationship',
          1 => 'crm_core_ui',
          2 => 'relation_ui',
        ),
        'files' => 
        array (
          0 => 'crm_core_relationship_ui.module',
          1 => 'crm_core_relationship_ui.test',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'crm_core_relationship_ui.css',
          ),
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_report' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_report/crm_core_report.module',
      'name' => 'crm_core_report',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core Report',
        'description' => 'Provides a basic structure for creating reports in CRM Core. Provides a reports tab that displays registered reports.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'crm_core',
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_ui/crm_core_ui.module',
      'name' => 'crm_core_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '15',
      'info' => 
      array (
        'name' => 'CRM Core UI',
        'description' => 'User Interface for CRM Core.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'configure' => 'admin/config/crm-core',
        'dependencies' => 
        array (
          0 => 'menu',
          1 => 'crm_core',
          2 => 'block',
        ),
        'files' => 
        array (
          0 => 'crm_core_ui.module',
          1 => 'crm_core_ui.test',
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_user_sync' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core/modules/crm_core_user_sync/crm_core_user_sync.module',
      'name' => 'crm_core_user_sync',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core User Synchronization',
        'description' => 'Synchronizes crm contacts with users.',
        'package' => 'CRM Core',
        'core' => '7.x',
        'configure' => 'admin/config/crm-core/user-sync',
        'dependencies' => 
        array (
          0 => 'crm_core_contact',
          1 => 'relation',
        ),
        'files' => 
        array (
          0 => 'crm_core_user_sync.module',
          1 => 'crm_core_user_sync.admin.inc',
          2 => 'views/views_plugin_argument_default_contact_id.inc',
          3 => 'views/views_plugin_argument_default_contact_id_from_user.inc',
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'crm_core',
        'datestamp' => '1453535642',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'crm_core_profile' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/crm_core_profile/crm_core_profile.module',
      'name' => 'crm_core_profile',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7006',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'CRM Core Profile',
        'description' => 'Generates forms to collect contact information',
        'package' => 'CRM Core',
        'core' => '7.x',
        'configure' => 'admin/structure/crm-core/profile',
        'dependencies' => 
        array (
          0 => 'crm_core_contact_ui',
          1 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'includes/field_handlers/DefaultProfileFieldHandler.inc',
          1 => 'includes/field_handlers/NameProfileFieldHandler.inc',
          2 => 'includes/field_handlers/addressfieldProfileFieldHandler.inc',
          3 => 'includes/field_handlers/emailProfileFieldHandler.inc',
          4 => 'includes/field_handlers/EntityReferenceProfileFieldHandler.inc',
          5 => 'includes/field_handlers/DateProfileFieldHandler.inc',
          6 => 'includes/entity_handlers/ProfileEntityHandler.inc',
          7 => 'includes/entity_handlers/CRMCoreContactHandler.inc',
          8 => 'includes/entity_handlers/CRMCoreActivityHandler.inc',
          9 => 'includes/views/views_handler_field_crm_core_profile_page_path.inc',
          10 => 'includes/views/views_handler_field_crm_core_profile_page_redirect.inc',
        ),
        'version' => '7.x-1.0-beta10',
        'project' => 'crm_core_profile',
        'datestamp' => '1415994214',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta10',
    ),
    'bulk_export' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ctools/bulk_export/bulk_export.module',
      'name' => 'bulk_export',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Bulk Export',
        'description' => 'Performs bulk exporting of data objects known about by Chaos tools.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.9',
        'project' => 'ctools',
        'datestamp' => '1440020680',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'ctools' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ctools/ctools.module',
      'name' => 'ctools',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Chaos tools',
        'description' => 'A library of helpful tools by Merlin of Chaos.',
        'core' => '7.x',
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.9',
        'files' => 
        array (
          0 => 'includes/context.inc',
          1 => 'includes/css-cache.inc',
          2 => 'includes/math-expr.inc',
          3 => 'includes/stylizer.inc',
          4 => 'tests/css_cache.test',
        ),
        'project' => 'ctools',
        'datestamp' => '1440020680',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'ctools_access_ruleset' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ctools/ctools_access_ruleset/ctools_access_ruleset.module',
      'name' => 'ctools_access_ruleset',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Custom rulesets',
        'description' => 'Create custom, exportable, reusable access rulesets for applications like Panels.',
        'core' => '7.x',
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.9',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'project' => 'ctools',
        'datestamp' => '1440020680',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'ctools_ajax_sample' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ctools/ctools_ajax_sample/ctools_ajax_sample.module',
      'name' => 'ctools_ajax_sample',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Chaos Tools (CTools) AJAX Example',
        'description' => 'Shows how to use the power of Chaos AJAX.',
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.9',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'core' => '7.x',
        'project' => 'ctools',
        'datestamp' => '1440020680',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'ctools_custom_content' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ctools/ctools_custom_content/ctools_custom_content.module',
      'name' => 'ctools_custom_content',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Custom content panes',
        'description' => 'Create custom, exportable, reusable content panes for applications like Panels.',
        'core' => '7.x',
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.9',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'project' => 'ctools',
        'datestamp' => '1440020680',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'ctools_plugin_example' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ctools/ctools_plugin_example/ctools_plugin_example.module',
      'name' => 'ctools_plugin_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Chaos Tools (CTools) Plugin Example',
        'description' => 'Shows how an external module can provide ctools plugins (for Panels, etc.).',
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.9',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'panels',
          2 => 'page_manager',
          3 => 'advanced_help',
        ),
        'core' => '7.x',
        'project' => 'ctools',
        'datestamp' => '1440020680',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'page_manager' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ctools/page_manager/page_manager.module',
      'name' => 'page_manager',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '99',
      'info' => 
      array (
        'name' => 'Page manager',
        'description' => 'Provides a UI and API to manage pages within the site.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.9',
        'project' => 'ctools',
        'datestamp' => '1440020680',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'stylizer' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ctools/stylizer/stylizer.module',
      'name' => 'stylizer',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Stylizer',
        'description' => 'Create custom styles for applications such as Panels.',
        'core' => '7.x',
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.9',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'color',
        ),
        'project' => 'ctools',
        'datestamp' => '1440020680',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'term_depth' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ctools/term_depth/term_depth.module',
      'name' => 'term_depth',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Term Depth access',
        'description' => 'Controls access to context based upon term depth',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'package' => 'Chaos tool suite',
        'version' => '7.x-1.9',
        'project' => 'ctools',
        'datestamp' => '1440020680',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'views_content' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ctools/views_content/views_content.module',
      'name' => 'views_content',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views content panes',
        'description' => 'Allows Views content to be used in Panels, Dashboard and other modules which use the CTools Content API.',
        'package' => 'Chaos tool suite',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'views',
        ),
        'core' => '7.x',
        'version' => '7.x-1.9',
        'files' => 
        array (
          0 => 'plugins/views/views_content_plugin_display_ctools_context.inc',
          1 => 'plugins/views/views_content_plugin_display_panel_pane.inc',
          2 => 'plugins/views/views_content_plugin_style_ctools_context.inc',
        ),
        'project' => 'ctools',
        'datestamp' => '1440020680',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.9',
    ),
    'custom_formatters' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/custom_formatters/custom_formatters.module',
      'name' => 'custom_formatters',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7200',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Custom Formatters',
        'description' => 'Allows users to easily define custom CCK Formatters.',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'field',
        ),
        'package' => 'Fields',
        'configure' => 'admin/structure/formatters',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'engines/php.inc',
          1 => 'engines/token.inc',
          2 => 'includes/contextual.inc',
          3 => 'includes/ctools.inc',
          4 => 'includes/custom_formatters.admin.inc',
          5 => 'includes/custom_formatters.inc',
          6 => 'includes/devel_generate.inc',
          7 => 'includes/features.inc',
          8 => 'includes/field.inc',
          9 => 'includes/form_builder.inc',
          10 => 'includes/help.inc',
          11 => 'includes/insert.inc',
          12 => 'includes/libraries.inc',
          13 => 'includes/node.inc',
          14 => 'includes/system.inc',
          15 => 'includes/taxonomy.inc',
          16 => 'includes/token.inc',
          17 => 'includes/user.inc',
          18 => 'plugins/export_ui/custom_formatters.inc',
          19 => 'plugins/export_ui/custom_formatters_ui.class.php',
          20 => 'custom_formatters.module',
        ),
        'version' => '7.x-2.4',
        'project' => 'custom_formatters',
        'datestamp' => '1436336948',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.4',
    ),
    'date' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/date/date.module',
      'name' => 'date',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7004',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date',
        'description' => 'Makes date/time fields available.',
        'dependencies' => 
        array (
          0 => 'date_api',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'php' => '5.2',
        'files' => 
        array (
          0 => 'date.migrate.inc',
          1 => 'tests/date_api.test',
          2 => 'tests/date.test',
          3 => 'tests/date_field.test',
          4 => 'tests/date_migrate.test',
          5 => 'tests/date_validation.test',
          6 => 'tests/date_timezone.test',
          7 => 'tests/date_views_pager.test',
          8 => 'tests/date_views_popup.test',
        ),
        'version' => '7.x-2.9',
        'project' => 'date',
        'datestamp' => '1441727353',
      ),
      'version' => '7.x-2.9',
    ),
    'date_all_day' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/date/date_all_day/date_all_day.module',
      'name' => 'date_all_day',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date All Day',
        'description' => 'Adds \'All Day\' functionality to date fields, including an \'All Day\' theme and \'All Day\' checkboxes for the Date select and Date popup widgets.',
        'dependencies' => 
        array (
          0 => 'date_api',
          1 => 'date',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'version' => '7.x-2.9',
        'project' => 'date',
        'datestamp' => '1441727353',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.9',
    ),
    'date_api' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/date/date_api/date_api.module',
      'name' => 'date_api',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date API',
        'description' => 'A Date API that can be used by other modules.',
        'package' => 'Date/Time',
        'core' => '7.x',
        'php' => '5.2',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'date.css',
          ),
        ),
        'files' => 
        array (
          0 => 'date_api.module',
          1 => 'date_api_sql.inc',
        ),
        'version' => '7.x-2.9',
        'project' => 'date',
        'datestamp' => '1441727353',
        'dependencies' => 
        array (
        ),
      ),
      'version' => '7.x-2.9',
    ),
    'date_context' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/date/date_context/date_context.module',
      'name' => 'date_context',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Context',
        'description' => 'Adds an option to the Context module to set a context condition based on the value of a date field.',
        'package' => 'Date/Time',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'date',
          1 => 'context',
        ),
        'files' => 
        array (
          0 => 'date_context.module',
          1 => 'plugins/date_context_date_condition.inc',
        ),
        'version' => '7.x-2.9',
        'project' => 'date',
        'datestamp' => '1441727353',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.9',
    ),
    'date_migrate_example' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/date/date_migrate/date_migrate_example/date_migrate_example.module',
      'name' => 'date_migrate_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'date',
          1 => 'date_repeat',
          2 => 'date_repeat_field',
          3 => 'features',
          4 => 'migrate',
        ),
        'description' => 'Examples of migrating with the Date module',
        'features' => 
        array (
          'field' => 
          array (
            0 => 'node-date_migrate_example-body',
            1 => 'node-date_migrate_example-field_date',
            2 => 'node-date_migrate_example-field_date_range',
            3 => 'node-date_migrate_example-field_date_repeat',
            4 => 'node-date_migrate_example-field_datestamp',
            5 => 'node-date_migrate_example-field_datestamp_range',
            6 => 'node-date_migrate_example-field_datetime',
            7 => 'node-date_migrate_example-field_datetime_range',
          ),
          'node' => 
          array (
            0 => 'date_migrate_example',
          ),
        ),
        'files' => 
        array (
          0 => 'date_migrate_example.migrate.inc',
        ),
        'name' => 'Date Migration Example',
        'package' => 'Features',
        'project' => 'date',
        'version' => '7.x-2.9',
        'datestamp' => '1441727353',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.9',
    ),
    'date_popup' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/date/date_popup/date_popup.module',
      'name' => 'date_popup',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Popup',
        'description' => 'Enables jquery popup calendars and time entry widgets for selecting dates and times.',
        'dependencies' => 
        array (
          0 => 'date_api',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'configure' => 'admin/config/date/date_popup',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'themes/datepicker.1.7.css',
          ),
        ),
        'version' => '7.x-2.9',
        'project' => 'date',
        'datestamp' => '1441727353',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.9',
    ),
    'date_repeat' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/date/date_repeat/date_repeat.module',
      'name' => 'date_repeat',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Repeat API',
        'description' => 'A Date Repeat API to calculate repeating dates and times from iCal rules.',
        'dependencies' => 
        array (
          0 => 'date_api',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'php' => '5.2',
        'files' => 
        array (
          0 => 'tests/date_repeat.test',
          1 => 'tests/date_repeat_form.test',
        ),
        'version' => '7.x-2.9',
        'project' => 'date',
        'datestamp' => '1441727353',
      ),
      'version' => '7.x-2.9',
    ),
    'date_repeat_field' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/date/date_repeat_field/date_repeat_field.module',
      'name' => 'date_repeat_field',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Repeat Field',
        'description' => 'Creates the option of Repeating date fields and manages Date fields that use the Date Repeat API.',
        'dependencies' => 
        array (
          0 => 'date_api',
          1 => 'date',
          2 => 'date_repeat',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'date_repeat_field.css',
          ),
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'version' => '7.x-2.9',
        'project' => 'date',
        'datestamp' => '1441727353',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.9',
    ),
    'date_tools' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/date/date_tools/date_tools.module',
      'name' => 'date_tools',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Tools',
        'description' => 'Tools to import and auto-create dates and calendars.',
        'dependencies' => 
        array (
          0 => 'date',
        ),
        'package' => 'Date/Time',
        'core' => '7.x',
        'configure' => 'admin/config/date/tools',
        'files' => 
        array (
          0 => 'tests/date_tools.test',
        ),
        'version' => '7.x-2.9',
        'project' => 'date',
        'datestamp' => '1441727353',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.9',
    ),
    'date_views' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/date/date_views/date_views.module',
      'name' => 'date_views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7200',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Date Views',
        'description' => 'Views integration for date fields and date functionality.',
        'package' => 'Date/Time',
        'dependencies' => 
        array (
          0 => 'date_api',
          1 => 'views',
        ),
        'core' => '7.x',
        'php' => '5.2',
        'files' => 
        array (
          0 => 'includes/date_views_argument_handler.inc',
          1 => 'includes/date_views_argument_handler_simple.inc',
          2 => 'includes/date_views_filter_handler.inc',
          3 => 'includes/date_views_filter_handler_simple.inc',
          4 => 'includes/date_views.views.inc',
          5 => 'includes/date_views_plugin_pager.inc',
        ),
        'version' => '7.x-2.9',
        'project' => 'date',
        'datestamp' => '1441727353',
      ),
      'version' => '7.x-2.9',
    ),
    'devel' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/devel/devel.module',
      'name' => 'devel',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '88',
      'info' => 
      array (
        'name' => 'Devel',
        'description' => 'Various blocks, pages, and functions for developers.',
        'package' => 'Development',
        'core' => '7.x',
        'configure' => 'admin/config/development/devel',
        'tags' => 
        array (
          0 => 'developer',
        ),
        'files' => 
        array (
          0 => 'devel.test',
          1 => 'devel.mail.inc',
        ),
        'version' => '7.x-1.5',
        'project' => 'devel',
        'datestamp' => '1398963366',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'devel_generate' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/devel/devel_generate/devel_generate.module',
      'name' => 'devel_generate',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Devel generate',
        'description' => 'Generate dummy users, nodes, and taxonomy terms.',
        'package' => 'Development',
        'core' => '7.x',
        'tags' => 
        array (
          0 => 'developer',
        ),
        'configure' => 'admin/config/development/generate',
        'files' => 
        array (
          0 => 'devel_generate.test',
        ),
        'version' => '7.x-1.5',
        'project' => 'devel',
        'datestamp' => '1398963366',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'devel_node_access' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/devel/devel_node_access.module',
      'name' => 'devel_node_access',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Devel node access',
        'description' => 'Developer blocks and page illustrating relevant node_access records.',
        'package' => 'Development',
        'dependencies' => 
        array (
          0 => 'menu',
        ),
        'core' => '7.x',
        'configure' => 'admin/config/development/devel',
        'tags' => 
        array (
          0 => 'developer',
        ),
        'version' => '7.x-1.5',
        'project' => 'devel',
        'datestamp' => '1398963366',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'dhtml_menu' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/dhtml_menu/dhtml_menu.module',
      'name' => 'dhtml_menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7104',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'DHTML Menu',
        'description' => 'Opens menus dynamically to reduce page reloads.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'dhtml_menu.module',
          1 => 'dhtml_menu.install',
          2 => 'dhtml_menu.admin.inc',
          3 => 'dhtml_menu.theme.inc',
        ),
        'configure' => 'admin/config/user-interface/dhtml_menu',
        'version' => '7.x-1.x-dev',
        'project' => 'dhtml_menu',
        'datestamp' => '1380569449',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.x-dev',
    ),
    'diff' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/diff/diff.module',
      'name' => 'diff',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7305',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Diff',
        'description' => 'Show differences between content revisions.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'DiffEngine.php',
        ),
        'version' => '7.x-3.2',
        'project' => 'diff',
        'datestamp' => '1352784357',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.2',
    ),
    'ds' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ds/ds.module',
      'name' => 'ds',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7203',
      'weight' => '1',
      'info' => 
      array (
        'name' => 'Display Suite',
        'description' => 'Extend the display options for every entity type.',
        'core' => '7.x',
        'package' => 'Display Suite',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'views/views_plugin_ds_entity_view.inc',
          1 => 'views/views_plugin_ds_fields_view.inc',
          2 => 'tests/ds.base.test',
          3 => 'tests/ds.search.test',
          4 => 'tests/ds.entities.test',
          5 => 'tests/ds.exportables.test',
          6 => 'tests/ds.views.test',
          7 => 'tests/ds.forms.test',
        ),
        'configure' => 'admin/structure/ds',
        'version' => '7.x-2.13',
        'project' => 'ds',
        'datestamp' => '1455211441',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'ds_devel' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ds/modules/ds_devel/ds_devel.module',
      'name' => 'ds_devel',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Display Suite Devel',
        'description' => 'Development functionality for Display Suite.',
        'core' => '7.x',
        'package' => 'Display Suite',
        'dependencies' => 
        array (
          0 => 'ds',
          1 => 'devel',
        ),
        'version' => '7.x-2.13',
        'project' => 'ds',
        'datestamp' => '1455211441',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'ds_extras' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ds/modules/ds_extras/ds_extras.module',
      'name' => 'ds_extras',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7200',
      'weight' => '2',
      'info' => 
      array (
        'name' => 'Display Suite Extras',
        'description' => 'Contains additional features for Display Suite.',
        'core' => '7.x',
        'package' => 'Display Suite',
        'dependencies' => 
        array (
          0 => 'ds',
        ),
        'configure' => 'admin/structure/ds/list/extras',
        'version' => '7.x-2.13',
        'project' => 'ds',
        'datestamp' => '1455211441',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'ds_format' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ds/modules/ds_format/ds_format.module',
      'name' => 'ds_format',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Display Suite Format',
        'description' => 'Provides the Display Suite Code format filter.',
        'core' => '7.x',
        'package' => 'Display Suite',
        'dependencies' => 
        array (
          0 => 'ds',
        ),
        'configure' => 'admin/structure/ds/list/extras',
        'version' => '7.x-2.13',
        'project' => 'ds',
        'datestamp' => '1455211441',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'ds_forms' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ds/modules/ds_forms/ds_forms.module',
      'name' => 'ds_forms',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '20',
      'info' => 
      array (
        'name' => 'Display Suite Forms',
        'description' => 'Manage the layout of forms in Display Suite.',
        'core' => '7.x',
        'package' => 'Display Suite',
        'dependencies' => 
        array (
          0 => 'ds',
        ),
        'version' => '7.x-2.13',
        'project' => 'ds',
        'datestamp' => '1455211441',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'ds_search' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ds/modules/ds_search/ds_search.module',
      'name' => 'ds_search',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Display Suite Search',
        'description' => 'Extend the display options for search results for Drupal Core or Apache Solr.',
        'core' => '7.x',
        'package' => 'Display Suite',
        'dependencies' => 
        array (
          0 => 'ds',
        ),
        'configure' => 'admin/structure/ds/list/search',
        'version' => '7.x-2.13',
        'project' => 'ds',
        'datestamp' => '1455211441',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'ds_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ds/modules/ds_ui/ds_ui.module',
      'name' => 'ds_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Display Suite UI',
        'description' => 'User interface for managing fields, view modes and classes.',
        'core' => '7.x',
        'package' => 'Display Suite',
        'dependencies' => 
        array (
          0 => 'ds',
        ),
        'version' => '7.x-2.13',
        'project' => 'ds',
        'datestamp' => '1455211441',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'editableviews' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/editableviews/editableviews.module',
      'name' => 'editableviews',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Editable Views',
        'description' => 'Allows entity data in a view to be edited.',
        'package' => 'Views',
        'dependencies' => 
        array (
          0 => 'views',
          1 => 'entity',
          2 => 'ctools',
          3 => 'field_ui',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'editableviews_plugin_style_row_edit_table.inc',
          1 => 'handlers/editableviews_handler_field_field_edit.inc',
          2 => 'handlers/editableviews_handler_field_node_title_edit.inc',
          3 => 'handlers/editableviews_handler_field_entity_metadata_property.inc',
          4 => 'handlers/editableviews_handler_field_save_button_jump_link.inc',
          5 => 'tests/editableviews.test',
        ),
        'test_dependencies' => 
        array (
          0 => 'entityreference',
          1 => 'features',
        ),
        'version' => '7.x-1.0-beta10',
        'project' => 'editableviews',
        'datestamp' => '1438114140',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta10',
    ),
    'elements' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/elements/elements.module',
      'name' => 'elements',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Elements',
        'description' => 'Provides a library of Form API elements.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'elements.module',
          1 => 'elements.theme.inc',
        ),
        'version' => '7.x-1.4',
        'project' => 'elements',
        'datestamp' => '1370667652',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.4',
    ),
    'email' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/email/email.module',
      'name' => 'email',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Email',
        'description' => 'Defines an email field type.',
        'core' => '7.x',
        'package' => 'Fields',
        'files' => 
        array (
          0 => 'email.migrate.inc',
        ),
        'version' => '7.x-1.3',
        'project' => 'email',
        'datestamp' => '1397134155',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'emptyparagraphkiller' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/emptyparagraphkiller/emptyparagraphkiller.module',
      'name' => 'emptyparagraphkiller',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Empty paragraph killer',
        'description' => 'Filters out pesky empty paragraphs.',
        'core' => '7.x',
        'package' => 'Input filters',
        'files' => 
        array (
          0 => 'emptyparagraphfilter.module',
        ),
        'version' => '7.x-1.0-beta2',
        'project' => 'emptyparagraphkiller',
        'datestamp' => '1368045912',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta2',
    ),
    'entity' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entity/entity.module',
      'name' => 'entity',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7003',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity API',
        'description' => 'Enables modules to work with any entity type and to provide entities.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'entity.features.inc',
          1 => 'entity.i18n.inc',
          2 => 'entity.info.inc',
          3 => 'entity.rules.inc',
          4 => 'entity.test',
          5 => 'includes/entity.inc',
          6 => 'includes/entity.controller.inc',
          7 => 'includes/entity.ui.inc',
          8 => 'includes/entity.wrapper.inc',
          9 => 'views/entity.views.inc',
          10 => 'views/handlers/entity_views_field_handler_helper.inc',
          11 => 'views/handlers/entity_views_handler_area_entity.inc',
          12 => 'views/handlers/entity_views_handler_field_boolean.inc',
          13 => 'views/handlers/entity_views_handler_field_date.inc',
          14 => 'views/handlers/entity_views_handler_field_duration.inc',
          15 => 'views/handlers/entity_views_handler_field_entity.inc',
          16 => 'views/handlers/entity_views_handler_field_field.inc',
          17 => 'views/handlers/entity_views_handler_field_numeric.inc',
          18 => 'views/handlers/entity_views_handler_field_options.inc',
          19 => 'views/handlers/entity_views_handler_field_text.inc',
          20 => 'views/handlers/entity_views_handler_field_uri.inc',
          21 => 'views/handlers/entity_views_handler_relationship_by_bundle.inc',
          22 => 'views/handlers/entity_views_handler_relationship.inc',
          23 => 'views/plugins/entity_views_plugin_row_entity_view.inc',
        ),
        'version' => '7.x-1.6',
        'project' => 'entity',
        'datestamp' => '1424876582',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.6',
    ),
    'entity_token' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entity/entity_token.module',
      'name' => 'entity_token',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity tokens',
        'description' => 'Provides token replacements for all properties that have no tokens and are known to the entity API.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'entity_token.tokens.inc',
          1 => 'entity_token.module',
        ),
        'dependencies' => 
        array (
          0 => 'entity',
        ),
        'version' => '7.x-1.6',
        'project' => 'entity',
        'datestamp' => '1424876582',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.6',
    ),
    'entityreference' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entityreference/entityreference.module',
      'name' => 'entityreference',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity Reference',
        'description' => 'Provides a field that can reference other entities.',
        'package' => 'Fields',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'entity',
          1 => 'ctools',
        ),
        'test_dependencies' => 
        array (
          0 => 'feeds',
          1 => 'views',
        ),
        'files' => 
        array (
          0 => 'entityreference.migrate.inc',
          1 => 'plugins/selection/abstract.inc',
          2 => 'plugins/selection/views.inc',
          3 => 'plugins/behavior/abstract.inc',
          4 => 'views/entityreference_plugin_display.inc',
          5 => 'views/entityreference_plugin_style.inc',
          6 => 'views/entityreference_plugin_row_fields.inc',
          7 => 'tests/entityreference.handlers.test',
          8 => 'tests/entityreference.taxonomy.test',
          9 => 'tests/entityreference.admin.test',
          10 => 'tests/entityreference.feeds.test',
        ),
        'version' => '7.x-1.1+11-dev',
        'project' => 'entityreference',
        'datestamp' => '1447406957',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1+11-dev',
    ),
    'entityreference_behavior_example' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entityreference/examples/entityreference_behavior_example/entityreference_behavior_example.module',
      'name' => 'entityreference_behavior_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity Reference Behavior Example',
        'description' => 'Provides some example code for implementing Entity Reference behaviors.',
        'core' => '7.x',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'entityreference',
        ),
        'version' => '7.x-1.1+11-dev',
        'project' => 'entityreference',
        'datestamp' => '1447406957',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1+11-dev',
    ),
    'entityreference_feeds' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entityreference_feeds/entityreference_feeds.module',
      'name' => 'entityreference_feeds',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity Reference feeds',
        'description' => 'Provides feeds integration for entityreference for mapping directly to properties of referenced entities',
        'core' => '7.x',
        'package' => 'Feeds',
        'dependencies' => 
        array (
          0 => 'feeds',
          1 => 'entityreference',
          2 => 'entity',
        ),
        'configure' => 'admin/config/content/entityreference_feeds',
        'version' => '7.x-1.0-beta1+8-dev',
        'project' => 'entityreference_feeds',
        'datestamp' => '1442496245',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta1+8-dev',
    ),
    'entityreference_prepopulate' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entityreference_prepopulate/entityreference_prepopulate.module',
      'name' => 'entityreference_prepopulate',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity reference prepopulate',
        'description' => 'Prepopulate entity reference values from URL.',
        'core' => '7.x',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'entityreference',
        ),
        'files' => 
        array (
          0 => 'entityreference_prepopulate.test',
        ),
        'version' => '7.x-1.6',
        'project' => 'entityreference_prepopulate',
        'datestamp' => '1454176140',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.6',
    ),
    'entityreference_view_widget' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entityreference_view_widget/entityreference_view_widget.module',
      'name' => 'entityreference_view_widget',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity Reference View Widget',
        'description' => 'Provides a complex widget that embeds a view for selecting items.',
        'core' => '7.x',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'entityreference',
          1 => 'views',
          2 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'views/entityreference_view_widget_handler_field_checkbox.inc',
          1 => 'views/entityreference_view_widget_plugin_display.inc',
          2 => 'views/entityreference_view_widget.views_default.inc',
        ),
        'version' => '7.x-2.0-rc6',
        'project' => 'entityreference_view_widget',
        'datestamp' => '1424386685',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-rc6',
    ),
    'entity_rules' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entity_rules/entity_rules.module',
      'name' => 'entity_rules',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7102',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity Rules',
        'description' => 'Provides UI for select Rules to execute during Entity Events',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'entity',
          1 => 'rules',
        ),
        'version' => '7.x-1.0-alpha4',
        'project' => 'entity_rules',
        'datestamp' => '1386645215',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-alpha4',
    ),
    'entity_translation' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entity_translation/entity_translation.module',
      'name' => 'entity_translation',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7007',
      'weight' => '11',
      'info' => 
      array (
        'name' => 'Entity Translation',
        'description' => 'Allows entities to be translated into different languages.',
        'package' => 'Multilingual - Entity Translation',
        'core' => '7.x',
        'configure' => 'admin/config/regional/entity_translation',
        'dependencies' => 
        array (
          0 => 'locale (>7.14)',
        ),
        'files' => 
        array (
          0 => 'includes/translation.handler_factory.inc',
          1 => 'includes/translation.handler.inc',
          2 => 'includes/translation.handler.comment.inc',
          3 => 'includes/translation.handler.node.inc',
          4 => 'includes/translation.handler.taxonomy_term.inc',
          5 => 'includes/translation.handler.user.inc',
          6 => 'tests/entity_translation.test',
          7 => 'views/entity_translation_handler_relationship.inc',
          8 => 'views/entity_translation_handler_field_translate_link.inc',
          9 => 'views/entity_translation_handler_field_label.inc',
          10 => 'views/entity_translation_handler_filter_entity_type.inc',
          11 => 'views/entity_translation_handler_filter_language.inc',
          12 => 'views/entity_translation_handler_filter_translation_exists.inc',
          13 => 'views/entity_translation_handler_field_field.inc',
        ),
        'version' => '7.x-1.0-beta4',
        'project' => 'entity_translation',
        'datestamp' => '1421971088',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta4',
    ),
    'entity_translation_i18n_menu' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entity_translation/entity_translation_i18n_menu/entity_translation_i18n_menu.module',
      'name' => 'entity_translation_i18n_menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity Translation Menu',
        'description' => 'Allows menu items to be translated on the entity form.',
        'package' => 'Multilingual - Entity Translation',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'entity_translation',
          1 => 'i18n',
          2 => 'i18n_menu',
        ),
        'files' => 
        array (
          0 => 'entity_translation_i18n_menu.test',
        ),
        'version' => '7.x-1.0-beta4',
        'project' => 'entity_translation',
        'datestamp' => '1421971088',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta4',
    ),
    'entity_translation_upgrade' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/entity_translation/entity_translation_upgrade/entity_translation_upgrade.module',
      'name' => 'entity_translation_upgrade',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Entity Translation Upgrade',
        'description' => 'Provides an upgrade path from node-based translation to field-based translation.',
        'package' => 'Multilingual - Entity Translation',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'entity_translation',
        ),
        'version' => '7.x-1.0-beta4',
        'project' => 'entity_translation',
        'datestamp' => '1421971088',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta4',
    ),
    'eu_cookie_compliance' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/eu_cookie_compliance/eu_cookie_compliance.module',
      'name' => 'eu_cookie_compliance',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'EU Cookie Compliance',
        'description' => 'This module aims at making the website compliant with the new EU cookie regulation',
        'core' => '7.x',
        'configure' => 'admin/config/system/eu-cookie-compliance',
        'version' => '7.x-1.14',
        'project' => 'eu_cookie_compliance',
        'datestamp' => '1400592528',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.14',
    ),
    'current_search' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/facetapi/contrib/current_search/current_search.module',
      'name' => 'current_search',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Current Search Blocks',
        'description' => 'Provides an interface for creating blocks containing information about the current search.',
        'dependencies' => 
        array (
          0 => 'facetapi',
        ),
        'package' => 'Search Toolkit',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'plugins/current_search/item.inc',
          1 => 'plugins/current_search/item_active.inc',
          2 => 'plugins/current_search/item_group.inc',
          3 => 'plugins/current_search/item_text.inc',
          4 => 'tests/current_search.test',
        ),
        'configure' => 'admin/config/search/current_search',
        'version' => '7.x-1.5',
        'project' => 'facetapi',
        'datestamp' => '1405685332',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'facetapi' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/facetapi/facetapi.module',
      'name' => 'facetapi',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7103',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Facet API',
        'description' => 'An abstracted facet API that can be used by various search backends.',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'package' => 'Search Toolkit',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'plugins/facetapi/adapter.inc',
          1 => 'plugins/facetapi/dependency.inc',
          2 => 'plugins/facetapi/dependency_bundle.inc',
          3 => 'plugins/facetapi/dependency_role.inc',
          4 => 'plugins/facetapi/empty_behavior.inc',
          5 => 'plugins/facetapi/empty_behavior_text.inc',
          6 => 'plugins/facetapi/filter.inc',
          7 => 'plugins/facetapi/query_type.inc',
          8 => 'plugins/facetapi/url_processor.inc',
          9 => 'plugins/facetapi/url_processor_standard.inc',
          10 => 'plugins/facetapi/widget.inc',
          11 => 'plugins/facetapi/widget_links.inc',
          12 => 'tests/facetapi_test.plugins.inc',
          13 => 'tests/facetapi.test',
        ),
        'version' => '7.x-1.5',
        'project' => 'facetapi',
        'datestamp' => '1405685332',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'facetapi_bonus' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/facetapi_bonus/facetapi_bonus.module',
      'name' => 'facetapi_bonus',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Facet API Bonus',
        'package' => 'Search Toolkit',
        'description' => 'Additions to facetapi',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'facetapi',
        ),
        'files' => 
        array (
          0 => 'plugins/facetapi/dependency_facet.inc',
          1 => 'plugins/facetapi/facetapi_bonus_select.inc',
          2 => 'plugins/facetapi/filter_rewrite_items.inc',
          3 => 'plugins/facetapi/filter_exclude_specified_items.inc',
          4 => 'plugins/facetapi/filter_narrow_results.inc',
          5 => 'plugins/facetapi/filter_show_if_minimum_items.inc',
          6 => 'plugins/facetapi/filter_show_deepest_level_items.inc',
          7 => 'plugins/facetapi/current_search_reset_filters_link.inc',
        ),
        'version' => '7.x-1.1+7-dev',
        'project' => 'facetapi_bonus',
        'datestamp' => '1380577745',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1+7-dev',
    ),
    'facetapi_i18n' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/facetapi_i18n/facetapi_i18n.module',
      'name' => 'facetapi_i18n',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Facet API Translation',
        'description' => 'Integrates Facet API with the i18n module to translate custom strings and mapped facet values.',
        'dependencies' => 
        array (
          0 => 'i18n_string',
          1 => 'facetapi (>=7.x-1.0-rc1)',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'version' => '7.x-1.0-beta2',
        'project' => 'facetapi_i18n',
        'datestamp' => '1327885859',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta2',
    ),
    'facetapi_select' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/facetapi_select/facetapi_select.module',
      'name' => 'facetapi_select',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Facetapi Select',
        'description' => 'Display search facets as select dropdowns',
        'package' => 'Search Toolkit',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'facetapi',
        ),
        'files' => 
        array (
          0 => 'plugins/facetapi/FacetapiSelectDropdowns.inc',
        ),
        'version' => '7.x-1.x-dev',
        'project' => 'facetapi_select',
        'datestamp' => '1449524899',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.x-dev',
    ),
    'fallback_language_negotiation' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/fallback_language_negotation/fallback_language_negotiation.module',
      'name' => 'fallback_language_negotiation',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Fallback language negotiation',
        'description' => 'Provides a fallback language negotiation if user language couldn\'t be detected',
        'core' => '7.x',
        'package' => 'locale',
        'dependencies' => 
        array (
          0 => 'locale',
        ),
        'configure' => 'admin/config/regional/language/configure',
        'version' => '7.x-1.x-dev',
        'project' => 'fallback_language_negotation',
        'datestamp' => '1380577812',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.x-dev',
    ),
    'features' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/features/features.module',
      'name' => 'features',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7201',
      'weight' => '20',
      'info' => 
      array (
        'name' => 'Features',
        'description' => 'Provides feature management for Drupal.',
        'core' => '7.x',
        'package' => 'Features',
        'files' => 
        array (
          0 => 'tests/features.test',
        ),
        'configure' => 'admin/structure/features/settings',
        'version' => '7.x-2.7',
        'project' => 'features',
        'datestamp' => '1444829630',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.7',
    ),
    'fe_block' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/features_extra/fe_block.module',
      'name' => 'fe_block',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'FE Block',
        'description' => 'Build blocks and block settings as features.',
        'core' => '7.x',
        'package' => 'Features extra',
        'dependencies' => 
        array (
          0 => 'block',
          1 => 'ctools',
          2 => 'features',
        ),
        'test_dependencies' => 
        array (
          0 => 'block_class',
        ),
        'files' => 
        array (
          0 => 'tests/features_extra_test_case.test',
          1 => 'tests/fe_block.test',
        ),
        'version' => '7.x-1.0-beta1',
        'project' => 'features_extra',
        'datestamp' => '1366049112',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta1',
    ),
    'fe_nodequeue' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/features_extra/fe_nodequeue.module',
      'name' => 'fe_nodequeue',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'FE Nodequeue',
        'description' => 'Build nodequeues as features.',
        'core' => '7.x',
        'package' => 'Features extra',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'features',
          2 => 'nodequeue',
        ),
        'files' => 
        array (
          0 => 'tests/features_extra_test_case.test',
          1 => 'tests/fe_nodequeue.test',
        ),
        'version' => '7.x-1.0-beta1',
        'project' => 'features_extra',
        'datestamp' => '1366049112',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta1',
    ),
    'fe_profile' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/features_extra/fe_profile.module',
      'name' => 'fe_profile',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'FE Profile',
        'description' => 'Export profile field using features.',
        'core' => '7.x',
        'package' => 'Features extra',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'features',
          2 => 'profile',
        ),
        'version' => '7.x-1.0-beta1',
        'project' => 'features_extra',
        'datestamp' => '1366049112',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta1',
    ),
    'features_extra_test' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/features_extra/tests/features_extra_test.module',
      'name' => 'features_extra_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Features Extra test feature',
        'description' => 'Test feature for Features Extra.',
        'core' => '7.x',
        'package' => 'Testing',
        'php' => '5.2.4',
        'dependencies' => 
        array (
          0 => 'block_class',
          1 => 'fe_block',
          2 => 'fe_nodequeue',
        ),
        'features' => 
        array (
          'fe_block_boxes' => 
          array (
            0 => 'features_extra_test_block',
          ),
          'fe_block_settings' => 
          array (
            0 => 'block-features_extra_test_block',
          ),
          'fe_nodequeue' => 
          array (
            0 => 'features_extra_test_nodequeue',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
        ),
        'version' => '7.x-1.0-beta1',
        'project' => 'features_extra',
        'datestamp' => '1366049112',
      ),
      'version' => '7.x-1.0-beta1',
    ),
    'features_translations' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/features_translations/features_translations.module',
      'name' => 'features_translations',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Features Translations',
        'description' => 'Import and export string translations with Features.',
        'core' => '7.x',
        'package' => 'Features',
        'dependencies' => 
        array (
          0 => 'features',
          1 => 'locale',
        ),
        'version' => '7.x-2.0',
        'project' => 'features_translations',
        'datestamp' => '1433614686',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0',
    ),
    'feeds' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/feeds/feeds.module',
      'name' => 'feeds',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7212',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Feeds',
        'description' => 'Aggregates RSS/Atom/RDF feeds, imports CSV files and more.',
        'package' => 'Feeds',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'job_scheduler',
        ),
        'test_dependencies' => 
        array (
          0 => 'date:date',
          1 => 'entity_translation:entity_translation',
          2 => 'feeds_xpathparser:feeds_xpathparser',
          3 => 'link:link',
          4 => 'i18n:i18n_taxonomy',
        ),
        'files' => 
        array (
          0 => 'includes/FeedsConfigurable.inc',
          1 => 'includes/FeedsImporter.inc',
          2 => 'includes/FeedsSource.inc',
          3 => 'libraries/ParserCSV.inc',
          4 => 'libraries/http_request.inc',
          5 => 'libraries/PuSHSubscriber.inc',
          6 => 'plugins/FeedsCSVParser.inc',
          7 => 'plugins/FeedsFetcher.inc',
          8 => 'plugins/FeedsFileFetcher.inc',
          9 => 'plugins/FeedsHTTPFetcher.inc',
          10 => 'plugins/FeedsNodeProcessor.inc',
          11 => 'plugins/FeedsOPMLParser.inc',
          12 => 'plugins/FeedsParser.inc',
          13 => 'plugins/FeedsPlugin.inc',
          14 => 'plugins/FeedsProcessor.inc',
          15 => 'plugins/FeedsSimplePieParser.inc',
          16 => 'plugins/FeedsSitemapParser.inc',
          17 => 'plugins/FeedsSyndicationParser.inc',
          18 => 'plugins/FeedsTermProcessor.inc',
          19 => 'plugins/FeedsUserProcessor.inc',
          20 => 'tests/feeds.test',
          21 => 'tests/common_syndication_parser.test',
          22 => 'tests/feeds_date_time.test',
          23 => 'tests/feeds_mapper_date.test',
          24 => 'tests/feeds_mapper_date_multiple.test',
          25 => 'tests/feeds_mapper_field.test',
          26 => 'tests/feeds_mapper_file.test',
          27 => 'tests/feeds_mapper_hooks.test',
          28 => 'tests/feeds_mapper_link.test',
          29 => 'tests/feeds_mapper_list.test',
          30 => 'tests/feeds_mapper_multilingual_fields.test',
          31 => 'tests/feeds_mapper_path.test',
          32 => 'tests/feeds_mapper_profile.test',
          33 => 'tests/feeds_mapper_unique.test',
          34 => 'tests/feeds_mapper.test',
          35 => 'tests/feeds_mapper_config.test',
          36 => 'tests/feeds_fetcher_file.test',
          37 => 'tests/feeds_mapper_format_config.test',
          38 => 'tests/feeds_fetcher_http.test',
          39 => 'tests/feeds_i18n.test',
          40 => 'tests/feeds_i18n_node.test',
          41 => 'tests/feeds_i18n_taxonomy.test',
          42 => 'tests/feeds_parser_csv.test',
          43 => 'tests/feeds_parser_sitemap.test',
          44 => 'tests/feeds_parser_syndication.test',
          45 => 'tests/feeds_processor_node.test',
          46 => 'tests/feeds_processor_term.test',
          47 => 'tests/feeds_processor_user.test',
          48 => 'tests/feeds_push.test',
          49 => 'tests/feeds_scheduler.test',
          50 => 'tests/feeds_mapper_link.test',
          51 => 'tests/feeds_mapper_summary.test',
          52 => 'tests/feeds_mapper_taxonomy.test',
          53 => 'tests/http_request.test',
          54 => 'tests/parser_csv.test',
          55 => 'views/feeds_views_handler_argument_importer_id.inc',
          56 => 'views/feeds_views_handler_field_importer_name.inc',
          57 => 'views/feeds_views_handler_field_log_message.inc',
          58 => 'views/feeds_views_handler_field_severity.inc',
          59 => 'views/feeds_views_handler_field_source.inc',
          60 => 'views/feeds_views_handler_filter_severity.inc',
          61 => 'views/feeds_views_plugin_argument_validate_feed_nid.inc',
        ),
        'version' => '7.x-2.0-beta2',
        'project' => 'feeds',
        'datestamp' => '1456055647',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta2',
    ),
    'feeds_import' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/feeds/feeds_import/feeds_import.module',
      'name' => 'feeds_import',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Feeds Import',
        'description' => 'An example of a node importer and a user importer.',
        'core' => '7.x',
        'package' => 'Feeds',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'feeds',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'feeds:feeds_importer_default:1',
          ),
          'features_api' => 
          array (
            0 => 'api:2',
          ),
          'feeds_importer' => 
          array (
            0 => 'node',
            1 => 'user',
          ),
        ),
        'files' => 
        array (
          0 => 'feeds_import.test',
        ),
        'version' => '7.x-2.0-beta2',
        'project' => 'feeds',
        'datestamp' => '1456055647',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta2',
    ),
    'feeds_news' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/feeds/feeds_news/feeds_news.module',
      'name' => 'feeds_news',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Feeds News',
        'description' => 'A news aggregator built with feeds, creates nodes from imported feed items. With OPML import.',
        'core' => '7.x',
        'package' => 'Feeds',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'features',
          2 => 'feeds',
          3 => 'views',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'feeds:feeds_importer_default:1',
            1 => 'views:views_default:3.0',
          ),
          'features_api' => 
          array (
            0 => 'api:2',
          ),
          'feeds_importer' => 
          array (
            0 => 'feed',
            1 => 'opml',
          ),
          'field_base' => 
          array (
            0 => 'field_feed_item_description',
          ),
          'field_instance' => 
          array (
            0 => 'node-feed_item-field_feed_item_description',
          ),
          'node' => 
          array (
            0 => 'feed',
            1 => 'feed_item',
          ),
          'views_view' => 
          array (
            0 => 'feeds_defaults_feed_items',
          ),
        ),
        'files' => 
        array (
          0 => 'feeds_news.module',
          1 => 'feeds_news.test',
        ),
        'version' => '7.x-2.0-beta2',
        'project' => 'feeds',
        'datestamp' => '1456055647',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta2',
    ),
    'feeds_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/feeds/feeds_ui/feeds_ui.module',
      'name' => 'feeds_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Feeds Admin UI',
        'description' => 'Administrative UI for Feeds module.',
        'package' => 'Feeds',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'feeds',
        ),
        'configure' => 'admin/structure/feeds',
        'files' => 
        array (
          0 => 'feeds_ui.test',
        ),
        'version' => '7.x-2.0-beta2',
        'project' => 'feeds',
        'datestamp' => '1456055647',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta2',
    ),
    'feeds_tamper' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/feeds_tamper/feeds_tamper.module',
      'name' => 'feeds_tamper',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7004',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Feeds Tamper',
        'description' => 'Modify feeds data before it gets saved.',
        'package' => 'Feeds',
        'dependencies' => 
        array (
          0 => 'feeds',
        ),
        'files' => 
        array (
          0 => 'tests/feeds_tamper.test',
          1 => 'tests/feeds_tamper_plugins.test',
          2 => 'tests/feeds_tamper_efq_finder.test',
        ),
        'core' => '7.x',
        'version' => '7.x-1.1',
        'project' => 'feeds_tamper',
        'datestamp' => '1433291282',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1',
    ),
    'feeds_tamper_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/feeds_tamper/feeds_tamper_ui/feeds_tamper_ui.module',
      'name' => 'feeds_tamper_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Feeds Tamper Admin UI',
        'description' => 'Administrative UI for Feeds Tamper module.',
        'package' => 'Feeds',
        'dependencies' => 
        array (
          0 => 'feeds_tamper',
          1 => 'feeds_ui',
        ),
        'files' => 
        array (
          0 => 'tests/feeds_tamper_ui.test',
        ),
        'core' => '7.x',
        'version' => '7.x-1.1',
        'project' => 'feeds_tamper',
        'datestamp' => '1433291282',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1',
    ),
    'field_conditional_state' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/field_conditional_state/field_conditional_state.module',
      'name' => 'field_conditional_state',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7202',
      'weight' => '100',
      'info' => 
      array (
        'name' => 'Field Conditional State',
        'description' => 'Set form field states attributes based on the values selected in other form fields using Drupal\'s states API',
        'core' => '7.x',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'system (>=7.14)',
        ),
        'files' => 
        array (
          0 => 'field_conditional_state.test',
        ),
        'version' => '7.x-2.1',
        'project' => 'field_conditional_state',
        'datestamp' => '1412096533',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.1',
    ),
    'field_group' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/field_group/field_group.module',
      'name' => 'field_group',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7008',
      'weight' => '1',
      'info' => 
      array (
        'name' => 'Field Group',
        'description' => 'Provides the ability to group your fields on both form and display.',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'ctools',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'tests/field_group.ui.test',
          1 => 'tests/field_group.display.test',
        ),
        'version' => '7.x-1.5',
        'project' => 'field_group',
        'datestamp' => '1452033709',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'filefield_paths' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/filefield_paths/filefield_paths.module',
      'name' => 'filefield_paths',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7107',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'File (Field) Paths',
        'description' => 'Adds improved Token based file sorting and renaming functionalities.',
        'package' => 'Fields',
        'test_dependencies' => 
        array (
          0 => 'pathauto',
          1 => 'redirect',
          2 => 'token',
          3 => 'transliteration',
        ),
        'configure' => 'admin/config/media/file-system/filefield-paths',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'tests/filefield_paths.test',
          1 => 'tests/filefield_paths.general.test',
          2 => 'tests/filefield_paths.text_replace.test',
          3 => 'tests/filefield_paths.tokens.test',
          4 => 'tests/filefield_paths.update.test',
          5 => 'tests/pathauto.test',
          6 => 'tests/redirect.test',
          7 => 'tests/transliteration.test',
        ),
        'version' => '7.x-1.0',
        'project' => 'filefield_paths',
        'datestamp' => '1447729442',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'file_entity' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/file_entity/file_entity.module',
      'name' => 'file_entity',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7216',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'File Entity',
        'description' => 'Extends Drupal file entities to be fieldable and viewable.',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'file',
          2 => 'ctools',
          3 => 'system (>=7.9)',
        ),
        'test_dependencies' => 
        array (
          0 => 'token',
        ),
        'files' => 
        array (
          0 => 'views/views_handler_argument_file_type.inc',
          1 => 'views/views_handler_field_file_rendered.inc',
          2 => 'views/views_handler_field_file_type.inc',
          3 => 'views/views_handler_filter_file_type.inc',
          4 => 'views/views_handler_filter_schema_type.inc',
          5 => 'views/views_handler_field_file_filename.inc',
          6 => 'views/views_handler_field_file_link.inc',
          7 => 'views/views_handler_field_file_link_edit.inc',
          8 => 'views/views_handler_field_file_link_delete.inc',
          9 => 'views/views_handler_field_file_link_download.inc',
          10 => 'views/views_handler_field_file_link_usage.inc',
          11 => 'views/views_plugin_row_file_rss.inc',
          12 => 'views/views_plugin_row_file_view.inc',
          13 => 'file_entity.test',
        ),
        'configure' => 'admin/config/media/file-settings',
        'version' => '7.x-2.0-beta2',
        'project' => 'file_entity',
        'datestamp' => '1436896443',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta2',
    ),
    'flag' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/flag/flag.module',
      'name' => 'flag',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7306',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Flag',
        'description' => 'Create customized flags that users can set on entities.',
        'core' => '7.x',
        'package' => 'Flags',
        'configure' => 'admin/structure/flags',
        'test_dependencies' => 
        array (
          0 => 'token',
          1 => 'rules',
        ),
        'files' => 
        array (
          0 => 'includes/flag/flag_flag.inc',
          1 => 'includes/flag/flag_entity.inc',
          2 => 'includes/flag/flag_node.inc',
          3 => 'includes/flag/flag_comment.inc',
          4 => 'includes/flag/flag_user.inc',
          5 => 'includes/flag.cookie_storage.inc',
          6 => 'includes/flag.entity.inc',
          7 => 'flag.rules.inc',
          8 => 'includes/views/flag_handler_argument_entity_id.inc',
          9 => 'includes/views/flag_handler_field_ops.inc',
          10 => 'includes/views/flag_handler_field_flagged.inc',
          11 => 'includes/views/flag_handler_filter_flagged.inc',
          12 => 'includes/views/flag_handler_sort_flagged.inc',
          13 => 'includes/views/flag_handler_relationships.inc',
          14 => 'includes/views/flag_plugin_argument_validate_flaggability.inc',
          15 => 'tests/flag.test',
        ),
        'version' => '7.x-3.7',
        'project' => 'flag',
        'datestamp' => '1444844942',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.7',
    ),
    'flag_actions' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/flag/flag_actions.module',
      'name' => 'flag_actions',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Flag actions',
        'description' => 'Execute actions on Flag events.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'flag',
        ),
        'package' => 'Flags',
        'configure' => 'admin/structure/flags/actions',
        'version' => '7.x-3.7',
        'project' => 'flag',
        'datestamp' => '1444844942',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.7',
    ),
    'flag_bookmark' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/flag/flag_bookmark/flag_bookmark.module',
      'name' => 'flag_bookmark',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Flag Bookmark',
        'description' => 'Provides an example bookmark flag and supporting views.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'flag',
        ),
        'package' => 'Flags',
        'version' => '7.x-3.7',
        'project' => 'flag',
        'datestamp' => '1444844942',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.7',
    ),
    'flexslider' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/flexslider/flexslider.module',
      'name' => 'flexslider',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7202',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'FlexSlider',
        'description' => 'Integrate the FlexSlider 2 library with Drupal',
        'core' => '7.x',
        'package' => 'FlexSlider',
        'dependencies' => 
        array (
          0 => 'libraries (>=2.x)',
          1 => 'ctools',
          2 => 'image',
        ),
        'files' => 
        array (
          0 => 'theme/flexslider.theme.inc',
          1 => 'flexslider.test',
        ),
        'configure' => 'admin/config/media/flexslider',
        'version' => '7.x-2.0-rc1',
        'project' => 'flexslider',
        'datestamp' => '1438285141',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-rc1',
    ),
    'flexslider_example' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/flexslider/flexslider_example/flexslider_example.module',
      'name' => 'flexslider_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'FlexSlider Example',
        'description' => 'Sample implementation of FlexSlider',
        'core' => '7.x',
        'package' => 'FlexSlider',
        'php' => '5.2.4',
        'dependencies' => 
        array (
          0 => 'context',
          1 => 'features',
          2 => 'flexslider',
          3 => 'flexslider_fields',
          4 => 'flexslider_views',
          5 => 'image',
          6 => 'menu',
          7 => 'strongarm',
          8 => 'views',
        ),
        'features' => 
        array (
          'context' => 
          array (
            0 => 'flexslider_example_thumbnail',
          ),
          'ctools' => 
          array (
            0 => 'context:context:3',
            1 => 'flexslider:flexslider_default_preset:1',
            2 => 'strongarm:strongarm:1',
            3 => 'views:views_default:3.0',
          ),
          'features_api' => 
          array (
            0 => 'api:1',
          ),
          'field' => 
          array (
            0 => 'node-flexslider_example-field_flexslider_example_image',
            1 => 'node-flexslider_example-field_flexslider_example_slidesh',
          ),
          'flexslider_optionset' => 
          array (
            0 => 'flexslider_carousel_with_min_and_max_ranges',
            1 => 'flexslider_default_basic_carousel',
            2 => 'flexslider_default_slider_thumbnail_controlnav',
            3 => 'flexslider_default_slider_w_thumbnail_slider',
            4 => 'flexslider_default_thumbnail_captions',
            5 => 'flexslider_default_thumbnail_slider',
          ),
          'menu_custom' => 
          array (
            0 => 'menu-flexslider-example',
          ),
          'node' => 
          array (
            0 => 'flexslider_example',
          ),
          'variable' => 
          array (
            0 => 'field_bundle_settings_node__flexslider_example',
          ),
          'views_view' => 
          array (
            0 => 'flexslider_views_example',
          ),
        ),
        'version' => '7.x-2.0-rc1',
        'project' => 'flexslider',
        'datestamp' => '1438285141',
      ),
      'version' => '7.x-2.0-rc1',
    ),
    'flexslider_fields' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/flexslider/flexslider_fields/flexslider_fields.module',
      'name' => 'flexslider_fields',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'FlexSlider Fields',
        'description' => 'Adds a display mode in Fields for FlexSlider',
        'core' => '7.x',
        'package' => 'FlexSlider',
        'dependencies' => 
        array (
          0 => 'flexslider',
        ),
        'version' => '7.x-2.0-rc1',
        'project' => 'flexslider',
        'datestamp' => '1438285141',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-rc1',
    ),
    'flexslider_views' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/flexslider/flexslider_views/flexslider_views.module',
      'name' => 'flexslider_views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'FlexSlider Views Style',
        'description' => 'Adds a Views style plugin for FlexSlider',
        'core' => '7.x',
        'package' => 'FlexSlider',
        'dependencies' => 
        array (
          0 => 'views',
          1 => 'flexslider',
        ),
        'files' => 
        array (
          0 => 'flexslider_views.module',
          1 => 'flexslider_views.views.inc',
          2 => 'flexslider_views_plugin_style_flexslider.inc',
        ),
        'version' => '7.x-2.0-rc1',
        'project' => 'flexslider',
        'datestamp' => '1438285141',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-rc1',
    ),
    'fontello' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/fontello/fontello.module',
      'name' => 'fontello',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Fontello',
        'description' => 'Integrates the <a href="http://fontello.com" target="_blank">Fontello</a> service as an icon provider for the Icon API.',
        'core' => '7.x',
        'configure' => 'admin/config/media/icons',
        'package' => 'Icon Provider',
        'dependencies' => 
        array (
          0 => 'icon',
        ),
        'version' => '7.x-1.0',
        'project' => 'fontello',
        'datestamp' => '1372086955',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'format_number' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/format_number/format_number.module',
      'name' => 'format_number',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Format Number API',
        'description' => 'This module provides a method to configure number formats (site default and user defined) with configurable decimal point and thousand separators. It also exposes several functions that can be used by other contributed or custom modules to display numbers accordingly.',
        'files' => 
        array (
          0 => 'format_number.module',
          1 => 'format_number.settings.inc',
        ),
        'configure' => 'admin/config/regional/format_number',
        'core' => '7.x',
        'version' => '7.x-1.x-dev',
        'project' => 'format_number',
        'datestamp' => '1380579986',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.x-dev',
    ),
    'geocoder' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/geocoder/geocoder.module',
      'name' => 'geocoder',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Geocoder',
        'description' => 'An API and widget to geocode various known data into other GIS data types.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'geophp',
          1 => 'ctools',
        ),
        'configure' => 'admin/config/content/geocoder',
        'version' => '7.x-1.3',
        'project' => 'geocoder',
        'datestamp' => '1454270340',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'geofield' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/geofield/geofield.module',
      'name' => 'geofield',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7202',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Geofield',
        'description' => 'Stores geographic and location data (points, lines, and polygons).',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'geophp (>=1.7)',
          1 => 'ctools',
        ),
        'package' => 'Fields',
        'files' => 
        array (
          0 => 'geofield.module',
          1 => 'geofield.install',
          2 => 'geofield.elements.inc',
          3 => 'geofield.widgets.inc',
          4 => 'geofield.formatters.inc',
          5 => 'geofield.openlayers.inc',
          6 => 'geofield.feeds.inc',
          7 => 'tests/geofield.test',
          8 => 'views/geofield.views.inc',
          9 => 'views/handlers/geofield_handler_sort.inc',
          10 => 'views/handlers/geofield_handler_field.inc',
          11 => 'views/handlers/geofield_handler_filter.inc',
          12 => 'views/handlers/geofield_handler_argument_proximity.inc',
          13 => 'views/proximity_plugins/geofieldProximityBase.inc',
          14 => 'views/proximity_plugins/geofieldProximityManual.inc',
          15 => 'views/proximity_plugins/geofieldProximityGeocoder.inc',
          16 => 'views/proximity_plugins/geofieldProximityEntityURL.inc',
          17 => 'views/proximity_plugins/geofieldProximityOtherGeofield.inc',
          18 => 'views/proximity_plugins/geofieldProximityCurrentUser.inc',
          19 => 'views/proximity_plugins/geofieldProximityExposedFilter.inc',
          20 => 'views/proximity_plugins/geofieldProximityContextualFilter.inc',
        ),
        'version' => '7.x-2.3',
        'project' => 'geofield',
        'datestamp' => '1411337638',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.3',
    ),
    'geofield_map' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/geofield/modules/geofield_map/geofield_map.module',
      'name' => 'geofield_map',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Geofield Map',
        'description' => 'Provides a basic mapping interface for Geofields.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'geofield',
        ),
        'files' => 
        array (
          0 => 'includes/geofield_map.views.inc',
          1 => 'includes/geofield_map_plugin_style_map.inc',
        ),
        'version' => '7.x-2.3',
        'project' => 'geofield',
        'datestamp' => '1411337638',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.3',
    ),
    'geophp' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/geophp/geophp.module',
      'name' => 'geophp',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'geoPHP',
        'description' => 'Wraps the geoPHP library: advanced geometry operations in PHP',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'project' => 'geophp',
        'datestamp' => '1352084822',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.7',
    ),
    'globalredirect' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/globalredirect/globalredirect.module',
      'name' => 'globalredirect',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '6101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Global Redirect',
        'description' => 'Searches for an alias of the current URL and 301 redirects if found. Stops duplicate content arising when path module is enabled.',
        'package' => 'Path management',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'globalredirect.test',
        ),
        'configure' => 'admin/config/system/globalredirect',
        'version' => '7.x-1.5',
        'project' => 'globalredirect',
        'datestamp' => '1339748779',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'gmap' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/gmap/gmap.module',
      'name' => 'gmap',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7202',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'GMap',
        'description' => 'Views plugins to show Google Maps from entities.',
        'core' => '7.x',
        'package' => 'Location',
        'configure' => 'admin/config/services/gmap',
        'files' => 
        array (
          0 => 'gmap_plugin_style_gmap.inc',
          1 => 'gmap_plugin_style_gmapextended.inc',
          2 => 'tests/gmap.test',
          3 => 'tests/oopmigration.test',
          4 => 'lib/Drupal/gmap/GmapDefaults.php',
          5 => 'lib/Drupal/gmap/GmapPolylineToolbox.php',
          6 => 'lib/Drupal/gmap/GmapMacroToolbox.php',
          7 => 'tests/inc/gmap_polyutil.inc',
          8 => 'tests/inc/gmap_defaults.inc',
        ),
        'version' => '7.x-2.11',
        'project' => 'gmap',
        'datestamp' => '1457698170',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.11',
    ),
    'gmap_fields' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/gmap/gmap_fields/gmap_fields.module',
      'name' => 'gmap_fields',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'GMap Fields',
        'description' => 'GMap field types, currently only a marker field.',
        'core' => '7.x',
        'package' => 'Location',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'gmap',
          2 => 'options',
        ),
        'version' => '7.x-2.11',
        'project' => 'gmap',
        'datestamp' => '1457698170',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.11',
    ),
    'gmap_location' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/gmap/gmap_location.module',
      'name' => 'gmap_location',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'GMap Location',
        'description' => 'Display location.module information on Google Maps',
        'package' => 'Location',
        'core' => '7.x',
        'configure' => 'admin/config/services/gmap_location',
        'files' => 
        array (
          0 => 'gmap_location.module',
        ),
        'dependencies' => 
        array (
          0 => 'gmap',
          1 => 'location',
        ),
        'version' => '7.x-2.11',
        'project' => 'gmap',
        'datestamp' => '1457698170',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.11',
    ),
    'gmap_macro_builder' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/gmap/gmap_macro_builder.module',
      'name' => 'gmap_macro_builder',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'GMap Macro Builder',
        'description' => 'UI for building GMap macros.',
        'package' => 'Location',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'gmap',
        ),
        'files' => 
        array (
          0 => 'gmap_macro_builder.module',
        ),
        'version' => '7.x-2.11',
        'project' => 'gmap',
        'datestamp' => '1457698170',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.11',
    ),
    'gmap_style_bubbles' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/gmap/gmap_style_bubbles/gmap_style_bubbles.module',
      'name' => 'gmap_style_bubbles',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Gmap Style Bubbles',
        'description' => 'A module that lets you add more styles to your gmap popup bubbles.',
        'package' => 'Location',
        'core' => '7.x',
        'project' => 'gmap',
        'dependencies' => 
        array (
          0 => 'gmap',
          1 => 'libraries (2.x)',
        ),
        'version' => '7.x-2.11',
        'datestamp' => '1457698170',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.11',
    ),
    'gmap_taxonomy' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/gmap/gmap_taxonomy.module',
      'name' => 'gmap_taxonomy',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'GMap Taxonomy Markers',
        'description' => 'Taxonomy based markers',
        'package' => 'Location',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'taxonomy',
          1 => 'gmap',
        ),
        'files' => 
        array (
          0 => 'gmap_taxonomy.module',
          1 => 'gmap_taxonomy.views.inc',
        ),
        'version' => '7.x-2.11',
        'project' => 'gmap',
        'datestamp' => '1457698170',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.11',
    ),
    'location_gmap_find_address' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/gmap/location_gmap_find_address/location_gmap_find_address.module',
      'name' => 'location_gmap_find_address',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Location + Gmap \'Find Address\' button',
        'description' => 'Adds a \'Find Address\' button to all location fields that use gmap',
        'core' => '7.x',
        'package' => 'Location',
        'dependencies' => 
        array (
          0 => 'location_cck',
          1 => 'location',
          2 => 'gmap',
        ),
        'version' => '7.x-2.11',
        'project' => 'gmap',
        'datestamp' => '1457698170',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.11',
    ),
    'hide_submit' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/hide_submit/hide_submit.module',
      'name' => 'hide_submit',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Hide submit button',
        'description' => 'Hides the submit button after a form is submitted to avoid duplicate posting',
        'core' => '7.x',
        'tags' => 
        array (
          0 => 'content',
        ),
        'files' => 
        array (
          0 => 'hide_submit.admin.inc',
        ),
        'configure' => 'admin/config/content/hide-submit',
        'version' => '7.x-2.2',
        'project' => 'hide_submit',
        'datestamp' => '1449679297',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'hreflang' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/hreflang/hreflang.module',
      'name' => 'hreflang',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Alternate hreflang',
        'core' => '7.x',
        'description' => 'Adds hreflang link elements to the header of each page.',
        'package' => 'Multilingual',
        'files' => 
        array (
          0 => 'hreflang.test',
        ),
        'version' => '7.x-1.2',
        'project' => 'hreflang',
        'datestamp' => '1417070881',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'hybridauth' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/hybridauth/hybridauth.module',
      'name' => 'hybridauth',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HybridAuth',
        'description' => 'Provides HybridAuth social sign-on.',
        'core' => '7.x',
        'package' => 'HybridAuth',
        'configure' => 'admin/config/people/hybridauth',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'version' => '7.x-2.13',
        'project' => 'hybridauth',
        'datestamp' => '1435138387',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'hybridauth_bonus' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/hybridauth/hybridauth_bonus/hybridauth_bonus.module',
      'name' => 'hybridauth_bonus',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HybridAuth Bonus',
        'description' => 'Provides HybridAuth bonus features, like roles choosing upon registration.',
        'core' => '7.x',
        'package' => 'HybridAuth',
        'configure' => 'admin/config/people/hybridauth',
        'dependencies' => 
        array (
          0 => 'hybridauth',
        ),
        'version' => '7.x-2.13',
        'project' => 'hybridauth',
        'datestamp' => '1435138387',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'hybridauth_ulogin' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/hybridauth/hybridauth_ulogin/hybridauth_ulogin.module',
      'name' => 'hybridauth_ulogin',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HybridAuth uLogin',
        'description' => 'Migrate uLogin identities to HybridAuth.',
        'core' => '7.x',
        'package' => 'HybridAuth',
        'configure' => 'admin/config/people/hybridauth/ulogin',
        'dependencies' => 
        array (
          0 => 'hybridauth',
        ),
        'version' => '7.x-2.13',
        'project' => 'hybridauth',
        'datestamp' => '1435138387',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'i18n' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n.module',
      'name' => 'i18n',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7001',
      'weight' => '10',
      'info' => 
      array (
        'name' => 'Internationalization',
        'description' => 'Extends Drupal support for multilingual features.',
        'dependencies' => 
        array (
          0 => 'locale',
          1 => 'variable',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18n_object.inc',
          1 => 'i18n.test',
        ),
        'configure' => 'admin/config/regional/i18n',
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_block' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_block/i18n_block.module',
      'name' => 'i18n_block',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '100',
      'info' => 
      array (
        'name' => 'Block languages',
        'description' => 'Enables language selector for blocks and optional block translation.',
        'dependencies' => 
        array (
          0 => 'block',
          1 => 'i18n_string',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18n_block.inc',
          1 => 'i18n_block.test',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_contact' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_contact/i18n_contact.module',
      'name' => 'i18n_contact',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Contact translation',
        'description' => 'Makes contact categories and replies available for translation.',
        'dependencies' => 
        array (
          0 => 'contact',
          1 => 'i18n_string',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_field' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_field/i18n_field.module',
      'name' => 'i18n_field',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Field translation',
        'description' => 'Translate field properties',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'i18n_string',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18n_field.inc',
          1 => 'i18n_field.test',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_forum' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_forum/i18n_forum.module',
      'name' => 'i18n_forum',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Multilingual forum',
        'description' => 'Enables multilingual forum, translates names and containers.',
        'dependencies' => 
        array (
          0 => 'forum',
          1 => 'i18n_taxonomy',
          2 => 'i18n_node',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18n_forum.test',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_menu' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_menu/i18n_menu.module',
      'name' => 'i18n_menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '5',
      'info' => 
      array (
        'name' => 'Menu translation',
        'description' => 'Supports translatable custom menu items.',
        'dependencies' => 
        array (
          0 => 'i18n',
          1 => 'menu',
          2 => 'i18n_string',
          3 => 'i18n_translation',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18n_menu.inc',
          1 => 'i18n_menu.test',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_node' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_node/i18n_node.module',
      'name' => 'i18n_node',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Multilingual content',
        'description' => 'Extended node options for multilingual content',
        'dependencies' => 
        array (
          0 => 'translation',
          1 => 'i18n',
          2 => 'i18n_string',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'configure' => 'admin/config/regional/i18n/node',
        'files' => 
        array (
          0 => 'i18n_node.test',
          1 => 'i18n_node.variable.inc',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_path' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_path/i18n_path.module',
      'name' => 'i18n_path',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '5',
      'info' => 
      array (
        'name' => 'Path translation',
        'description' => 'Define translations for generic paths',
        'dependencies' => 
        array (
          0 => 'i18n_translation',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18n_path.inc',
          1 => 'i18n_path.test',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_redirect' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_redirect/i18n_redirect.module',
      'name' => 'i18n_redirect',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Translation redirect',
        'description' => 'Redirect to translated page when available. SEO for multilingual sites.',
        'dependencies' => 
        array (
          0 => 'i18n',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_select' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_select/i18n_select.module',
      'name' => 'i18n_select',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Multilingual select',
        'description' => 'API module for multilingual content selection',
        'dependencies' => 
        array (
          0 => 'i18n',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'configure' => 'admin/config/regional/i18n/select',
        'files' => 
        array (
          0 => 'i18n_select.test',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_string' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_string/i18n_string.module',
      'name' => 'i18n_string',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '10',
      'info' => 
      array (
        'name' => 'String translation',
        'description' => 'Provides support for translation of user defined strings.',
        'dependencies' => 
        array (
          0 => 'locale',
          1 => 'i18n',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18n_string.admin.inc',
          1 => 'i18n_string.inc',
          2 => 'i18n_string.test',
        ),
        'configure' => 'admin/config/regional/i18n/strings',
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_sync' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_sync/i18n_sync.module',
      'name' => 'i18n_sync',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Synchronize translations',
        'description' => 'Synchronizes taxonomy and fields accross translations of the same content.',
        'dependencies' => 
        array (
          0 => 'i18n',
          1 => 'translation',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18n_sync.module',
          1 => 'i18n_sync.install',
          2 => 'i18n_sync.module.inc',
          3 => 'i18n_sync.node.inc',
          4 => 'i18n_sync.test',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_taxonomy' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_taxonomy/i18n_taxonomy.module',
      'name' => 'i18n_taxonomy',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Taxonomy translation',
        'description' => 'Enables multilingual taxonomy.',
        'dependencies' => 
        array (
          0 => 'taxonomy',
          1 => 'i18n_string',
          2 => 'i18n_translation',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18n_taxonomy.inc',
          1 => 'i18n_taxonomy.pages.inc',
          2 => 'i18n_taxonomy.admin.inc',
          3 => 'i18n_taxonomy.test',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_translation' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_translation/i18n_translation.module',
      'name' => 'i18n_translation',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Translation sets',
        'description' => 'Simple translation sets API for generic objects',
        'dependencies' => 
        array (
          0 => 'i18n',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18n_translation.inc',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_user' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_user/i18n_user.module',
      'name' => 'i18n_user',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'User mail translation',
        'description' => 'Translate emails sent from the User module.',
        'core' => '7.x',
        'package' => 'Multilingual - Internationalization',
        'dependencies' => 
        array (
          0 => 'i18n_variable',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18n_variable' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18n/i18n_variable/i18n_variable.module',
      'name' => 'i18n_variable',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7004',
      'weight' => '-900',
      'info' => 
      array (
        'name' => 'Variable translation',
        'description' => 'Multilingual variables that switch language depending on page language.',
        'dependencies' => 
        array (
          0 => 'i18n',
          1 => 'variable_store (7.x-2.x)',
          2 => 'variable_realm (7.x-2.x)',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'configure' => 'admin/config/regional/i18n/variable',
        'files' => 
        array (
          0 => 'i18n_variable.class.inc',
          1 => 'i18n_variable.test',
        ),
        'version' => '7.x-1.13',
        'project' => 'i18n',
        'datestamp' => '1430999922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.13',
    ),
    'i18nviews' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/i18nviews/i18nviews.module',
      'name' => 'i18nviews',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views translation',
        'description' => 'Translation of views strings and content selection for views. Requires Views 3.x',
        'dependencies' => 
        array (
          0 => 'views',
          1 => 'i18n_string',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'i18nviews.inc',
          1 => 'i18nviews.i18n.inc',
          2 => 'includes/i18nviews_handler_argument_node_type.inc',
          3 => 'includes/i18nviews_handler_argument_taxonomy_index_tid.inc',
          4 => 'includes/i18nviews_handler_argument_taxonomy_term_name.inc',
          5 => 'includes/i18nviews_handler_argument_taxonomy_term_language.inc',
          6 => 'includes/i18nviews_handler_argument_term_node_tid_depth.inc',
          7 => 'includes/i18nviews_handler_field_node_type.inc',
          8 => 'includes/i18nviews_handler_field_taxonomy_term_description.inc',
          9 => 'includes/i18nviews_handler_field_taxonomy_term_language.inc',
          10 => 'includes/i18nviews_handler_field_taxonomy_term_name.inc',
          11 => 'includes/i18nviews_handler_field_term_node_tid.inc',
          12 => 'includes/i18nviews_handler_filter_field_list.inc',
          13 => 'includes/i18nviews_handler_filter_node_type.inc',
          14 => 'includes/i18nviews_handler_filter_taxonomy_index_tid.inc',
          15 => 'includes/i18nviews_handler_filter_taxonomy_term_name.inc',
          16 => 'includes/i18nviews_handler_filter_taxonomy_term_language.inc',
          17 => 'includes/i18nviews_handler_filter_term_node_tid_depth.inc',
          18 => 'includes/i18nviews_plugin_argument_validate_i18n_taxonomy_term.inc',
          19 => 'includes/i18nviews_plugin_localization_i18nstrings.inc',
        ),
        'version' => '7.x-3.0-alpha1',
        'project' => 'i18nviews',
        'datestamp' => '1454021946',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0-alpha1',
    ),
    'icon' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/icon/icon.module',
      'name' => 'icon',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Icon API',
        'description' => 'Implements an API for icon providers and an administrative UI for integrating icons through out the site.',
        'core' => '7.x',
        'package' => 'Icon API',
        'configure' => 'admin/config/media/icon',
        'files' => 
        array (
          0 => 'icon.install',
          1 => 'icon.module',
        ),
        'version' => '7.x-1.0-beta6',
        'project' => 'icon',
        'datestamp' => '1438832040',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta6',
    ),
    'icon_block' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/icon/modules/icon_block/icon_block.module',
      'name' => 'icon_block',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Icon API: Block',
        'description' => 'Provides icon integration with blocks.',
        'core' => '7.x',
        'package' => 'Icon API',
        'files' => 
        array (
          0 => 'icon_block.install',
          1 => 'icon_block.module',
        ),
        'dependencies' => 
        array (
          0 => 'block',
          1 => 'icon',
        ),
        'version' => '7.x-1.0-beta6',
        'project' => 'icon',
        'datestamp' => '1438832040',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta6',
    ),
    'icon_field' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/icon/modules/icon_field/icon_field.module',
      'name' => 'icon_field',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Icon API: Field',
        'description' => 'Provides a field for attaching an icon to a fieldable entity.',
        'core' => '7.x',
        'package' => 'Icon API',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'icon',
        ),
        'version' => '7.x-1.0-beta6',
        'project' => 'icon',
        'datestamp' => '1438832040',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta6',
    ),
    'icon_filter' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/icon/modules/icon_filter/icon_filter.module',
      'name' => 'icon_filter',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Icon API: Filter',
        'description' => 'Provides a filter for text fields to replace an icon token with icon markup.',
        'core' => '7.x',
        'package' => 'Icon API',
        'dependencies' => 
        array (
          0 => 'filter',
          1 => 'icon',
        ),
        'version' => '7.x-1.0-beta6',
        'project' => 'icon',
        'datestamp' => '1438832040',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta6',
    ),
    'icon_menu' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/icon/modules/icon_menu/icon_menu.module',
      'name' => 'icon_menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Icon API: Menu',
        'description' => 'Provides icon integration with menu items.',
        'core' => '7.x',
        'package' => 'Icon API',
        'files' => 
        array (
          0 => 'icon_menu.install',
          1 => 'icon_menu.module',
        ),
        'dependencies' => 
        array (
          0 => 'icon',
          1 => 'menu',
        ),
        'version' => '7.x-1.0-beta6',
        'project' => 'icon',
        'datestamp' => '1438832040',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta6',
    ),
    'imageapi_optimize' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/imageapi_optimize/imageapi_optimize.module',
      'name' => 'imageapi_optimize',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '-100',
      'info' => 
      array (
        'name' => 'ImageAPI Optimize',
        'description' => 'An optimized version Image Toolkits',
        'core' => '7.x',
        'version' => '7.x-1.2+1-dev',
        'project' => 'imageapi_optimize',
        'datestamp' => '1456305732',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2+1-dev',
    ),
    'imageinfo_cache' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/imageinfo_cache/imageinfo_cache.module',
      'name' => 'imageinfo_cache',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Imageinfo Cache',
        'description' => 'Generate imagecache presets in the background.',
        'package' => 'Performance and scalability',
        'dependencies' => 
        array (
          0 => 'image',
        ),
        'core' => '7.x',
        'configure' => 'admin/config/media/imageinfo_cache',
        'version' => '7.x-3.5',
        'project' => 'imageinfo_cache',
        'datestamp' => '1423528082',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.5',
    ),
    'image_resize_filter' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/image_resize_filter/image_resize_filter.module',
      'name' => 'image_resize_filter',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7000',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Image resize filter',
        'description' => 'Filter to automatically scale images to their height and width dimensions.',
        'core' => '7.x',
        'package' => 'Input filters',
        'configure' => 'admin/config/content/formats',
        'version' => '7.x-1.16',
        'project' => 'image_resize_filter',
        'datestamp' => '1438457958',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.16',
    ),
    'ip_geoloc' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ip_geoloc/ip_geoloc.module',
      'name' => 'ip_geoloc',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7125',
      'weight' => '10',
      'info' => 
      array (
        'name' => 'IP Geolocation Views & Maps',
        'description' => 'Display Google, Leaflet and OpenLayers maps of Views containing locations of visitors and/or nodes. Marker color differentiation. Centering options, e.g. visitor\'s HTML5-retrieved current position. Also an API for location-based services.',
        'core' => '7.x',
        'configure' => 'admin/config/system/ip_geoloc',
        'files' => 
        array (
          0 => 'views/ip_geoloc_plugin_style_map.inc',
          1 => 'views/ip_geoloc_plugin_style_leaflet.inc',
          2 => 'views/ip_geoloc_plugin_style_openlayers.inc',
          3 => 'views/ip_geoloc_plugin_argument_default_ip_geoloc.inc',
          4 => 'views/proximity_plugins/geofieldProximityGeocoderWithHTML5.inc',
        ),
        'dependencies' => 
        array (
          0 => 'libraries',
        ),
        'version' => '7.x-1.29',
        'project' => 'ip_geoloc',
        'datestamp' => '1449891544',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.29',
    ),
    'ip_geoloc_generator' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ip_geoloc/ip_geoloc_generator/ip_geoloc_generator.module',
      'name' => 'ip_geoloc_generator',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Geolocation Generator',
        'description' => 'Generates random locations to test IP Geolocation Views & Maps module',
        'core' => '7.x',
        'configure' => 'admin/config/system/ip_geoloc_generator',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'version' => '7.x-1.29',
        'project' => 'ip_geoloc',
        'datestamp' => '1449891544',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.29',
    ),
    'job_scheduler' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/job_scheduler/job_scheduler.module',
      'name' => 'job_scheduler',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Job Scheduler',
        'description' => 'Scheduler API',
        'files' => 
        array (
          0 => 'job_scheduler.module',
          1 => 'job_scheduler.install',
          2 => 'JobScheduler.inc',
          3 => 'JobSchedulerCronTab.inc',
        ),
        'core' => '7.x',
        'php' => '5.2',
        'version' => '7.x-2.0-alpha3',
        'project' => 'job_scheduler',
        'datestamp' => '1336466457',
        'dependencies' => 
        array (
        ),
      ),
      'version' => '7.x-2.0-alpha3',
    ),
    'job_scheduler_trigger' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/job_scheduler/modules/job_scheduler_trigger/job_scheduler_trigger.module',
      'name' => 'job_scheduler_trigger',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Job Scheduler Trigger',
        'description' => 'Creates scheduler triggers that fire up at certain days, times',
        'core' => '7.x',
        'php' => '5.2',
        'dependencies' => 
        array (
          0 => 'job_scheduler',
        ),
        'version' => '7.x-2.0-alpha3',
        'project' => 'job_scheduler',
        'datestamp' => '1336466457',
      ),
      'version' => '7.x-2.0-alpha3',
    ),
    'jquery_update' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/jquery_update/jquery_update.module',
      'name' => 'jquery_update',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'jQuery Update',
        'description' => 'Update jQuery and jQuery UI to a more recent version.',
        'package' => 'User interface',
        'core' => '7.x',
        'configure' => 'admin/config/development/jquery_update',
        'version' => '7.x-3.0-alpha3',
        'project' => 'jquery_update',
        'datestamp' => '1445382241',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0-alpha3',
    ),
    'l10n_update' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/l10n_update/l10n_update.module',
      'name' => 'l10n_update',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Localization update',
        'description' => 'Provides automatic downloads and updates for translations.',
        'dependencies' => 
        array (
          0 => 'locale',
        ),
        'core' => '7.x',
        'package' => 'Multilingual',
        'files' => 
        array (
          0 => 'includes/gettext/PoHeader.php',
          1 => 'includes/gettext/PoItem.php',
          2 => 'includes/gettext/PoMemoryWriter.php',
          3 => 'includes/gettext/PoMetadataInterface.php',
          4 => 'includes/gettext/PoReaderInterface.php',
          5 => 'includes/gettext/PoStreamInterface.php',
          6 => 'includes/gettext/PoStreamReader.php',
          7 => 'includes/gettext/PoStreamWriter.php',
          8 => 'includes/gettext/PoWriterInterface.php',
          9 => 'includes/locale/Gettext.php',
          10 => 'includes/locale/PoDatabaseReader.php',
          11 => 'includes/locale/PoDatabaseWriter.php',
          12 => 'includes/locale/SourceString.php',
          13 => 'includes/locale/StringBase.php',
          14 => 'includes/locale/StringDatabaseStorage.php',
          15 => 'includes/locale/StringInterface.php',
          16 => 'includes/locale/StringStorageException.php',
          17 => 'includes/locale/StringStorageInterface.php',
          18 => 'includes/locale/TranslationString.php',
          19 => 'includes/locale/TranslationsStreamWrapper.php',
          20 => 'tests/L10nUpdateCronTest.test',
          21 => 'tests/L10nUpdateInterfaceTest.test',
          22 => 'tests/L10nUpdateTest.test',
          23 => 'tests/L10nUpdateTestBase.test',
        ),
        'version' => '7.x-2.0',
        'project' => 'l10n_update',
        'datestamp' => '1415625781',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0',
    ),
    'l10n_update_test' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/l10n_update/tests/modules/l10n_update_test/l10n_update_test.module',
      'name' => 'l10n_update_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Localization Update test',
        'type' => 'module',
        'description' => 'Support module for Localization Update module testing.',
        'package' => 'Testing',
        'version' => '7.x-2.0',
        'core' => '7.x',
        'hidden' => 'true',
        'project' => 'l10n_update',
        'datestamp' => '1415625781',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0',
    ),
    'l10n_update_test_translate' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/l10n_update/tests/modules/l10n_update_test_translate/l10n_update_test_translate.module',
      'name' => 'l10n_update_test_translate',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Localization Update test translate',
        'type' => 'module',
        'description' => 'Translation test module for Localization Update module testing.',
        'package' => 'Testing',
        'version' => '7.x-2.0',
        'core' => '7.x',
        'hidden' => 'true',
        'interface translation project' => 'l10n_update_test_translate',
        'l10n path' => 'sites/all/modules/contrib/l10n_update/tests/modules/l10n_update_test_translate/translations/l10n_update_test_translate.%language.po',
        'project' => 'l10n_update',
        'datestamp' => '1415625781',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0',
    ),
    'leaflet' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/leaflet/leaflet.module',
      'name' => 'leaflet',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Leaflet',
        'description' => 'Integration with the Leaflet map scripting library.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'image',
          1 => 'libraries',
        ),
        'files' => 
        array (
          0 => 'leaflet.formatters.inc',
        ),
        'version' => '7.x-1.3',
        'project' => 'leaflet',
        'datestamp' => '1444353929',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'leaflet_views' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/leaflet/leaflet_views/leaflet_views.module',
      'name' => 'leaflet_views',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Leaflet views',
        'description' => 'Views integration for the Leaflet module.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'leaflet',
          1 => 'geofield',
          2 => 'views',
          3 => 'entity',
        ),
        'files' => 
        array (
          0 => 'leaflet_views.views.inc',
          1 => 'leaflet_views_plugin_style.inc',
        ),
        'version' => '7.x-1.3',
        'project' => 'leaflet',
        'datestamp' => '1444353929',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'leaflet_label' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/leaflet_label/leaflet_label.module',
      'name' => 'leaflet_label',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Leaflet Label',
        'description' => 'Integration with the Leaflet Label plugin',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'libraries',
          1 => 'leaflet',
        ),
        'version' => '7.x-1.2',
        'project' => 'leaflet_label',
        'datestamp' => '1444352640',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'leaflet_mapbox' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/leaflet_mapbox/leaflet_mapbox.module',
      'name' => 'leaflet_mapbox',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7201',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Leaflet MapBox',
        'description' => 'Provides MapBox integration with MapBox',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'leaflet',
        ),
        'configure' => 'admin/config/services/leaflet-mapbox',
        'version' => '7.x-1.5',
        'project' => 'leaflet_mapbox',
        'datestamp' => '1457516269',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'leaflet_markercluster' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/leaflet_markercluster/leaflet_markercluster.module',
      'name' => 'leaflet_markercluster',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Leaflet Markercluster',
        'description' => 'Extend Leaflet with the Markercluster library',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'leaflet',
        ),
        'version' => '7.x-1.2',
        'project' => 'leaflet_markercluster',
        'datestamp' => '1415857385',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'leaflet_widget' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/leaflet_widget/leaflet_widget.module',
      'name' => 'leaflet_widget',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Leaflet Widget for Geofield',
        'description' => 'A Geofield widget that provides a Leaflet map and geometry creation tools.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'geofield (>=1)',
          1 => 'libraries (2.x)',
        ),
        'version' => '7.x-2.0-beta1',
        'project' => 'leaflet_widget',
        'datestamp' => '1404755028',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta1',
    ),
    'libraries' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/libraries/libraries.module',
      'name' => 'libraries',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7200',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Libraries',
        'description' => 'Allows version-dependent and shared usage of external libraries.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'system (>=7.11)',
        ),
        'files' => 
        array (
          0 => 'tests/libraries.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'libraries',
        'datestamp' => '1391965716',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'link' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/link/link.module',
      'name' => 'link',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Link',
        'description' => 'Defines simple link field types.',
        'core' => '7.x',
        'package' => 'Fields',
        'files' => 
        array (
          0 => 'link.module',
          1 => 'link.migrate.inc',
          2 => 'tests/link.test',
          3 => 'tests/link.attribute.test',
          4 => 'tests/link.crud.test',
          5 => 'tests/link.crud_browser.test',
          6 => 'tests/link.token.test',
          7 => 'tests/link.validate.test',
          8 => 'views/link_views_handler_argument_target.inc',
          9 => 'views/link_views_handler_filter_protocol.inc',
        ),
        'version' => '7.x-1.3',
        'project' => 'link',
        'datestamp' => '1413924830',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'linkit' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/linkit/linkit.module',
      'name' => 'linkit',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7203',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Linkit',
        'description' => 'Provides an easy interface for inserting links to internal content, files and external pages by providing autocomplete search for several WYSIWYG-editors.',
        'core' => '7.x',
        'configure' => 'admin/config/content/linkit',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'entity',
        ),
        'files' => 
        array (
          0 => 'plugins/plugin.class.php',
          1 => 'plugins/linkit_plugins/linkit-plugin-entity.class.php',
        ),
        'version' => '7.x-2.7',
        'project' => 'linkit',
        'datestamp' => '1420580857',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.7',
    ),
    'localize_fields' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/localize_fields/localize_fields.module',
      'name' => 'localize_fields',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '-100',
      'info' => 
      array (
        'name' => 'Localize Fields',
        'description' => 'Provides translation of field labels, descriptions and list options for most field types and widgets.',
        'package' => 'Multilingual',
        'core' => '7.x',
        'php' => '5.3',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'locale',
        ),
        'files' => 
        array (
          0 => 'LocalizeFields.inc',
        ),
        'configure' => 'admin/config/regional/localize_fields',
        'version' => '7.x-1.4',
        'project' => 'localize_fields',
        'datestamp' => '1435508284',
      ),
      'version' => '7.x-1.4',
    ),
    'localize_fields_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/localize_fields/localize_fields_ui/localize_fields_ui.module',
      'name' => 'localize_fields_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Localize Fields UI',
        'description' => 'Provides translation of field labels, descriptions and list options to the field settings user interface.',
        'package' => 'Multilingual',
        'core' => '7.x',
        'php' => '5.3',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'field_ui',
          2 => 'locale',
          3 => 'localize_fields',
        ),
        'version' => '7.x-1.4',
        'project' => 'localize_fields',
        'datestamp' => '1435508284',
      ),
      'version' => '7.x-1.4',
    ),
    'localize_fields_test' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/localize_fields/test/localize_fields_test.module',
      'name' => 'localize_fields_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Localize Fields Test',
        'description' => 'A Features module which provides a content type for testing field label etc. translation for various field types and widgets.',
        'core' => '7.x',
        'package' => 'Multilingual',
        'project' => 'localize_fields',
        'dependencies' => 
        array (
          0 => 'date',
          1 => 'date_popup',
          2 => 'features',
          3 => 'field_collection',
          4 => 'file',
          5 => 'image',
          6 => 'list',
          7 => 'locale',
          8 => 'node',
          9 => 'number',
          10 => 'options',
          11 => 'taxonomy',
          12 => 'text',
        ),
        'features' => 
        array (
          'features_api' => 
          array (
            0 => 'api:2',
          ),
          'field_base' => 
          array (
            0 => 'field_lclzflds_bool_radio',
            1 => 'field_lclzflds_date',
            2 => 'field_lclzflds_date_to_multi',
            3 => 'field_lclzflds_decimal',
            4 => 'field_lclzflds_fieldcol',
            5 => 'field_lclzflds_fieldcol_multi',
            6 => 'field_lclzflds_file',
            7 => 'field_lclzflds_file_multi',
            8 => 'field_lclzflds_image',
            9 => 'field_lclzflds_image_multi',
            10 => 'field_lclzflds_integer_encoded',
            11 => 'field_lclzflds_integer_multi',
            12 => 'field_lclzflds_list_bool',
            13 => 'field_lclzflds_list_text',
            14 => 'field_lclzflds_list_text_check',
            15 => 'field_lclzflds_term',
            16 => 'field_lclzflds_text',
            17 => 'field_lclzflds_text_multi',
            18 => 'field_lclzflds_textlong',
          ),
          'field_instance' => 
          array (
            0 => 'field_collection_item-field_lclzflds_fieldcol-field_lclzflds_date_to_multi',
            1 => 'field_collection_item-field_lclzflds_fieldcol-field_lclzflds_fieldcol_multi',
            2 => 'field_collection_item-field_lclzflds_fieldcol-field_lclzflds_file',
            3 => 'field_collection_item-field_lclzflds_fieldcol-field_lclzflds_integer_multi',
            4 => 'field_collection_item-field_lclzflds_fieldcol-field_lclzflds_list_bool',
            5 => 'field_collection_item-field_lclzflds_fieldcol-field_lclzflds_list_text_check',
            6 => 'field_collection_item-field_lclzflds_fieldcol-field_lclzflds_text',
            7 => 'field_collection_item-field_lclzflds_fieldcol_multi-field_lclzflds_decimal',
            8 => 'field_collection_item-field_lclzflds_fieldcol_multi-field_lclzflds_image_multi',
            9 => 'field_collection_item-field_lclzflds_fieldcol_multi-field_lclzflds_text_multi',
            10 => 'node-localize_fields_test-field_lclzflds_bool_radio',
            11 => 'node-localize_fields_test-field_lclzflds_date',
            12 => 'node-localize_fields_test-field_lclzflds_decimal',
            13 => 'node-localize_fields_test-field_lclzflds_fieldcol',
            14 => 'node-localize_fields_test-field_lclzflds_fieldcol_multi',
            15 => 'node-localize_fields_test-field_lclzflds_file',
            16 => 'node-localize_fields_test-field_lclzflds_file_multi',
            17 => 'node-localize_fields_test-field_lclzflds_image',
            18 => 'node-localize_fields_test-field_lclzflds_image_multi',
            19 => 'node-localize_fields_test-field_lclzflds_integer_encoded',
            20 => 'node-localize_fields_test-field_lclzflds_integer_multi',
            21 => 'node-localize_fields_test-field_lclzflds_list_bool',
            22 => 'node-localize_fields_test-field_lclzflds_list_text',
            23 => 'node-localize_fields_test-field_lclzflds_term',
            24 => 'node-localize_fields_test-field_lclzflds_text',
            25 => 'node-localize_fields_test-field_lclzflds_text_multi',
            26 => 'node-localize_fields_test-field_lclzflds_textlong',
          ),
          'node' => 
          array (
            0 => 'localize_fields_test',
          ),
          'taxonomy' => 
          array (
            0 => 'lclzflds',
          ),
          'user_permission' => 
          array (
            0 => 'create localize_fields_test content',
            1 => 'delete own localize_fields_test content',
            2 => 'edit own localize_fields_test content',
          ),
          'user_role' => 
          array (
            0 => 'localize_fields_test_editor',
          ),
        ),
        'version' => '7.x-1.4',
        'datestamp' => '1435508284',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.4',
    ),
    'mailsystem' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mailsystem/mailsystem.module',
      'name' => 'mailsystem',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'package' => 'Mail',
        'name' => 'Mail System',
        'description' => 'Provides a user interface for per-module and site-wide mail_system selection.',
        'php' => '5.0',
        'core' => '7.x',
        'configure' => 'admin/config/system/mailsystem',
        'dependencies' => 
        array (
          0 => 'filter',
        ),
        'version' => '7.x-2.34',
        'project' => 'mailsystem',
        'datestamp' => '1334082653',
      ),
      'version' => '7.x-2.34',
    ),
    'mandrill' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mandrill/mandrill.module',
      'name' => 'mandrill',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7004',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mandrill',
        'description' => 'Allow for site emails to be sent through Mandrill.',
        'core' => '7.x',
        'package' => 'Mandrill',
        'configure' => 'admin/config/services/mandrill',
        'dependencies' => 
        array (
          0 => 'mailsystem (>=2.x)',
          1 => 'libraries (>=2)',
        ),
        'files' => 
        array (
          0 => 'lib/mandrill.mail.inc',
          1 => 'lib/mandrill.inc',
          2 => 'tests/includes/mandrill_test.inc',
          3 => 'tests/mandrill.test',
          4 => 'tests/mandrill_hooks.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'mandrill',
        'datestamp' => '1441823340',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'mandrill_activity' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mandrill/modules/mandrill_activity/mandrill_activity.module',
      'name' => 'mandrill_activity',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mandrill Activity',
        'description' => 'View activity for an email address associated with any entity.',
        'package' => 'Mandrill',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'mandrill',
          1 => 'entity',
        ),
        'files' => 
        array (
          0 => 'lib/mandrill_activity.entity.inc',
          1 => 'lib/mandrill_activity.ui_controller.inc',
          2 => 'tests/mandrill_activity.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'mandrill',
        'datestamp' => '1441823340',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'mandrill_reports' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mandrill/modules/mandrill_reports/mandrill_reports.module',
      'name' => 'mandrill_reports',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mandrill Reports',
        'description' => 'Providing reporting on activity through Mandrill.',
        'core' => '7.x',
        'package' => 'Mandrill',
        'dependencies' => 
        array (
          0 => 'mandrill',
        ),
        'files' => 
        array (
          0 => 'tests/mandrill_reports.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'mandrill',
        'datestamp' => '1441823340',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'mandrill_template' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mandrill/modules/mandrill_template/mandrill_template.module',
      'name' => 'mandrill_template',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mandrill Template',
        'description' => 'Use Mandrill templates for messages sent through Mandrill.',
        'core' => '7.x',
        'package' => 'Mandrill',
        'configure' => 'admin/config/services/mandrill/templates',
        'dependencies' => 
        array (
          0 => 'entity (>=1.0)',
          1 => 'mandrill',
        ),
        'files' => 
        array (
          0 => 'lib/mandrill_template_map.entity.inc',
          1 => 'lib/mandrill_template_map.ui_controller.inc',
          2 => 'tests/mandrill_template.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'mandrill',
        'datestamp' => '1441823340',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'manualcrop' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/manualcrop/manualcrop.module',
      'name' => 'manualcrop',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7108',
      'weight' => '20',
      'info' => 
      array (
        'name' => 'Manual Crop',
        'description' => 'Lets you manually crop an image based upon the image style effects.',
        'package' => 'Image',
        'core' => '7.x',
        'configure' => 'admin/config/media/manualcrop',
        'dependencies' => 
        array (
          0 => 'image (>=7.8)',
          1 => 'libraries (>=2.1)',
        ),
        'files' => 
        array (
          0 => 'includes/views/manualcrop.views.inc',
        ),
        'version' => '7.x-1.5',
        'project' => 'manualcrop',
        'datestamp' => '1428756185',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'maxlength' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/maxlength/maxlength.module',
      'name' => 'maxlength',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Maxlength',
        'description' => 'Limit the number of characters in textfields and textareas and shows the amount of characters left.',
        'core' => '7.x',
        'package' => 'Fields',
        'files' => 
        array (
          0 => 'maxlength.test',
        ),
        'version' => '7.x-3.2',
        'project' => 'maxlength',
        'datestamp' => '1426104788',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.2',
    ),
    'media' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/media/media.module',
      'name' => 'media',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7226',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media',
        'description' => 'Provides the core Media API',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'file_entity',
          1 => 'image',
          2 => 'views',
        ),
        'test_dependencies' => 
        array (
          0 => 'token',
        ),
        'files' => 
        array (
          0 => 'includes/MediaReadOnlyStreamWrapper.inc',
          1 => 'includes/MediaBrowserPluginInterface.inc',
          2 => 'includes/MediaBrowserPlugin.inc',
          3 => 'includes/MediaBrowserUpload.inc',
          4 => 'includes/MediaBrowserView.inc',
          5 => 'includes/MediaEntityTranslationHandler.inc',
          6 => 'includes/media_views_plugin_display_media_browser.inc',
          7 => 'includes/media_views_plugin_style_media_browser.inc',
          8 => 'tests/media.test',
        ),
        'configure' => 'admin/config/media/browser',
        'version' => '7.x-2.0-beta1',
        'project' => 'media',
        'datestamp' => '1436895542',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta1',
    ),
    'mediafield' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/media/modules/mediafield/mediafield.module',
      'name' => 'mediafield',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media Field',
        'description' => 'Provides a field type that stores media-specific data. <em>Deprecated by the core File field type.</em>',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'media',
        ),
        'version' => '7.x-2.0-beta1',
        'project' => 'media',
        'datestamp' => '1436895542',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta1',
    ),
    'media_bulk_upload' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/media/modules/media_bulk_upload/media_bulk_upload.module',
      'name' => 'media_bulk_upload',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media Bulk Upload',
        'description' => 'Adds support for uploading multiple files at a time.',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'media',
          1 => 'multiform',
          2 => 'plupload',
        ),
        'test_dependencies' => 
        array (
          0 => 'multiform',
          1 => 'plupload',
        ),
        'files' => 
        array (
          0 => 'includes/MediaBrowserBulkUpload.inc',
          1 => 'tests/media_bulk_upload.test',
        ),
        'version' => '7.x-2.0-beta1',
        'project' => 'media',
        'datestamp' => '1436895542',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta1',
    ),
    'media_internet' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/media/modules/media_internet/media_internet.module',
      'name' => 'media_internet',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media Internet Sources',
        'description' => 'Provides an API for accessing media on various internet services',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'media',
        ),
        'files' => 
        array (
          0 => 'includes/MediaBrowserInternet.inc',
          1 => 'includes/MediaInternetBaseHandler.inc',
          2 => 'includes/MediaInternetFileHandler.inc',
          3 => 'includes/MediaInternetNoHandlerException.inc',
          4 => 'includes/MediaInternetValidationException.inc',
          5 => 'tests/media_internet.test',
        ),
        'version' => '7.x-2.0-beta1',
        'project' => 'media',
        'datestamp' => '1436895542',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta1',
    ),
    'media_wysiwyg' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/media/modules/media_wysiwyg/media_wysiwyg.module',
      'name' => 'media_wysiwyg',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7202',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media WYSIWYG',
        'description' => 'Adds support for embedding media using client-side WYSIWYG editors.',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'media',
        ),
        'test_dependencies' => 
        array (
          0 => 'ckeditor',
          1 => 'token',
          2 => 'wysiwyg',
        ),
        'files' => 
        array (
          0 => 'media_wysiwyg.test',
          1 => 'tests/media_wysiwyg.file_usage.test',
          2 => 'tests/media_wysiwyg.macro.test',
        ),
        'configure' => 'admin/config/media/browser',
        'version' => '7.x-2.0-beta1',
        'project' => 'media',
        'datestamp' => '1436895542',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta1',
    ),
    'media_wysiwyg_view_mode' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/media/modules/media_wysiwyg_view_mode/media_wysiwyg_view_mode.module',
      'name' => 'media_wysiwyg_view_mode',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Media WYSIWYG View Mode',
        'description' => 'Enables files inside of the WYSIWYG editor to be displayed using a separate view mode.',
        'package' => 'Media',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'media_wysiwyg',
        ),
        'configure' => 'admin/config/media/wysiwyg-view-mode',
        'files' => 
        array (
          0 => 'media_wysiwyg_view_mode.test',
        ),
        'version' => '7.x-2.0-beta1',
        'project' => 'media',
        'datestamp' => '1436895542',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta1',
    ),
    'menu_block' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/menu_block/menu_block.module',
      'name' => 'menu_block',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Menu Block',
        'description' => 'Provides configurable blocks of menu items.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'menu (>7.11)',
        ),
        'configure' => 'admin/config/user-interface/menu-block',
        'version' => '7.x-2.5',
        'project' => 'menu_block',
        'datestamp' => '1423092482',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.5',
    ),
    'menu_block_export' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/menu_block/menu_block_export.module',
      'name' => 'menu_block_export',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Menu Block Export',
        'description' => 'Provides export interface for Menu block module.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'menu_block',
        ),
        'files' => 
        array (
          0 => 'menu_block_export.module',
          1 => 'menu_block_export.admin.inc',
        ),
        'configure' => 'admin/config/user-interface/menu-block/export',
        'version' => '7.x-2.5',
        'project' => 'menu_block',
        'datestamp' => '1423092482',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.5',
    ),
    'mimemail' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mimemail/mimemail.module',
      'name' => 'mimemail',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mime Mail',
        'description' => 'Send MIME-encoded emails with embedded images and attachments.',
        'dependencies' => 
        array (
          0 => 'mailsystem',
          1 => 'system (>=7.24)',
        ),
        'package' => 'Mail',
        'core' => '7.x',
        'configure' => 'admin/config/system/mimemail',
        'files' => 
        array (
          0 => 'includes/mimemail.mail.inc',
          1 => 'tests/mimemail.test',
          2 => 'tests/mimemail_rules.test',
          3 => 'tests/mimemail_compress.test',
        ),
        'version' => '7.x-1.0-beta4',
        'project' => 'mimemail',
        'datestamp' => '1438530555',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta4',
    ),
    'mimemail_action' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mimemail/modules/mimemail_action/mimemail_action.module',
      'name' => 'mimemail_action',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mime Mail Action',
        'description' => 'Provide actions for Mime Mail.',
        'package' => 'Mail',
        'dependencies' => 
        array (
          0 => 'mimemail',
          1 => 'trigger',
        ),
        'core' => '7.x',
        'version' => '7.x-1.0-beta4',
        'project' => 'mimemail',
        'datestamp' => '1438530555',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta4',
    ),
    'mimemail_compress' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mimemail/modules/mimemail_compress/mimemail_compress.module',
      'name' => 'mimemail_compress',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mime Mail CSS Compressor',
        'description' => 'Converts CSS to inline styles in an HTML message. (Requires the PHP DOM extension.)',
        'package' => 'Mail',
        'dependencies' => 
        array (
          0 => 'mimemail',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'mimemail_compress.inc',
        ),
        'version' => '7.x-1.0-beta4',
        'project' => 'mimemail',
        'datestamp' => '1438530555',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta4',
    ),
    'mimemail_example' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mimemail/modules/mimemail_example/mimemail_example.module',
      'name' => 'mimemail_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mime Mail Example',
        'description' => 'Example of how to use the Mime Mail module.',
        'dependencies' => 
        array (
          0 => 'mimemail',
        ),
        'package' => 'Example modules',
        'core' => '7.x',
        'version' => '7.x-1.0-beta4',
        'project' => 'mimemail',
        'datestamp' => '1438530555',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta4',
    ),
    'mobile_switch' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mobile_switch/mobile_switch.module',
      'name' => 'mobile_switch',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7200',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mobile Switch',
        'description' => 'Provides various functionalities to develop mobile ready websites.',
        'package' => 'User interface',
        'core' => '7.x',
        'configure' => 'admin/config/user-interface/mobile-switch',
        'dependencies' => 
        array (
          0 => 'libraries (2.x)',
        ),
        'files' => 
        array (
          0 => 'views/mobile_switch.views.inc',
          1 => 'views/mobile_switch_handler_filter.inc',
        ),
        'version' => '7.x-2.0-beta1',
        'project' => 'mobile_switch',
        'datestamp' => '1391010812',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta1',
    ),
    'mobile_detect_import' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/mobile_switch/modules/mobile_detect_import/mobile_detect_import.module',
      'name' => 'mobile_detect_import',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Mobile Detect Import',
        'description' => 'Update and import functions for the Mobile Detect PHP class.',
        'package' => 'User interface',
        'core' => '7.x',
        'configure' => 'admin/config/user-interface/mobile-detect-import',
        'dependencies' => 
        array (
          0 => 'mobile_switch',
        ),
        'files' => 
        array (
          0 => 'mobile_detect_import.import.inc',
          1 => 'mobile_detect_import.admin.inc',
        ),
        'version' => '7.x-2.0-beta1',
        'project' => 'mobile_switch',
        'datestamp' => '1391010812',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0-beta1',
    ),
    'module_filter' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/module_filter/module_filter.module',
      'name' => 'module_filter',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7201',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Module filter',
        'description' => 'Filter the modules list.',
        'core' => '7.x',
        'package' => 'Administration',
        'files' => 
        array (
          0 => 'module_filter.install',
          1 => 'module_filter.js',
          2 => 'module_filter.module',
          3 => 'module_filter.admin.inc',
          4 => 'module_filter.theme.inc',
          5 => 'css/module_filter.css',
          6 => 'css/module_filter_tab.css',
          7 => 'js/module_filter.js',
          8 => 'js/module_filter_tab.js',
        ),
        'configure' => 'admin/config/user-interface/modulefilter',
        'version' => '7.x-2.0',
        'project' => 'module_filter',
        'datestamp' => '1424631189',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0',
    ),
    'multiform' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/multiform/multiform.module',
      'name' => 'multiform',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Multiple forms',
        'description' => 'Allows displaying and submitting multiple forms in one form',
        'files' => 
        array (
          0 => 'multiform.module',
          1 => 'tests/multiform.test',
        ),
        'core' => '7.x',
        'version' => '7.x-1.1',
        'project' => 'multiform',
        'datestamp' => '1402457628',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1',
    ),
    'multiselect' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/multiselect/multiselect.module',
      'name' => 'multiselect',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Multiselect',
        'description' => 'Defines a multiple selection field widget, to allow easier multi-selection for users.',
        'package' => 'Fields',
        'core' => '7.x',
        'version' => '7.x-1.11',
        'files' => 
        array (
          0 => 'multiselect.module',
        ),
        'project' => 'multiselect',
        'datestamp' => '1435692883',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.11',
    ),
    'multiselect_fapi_example' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/multiselect/multiselect_fapi_example/multiselect_fapi_example.module',
      'name' => 'multiselect_fapi_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Multiselect FAPI Example',
        'description' => 'Example usage of the Multiselect module via Form API calls.',
        'package' => 'Example modules',
        'core' => '7.x',
        'version' => '7.x-1.11',
        'files' => 
        array (
          0 => 'multiselect_fapi_example.module',
        ),
        'project' => 'multiselect',
        'datestamp' => '1435692883',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.11',
    ),
    'name' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/name/name.module',
      'name' => 'name',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Name Field',
        'description' => 'Defines a persons name field type.',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'package' => 'Fields',
        'version' => '7.x-1.10',
        'core' => '7.x',
        'recommends' => 
        array (
          0 => 'namedb',
        ),
        'configure' => 'admin/config/content/name',
        'files' => 
        array (
          0 => 'tests/name.test',
          1 => 'includes/name_handler_filter_name_fulltext.inc',
          2 => 'name.migrate.inc',
        ),
        'project' => 'name',
        'datestamp' => '1448492189',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.10',
    ),
    'ng_lightbox' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ng_lightbox/ng_lightbox.module',
      'name' => 'ng_lightbox',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'NG Lightbox',
        'description' => 'A path based lightbox solution using CSS 3 properties.',
        'core' => '7.x',
        'package' => 'NG',
        'configure' => 'admin/config/media/ng-lightbox',
        'files' => 
        array (
          0 => 'tests/ng_lightbox.test',
        ),
        'version' => '7.x-1.4',
        'project' => 'ng_lightbox',
        'datestamp' => '1452898755',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.4',
    ),
    'ng_lightbox_test' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/ng_lightbox/tests/modules/ng_lightbox_test/ng_lightbox_test.module',
      'name' => 'ng_lightbox_test',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'NG Lightbox Test',
        'description' => 'Test module',
        'core' => '7.x',
        'package' => 'NG',
        'hidden' => 'true',
        'version' => '7.x-1.4',
        'project' => 'ng_lightbox',
        'datestamp' => '1452898755',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.4',
    ),
    'clone' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/node_clone/clone.module',
      'name' => 'clone',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node clone',
        'description' => 'Allows users to clone (copy then edit) an existing node.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'views/views_handler_field_node_link_clone.inc',
        ),
        'configure' => 'admin/config/content/clone',
        'version' => '7.x-1.0',
        'project' => 'node_clone',
        'datestamp' => '1447900441',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'node_revision_delete' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/node_revision_delete/node_revision_delete.module',
      'name' => 'node_revision_delete',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7201',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Node Revision Delete',
        'description' => 'Track and prune node revisions.',
        'package' => 'Content',
        'core' => '7.x',
        'configure' => 'admin/config/content/node_revision_delete',
        'version' => '7.x-2.6',
        'project' => 'node_revision_delete',
        'datestamp' => '1409588933',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.6',
    ),
    'office_hours' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/office_hours/office_hours.module',
      'name' => 'office_hours',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7100',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Office hours',
        'description' => 'Defines a \'weekly office hours\' field type, allowing you to specify when an Entity is open or closed.',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'date_api',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'includes/office_hours_handler_filter_open.inc',
          1 => 'includes/office_hours_handler_filter_hours.inc',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'office_hours.css',
          ),
        ),
        'version' => '7.x-1.4',
        'project' => 'office_hours',
        'datestamp' => '1420021687',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.4',
    ),
    'options_element' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/options_element/options_element.module',
      'name' => 'options_element',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Options element',
        'description' => 'A custom form element for entering the options in select lists, radios, or checkboxes.',
        'core' => '7.x',
        'package' => 'User interface',
        'version' => '7.x-1.12',
        'project' => 'options_element',
        'datestamp' => '1397696072',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.12',
    ),
    'pathauto' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/pathauto/pathauto.module',
      'name' => 'pathauto',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7006',
      'weight' => '1',
      'info' => 
      array (
        'name' => 'Pathauto',
        'description' => 'Provides a mechanism for modules to automatically generate aliases for the content they manage.',
        'dependencies' => 
        array (
          0 => 'path',
          1 => 'token',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'pathauto.migrate.inc',
          1 => 'pathauto.test',
        ),
        'configure' => 'admin/config/search/path/patterns',
        'recommends' => 
        array (
          0 => 'redirect',
        ),
        'version' => '7.x-1.3',
        'project' => 'pathauto',
        'datestamp' => '1444232655',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'pathauto_persist' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/pathauto_persist/pathauto_persist.module',
      'name' => 'pathauto_persist',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Pathauto persistant state',
        'description' => 'Keeps track and enforces a persistant Pathauto state per node.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'pathauto',
        ),
        'files' => 
        array (
          0 => 'pathauto_persist.test',
        ),
        'version' => '7.x-1.3',
        'project' => 'pathauto_persist',
        'datestamp' => '1341597467',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'phone' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/phone/phone.module',
      'name' => 'phone',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Phone',
        'description' => 'The phone module allows administrators to define a field type for phone numbers.',
        'package' => 'Fields',
        'dependencies' => 
        array (
          0 => 'field',
        ),
        'files' => 
        array (
          0 => 'phone.migrate.inc',
          1 => 'tests/phone.au.test',
          2 => 'tests/phone.be.test',
          3 => 'tests/phone.br.test',
          4 => 'tests/phone.ca.test',
          5 => 'tests/phone.ch.test',
          6 => 'tests/phone.cl.test',
          7 => 'tests/phone.cn.test',
          8 => 'tests/phone.cr.test',
          9 => 'tests/phone.cs.test',
          10 => 'tests/phone.eg.test',
          11 => 'tests/phone.es.test',
          12 => 'tests/phone.fr.test',
          13 => 'tests/phone.hu.test',
          14 => 'tests/phone.il.test',
          15 => 'tests/phone.int.test',
          16 => 'tests/phone.it.test',
          17 => 'tests/phone.jo.test',
          18 => 'tests/phone.nl.test',
          19 => 'tests/phone.nz.test',
          20 => 'tests/phone.pa.test',
          21 => 'tests/phone.ph.test',
          22 => 'tests/phone.pk.test',
          23 => 'tests/phone.pl.test',
          24 => 'tests/phone.ru.test',
          25 => 'tests/phone.se.test',
          26 => 'tests/phone.sg.test',
          27 => 'tests/phone.ua.test',
          28 => 'tests/phone.uk.test',
          29 => 'tests/phone.za.test',
        ),
        'core' => '7.x',
        'version' => '7.x-1.0-beta1',
        'project' => 'phone',
        'datestamp' => '1389732224',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta1',
    ),
    'photobox' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/photobox/photobox.module',
      'name' => 'photobox',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Photobox',
        'description' => 'Integrates Photobox image gallery plugin.',
        'core' => '7.x',
        'package' => 'Media',
        'configure' => 'admin/config/media/photobox',
        'dependencies' => 
        array (
          0 => 'image',
          1 => 'jquery_update',
        ),
        'version' => '7.x-1.0-beta2',
        'project' => 'photobox',
        'datestamp' => '1428261185',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta2',
    ),
    'flexslider_picture' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/picture/flexslider_picture/flexslider_picture.module',
      'name' => 'flexslider_picture',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7201',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'FlexSlider Picture',
        'description' => 'Integrates the Picture module with the FlexSlider module for a truly responsive slider.',
        'package' => 'Picture',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'picture',
          1 => 'flexslider (2.x)',
          2 => 'flexslider_fields (2.x)',
        ),
        'version' => '7.x-2.13',
        'project' => 'picture',
        'datestamp' => '1444740240',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'picture' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/picture/picture.module',
      'name' => 'picture',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7203',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Picture',
        'description' => 'Picture element',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'image',
          2 => 'breakpoints',
        ),
        'files' => 
        array (
          0 => 'includes/PictureMapping.php',
        ),
        'configure' => 'admin/config/media/picture',
        'package' => 'Picture',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'picture_wysiwyg.css',
          ),
        ),
        'version' => '7.x-2.13',
        'project' => 'picture',
        'datestamp' => '1444740240',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.13',
    ),
    'plupload' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/plupload/plupload.module',
      'name' => 'plupload',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Plupload integration module',
        'description' => 'Provides a plupload element.',
        'files' => 
        array (
          0 => 'plupload.module',
        ),
        'core' => '7.x',
        'package' => 'Media',
        'version' => '7.x-1.7',
        'project' => 'plupload',
        'datestamp' => '1415390716',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.7',
    ),
    'realname' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/realname/realname.module',
      'name' => 'realname',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Real name',
        'description' => 'Provides token-based name displays for users.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'token',
        ),
        'files' => 
        array (
          0 => 'realname.module',
          1 => 'realname.admin.inc',
          2 => 'realname.pages.inc',
          3 => 'realname.tokens.inc',
          4 => 'realname.test',
          5 => 'realname.install',
        ),
        'configure' => 'admin/config/people/realname',
        'version' => '7.x-1.2',
        'project' => 'realname',
        'datestamp' => '1393160306',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'redirect' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/redirect/redirect.module',
      'name' => 'redirect',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7102',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Redirect',
        'description' => 'Allows users to redirect from old URLs to new URLs.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'redirect.controller.inc',
          1 => 'redirect.test',
          2 => 'views/redirect.views.inc',
          3 => 'views/redirect_handler_filter_redirect_type.inc',
          4 => 'views/redirect_handler_field_redirect_source.inc',
          5 => 'views/redirect_handler_field_redirect_redirect.inc',
          6 => 'views/redirect_handler_field_redirect_operations.inc',
          7 => 'views/redirect_handler_field_redirect_link_edit.inc',
          8 => 'views/redirect_handler_field_redirect_link_delete.inc',
        ),
        'configure' => 'admin/config/search/redirect/settings',
        'version' => '7.x-1.0-rc3',
        'project' => 'redirect',
        'datestamp' => '1436393342',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc3',
    ),
    'relation' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/relation/relation.module',
      'name' => 'relation',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Relation',
        'description' => 'Describes relationships between entities.',
        'core' => '7.x',
        'package' => 'Relation',
        'files' => 
        array (
          0 => 'relation.database.inc',
          1 => 'tests/relation.test',
          2 => 'tests/relation.rules.test',
          3 => 'tests/relation.views.test',
          4 => 'tests/relation.ctools.test',
          5 => 'views/relation_handler_relationship.inc',
          6 => 'views/views_handler_field_relation_link.inc',
          7 => 'views/views_handler_field_relation_link_delete.inc',
          8 => 'views/views_handler_field_relation_link_edit.inc',
        ),
        'dependencies' => 
        array (
          0 => 'relation_endpoint',
          1 => 'system (>=7.33)',
        ),
        'version' => '7.x-1.0-rc7',
        'project' => 'relation',
        'datestamp' => '1423640902',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc7',
    ),
    'relation_dummy_field' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/relation/relation_dummy_field/relation_dummy_field.module',
      'name' => 'relation_dummy_field',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Relation Dummy Field',
        'description' => 'Dummy field to display relation data inline on entities.',
        'core' => '7.x',
        'package' => 'Relation',
        'dependencies' => 
        array (
          0 => 'relation',
        ),
        'files' => 
        array (
          0 => 'tests/relation_dummy_field.test',
        ),
        'version' => '7.x-1.0-rc7',
        'project' => 'relation',
        'datestamp' => '1423640902',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc7',
    ),
    'relation_endpoint' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/relation/relation_endpoint.module',
      'name' => 'relation_endpoint',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Relation Endpoints Field',
        'description' => 'Helper module for Relation. Defines endpoints field (not usable except by relation).',
        'core' => '7.x',
        'package' => 'Relation',
        'version' => '7.x-1.0-rc7',
        'project' => 'relation',
        'datestamp' => '1423640902',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc7',
    ),
    'relation_entity_collector' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/relation/relation_entity_collector/relation_entity_collector.module',
      'name' => 'relation_entity_collector',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Relation Entity Collector block',
        'description' => 'A block to collect entities loaded on any page(s), and create relations from them.',
        'core' => '7.x',
        'package' => 'Relation',
        'dependencies' => 
        array (
          0 => 'relation',
          1 => 'block',
        ),
        'files' => 
        array (
          0 => 'tests/relation_entity_collector.test',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'relation_entity_collector.css',
          ),
        ),
        'version' => '7.x-1.0-rc7',
        'project' => 'relation',
        'datestamp' => '1423640902',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc7',
    ),
    'relation_feeds' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/relation/relation_feeds/relation_feeds.module',
      'name' => 'relation_feeds',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Relation feeds',
        'description' => 'Feeds integration module for Relation.',
        'core' => '7.x',
        'package' => 'Relation',
        'files' => 
        array (
          0 => 'tests/relation.feeds_processor.test',
        ),
        'dependencies' => 
        array (
          0 => 'relation',
          1 => 'feeds (!=7.x-1.0-alpha8)',
        ),
        'version' => '7.x-1.0-rc7',
        'project' => 'relation',
        'datestamp' => '1423640902',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc7',
    ),
    'relation_migrate' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/relation/relation_migrate/relation_migrate.module',
      'name' => 'relation_migrate',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Relation migrate',
        'description' => 'Migrate integration module for Relation.',
        'core' => '7.x',
        'package' => 'Relation',
        'files' => 
        array (
          0 => 'relation_migrate.destination.inc',
          1 => 'relation_migrate.source.inc',
          2 => 'relation_migrate.migration.inc',
        ),
        'dependencies' => 
        array (
          0 => 'relation',
          1 => 'relation_ui',
          2 => 'migrate',
        ),
        'version' => '7.x-1.0-rc7',
        'project' => 'relation',
        'datestamp' => '1423640902',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc7',
    ),
    'relation_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/relation/relation_ui.module',
      'name' => 'relation_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Relation UI',
        'description' => 'Administrative interface to relation. Without this module, you cannot create or edit your relation types.',
        'package' => 'Relation',
        'core' => '7.x',
        'configure' => 'admin/structure/relation',
        'dependencies' => 
        array (
          0 => 'relation',
        ),
        'files' => 
        array (
          0 => 'relation_ui.module',
          1 => 'tests/relation_ui.test',
        ),
        'version' => '7.x-1.0-rc7',
        'project' => 'relation',
        'datestamp' => '1423640902',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc7',
    ),
    'robotstxt' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/robotstxt/robotstxt.module',
      'name' => 'robotstxt',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7104',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'robots.txt',
        'description' => 'Generates the robots.txt file dynamically and gives you the chance to edit it, on a per-site basis, from the web UI.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'robotstxt.module',
          1 => 'robotstxt.admin.inc',
          2 => 'robotstxt.install',
        ),
        'configure' => 'admin/config/search/robotstxt',
        'version' => '7.x-1.3',
        'project' => 'robotstxt',
        'datestamp' => '1419385385',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'rules' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/rules/rules.module',
      'name' => 'rules',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7214',
      'weight' => '20',
      'info' => 
      array (
        'name' => 'Rules',
        'description' => 'React on events and conditionally evaluate actions.',
        'package' => 'Rules',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'rules.features.inc',
          1 => 'tests/rules.test',
          2 => 'includes/faces.inc',
          3 => 'includes/rules.core.inc',
          4 => 'includes/rules.event.inc',
          5 => 'includes/rules.processor.inc',
          6 => 'includes/rules.plugins.inc',
          7 => 'includes/rules.state.inc',
          8 => 'includes/rules.dispatcher.inc',
          9 => 'modules/node.eval.inc',
          10 => 'modules/php.eval.inc',
          11 => 'modules/rules_core.eval.inc',
          12 => 'modules/system.eval.inc',
          13 => 'ui/ui.controller.inc',
          14 => 'ui/ui.core.inc',
          15 => 'ui/ui.data.inc',
          16 => 'ui/ui.plugins.inc',
        ),
        'dependencies' => 
        array (
          0 => 'entity_token',
          1 => 'entity',
        ),
        'version' => '7.x-2.9',
        'project' => 'rules',
        'datestamp' => '1426527210',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.9',
    ),
    'rules_admin' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/rules/rules_admin/rules_admin.module',
      'name' => 'rules_admin',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Rules UI',
        'description' => 'Administrative interface for managing rules.',
        'package' => 'Rules',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'rules_admin.module',
          1 => 'rules_admin.inc',
        ),
        'dependencies' => 
        array (
          0 => 'rules',
        ),
        'version' => '7.x-2.9',
        'project' => 'rules',
        'datestamp' => '1426527210',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.9',
    ),
    'rules_i18n' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/rules/rules_i18n/rules_i18n.module',
      'name' => 'rules_i18n',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Rules translation',
        'description' => 'Allows translating rules.',
        'dependencies' => 
        array (
          0 => 'rules',
          1 => 'i18n_string',
        ),
        'package' => 'Multilingual - Internationalization',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'rules_i18n.i18n.inc',
          1 => 'rules_i18n.rules.inc',
          2 => 'rules_i18n.test',
        ),
        'version' => '7.x-2.9',
        'project' => 'rules',
        'datestamp' => '1426527210',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.9',
    ),
    'rules_scheduler' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/rules/rules_scheduler/rules_scheduler.module',
      'name' => 'rules_scheduler',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Rules Scheduler',
        'description' => 'Schedule the execution of Rules components using actions.',
        'dependencies' => 
        array (
          0 => 'rules',
        ),
        'package' => 'Rules',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'rules_scheduler.admin.inc',
          1 => 'rules_scheduler.module',
          2 => 'rules_scheduler.install',
          3 => 'rules_scheduler.rules.inc',
          4 => 'rules_scheduler.test',
          5 => 'includes/rules_scheduler.handler.inc',
          6 => 'includes/rules_scheduler.views_default.inc',
          7 => 'includes/rules_scheduler.views.inc',
          8 => 'includes/rules_scheduler_views_filter.inc',
        ),
        'version' => '7.x-2.9',
        'project' => 'rules',
        'datestamp' => '1426527210',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.9',
    ),
    'rules_download' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/rules_download/rules_download.module',
      'name' => 'rules_download',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Rules File Download',
        'description' => 'Exposes some actions to download content, save it and exposes some file actions.',
        'core' => '7.x',
        'package' => 'Rules',
        'dependencies' => 
        array (
          0 => 'rules',
          1 => 'file',
        ),
        'version' => '7.x-2.1',
        'project' => 'rules_download',
        'datestamp' => '1442254141',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.1',
    ),
    'search_api_facetapi' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/search_api/contrib/search_api_facetapi/search_api_facetapi.module',
      'name' => 'search_api_facetapi',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search facets',
        'description' => 'Integrate the Search API with the Facet API to provide facetted searches.',
        'dependencies' => 
        array (
          0 => 'search_api',
          1 => 'facetapi',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'files' => 
        array (
          0 => 'plugins/facetapi/adapter.inc',
          1 => 'plugins/facetapi/query_type_term.inc',
          2 => 'plugins/facetapi/query_type_date.inc',
        ),
        'version' => '7.x-1.17',
        'project' => 'search_api',
        'datestamp' => '1457970922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.17',
    ),
    'search_api_views' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/search_api/contrib/search_api_views/search_api_views.module',
      'name' => 'search_api_views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7102',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search views',
        'description' => 'Integrates the Search API with Views, enabling users to create views with searches as filters or arguments.',
        'dependencies' => 
        array (
          0 => 'search_api',
          1 => 'views',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'files' => 
        array (
          0 => 'includes/display_facet_block.inc',
          1 => 'includes/handler_argument.inc',
          2 => 'includes/handler_argument_fulltext.inc',
          3 => 'includes/handler_argument_more_like_this.inc',
          4 => 'includes/handler_argument_string.inc',
          5 => 'includes/handler_argument_date.inc',
          6 => 'includes/handler_argument_taxonomy_term.inc',
          7 => 'includes/handler_filter.inc',
          8 => 'includes/handler_filter_boolean.inc',
          9 => 'includes/handler_filter_date.inc',
          10 => 'includes/handler_filter_entity.inc',
          11 => 'includes/handler_filter_fulltext.inc',
          12 => 'includes/handler_filter_language.inc',
          13 => 'includes/handler_filter_options.inc',
          14 => 'includes/handler_filter_taxonomy_term.inc',
          15 => 'includes/handler_filter_text.inc',
          16 => 'includes/handler_filter_user.inc',
          17 => 'includes/handler_sort.inc',
          18 => 'includes/plugin_cache.inc',
          19 => 'includes/query.inc',
        ),
        'version' => '7.x-1.17',
        'project' => 'search_api',
        'datestamp' => '1457970922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.17',
    ),
    'search_api' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/search_api/search_api.module',
      'name' => 'search_api',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7118',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search API',
        'description' => 'Provides a generic API for modules offering search capabilites.',
        'dependencies' => 
        array (
          0 => 'entity',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'files' => 
        array (
          0 => 'search_api.test',
          1 => 'includes/callback.inc',
          2 => 'includes/callback_add_aggregation.inc',
          3 => 'includes/callback_add_hierarchy.inc',
          4 => 'includes/callback_add_url.inc',
          5 => 'includes/callback_add_viewed_entity.inc',
          6 => 'includes/callback_bundle_filter.inc',
          7 => 'includes/callback_comment_access.inc',
          8 => 'includes/callback_language_control.inc',
          9 => 'includes/callback_node_access.inc',
          10 => 'includes/callback_node_status.inc',
          11 => 'includes/callback_role_filter.inc',
          12 => 'includes/callback_user_status.inc',
          13 => 'includes/datasource.inc',
          14 => 'includes/datasource_entity.inc',
          15 => 'includes/datasource_external.inc',
          16 => 'includes/datasource_multiple.inc',
          17 => 'includes/exception.inc',
          18 => 'includes/index_entity.inc',
          19 => 'includes/processor.inc',
          20 => 'includes/processor_highlight.inc',
          21 => 'includes/processor_html_filter.inc',
          22 => 'includes/processor_ignore_case.inc',
          23 => 'includes/processor_stopwords.inc',
          24 => 'includes/processor_tokenizer.inc',
          25 => 'includes/processor_transliteration.inc',
          26 => 'includes/query.inc',
          27 => 'includes/server_entity.inc',
          28 => 'includes/service.inc',
        ),
        'configure' => 'admin/config/search/search_api',
        'version' => '7.x-1.17',
        'project' => 'search_api',
        'datestamp' => '1457970922',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.17',
    ),
    'search_api_db' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/search_api_db/search_api_db.module',
      'name' => 'search_api_db',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7106',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Database search',
        'description' => 'Offers an implementation of the Search API that uses database tables for indexing content.',
        'dependencies' => 
        array (
          0 => 'search_api',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'files' => 
        array (
          0 => 'search_api_db.test',
          1 => 'service.inc',
        ),
        'version' => '7.x-1.5',
        'project' => 'search_api_db',
        'datestamp' => '1440962643',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5',
    ),
    'search_api_ranges' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/search_api_ranges/search_api_ranges.module',
      'name' => 'search_api_ranges',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Search ranges',
        'description' => 'Provides range widgets and a min/max slider for Search API.',
        'dependencies' => 
        array (
          0 => 'facetapi',
          1 => 'search_api',
          2 => 'search_api_facetapi',
        ),
        'files' => 
        array (
          0 => 'includes/callback_search_api_ranges.inc',
          1 => 'plugins/facetapi/widget_links.inc',
          2 => 'plugins/facetapi/widget_slider.inc',
          3 => 'plugins/facetapi/widget_select.inc',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'version' => '7.x-1.5+9-dev',
        'project' => 'search_api_ranges',
        'datestamp' => '1407785370',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.5+9-dev',
    ),
    'search_api_solr' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/search_api_solr/search_api_solr.module',
      'name' => 'search_api_solr',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7102',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Solr search',
        'description' => 'Offers an implementation of the Search API that uses an Apache Solr server for indexing content.',
        'dependencies' => 
        array (
          0 => 'search_api',
        ),
        'core' => '7.x',
        'package' => 'Search',
        'files' => 
        array (
          0 => 'includes/document.inc',
          1 => 'includes/service.inc',
          2 => 'includes/solr_connection.inc',
          3 => 'includes/solr_connection.interface.inc',
          4 => 'includes/solr_field.inc',
          5 => 'includes/spellcheck.inc',
        ),
        'version' => '7.x-1.10',
        'project' => 'search_api_solr',
        'datestamp' => '1457970937',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.10',
    ),
    'select2' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/select2/select2.module',
      'name' => 'select2',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Select 2 integration',
        'description' => 'Adds integration with the <a herf="http://ivaynberg.github.io/select2" target="_blank">Select2</a> Javascript plugin.',
        'core' => '7.x',
        'package' => 'User interface',
        'configure' => 'admin/config/user-interface/select2_settings',
        'dependencies' => 
        array (
          0 => 'libraries (>=7.x-2.1)',
        ),
        'version' => '7.x-1.x-dev',
        'project' => 'select2',
        'datestamp' => '1448118845',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.x-dev',
    ),
    'session_api' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/session_api/session_api.module',
      'name' => 'session_api',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7102',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Session API',
        'description' => 'Provides an interface for storing session information.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'session_api.module',
          1 => 'session_api.admin.inc',
          2 => 'session_api.install',
          3 => 'session_api.test',
        ),
        'configure' => 'admin/config/development/session-api',
        'version' => '7.x-1.0-rc1',
        'project' => 'session_api',
        'datestamp' => '1354234727',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'session_cache' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/session_cache/session_cache.module',
      'name' => 'session_cache',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Session Cache API',
        'description' => 'A super simple API that avoids $_SESSION to offer caching engine friendly ways to save and recall user state.',
        'configure' => 'admin/config/development/session_cache',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'project' => 'session_cache',
        'datestamp' => '1449373143',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.4',
    ),
    'session_cache_file' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/session_cache/session_cache_file/session_cache_file.module',
      'name' => 'session_cache_file',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Session Cache File',
        'description' => 'Extends the Session Cache API with a file storage implementation.',
        'dependencies' => 
        array (
          0 => 'session_cache',
        ),
        'configure' => 'admin/config/development/session_cache',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'project' => 'session_cache',
        'datestamp' => '1449373143',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.4',
    ),
    'simplify' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/simplify/simplify.module',
      'name' => 'simplify',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7301',
      'weight' => '5',
      'info' => 
      array (
        'name' => 'Simplify',
        'description' => 'Simplifies the user interface by hiding particular fields.',
        'core' => '7.x',
        'package' => 'User interface',
        'configure' => 'admin/config/user-interface/simplify',
        'version' => '7.x-3.3',
        'project' => 'simplify',
        'datestamp' => '1429513382',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.3',
    ),
    'slick' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/slick/slick.module',
      'name' => 'slick',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7007',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Slick',
        'description' => 'Slick carousel, the last carousel you\'ll ever need.',
        'core' => '7.x',
        'package' => 'Slick',
        'dependencies' => 
        array (
          0 => 'libraries (>=2.x)',
          1 => 'ctools',
          2 => 'jquery_update',
        ),
        'files' => 
        array (
          0 => 'tests/slick.test',
        ),
        'version' => '7.x-2.0',
        'project' => 'slick',
        'datestamp' => '1449932983',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0',
    ),
    'slick_fields' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/slick/slick_fields/slick_fields.module',
      'name' => 'slick_fields',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Slick fields',
        'description' => 'Adds a field display formatter for the Slick carousel.',
        'core' => '7.x',
        'package' => 'Slick',
        'dependencies' => 
        array (
          0 => 'image',
          1 => 'slick',
        ),
        'version' => '7.x-2.0',
        'project' => 'slick',
        'datestamp' => '1449932983',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0',
    ),
    'slick_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/slick/slick_ui/slick_ui.module',
      'name' => 'slick_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Slick UI',
        'description' => 'Provides the Slick carousel export UI.',
        'core' => '7.x',
        'package' => 'Slick',
        'dependencies' => 
        array (
          0 => 'slick',
        ),
        'configure' => 'admin/config/media/slick/ui',
        'version' => '7.x-2.0',
        'project' => 'slick',
        'datestamp' => '1449932983',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0',
    ),
    'slick_views' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/slick_views/slick_views.module',
      'name' => 'slick_views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Slick views',
        'description' => 'Adds a Views style plugin for the Slick carousel.',
        'core' => '7.x',
        'package' => 'Slick',
        'dependencies' => 
        array (
          0 => 'views',
          1 => 'slick',
        ),
        'files' => 
        array (
          0 => 'SlickViews.inc',
        ),
        'version' => '7.x-2.0',
        'project' => 'slick_views',
        'datestamp' => '1449932995',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0',
    ),
    'smartcrop' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/smartcrop/smartcrop.module',
      'name' => 'smartcrop',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'SmartCrop',
        'description' => 'Crops low-entropy parts of the image.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'image',
        ),
        'package' => 'Image',
        'files' => 
        array (
          0 => 'imageapi_gd.inc',
          1 => 'smartcrop.install',
          2 => 'smartcrop.module',
          3 => 'smartcrop.effects.inc',
          4 => 'tests/smartcrop.test',
        ),
        'version' => '7.x-1.0-beta2',
        'project' => 'smartcrop',
        'datestamp' => '1291750843',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta2',
    ),
    'smtp' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/smtp/smtp.module',
      'name' => 'smtp',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7101',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'SMTP Authentication Support',
        'description' => 'Allow for site emails to be sent through an SMTP server of your choice.',
        'core' => '7.x',
        'package' => 'Mail',
        'configure' => 'admin/config/system/smtp',
        'files' => 
        array (
          0 => 'smtp.mail.inc',
          1 => 'smtp.phpmailer.inc',
          2 => 'smtp.transport.inc',
        ),
        'version' => '7.x-1.3',
        'project' => 'smtp',
        'datestamp' => '1449607140',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'strongarm' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/strongarm/strongarm.module',
      'name' => 'strongarm',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7201',
      'weight' => '-1000',
      'info' => 
      array (
        'name' => 'Strongarm',
        'description' => 'Enforces variable values defined by modules that need settings set to operate properly.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'strongarm.admin.inc',
          1 => 'strongarm.install',
          2 => 'strongarm.module',
        ),
        'version' => '7.x-2.0',
        'project' => 'strongarm',
        'datestamp' => '1339604214',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.0',
    ),
    'styleguide' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/styleguide/styleguide.module',
      'name' => 'styleguide',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Style guide',
        'description' => 'Generates a theme style guide for proofing common elements.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'styleguide.module',
          1 => 'styleguide.styleguide.inc',
        ),
        'version' => '7.x-1.1',
        'project' => 'styleguide',
        'datestamp' => '1367467219',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1',
    ),
    'styleguide_palette' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/styleguide/styleguide_palette/styleguide_palette.module',
      'name' => 'styleguide_palette',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Style guide palette',
        'description' => 'Stores and displays color palettes.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'styleguide',
        ),
        'configure' => 'admin/config/user-interface/styleguide-palette',
        'files' => 
        array (
          0 => 'styleguide_palette.test',
        ),
        'version' => '7.x-1.1',
        'project' => 'styleguide',
        'datestamp' => '1367467219',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.1',
    ),
    'taxonomy_manager' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/taxonomy_manager/taxonomy_manager.module',
      'name' => 'taxonomy_manager',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Taxonomy Manager',
        'description' => 'Tool for administrating taxonomy terms.',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'taxonomy',
        ),
        'files' => 
        array (
          0 => 'taxonomy_manager.admin.inc',
        ),
        'configure' => 'admin/config/user-interface/taxonomy-manager-settings',
        'package' => 'Taxonomy',
        'version' => '7.x-1.0',
        'project' => 'taxonomy_manager',
        'datestamp' => '1369041918',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'term_merge' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/term_merge/term_merge.module',
      'name' => 'term_merge',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Term Merge',
        'description' => 'This module allows you to merge multiple terms into one, while updating all fields referring to those terms to refer to the replacement term instead.',
        'package' => 'Taxonomy',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'term_merge.test',
        ),
        'dependencies' => 
        array (
          0 => 'taxonomy',
          1 => 'entity',
          2 => 'ctools',
        ),
        'version' => '7.x-1.3',
        'project' => 'term_merge',
        'datestamp' => '1448826550',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'title' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/title/title.module',
      'name' => 'title',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7002',
      'weight' => '100',
      'info' => 
      array (
        'name' => 'Title',
        'description' => 'Replaces entity legacy fields with regular fields.',
        'core' => '7.x',
        'package' => 'Fields',
        'configure' => 'admin/config/content/title',
        'dependencies' => 
        array (
          0 => 'system (>7.14)',
        ),
        'files' => 
        array (
          0 => 'title.module',
          1 => 'views/views_handler_title_field.inc',
          2 => 'tests/title.test',
        ),
        'version' => '7.x-1.0-alpha7+14-dev',
        'project' => 'title',
        'datestamp' => '1427069882',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-alpha7+14-dev',
    ),
    'token' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/token/token.module',
      'name' => 'token',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7001',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Token',
        'description' => 'Provides a user interface for the Token API and some missing core tokens.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'token.test',
        ),
        'version' => '7.x-1.6',
        'project' => 'token',
        'datestamp' => '1425149060',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.6',
    ),
    'translation_helpers' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/translation_helpers/translation_helpers.module',
      'name' => 'translation_helpers',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Translation helpers',
        'description' => 'Provides methods for other modules to use with translated content.',
        'dependencies' => 
        array (
          0 => 'translation',
        ),
        'package' => 'Multilanguage',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'project' => 'translation_helpers',
        'datestamp' => '1322669152',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'transliteration' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/transliteration/transliteration.module',
      'name' => 'transliteration',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7300',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Transliteration',
        'description' => 'Converts non-latin text to US-ASCII and sanitizes file names.',
        'core' => '7.x',
        'configure' => 'admin/config/media/file-system',
        'version' => '7.x-3.2',
        'project' => 'transliteration',
        'datestamp' => '1395079444',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.2',
    ),
    'typogrify' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/typogrify/typogrify.module',
      'name' => 'typogrify',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Typogrify',
        'description' => 'Adds typographic refinements.',
        'package' => 'Input filters',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'typogrify.class.php',
          1 => 'tests/typogrify-smartypants.test',
          2 => 'tests/typogrify.class.test',
        ),
        'version' => '7.x-1.0-rc10',
        'project' => 'typogrify',
        'datestamp' => '1429046883',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc10',
    ),
    'values_field' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/values/modules/values_field/values_field.module',
      'name' => 'values_field',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Values Fields',
        'description' => 'Use reusable value sets as allowed values for fields.',
        'package' => 'Form Elements',
        'dependencies' => 
        array (
          0 => 'values',
          1 => 'field',
        ),
        'core' => '7.x',
        'version' => '7.x-1.2',
        'project' => 'values',
        'datestamp' => '1448408044',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'values_webform' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/values/modules/values_webform/values_webform.module',
      'name' => 'values_webform',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Values Webform',
        'description' => 'Exposes Value Sets as reusable option lists for webform "Select" components',
        'package' => 'Form Elements',
        'dependencies' => 
        array (
          0 => 'values',
          1 => 'webform',
        ),
        'core' => '7.x',
        'version' => '7.x-1.2',
        'project' => 'values',
        'datestamp' => '1448408044',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'values' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/values/values.module',
      'name' => 'values',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7102',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Values',
        'description' => 'API for managing reusable value sets.',
        'package' => 'Form Elements',
        'core' => '7.x',
        'version' => '7.x-1.2',
        'project' => 'values',
        'datestamp' => '1448408044',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'variable' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/variable/variable.module',
      'name' => 'variable',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Variable',
        'description' => 'Variable Information and basic variable API',
        'package' => 'Variable',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'includes/forum.variable.inc',
          1 => 'includes/locale.variable.inc',
          2 => 'includes/menu.variable.inc',
          3 => 'includes/node.variable.inc',
          4 => 'includes/system.variable.inc',
          5 => 'includes/taxonomy.variable.inc',
          6 => 'includes/translation.variable.inc',
          7 => 'includes/user.variable.inc',
          8 => 'variable.test',
        ),
        'version' => '7.x-2.5',
        'project' => 'variable',
        'datestamp' => '1398250128',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.5',
    ),
    'variable_admin' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/variable/variable_admin/variable_admin.module',
      'name' => 'variable_admin',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Variable admin',
        'description' => 'Variable Administration UI',
        'dependencies' => 
        array (
          0 => 'variable',
        ),
        'package' => 'Variable',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'project' => 'variable',
        'datestamp' => '1398250128',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.5',
    ),
    'variable_example' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/variable/variable_example/variable_example.module',
      'name' => 'variable_example',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Variable example',
        'description' => 'An example module showing how to use the Variable API and providing some variables.',
        'dependencies' => 
        array (
          0 => 'variable',
          1 => 'variable_store',
        ),
        'package' => 'Example modules',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'variable_example.variable.inc',
        ),
        'version' => '7.x-2.5',
        'project' => 'variable',
        'datestamp' => '1398250128',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.5',
    ),
    'variable_realm' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/variable/variable_realm/variable_realm.module',
      'name' => 'variable_realm',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7000',
      'weight' => '-1000',
      'info' => 
      array (
        'name' => 'Variable realm',
        'description' => 'API to use variable realms from different modules',
        'dependencies' => 
        array (
          0 => 'variable',
        ),
        'package' => 'Variable',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'files' => 
        array (
          0 => 'variable_realm.class.inc',
          1 => 'variable_realm_union.class.inc',
        ),
        'project' => 'variable',
        'datestamp' => '1398250128',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.5',
    ),
    'variable_store' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/variable/variable_store/variable_store.module',
      'name' => 'variable_store',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '1',
      'schema_version' => '7000',
      'weight' => '-1000',
      'info' => 
      array (
        'name' => 'Variable store',
        'description' => 'Database storage for variable realms. This is an API module.',
        'dependencies' => 
        array (
          0 => 'variable',
        ),
        'package' => 'Variable',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'files' => 
        array (
          0 => 'variable_store.class.inc',
          1 => 'variable_store.test',
        ),
        'project' => 'variable',
        'datestamp' => '1398250128',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.5',
    ),
    'variable_views' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/variable/variable_views/variable_views.module',
      'name' => 'variable_views',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Variable views',
        'description' => 'Provides views integration for variable, included a default variable argument.',
        'dependencies' => 
        array (
          0 => 'variable',
          1 => 'views',
        ),
        'package' => 'Variable',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'includes/views_plugin_argument_default_variable.inc',
          1 => 'includes/views_handler_field_variable_title.inc',
          2 => 'includes/views_handler_field_variable_value.inc',
        ),
        'version' => '7.x-2.5',
        'project' => 'variable',
        'datestamp' => '1398250128',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.5',
    ),
    'views' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/views/views.module',
      'name' => 'views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7302',
      'weight' => '10',
      'info' => 
      array (
        'name' => 'Views',
        'description' => 'Create customized lists and queries from your database.',
        'package' => 'Views',
        'core' => '7.x',
        'php' => '5.2',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/views.css',
          ),
        ),
        'dependencies' => 
        array (
          0 => 'ctools',
        ),
        'files' => 
        array (
          0 => 'handlers/views_handler_area.inc',
          1 => 'handlers/views_handler_area_messages.inc',
          2 => 'handlers/views_handler_area_result.inc',
          3 => 'handlers/views_handler_area_text.inc',
          4 => 'handlers/views_handler_area_text_custom.inc',
          5 => 'handlers/views_handler_area_view.inc',
          6 => 'handlers/views_handler_argument.inc',
          7 => 'handlers/views_handler_argument_date.inc',
          8 => 'handlers/views_handler_argument_formula.inc',
          9 => 'handlers/views_handler_argument_many_to_one.inc',
          10 => 'handlers/views_handler_argument_null.inc',
          11 => 'handlers/views_handler_argument_numeric.inc',
          12 => 'handlers/views_handler_argument_string.inc',
          13 => 'handlers/views_handler_argument_group_by_numeric.inc',
          14 => 'handlers/views_handler_field.inc',
          15 => 'handlers/views_handler_field_counter.inc',
          16 => 'handlers/views_handler_field_boolean.inc',
          17 => 'handlers/views_handler_field_contextual_links.inc',
          18 => 'handlers/views_handler_field_custom.inc',
          19 => 'handlers/views_handler_field_date.inc',
          20 => 'handlers/views_handler_field_entity.inc',
          21 => 'handlers/views_handler_field_markup.inc',
          22 => 'handlers/views_handler_field_math.inc',
          23 => 'handlers/views_handler_field_numeric.inc',
          24 => 'handlers/views_handler_field_prerender_list.inc',
          25 => 'handlers/views_handler_field_time_interval.inc',
          26 => 'handlers/views_handler_field_serialized.inc',
          27 => 'handlers/views_handler_field_machine_name.inc',
          28 => 'handlers/views_handler_field_url.inc',
          29 => 'handlers/views_handler_filter.inc',
          30 => 'handlers/views_handler_filter_boolean_operator.inc',
          31 => 'handlers/views_handler_filter_boolean_operator_string.inc',
          32 => 'handlers/views_handler_filter_combine.inc',
          33 => 'handlers/views_handler_filter_date.inc',
          34 => 'handlers/views_handler_filter_equality.inc',
          35 => 'handlers/views_handler_filter_entity_bundle.inc',
          36 => 'handlers/views_handler_filter_group_by_numeric.inc',
          37 => 'handlers/views_handler_filter_in_operator.inc',
          38 => 'handlers/views_handler_filter_many_to_one.inc',
          39 => 'handlers/views_handler_filter_numeric.inc',
          40 => 'handlers/views_handler_filter_string.inc',
          41 => 'handlers/views_handler_filter_fields_compare.inc',
          42 => 'handlers/views_handler_relationship.inc',
          43 => 'handlers/views_handler_relationship_groupwise_max.inc',
          44 => 'handlers/views_handler_sort.inc',
          45 => 'handlers/views_handler_sort_date.inc',
          46 => 'handlers/views_handler_sort_formula.inc',
          47 => 'handlers/views_handler_sort_group_by_numeric.inc',
          48 => 'handlers/views_handler_sort_menu_hierarchy.inc',
          49 => 'handlers/views_handler_sort_random.inc',
          50 => 'includes/base.inc',
          51 => 'includes/handlers.inc',
          52 => 'includes/plugins.inc',
          53 => 'includes/view.inc',
          54 => 'modules/aggregator/views_handler_argument_aggregator_fid.inc',
          55 => 'modules/aggregator/views_handler_argument_aggregator_iid.inc',
          56 => 'modules/aggregator/views_handler_argument_aggregator_category_cid.inc',
          57 => 'modules/aggregator/views_handler_field_aggregator_title_link.inc',
          58 => 'modules/aggregator/views_handler_field_aggregator_category.inc',
          59 => 'modules/aggregator/views_handler_field_aggregator_item_description.inc',
          60 => 'modules/aggregator/views_handler_field_aggregator_xss.inc',
          61 => 'modules/aggregator/views_handler_filter_aggregator_category_cid.inc',
          62 => 'modules/aggregator/views_plugin_row_aggregator_rss.inc',
          63 => 'modules/book/views_plugin_argument_default_book_root.inc',
          64 => 'modules/comment/views_handler_argument_comment_user_uid.inc',
          65 => 'modules/comment/views_handler_field_comment.inc',
          66 => 'modules/comment/views_handler_field_comment_depth.inc',
          67 => 'modules/comment/views_handler_field_comment_link.inc',
          68 => 'modules/comment/views_handler_field_comment_link_approve.inc',
          69 => 'modules/comment/views_handler_field_comment_link_delete.inc',
          70 => 'modules/comment/views_handler_field_comment_link_edit.inc',
          71 => 'modules/comment/views_handler_field_comment_link_reply.inc',
          72 => 'modules/comment/views_handler_field_comment_node_link.inc',
          73 => 'modules/comment/views_handler_field_comment_username.inc',
          74 => 'modules/comment/views_handler_field_ncs_last_comment_name.inc',
          75 => 'modules/comment/views_handler_field_ncs_last_updated.inc',
          76 => 'modules/comment/views_handler_field_node_comment.inc',
          77 => 'modules/comment/views_handler_field_node_new_comments.inc',
          78 => 'modules/comment/views_handler_field_last_comment_timestamp.inc',
          79 => 'modules/comment/views_handler_filter_comment_user_uid.inc',
          80 => 'modules/comment/views_handler_filter_ncs_last_updated.inc',
          81 => 'modules/comment/views_handler_filter_node_comment.inc',
          82 => 'modules/comment/views_handler_sort_comment_thread.inc',
          83 => 'modules/comment/views_handler_sort_ncs_last_comment_name.inc',
          84 => 'modules/comment/views_handler_sort_ncs_last_updated.inc',
          85 => 'modules/comment/views_plugin_row_comment_rss.inc',
          86 => 'modules/comment/views_plugin_row_comment_view.inc',
          87 => 'modules/contact/views_handler_field_contact_link.inc',
          88 => 'modules/field/views_handler_field_field.inc',
          89 => 'modules/field/views_handler_relationship_entity_reverse.inc',
          90 => 'modules/field/views_handler_argument_field_list.inc',
          91 => 'modules/field/views_handler_filter_field_list_boolean.inc',
          92 => 'modules/field/views_handler_argument_field_list_string.inc',
          93 => 'modules/field/views_handler_filter_field_list.inc',
          94 => 'modules/filter/views_handler_field_filter_format_name.inc',
          95 => 'modules/locale/views_handler_field_node_language.inc',
          96 => 'modules/locale/views_handler_filter_node_language.inc',
          97 => 'modules/locale/views_handler_argument_locale_group.inc',
          98 => 'modules/locale/views_handler_argument_locale_language.inc',
          99 => 'modules/locale/views_handler_field_locale_group.inc',
          100 => 'modules/locale/views_handler_field_locale_language.inc',
          101 => 'modules/locale/views_handler_field_locale_link_edit.inc',
          102 => 'modules/locale/views_handler_filter_locale_group.inc',
          103 => 'modules/locale/views_handler_filter_locale_language.inc',
          104 => 'modules/locale/views_handler_filter_locale_version.inc',
          105 => 'modules/node/views_handler_argument_dates_various.inc',
          106 => 'modules/node/views_handler_argument_node_language.inc',
          107 => 'modules/node/views_handler_argument_node_nid.inc',
          108 => 'modules/node/views_handler_argument_node_type.inc',
          109 => 'modules/node/views_handler_argument_node_vid.inc',
          110 => 'modules/node/views_handler_argument_node_uid_revision.inc',
          111 => 'modules/node/views_handler_field_history_user_timestamp.inc',
          112 => 'modules/node/views_handler_field_node.inc',
          113 => 'modules/node/views_handler_field_node_link.inc',
          114 => 'modules/node/views_handler_field_node_link_delete.inc',
          115 => 'modules/node/views_handler_field_node_link_edit.inc',
          116 => 'modules/node/views_handler_field_node_revision.inc',
          117 => 'modules/node/views_handler_field_node_revision_link.inc',
          118 => 'modules/node/views_handler_field_node_revision_link_delete.inc',
          119 => 'modules/node/views_handler_field_node_revision_link_revert.inc',
          120 => 'modules/node/views_handler_field_node_path.inc',
          121 => 'modules/node/views_handler_field_node_type.inc',
          122 => 'modules/node/views_handler_filter_history_user_timestamp.inc',
          123 => 'modules/node/views_handler_filter_node_access.inc',
          124 => 'modules/node/views_handler_filter_node_status.inc',
          125 => 'modules/node/views_handler_filter_node_type.inc',
          126 => 'modules/node/views_handler_filter_node_uid_revision.inc',
          127 => 'modules/node/views_plugin_argument_default_node.inc',
          128 => 'modules/node/views_plugin_argument_validate_node.inc',
          129 => 'modules/node/views_plugin_row_node_rss.inc',
          130 => 'modules/node/views_plugin_row_node_view.inc',
          131 => 'modules/profile/views_handler_field_profile_date.inc',
          132 => 'modules/profile/views_handler_field_profile_list.inc',
          133 => 'modules/profile/views_handler_filter_profile_selection.inc',
          134 => 'modules/search/views_handler_argument_search.inc',
          135 => 'modules/search/views_handler_field_search_score.inc',
          136 => 'modules/search/views_handler_filter_search.inc',
          137 => 'modules/search/views_handler_sort_search_score.inc',
          138 => 'modules/search/views_plugin_row_search_view.inc',
          139 => 'modules/statistics/views_handler_field_accesslog_path.inc',
          140 => 'modules/system/views_handler_argument_file_fid.inc',
          141 => 'modules/system/views_handler_field_file.inc',
          142 => 'modules/system/views_handler_field_file_extension.inc',
          143 => 'modules/system/views_handler_field_file_filemime.inc',
          144 => 'modules/system/views_handler_field_file_uri.inc',
          145 => 'modules/system/views_handler_field_file_status.inc',
          146 => 'modules/system/views_handler_filter_file_status.inc',
          147 => 'modules/taxonomy/views_handler_argument_taxonomy.inc',
          148 => 'modules/taxonomy/views_handler_argument_term_node_tid.inc',
          149 => 'modules/taxonomy/views_handler_argument_term_node_tid_depth.inc',
          150 => 'modules/taxonomy/views_handler_argument_term_node_tid_depth_modifier.inc',
          151 => 'modules/taxonomy/views_handler_argument_vocabulary_vid.inc',
          152 => 'modules/taxonomy/views_handler_argument_vocabulary_machine_name.inc',
          153 => 'modules/taxonomy/views_handler_field_taxonomy.inc',
          154 => 'modules/taxonomy/views_handler_field_term_node_tid.inc',
          155 => 'modules/taxonomy/views_handler_field_term_link_edit.inc',
          156 => 'modules/taxonomy/views_handler_filter_term_node_tid.inc',
          157 => 'modules/taxonomy/views_handler_filter_term_node_tid_depth.inc',
          158 => 'modules/taxonomy/views_handler_filter_vocabulary_vid.inc',
          159 => 'modules/taxonomy/views_handler_filter_vocabulary_machine_name.inc',
          160 => 'modules/taxonomy/views_handler_relationship_node_term_data.inc',
          161 => 'modules/taxonomy/views_plugin_argument_validate_taxonomy_term.inc',
          162 => 'modules/taxonomy/views_plugin_argument_default_taxonomy_tid.inc',
          163 => 'modules/tracker/views_handler_argument_tracker_comment_user_uid.inc',
          164 => 'modules/tracker/views_handler_filter_tracker_comment_user_uid.inc',
          165 => 'modules/tracker/views_handler_filter_tracker_boolean_operator.inc',
          166 => 'modules/system/views_handler_filter_system_type.inc',
          167 => 'modules/translation/views_handler_argument_node_tnid.inc',
          168 => 'modules/translation/views_handler_field_node_link_translate.inc',
          169 => 'modules/translation/views_handler_field_node_translation_link.inc',
          170 => 'modules/translation/views_handler_filter_node_tnid.inc',
          171 => 'modules/translation/views_handler_filter_node_tnid_child.inc',
          172 => 'modules/translation/views_handler_relationship_translation.inc',
          173 => 'modules/user/views_handler_argument_user_uid.inc',
          174 => 'modules/user/views_handler_argument_users_roles_rid.inc',
          175 => 'modules/user/views_handler_field_user.inc',
          176 => 'modules/user/views_handler_field_user_language.inc',
          177 => 'modules/user/views_handler_field_user_link.inc',
          178 => 'modules/user/views_handler_field_user_link_cancel.inc',
          179 => 'modules/user/views_handler_field_user_link_edit.inc',
          180 => 'modules/user/views_handler_field_user_mail.inc',
          181 => 'modules/user/views_handler_field_user_name.inc',
          182 => 'modules/user/views_handler_field_user_permissions.inc',
          183 => 'modules/user/views_handler_field_user_picture.inc',
          184 => 'modules/user/views_handler_field_user_roles.inc',
          185 => 'modules/user/views_handler_filter_user_current.inc',
          186 => 'modules/user/views_handler_filter_user_name.inc',
          187 => 'modules/user/views_handler_filter_user_permissions.inc',
          188 => 'modules/user/views_handler_filter_user_roles.inc',
          189 => 'modules/user/views_plugin_argument_default_current_user.inc',
          190 => 'modules/user/views_plugin_argument_default_user.inc',
          191 => 'modules/user/views_plugin_argument_validate_user.inc',
          192 => 'modules/user/views_plugin_row_user_view.inc',
          193 => 'plugins/views_plugin_access.inc',
          194 => 'plugins/views_plugin_access_none.inc',
          195 => 'plugins/views_plugin_access_perm.inc',
          196 => 'plugins/views_plugin_access_role.inc',
          197 => 'plugins/views_plugin_argument_default.inc',
          198 => 'plugins/views_plugin_argument_default_php.inc',
          199 => 'plugins/views_plugin_argument_default_fixed.inc',
          200 => 'plugins/views_plugin_argument_default_raw.inc',
          201 => 'plugins/views_plugin_argument_validate.inc',
          202 => 'plugins/views_plugin_argument_validate_numeric.inc',
          203 => 'plugins/views_plugin_argument_validate_php.inc',
          204 => 'plugins/views_plugin_cache.inc',
          205 => 'plugins/views_plugin_cache_none.inc',
          206 => 'plugins/views_plugin_cache_time.inc',
          207 => 'plugins/views_plugin_display.inc',
          208 => 'plugins/views_plugin_display_attachment.inc',
          209 => 'plugins/views_plugin_display_block.inc',
          210 => 'plugins/views_plugin_display_default.inc',
          211 => 'plugins/views_plugin_display_embed.inc',
          212 => 'plugins/views_plugin_display_extender.inc',
          213 => 'plugins/views_plugin_display_feed.inc',
          214 => 'plugins/views_plugin_display_page.inc',
          215 => 'plugins/views_plugin_exposed_form_basic.inc',
          216 => 'plugins/views_plugin_exposed_form.inc',
          217 => 'plugins/views_plugin_exposed_form_input_required.inc',
          218 => 'plugins/views_plugin_localization_core.inc',
          219 => 'plugins/views_plugin_localization.inc',
          220 => 'plugins/views_plugin_localization_none.inc',
          221 => 'plugins/views_plugin_pager.inc',
          222 => 'plugins/views_plugin_pager_full.inc',
          223 => 'plugins/views_plugin_pager_mini.inc',
          224 => 'plugins/views_plugin_pager_none.inc',
          225 => 'plugins/views_plugin_pager_some.inc',
          226 => 'plugins/views_plugin_query.inc',
          227 => 'plugins/views_plugin_query_default.inc',
          228 => 'plugins/views_plugin_row.inc',
          229 => 'plugins/views_plugin_row_fields.inc',
          230 => 'plugins/views_plugin_row_rss_fields.inc',
          231 => 'plugins/views_plugin_style.inc',
          232 => 'plugins/views_plugin_style_default.inc',
          233 => 'plugins/views_plugin_style_grid.inc',
          234 => 'plugins/views_plugin_style_list.inc',
          235 => 'plugins/views_plugin_style_jump_menu.inc',
          236 => 'plugins/views_plugin_style_mapping.inc',
          237 => 'plugins/views_plugin_style_rss.inc',
          238 => 'plugins/views_plugin_style_summary.inc',
          239 => 'plugins/views_plugin_style_summary_jump_menu.inc',
          240 => 'plugins/views_plugin_style_summary_unformatted.inc',
          241 => 'plugins/views_plugin_style_table.inc',
          242 => 'tests/handlers/views_handlers.test',
          243 => 'tests/handlers/views_handler_area_text.test',
          244 => 'tests/handlers/views_handler_argument_null.test',
          245 => 'tests/handlers/views_handler_argument_string.test',
          246 => 'tests/handlers/views_handler_field.test',
          247 => 'tests/handlers/views_handler_field_boolean.test',
          248 => 'tests/handlers/views_handler_field_custom.test',
          249 => 'tests/handlers/views_handler_field_counter.test',
          250 => 'tests/handlers/views_handler_field_date.test',
          251 => 'tests/handlers/views_handler_field_file_extension.test',
          252 => 'tests/handlers/views_handler_field_file_size.test',
          253 => 'tests/handlers/views_handler_field_math.test',
          254 => 'tests/handlers/views_handler_field_url.test',
          255 => 'tests/handlers/views_handler_field_xss.test',
          256 => 'tests/handlers/views_handler_filter_combine.test',
          257 => 'tests/handlers/views_handler_filter_date.test',
          258 => 'tests/handlers/views_handler_filter_equality.test',
          259 => 'tests/handlers/views_handler_filter_in_operator.test',
          260 => 'tests/handlers/views_handler_filter_numeric.test',
          261 => 'tests/handlers/views_handler_filter_string.test',
          262 => 'tests/handlers/views_handler_sort_random.test',
          263 => 'tests/handlers/views_handler_sort_date.test',
          264 => 'tests/handlers/views_handler_sort.test',
          265 => 'tests/test_handlers/views_test_area_access.inc',
          266 => 'tests/test_plugins/views_test_plugin_access_test_dynamic.inc',
          267 => 'tests/test_plugins/views_test_plugin_access_test_static.inc',
          268 => 'tests/test_plugins/views_test_plugin_style_test_mapping.inc',
          269 => 'tests/plugins/views_plugin_display.test',
          270 => 'tests/styles/views_plugin_style_jump_menu.test',
          271 => 'tests/styles/views_plugin_style.test',
          272 => 'tests/styles/views_plugin_style_base.test',
          273 => 'tests/styles/views_plugin_style_mapping.test',
          274 => 'tests/styles/views_plugin_style_unformatted.test',
          275 => 'tests/views_access.test',
          276 => 'tests/views_analyze.test',
          277 => 'tests/views_basic.test',
          278 => 'tests/views_argument_default.test',
          279 => 'tests/views_argument_validator.test',
          280 => 'tests/views_exposed_form.test',
          281 => 'tests/field/views_fieldapi.test',
          282 => 'tests/views_glossary.test',
          283 => 'tests/views_groupby.test',
          284 => 'tests/views_handlers.test',
          285 => 'tests/views_module.test',
          286 => 'tests/views_pager.test',
          287 => 'tests/views_plugin_localization_test.inc',
          288 => 'tests/views_translatable.test',
          289 => 'tests/views_query.test',
          290 => 'tests/views_upgrade.test',
          291 => 'tests/views_test.views_default.inc',
          292 => 'tests/comment/views_handler_argument_comment_user_uid.test',
          293 => 'tests/comment/views_handler_filter_comment_user_uid.test',
          294 => 'tests/node/views_node_revision_relations.test',
          295 => 'tests/taxonomy/views_handler_relationship_node_term_data.test',
          296 => 'tests/user/views_handler_field_user_name.test',
          297 => 'tests/user/views_user_argument_default.test',
          298 => 'tests/user/views_user_argument_validate.test',
          299 => 'tests/user/views_user.test',
          300 => 'tests/views_cache.test',
          301 => 'tests/views_view.test',
          302 => 'tests/views_ui.test',
        ),
        'version' => '7.x-3.13',
        'project' => 'views',
        'datestamp' => '1446804876',
      ),
      'version' => '7.x-3.13',
    ),
    'views_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/views/views_ui.module',
      'name' => 'views_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views UI',
        'description' => 'Administrative interface to views. Without this module, you cannot create or edit your views.',
        'package' => 'Views',
        'core' => '7.x',
        'configure' => 'admin/structure/views',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'files' => 
        array (
          0 => 'views_ui.module',
          1 => 'plugins/views_wizard/views_ui_base_views_wizard.class.php',
        ),
        'version' => '7.x-3.13',
        'project' => 'views',
        'datestamp' => '1446804876',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.13',
    ),
    'actions_permissions' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/views_bulk_operations/actions_permissions.module',
      'name' => 'actions_permissions',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Actions permissions (VBO)',
        'description' => 'Provides permission-based access control for actions. Used by Views Bulk Operations.',
        'package' => 'Administration',
        'core' => '7.x',
        'version' => '7.x-3.3',
        'project' => 'views_bulk_operations',
        'datestamp' => '1435764542',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.3',
    ),
    'views_bulk_operations' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/views_bulk_operations/views_bulk_operations.module',
      'name' => 'views_bulk_operations',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Bulk Operations',
        'description' => 'Provides a way of selecting multiple rows and applying operations to them.',
        'dependencies' => 
        array (
          0 => 'entity',
          1 => 'views',
        ),
        'package' => 'Views',
        'core' => '7.x',
        'php' => '5.2.9',
        'files' => 
        array (
          0 => 'plugins/operation_types/base.class.php',
          1 => 'views/views_bulk_operations_handler_field_operations.inc',
        ),
        'version' => '7.x-3.3',
        'project' => 'views_bulk_operations',
        'datestamp' => '1435764542',
      ),
      'version' => '7.x-3.3',
    ),
    'views_conditional' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/views_conditional/views_conditional.module',
      'name' => 'views_conditional',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Conditional',
        'description' => 'Allows conditional views output.',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'package' => 'Views',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'includes/views/handlers/views_conditional_handler.inc',
        ),
        'version' => '7.x-1.3',
        'project' => 'views_conditional',
        'datestamp' => '1416718383',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'views_field_view' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/views_field_view/views_field_view.module',
      'name' => 'views_field_view',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Field View',
        'description' => 'Embeds a view inside a view as field',
        'core' => '7.x',
        'package' => 'Views',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'files' => 
        array (
          0 => 'views_field_view_handler_field_view.inc',
          1 => 'tests/views_field_view.test',
        ),
        'version' => '7.x-1.2',
        'project' => 'views_field_view',
        'datestamp' => '1442561052',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'views_flag_refresh' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/views_flag_refresh/views_flag_refresh.module',
      'name' => 'views_flag_refresh',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Flag Refresh',
        'description' => 'Views Flag Refresh allows site administrators to configure which views are refreshed automatically via AJAX when certain flags are selected.',
        'dependencies' => 
        array (
          0 => 'flag',
          1 => 'views',
        ),
        'core' => '7.x',
        'package' => 'Views',
        'files' => 
        array (
          0 => 'views_flag_refresh.views.inc',
          1 => 'views_flag_refresh_plugin_display_extender.inc',
        ),
        'version' => '7.x-1.3',
        'project' => 'views_flag_refresh',
        'datestamp' => '1352459263',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.3',
    ),
    'views_litepager' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/views_litepager/views_litepager.module',
      'name' => 'views_litepager',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Litepager',
        'description' => 'Provide a pager plugin for Views that doesn\'t require an expensive count query',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'core' => '7.x',
        'package' => 'Views',
        'files' => 
        array (
          0 => 'views_litepager_plugin_pager_lite.inc',
        ),
        'version' => '7.x-3.0',
        'project' => 'views_litepager',
        'datestamp' => '1335573365',
        'php' => '5.2.4',
      ),
      'version' => '7.x-3.0',
    ),
    'views_merge_rows' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/views_merge_rows/views_merge_rows.module',
      'name' => 'views_merge_rows',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Views Merge Rows',
        'description' => 'Adds possibility to merge rows with the same values in the specified fields.',
        'package' => 'Views',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'views',
        ),
        'files' => 
        array (
          0 => 'views_merge_rows_plugin_display_extender.inc',
        ),
        'version' => '7.x-1.0-rc1',
        'project' => 'views_merge_rows',
        'datestamp' => '1370957152',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc1',
    ),
    'view_unpublished' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/view_unpublished/view_unpublished.module',
      'name' => 'view_unpublished',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7100',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'View Unpublished',
        'description' => 'Select which roles should be able to see unpublished nodes.',
        'package' => 'Permissions',
        'version' => '7.x-1.2',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'view_unpublished_handler_filter_node_status.inc',
        ),
        'project' => 'view_unpublished',
        'datestamp' => '1414710829',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'workflow' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow.module',
      'name' => 'workflow',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7017',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow API',
        'description' => 'Workflow API. (Enable Workflow Node or Workflow Field to add arbitrary workflows to entities.)',
        'package' => 'Workflow',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'entity (>7.x-1.5)',
        ),
        'files' => 
        array (
          0 => 'includes/Entity/Workflow.php',
          1 => 'includes/Entity/WorkflowInterface.php',
          2 => 'includes/Entity/WorkflowState.php',
          3 => 'includes/Entity/WorkflowConfigTransition.php',
          4 => 'includes/Entity/WorkflowScheduledTransition.php',
          5 => 'includes/Entity/WorkflowTransition.php',
          6 => 'includes/Field/WorkflowD7Base.php',
          7 => 'includes/Field/WorkflowItem.php',
          8 => 'includes/Field/WorkflowDefaultWidget.php',
          9 => 'includes/Form/WorkflowTransitionForm.php',
        ),
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_access' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_access/workflow_access.module',
      'name' => 'workflow_access',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow access',
        'description' => 'Content access control based on workflows and roles. Depends on the node_access system, so only works for entities of type \'node\'.',
        'dependencies' => 
        array (
          0 => 'workflow',
        ),
        'package' => 'Workflow',
        'core' => '7.x',
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_actions' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_actions/workflow_actions.module',
      'name' => 'workflow_actions',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow Trigger',
        'description' => 'Enables actions to be fired upon a Workflow State change.',
        'dependencies' => 
        array (
          0 => 'workflow',
          1 => 'trigger',
        ),
        'package' => 'Workflow',
        'core' => '7.x',
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_admin_ui' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_admin_ui/workflow_admin_ui.module',
      'name' => 'workflow_admin_ui',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow UI',
        'description' => 'Provides administrative UI for workflow.',
        'package' => 'Workflow',
        'core' => '7.x',
        'configure' => 'admin/config/workflow/workflow',
        'dependencies' => 
        array (
          0 => 'workflow',
        ),
        'files' => 
        array (
          0 => 'includes/Entity/EntityWorkflowUIController.php',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'workflow_admin_ui.css',
          ),
        ),
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_cleanup' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_cleanup/workflow_cleanup.module',
      'name' => 'workflow_cleanup',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow Clean Up',
        'description' => 'Cleans up Workflow cruft.',
        'dependencies' => 
        array (
          0 => 'workflow',
        ),
        'core' => '7.x',
        'package' => 'Workflow',
        'configure' => 'admin/config/workflow/workflow/cleanup',
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflowfield' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_field/workflowfield.module',
      'name' => 'workflowfield',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow Field',
        'description' => 'Defines a Workflow field, widget and formatter. (Do not enable Workflow Field and Workflow Node together.)',
        'package' => 'Workflow',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'entity',
          1 => 'field',
          2 => 'options',
          3 => 'workflow',
        ),
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflownode' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_node/workflownode.module',
      'name' => 'workflownode',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow Node',
        'description' => 'Adds a Workflow to nodes. (Use only if you come from a version below 7.x-2.x. If not, use \'Workfow Field\' instead).',
        'package' => 'Workflow',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'workflow',
        ),
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_notify' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_notify/workflow_notify.module',
      'name' => 'workflow_notify',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow Notify',
        'description' => 'Notify roles of Workflow transitions.',
        'dependencies' => 
        array (
          0 => 'workflow',
        ),
        'configure' => 'admin/config/workflow/workflow',
        'core' => '7.x',
        'package' => 'Workflow',
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_notify_og' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_notify/workflow_notify_og/workflow_notify_og.module',
      'name' => 'workflow_notify_og',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow Notify OG',
        'description' => 'Notify roles by OG groups of Workflow transitions.',
        'dependencies' => 
        array (
          0 => 'workflow_notify',
        ),
        'core' => '7.x',
        'package' => 'Workflow',
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_revert' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_revert/workflow_revert.module',
      'name' => 'workflow_revert',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow Revert',
        'description' => 'Adds a \'Revert\' link to the first workflow history row.',
        'dependencies' => 
        array (
          0 => 'workflow',
        ),
        'core' => '7.x',
        'package' => 'Workflow',
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_rules' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_rules/workflow_rules.module',
      'name' => 'workflow_rules',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow Rules',
        'description' => 'Provides additional, workflow-specific Rules integration.',
        'core' => '7.x',
        'package' => 'Workflow',
        'dependencies' => 
        array (
          0 => 'workflow',
          1 => 'rules',
        ),
        'configure' => 'admin/config/workflow/rules',
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_search_api' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_search_api/workflow_search_api.module',
      'name' => 'workflow_search_api',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow Node Search API',
        'description' => 'Adds Workflow Node\'s state information to Search API index.',
        'dependencies' => 
        array (
          0 => 'workflow',
          1 => 'workflownode',
          2 => 'entity',
        ),
        'core' => '7.x',
        'package' => 'Workflow',
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_vbo' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_vbo/workflow_vbo.module',
      'name' => 'workflow_vbo',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow Actions',
        'description' => 'Provides actions that can be associated to triggers, or
               used as VBO-action. Provided actions are \'set to next state\'
               and \'set to specific state\'.',
        'dependencies' => 
        array (
          0 => 'workflow',
        ),
        'package' => 'Workflow',
        'core' => '7.x',
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'workflow_views' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/workflow/workflow_views/workflow_views.module',
      'name' => 'workflow_views',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Workflow views',
        'description' => 'Provides views integration for workflows.',
        'package' => 'Workflow',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'workflow',
          1 => 'views (>3.3)',
        ),
        'files' => 
        array (
          0 => 'handlers/workflow_views_handler_filter_sid.inc',
          1 => 'handlers/workflow_views_handler_field_sid.inc',
          2 => 'handlers/workflow_views_handler_field_state.inc',
          3 => 'handlers/workflow_views_handler_field_username.inc',
          4 => 'handlers/workflow_views_handler_field_node_link_workflow.inc',
          5 => 'handlers/workflow_views_handler_field_comment_link_edit.inc',
          6 => 'handlers/workflow_views_handler_argument_state.inc',
        ),
        'version' => '7.x-2.8',
        'project' => 'workflow',
        'datestamp' => '1451565855',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.8',
    ),
    'wysiwyg' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/wysiwyg/wysiwyg.module',
      'name' => 'wysiwyg',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7203',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Wysiwyg',
        'description' => 'Allows to edit content with client-side editors.',
        'package' => 'User interface',
        'core' => '7.x',
        'configure' => 'admin/config/content/wysiwyg',
        'files' => 
        array (
          0 => 'wysiwyg.module',
          1 => 'tests/wysiwyg.test',
        ),
        'version' => '7.x-2.2+75-dev',
        'project' => 'wysiwyg',
        'datestamp' => '1453735332',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2+75-dev',
    ),
    'xmlsitemap' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/xmlsitemap/xmlsitemap.module',
      'name' => 'xmlsitemap',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '7203',
      'weight' => '1',
      'info' => 
      array (
        'name' => 'XML sitemap',
        'description' => 'Creates an XML sitemap conforming to the <a href="http://sitemaps.org/">sitemaps.org protocol</a>.',
        'package' => 'XML sitemap',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'xmlsitemap.module',
          1 => 'xmlsitemap.inc',
          2 => 'xmlsitemap.admin.inc',
          3 => 'xmlsitemap.drush.inc',
          4 => 'xmlsitemap.generate.inc',
          5 => 'xmlsitemap.xmlsitemap.inc',
          6 => 'xmlsitemap.pages.inc',
          7 => 'xmlsitemap.install',
          8 => 'xmlsitemap.test',
        ),
        'recommends' => 
        array (
          0 => 'robotstxt',
        ),
        'configure' => 'admin/config/search/xmlsitemap',
        'version' => '7.x-2.2',
        'project' => 'xmlsitemap',
        'datestamp' => '1422607989',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'xmlsitemap_custom' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_custom/xmlsitemap_custom.module',
      'name' => 'xmlsitemap_custom',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'XML sitemap custom',
        'description' => 'Adds user configurable links to the sitemap.',
        'package' => 'XML sitemap',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'xmlsitemap',
        ),
        'files' => 
        array (
          0 => 'xmlsitemap_custom.module',
          1 => 'xmlsitemap_custom.admin.inc',
          2 => 'xmlsitemap_custom.install',
          3 => 'xmlsitemap_custom.test',
        ),
        'configure' => 'admin/config/search/xmlsitemap/custom',
        'version' => '7.x-2.2',
        'project' => 'xmlsitemap',
        'datestamp' => '1422607989',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'xmlsitemap_engines' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_engines/xmlsitemap_engines.module',
      'name' => 'xmlsitemap_engines',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'XML sitemap engines',
        'description' => 'Submit the sitemap to search engines.',
        'package' => 'XML sitemap',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'xmlsitemap',
        ),
        'files' => 
        array (
          0 => 'xmlsitemap_engines.module',
          1 => 'xmlsitemap_engines.admin.inc',
          2 => 'xmlsitemap_engines.install',
          3 => 'tests/xmlsitemap_engines.test',
        ),
        'recommends' => 
        array (
          0 => 'site_verify',
        ),
        'configure' => 'admin/config/search/xmlsitemap/engines',
        'version' => '7.x-2.2',
        'project' => 'xmlsitemap',
        'datestamp' => '1422607989',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'xmlsitemap_i18n' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_i18n/xmlsitemap_i18n.module',
      'name' => 'xmlsitemap_i18n',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'XML sitemap internationalization',
        'description' => 'Enables multilingual XML sitemaps.',
        'package' => 'XML sitemap',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'xmlsitemap',
          1 => 'i18n',
        ),
        'files' => 
        array (
          0 => 'xmlsitemap_i18n.module',
          1 => 'xmlsitemap_i18n.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'xmlsitemap',
        'datestamp' => '1422607989',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'xmlsitemap_menu' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_menu/xmlsitemap_menu.module',
      'name' => 'xmlsitemap_menu',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '6201',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'XML sitemap menu',
        'description' => 'Adds menu item links to the sitemap.',
        'package' => 'XML sitemap',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'xmlsitemap',
          1 => 'menu',
        ),
        'files' => 
        array (
          0 => 'xmlsitemap_menu.module',
          1 => 'xmlsitemap_menu.install',
          2 => 'xmlsitemap_menu.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'xmlsitemap',
        'datestamp' => '1422607989',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'xmlsitemap_node' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_node/xmlsitemap_node.module',
      'name' => 'xmlsitemap_node',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '6201',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'XML sitemap node',
        'description' => 'Adds content links to the sitemap.',
        'package' => 'XML sitemap',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'xmlsitemap',
        ),
        'files' => 
        array (
          0 => 'xmlsitemap_node.module',
          1 => 'xmlsitemap_node.install',
          2 => 'xmlsitemap_node.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'xmlsitemap',
        'datestamp' => '1422607989',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'xmlsitemap_taxonomy' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_taxonomy/xmlsitemap_taxonomy.module',
      'name' => 'xmlsitemap_taxonomy',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'XML sitemap taxonomy',
        'description' => 'Add taxonomy term links to the sitemap.',
        'package' => 'XML sitemap',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'xmlsitemap',
          1 => 'taxonomy',
        ),
        'files' => 
        array (
          0 => 'xmlsitemap_taxonomy.module',
          1 => 'xmlsitemap_taxonomy.install',
          2 => 'xmlsitemap_taxonomy.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'xmlsitemap',
        'datestamp' => '1422607989',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'xmlsitemap_user' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_user/xmlsitemap_user.module',
      'name' => 'xmlsitemap_user',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'XML sitemap user',
        'description' => 'Adds user profile links to the sitemap.',
        'package' => 'XML sitemap',
        'dependencies' => 
        array (
          0 => 'xmlsitemap',
        ),
        'core' => '7.x',
        'files' => 
        array (
          0 => 'xmlsitemap_user.module',
          1 => 'xmlsitemap_user.install',
          2 => 'xmlsitemap_user.test',
        ),
        'version' => '7.x-2.2',
        'project' => 'xmlsitemap',
        'datestamp' => '1422607989',
        'php' => '5.2.4',
      ),
      'version' => '7.x-2.2',
    ),
    'hk_flexslider' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/custom/hk_flexslider/hk_flexslider.module',
      'name' => 'hk_flexslider',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Flexslider',
        'description' => 'Customizations for HK Flexslider.',
        'core' => '7.x',
        'package' => 'Flexslider',
        'dependencies' => 
        array (
          0 => 'flexslider',
        ),
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'hk_leaflet' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/custom/hk_leaflet/hk_leaflet.module',
      'name' => 'hk_leaflet',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Leaflet',
        'description' => 'Customizations for HK Leaflet Map.',
        'core' => '7.x',
        'package' => 'Leaflet',
        'dependencies' => 
        array (
          0 => 'ip_geoloc',
        ),
        'scripts' => 
        array (
          0 => 'hk_leaflet_script.js',
        ),
        'files' => 
        array (
          0 => 'MimeMailSystem__MandrillMailSystem.mail.inc',
          1 => 'MimeMailSystem__SmtpMailSystem.mail.inc',
        ),
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'hk_mergimg' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/custom/hk_mergimg/hk_mergimg.module',
      'name' => 'hk_mergimg',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Merging Images',
        'description' => 'Merge the images from building and apartment into field_apart_gallery',
        'core' => '7.x',
        'package' => 'Experimental',
        'dependencies' => 
        array (
        ),
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'si_menumerge' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/custom/menu_merge/si_menumerge.module',
      'name' => 'si_menumerge',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Menu Merge',
        'description' => 'Merges two or more menus into one and creates a block called <em>Mobile Menu</em>. Until we find time to add an admin interface menus must be hardcoded inside the module file.',
        'core' => '7.x',
        'files' => 
        array (
          0 => 'si_menumerge.module',
        ),
        'dependencies' => 
        array (
        ),
        'version' => NULL,
        'php' => '5.2.4',
      ),
      'version' => NULL,
    ),
    'references_dialog' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/custom/references_dialog/references_dialog.module',
      'name' => 'references_dialog',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'References dialog',
        'description' => 'Enhances references fields by adding dialogs for adding and creating entities.',
        'package' => 'Fields',
        'core' => '7.x',
        'dependencies' => 
        array (
          0 => 'field',
          1 => 'views',
        ),
        'files' => 
        array (
          0 => 'views/references_dialog_plugin_display.inc',
        ),
        'version' => '7.x-1.0-beta1',
        'project' => 'references_dialog',
        'datestamp' => '1405042428',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-beta1',
    ),
    'hk_admin' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/features/hk_admin/hk_admin.module',
      'name' => 'hk_admin',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Admin',
        'description' => 'Backend Interface for Editors',
        'core' => '7.x',
        'package' => 'Features',
        'version' => '7.x-1.0',
        'project' => 'hk_admin',
        'dependencies' => 
        array (
          0 => 'addressfield',
          1 => 'admin_menu',
          2 => 'admin_views',
          3 => 'better_exposed_filters',
          4 => 'crm_core_activity',
          5 => 'crm_core_activity_ui',
          6 => 'crm_core_default_matching_engine',
          7 => 'crm_core_profile',
          8 => 'crm_core_ui',
          9 => 'crm_core_match',
          10 => 'diff',
          11 => 'editableviews',
          12 => 'email',
          13 => 'features',
          14 => 'field_group',
          15 => 'ip_geoloc',
          16 => 'list',
          17 => 'phone',
          18 => 'references_dialog',
          19 => 'views',
          20 => 'views_accelerator',
        ),
        'features' => 
        array (
          'crm_core_activity_type' => 
          array (
            0 => 'anfrage',
            1 => 'kontaktformular',
          ),
          'crm_core_contact_type' => 
          array (
            0 => 'individual',
            1 => 'mitarbeiter',
          ),
          'crm_core_profile' => 
          array (
            0 => 'anfrage',
            1 => 'kontaktformular',
          ),
          'ctools' => 
          array (
            0 => 'crm_core_profile:crm_core_profile:1',
            1 => 'ds:ds:1',
            2 => 'ds_extras:ds_extras:1',
            3 => 'field_group:field_group:1',
            4 => 'views:views_default:3.0',
          ),
          'features_api' => 
          array (
            0 => 'api:2',
          ),
          'field_base' => 
          array (
            0 => 'contact_name',
            1 => 'field_activity_bearbeiter',
            2 => 'field_activity_date',
            3 => 'field_activity_notes',
            4 => 'field_activity_participants',
            5 => 'field_activity_status',
            6 => 'field_angefragte_wohnung',
            7 => 'field_crm_address',
            8 => 'field_e_mail',
            9 => 'field_phone',
          ),
          'field_group' => 
          array (
            0 => 'group_card_content|crm_core_contact|individual|default',
            1 => 'group_contact_card|crm_core_contact|individual|default',
          ),
          'field_instance' => 
          array (
            0 => 'crm_core_activity-anfrage-field_activity_bearbeiter',
            1 => 'crm_core_activity-anfrage-field_activity_date',
            2 => 'crm_core_activity-anfrage-field_activity_notes',
            3 => 'crm_core_activity-anfrage-field_activity_participants',
            4 => 'crm_core_activity-anfrage-field_activity_status',
            5 => 'crm_core_activity-anfrage-field_angefragte_wohnung',
            6 => 'crm_core_activity-kontaktformular-field_activity_bearbeiter',
            7 => 'crm_core_activity-kontaktformular-field_activity_date',
            8 => 'crm_core_activity-kontaktformular-field_activity_notes',
            9 => 'crm_core_activity-kontaktformular-field_activity_participants',
            10 => 'crm_core_activity-kontaktformular-field_activity_status',
            11 => 'crm_core_contact-individual-contact_name',
            12 => 'crm_core_contact-individual-field_crm_address',
            13 => 'crm_core_contact-individual-field_e_mail',
            14 => 'crm_core_contact-individual-field_phone',
            15 => 'crm_core_contact-mitarbeiter-contact_name',
            16 => 'crm_core_contact-mitarbeiter-field_e_mail',
            17 => 'crm_core_contact-mitarbeiter-field_phone',
          ),
          'user_permission' => 
          array (
            0 => 'access administration menu',
            1 => 'access crm_core_profile forms',
            2 => 'administer crm_core_contact entities',
            3 => 'create crm_core_activity entities',
            4 => 'create crm_core_activity entities of bundle anfrage',
            5 => 'create crm_core_activity entities of bundle kontaktformular',
            6 => 'create crm_core_activity entities of bundle meeting',
            7 => 'create crm_core_activity entities of bundle phone_call',
            8 => 'create crm_core_contact entities',
            9 => 'create crm_core_contact entities of bundle household',
            10 => 'create crm_core_contact entities of bundle individual',
            11 => 'create crm_core_contact entities of bundle mitarbeiter',
            12 => 'create crm_core_contact entities of bundle organization',
            13 => 'delete any crm_core_activity entity of bundle anfrage',
            14 => 'delete any crm_core_activity entity of bundle kontaktformular',
            15 => 'delete any crm_core_activity entity of bundle meeting',
            16 => 'delete any crm_core_activity entity of bundle phone_call',
            17 => 'delete any crm_core_contact entity of bundle household',
            18 => 'delete any crm_core_contact entity of bundle individual',
            19 => 'delete any crm_core_contact entity of bundle mitarbeiter',
            20 => 'delete any crm_core_contact entity of bundle organization',
            21 => 'edit any crm_core_activity entity',
            22 => 'edit any crm_core_activity entity of bundle anfrage',
            23 => 'edit any crm_core_activity entity of bundle kontaktformular',
            24 => 'edit any crm_core_activity entity of bundle meeting',
            25 => 'edit any crm_core_activity entity of bundle phone_call',
            26 => 'edit any crm_core_contact entity',
            27 => 'edit any crm_core_contact entity of bundle household',
            28 => 'edit any crm_core_contact entity of bundle individual',
            29 => 'edit any crm_core_contact entity of bundle mitarbeiter',
            30 => 'edit any crm_core_contact entity of bundle organization',
            31 => 'flush caches',
            32 => 'view any crm_core_activity entity',
            33 => 'view any crm_core_activity entity of bundle anfrage',
            34 => 'view any crm_core_activity entity of bundle kontaktformular',
            35 => 'view any crm_core_activity entity of bundle meeting',
            36 => 'view any crm_core_activity entity of bundle phone_call',
            37 => 'view any crm_core_contact entity',
            38 => 'view any crm_core_contact entity of bundle household',
            39 => 'view any crm_core_contact entity of bundle individual',
            40 => 'view any crm_core_contact entity of bundle mitarbeiter',
            41 => 'view any crm_core_contact entity of bundle organization',
            42 => 'view crm dashboard',
            43 => 'view match information',
          ),
          'views_view' => 
          array (
            0 => 'admin',
            1 => 'crm_aktivitaeten',
            2 => 'crm_anfragen',
            3 => 'crm_dashboard',
            4 => 'references',
            5 => 'references_dialog_search_contacts',
          ),
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'hk_base' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/features/hk_base/hk_base.module',
      'name' => 'hk_base',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Base',
        'description' => 'Base roles and strongarm variables for general settings',
        'core' => '7.x',
        'package' => 'Features',
        'version' => '7.x-1.0',
        'project' => 'hk_base',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'features',
          2 => 'strongarm',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'strongarm:strongarm:1',
          ),
          'features_api' => 
          array (
            0 => 'api:2',
          ),
          'user_role' => 
          array (
            0 => 'Editor',
            1 => 'administrator',
            2 => 'admintooluser',
          ),
          'variable' => 
          array (
            0 => 'admin_menu_cache_client',
            1 => 'admin_menu_margin_top',
            2 => 'admin_menu_position_fixed',
            3 => 'admin_theme',
            4 => 'adminimal_admin_menu_jquery',
            5 => 'adminimal_admin_menu_render',
            6 => 'adminimal_admin_menu_slicknav',
            7 => 'advagg_ajax_render_alter',
            8 => 'advagg_browser_dns_prefetch',
            9 => 'advagg_bundler_active',
            10 => 'advagg_bundler_max_css',
            11 => 'advagg_bundler_max_js',
            12 => 'advagg_cache_level',
            13 => 'advagg_combine_css_media',
            14 => 'advagg_convert_absolute_to_protocol_relative_path',
            15 => 'advagg_convert_absolute_to_relative_path',
            16 => 'advagg_core_groups',
            17 => 'advagg_cron_frequency',
            18 => 'advagg_cron_timestamp',
            19 => 'advagg_css_compress_inline',
            20 => 'advagg_css_compress_inline_if_not_cacheable',
            21 => 'advagg_css_compressor',
            22 => 'advagg_css_fix_type',
            23 => 'advagg_enabled',
            24 => 'advagg_font_fontfaceobserver',
            25 => 'advagg_force_https_path',
            26 => 'advagg_global_counter',
            27 => 'advagg_gzip',
            28 => 'advagg_ie_css_selector_limiter',
            29 => 'advagg_ie_css_selector_limiter_value',
            30 => 'advagg_include_base_url',
            31 => 'advagg_js_compress_add_license',
            32 => 'advagg_js_compress_inline',
            33 => 'advagg_js_compress_inline_if_not_cacheable',
            34 => 'advagg_js_compress_packer',
            35 => 'advagg_js_compressor',
            36 => 'advagg_js_fix_type',
            37 => 'advagg_mod_css_adjust_sort_browsers',
            38 => 'advagg_mod_css_adjust_sort_external',
            39 => 'advagg_mod_css_adjust_sort_inline',
            40 => 'advagg_mod_css_defer',
            41 => 'advagg_mod_css_defer_js_code',
            42 => 'advagg_mod_css_head_extract',
            43 => 'advagg_mod_css_preprocess',
            44 => 'advagg_mod_defer_inline_js_skip_list',
            45 => 'advagg_mod_inline_css_pages',
            46 => 'advagg_mod_inline_css_visibility',
            47 => 'advagg_mod_inline_js_pages',
            48 => 'advagg_mod_inline_js_visibility',
            49 => 'advagg_mod_inline_pages',
            50 => 'advagg_mod_inline_visibility',
            51 => 'advagg_mod_js_adjust_sort_browsers',
            52 => 'advagg_mod_js_adjust_sort_external',
            53 => 'advagg_mod_js_adjust_sort_inline',
            54 => 'advagg_mod_js_async',
            55 => 'advagg_mod_js_async_in_header',
            56 => 'advagg_mod_js_async_shim',
            57 => 'advagg_mod_js_defer',
            58 => 'advagg_mod_js_defer_inline_alter',
            59 => 'advagg_mod_js_defer_jquery',
            60 => 'advagg_mod_js_footer',
            61 => 'advagg_mod_js_footer_inline_alter',
            62 => 'advagg_mod_js_get_external_dns',
            63 => 'advagg_mod_js_head_extract',
            64 => 'advagg_mod_js_no_ajaxpagestate',
            65 => 'advagg_mod_js_preprocess',
            66 => 'advagg_mod_js_remove_unused',
            67 => 'advagg_mod_unified_multisite_dir',
            68 => 'advagg_mod_wrap_inline_js_skip_list',
            69 => 'advagg_mod_wrap_inline_js_xpath',
            70 => 'advagg_remove_missing_files_from_db_time',
            71 => 'advagg_remove_old_unused_aggregates_time',
            72 => 'advagg_use_httprl',
            73 => 'cdn_basic_mapping',
            74 => 'cdn_basic_mapping_https',
            75 => 'cdn_farfuture_status',
            76 => 'cdn_mode',
            77 => 'clean_url',
            78 => 'colorbox_fixed',
            79 => 'colorbox_initialheight',
            80 => 'colorbox_initialwidth',
            81 => 'colorbox_inline',
            82 => 'colorbox_load',
            83 => 'colorbox_maxheight',
            84 => 'colorbox_maxwidth',
            85 => 'colorbox_mobile_detect',
            86 => 'colorbox_mobile_device_width',
            87 => 'colorbox_opacity',
            88 => 'colorbox_overlayclose',
            89 => 'colorbox_style',
            90 => 'colorbox_text_close',
            91 => 'colorbox_text_current',
            92 => 'colorbox_text_next',
            93 => 'colorbox_text_previous',
            94 => 'ds_extras_field_template',
            95 => 'ds_extras_flag',
            96 => 'ds_extras_region_to_block',
            97 => 'ds_extras_switch_view_mode',
            98 => 'ds_extras_vd',
            99 => 'eu_cookie_compliance_de',
            100 => 'eu_cookie_compliance_domain',
            101 => 'jquery_update_compression_type',
            102 => 'jquery_update_jquery_cdn',
            103 => 'jquery_update_jquery_version',
            104 => 'leaflet_map_configs',
            105 => 'leaflet_mapbox_code',
            106 => 'leaflet_mapbox_configs',
            107 => 'leaflet_mapbox_description',
            108 => 'leaflet_mapbox_label',
            109 => 'leaflet_mapbox_zoomlevel',
            110 => 'node_admin_theme',
            111 => 'pathauto_node_apartment_pattern',
            112 => 'pathauto_node_objekt_pattern',
            113 => 'pathauto_node_page_pattern',
            114 => 'pathauto_node_pattern',
            115 => 'pathauto_node_referenz_pattern',
            116 => 'pathauto_transliterate',
            117 => 'site_default_country',
            118 => 'site_frontpage',
            119 => 'site_name',
            120 => 'theme_adminimal_settings',
            121 => 'theme_default',
            122 => 'theme_hk_adminimal_settings',
            123 => 'theme_hk_theme_settings',
            124 => 'xmlsitemap_base_url',
            125 => 'xmlsitemap_path',
            126 => 'xmlsitemap_settings_menu_link_main-menu',
            127 => 'xmlsitemap_settings_menu_link_menu-menu-footer-menu',
            128 => 'xmlsitemap_settings_node_apartment',
            129 => 'xmlsitemap_settings_node_objekt',
            130 => 'xmlsitemap_settings_node_page',
          ),
        ),
        'project path' => 'sites/all/modules/features',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'hk_ct' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/features/hk_ct/hk_ct.module',
      'name' => 'hk_ct',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Content Types',
        'description' => 'All content types as used on the site',
        'core' => '7.x',
        'package' => 'Features',
        'version' => '7.x-1.0',
        'project' => 'hk_ct',
        'dependencies' => 
        array (
          0 => 'addressfield',
          1 => 'addressfield_autocomplete',
          2 => 'autocomplete_deluxe',
          3 => 'breakpoints',
          4 => 'clone',
          5 => 'colorbox',
          6 => 'computed_field',
          7 => 'contextual_view_modes',
          8 => 'ctools',
          9 => 'date',
          10 => 'ds',
          11 => 'editableviews',
          12 => 'emptyparagraphkiller',
          13 => 'entity',
          14 => 'entity_rules',
          15 => 'entityreference',
          16 => 'features',
          17 => 'feeds_tamper',
          18 => 'field_group',
          19 => 'file',
          20 => 'filefield_paths',
          21 => 'filter',
          22 => 'flag',
          23 => 'flexslider_picture',
          24 => 'geocoder',
          25 => 'geofield',
          26 => 'image',
          27 => 'image_resize_filter',
          28 => 'ip_geoloc',
          29 => 'leaflet',
          30 => 'leaflet_widget',
          31 => 'list',
          32 => 'media',
          33 => 'media_wysiwyg',
          34 => 'multiselect',
          35 => 'node',
          36 => 'number',
          37 => 'office_hours',
          38 => 'options',
          39 => 'path',
          40 => 'photobox',
          41 => 'picture',
          42 => 'slick',
          43 => 'slick_fields',
          44 => 'strongarm',
          45 => 'taxonomy',
          46 => 'text',
          47 => 'title',
          48 => 'typogrify',
          49 => 'views_accelerator',
          50 => 'views_content',
          51 => 'wysiwyg',
        ),
        'features' => 
        array (
          'breakpoint_group' => 
          array (
            0 => 'hk_theme',
          ),
          'breakpoints' => 
          array (
            0 => 'breakpoints.theme.hk_theme.desk',
            1 => 'breakpoints.theme.hk_theme.mobile',
            2 => 'breakpoints.theme.hk_theme.narrow',
            3 => 'breakpoints.theme.hk_theme.tv',
            4 => 'breakpoints.theme.hk_theme.wide',
          ),
          'ctools' => 
          array (
            0 => 'breakpoints:default_breakpoint_group:1',
            1 => 'breakpoints:default_breakpoints:1',
            2 => 'ds:ds:1',
            3 => 'feeds:feeds_importer_default:1',
            4 => 'feeds_tamper:feeds_tamper_default:2',
            5 => 'field_group:field_group:1',
            6 => 'file_entity:file_default_displays:1',
            7 => 'flexslider:flexslider_default_preset:1',
            8 => 'flexslider_picture:flexslider_picture_optionset:1',
            9 => 'picture:default_picture_mapping:2',
            10 => 'slick:slick_default_preset:1',
            11 => 'strongarm:strongarm:1',
            12 => 'views:views_default:3.0',
          ),
          'ds_field_settings' => 
          array (
            0 => 'node|apartment|default',
            1 => 'node|apartment|teaser',
            2 => 'node|kartenmarker|default',
            3 => 'node|objekt|default',
            4 => 'node|objekt|map_popup',
            5 => 'node|objekt|teaser',
            6 => 'node|objekt|wohn_und_geschaeftshaus',
            7 => 'node|oeffnungszeit|default',
            8 => 'node|oeffnungszeit|teaser',
            9 => 'node|page|default',
            10 => 'node|page|print',
            11 => 'node|referenz|default',
          ),
          'ds_fields' => 
          array (
            0 => 'adresse',
            1 => 'anfrage_button',
            2 => 'energieausweis',
            3 => 'expose_drucken',
            4 => 'haus_beschreibung',
            5 => 'neu_label',
            6 => 'oeffnungszeiten',
          ),
          'ds_layout_settings' => 
          array (
            0 => 'node|apartment|default',
            1 => 'node|apartment|form',
            2 => 'node|apartment|teaser',
            3 => 'node|objekt|default',
            4 => 'node|objekt|form',
            5 => 'node|objekt|map_popup',
            6 => 'node|objekt|teaser',
            7 => 'node|objekt|wohn_und_geschaeftshaus',
            8 => 'node|oeffnungszeit|default',
            9 => 'node|oeffnungszeit|form',
            10 => 'node|oeffnungszeit|teaser',
            11 => 'node|page|default',
            12 => 'node|page|print',
            13 => 'node|referenz|default',
          ),
          'ds_view_modes' => 
          array (
            0 => 'wohn_und_geschaeftshaus',
          ),
          'features_api' => 
          array (
            0 => 'api:2',
          ),
          'field_base' => 
          array (
            0 => 'body',
            1 => 'description_field',
            2 => 'field_address',
            3 => 'field_address_shadow_object',
            4 => 'field_ansprechpartner',
            5 => 'field_apart_alloc_incident_costs',
            6 => 'field_apart_bathrooms',
            7 => 'field_apart_ceiling_height',
            8 => 'field_apart_commission',
            9 => 'field_apart_description',
            10 => 'field_apart_erweitertes_expose',
            11 => 'field_apart_expose',
            12 => 'field_apart_floor',
            13 => 'field_apart_floor_plan',
            14 => 'field_apart_gallery',
            15 => 'field_apart_hoa_fee',
            16 => 'field_apart_living_space',
            17 => 'field_apart_location',
            18 => 'field_apart_maint_reserve_value',
            19 => 'field_apart_maintenance_reserve',
            20 => 'field_apart_nalloc_incid_cost',
            21 => 'field_apart_net_rent',
            22 => 'field_apart_no',
            23 => 'field_apart_other',
            24 => 'field_apart_pictures',
            25 => 'field_apart_price',
            26 => 'field_apart_price_parking',
            27 => 'field_apart_rate_of_return',
            28 => 'field_apart_regionbound_counter',
            29 => 'field_apart_rooms',
            30 => 'field_apart_sleeping_rooms',
            31 => 'field_apart_type',
            32 => 'field_ausstattung',
            33 => 'field_bezirk',
            34 => 'field_cvm_cvm',
            35 => 'field_developer',
            36 => 'field_heating_type',
            37 => 'field_kategorie',
            38 => 'field_marker_adresse',
            39 => 'field_marker_text',
            40 => 'field_marker_wkt',
            41 => 'field_moving_in_from',
            42 => 'field_no_of_floors',
            43 => 'field_obj_acquise',
            44 => 'field_obj_apartments',
            45 => 'field_obj_enev_consumption_value',
            46 => 'field_obj_enev_date',
            47 => 'field_obj_enev_file',
            48 => 'field_obj_enev_haustyp',
            49 => 'field_obj_gemeinschaftsgeschaeft',
            50 => 'field_obj_kond_acquise',
            51 => 'field_obj_kond_gemeingesch',
            52 => 'field_obj_konditionen_tipp',
            53 => 'field_obj_schattenobjekt',
            54 => 'field_obj_tippgeber',
            55 => 'field_obj_verkaeufer',
            56 => 'field_object_desc_commercial',
            57 => 'field_object_desc_freehold',
            58 => 'field_object_description',
            59 => 'field_object_description_invest',
            60 => 'field_object_images',
            61 => 'field_object_location',
            62 => 'field_object_multi_apart_types',
            63 => 'field_object_other',
            64 => 'field_object_ref',
            65 => 'field_object_text_schattenobjekt',
            66 => 'field_object_txt_map_popup',
            67 => 'field_objekt_effizienzklasse',
            68 => 'field_objekt_endenergiebedarf',
            69 => 'field_objekt_energieausweistyp',
            70 => 'field_objekt_energietraeger',
            71 => 'field_objekt_wkt',
            72 => 'field_objektid_nunumeric',
            73 => 'field_oeffnungszeiten',
            74 => 'field_ref_adresse',
            75 => 'field_ref_anzahl_wohnungen',
            76 => 'field_ref_foto',
            77 => 'field_ref_typ',
            78 => 'field_rent_commission',
            79 => 'field_sale_commission',
            80 => 'field_status_quo',
            81 => 'field_wug_act_rent',
            82 => 'field_wug_no_of_units',
            83 => 'field_wug_occupancy',
            84 => 'field_wug_opt_constrruct',
            85 => 'field_wug_total_space',
            86 => 'field_year_built',
            87 => 'name_field',
            88 => 'title_field',
          ),
          'field_group' => 
          array (
            0 => 'group_akkordeon|node|apartment|default',
            1 => 'group_akkordeon|node|objekt|default',
            2 => 'group_akkordion|node|objekt|wohn_und_geschaeftshaus',
            3 => 'group_ansprechpartner|node|objekt|form',
            4 => 'group_apart_publish|node|apartment|form',
            5 => 'group_basic|node|apartment|form',
            6 => 'group_card_content|node|objekt|teaser',
            7 => 'group_card|node|apartment|teaser',
            8 => 'group_costs|node|apartment|form',
            9 => 'group_details|node|objekt|wohn_und_geschaeftshaus',
            10 => 'group_energieausweis|node|objekt|form',
            11 => 'group_energieausweis|node|objekt|wohn_und_geschaeftshaus',
            12 => 'group_expose|node|apartment|form',
            13 => 'group_features|node|apartment|form',
            14 => 'group_haus|node|objekt|wohn_und_geschaeftshaus',
            15 => 'group_horizontal|node|apartment|form',
            16 => 'group_horizontal|node|objekt|form',
            17 => 'group_house|node|apartment|default',
            18 => 'group_house|node|objekt|default',
            19 => 'group_ht_basis|node|objekt|form',
            20 => 'group_ht_bilder|node|objekt|form',
            21 => 'group_ht_merkmale|node|objekt|form',
            22 => 'group_ht_texte|node|objekt|form',
            23 => 'group_images|node|apartment|form',
            24 => 'group_lage|node|apartment|default',
            25 => 'group_lage|node|objekt|default',
            26 => 'group_lage|node|objekt|wohn_und_geschaeftshaus',
            27 => 'group_merkmale|node|apartment|default',
            28 => 'group_merkmale|node|objekt|default',
            29 => 'group_multiapart|node|objekt|form',
            30 => 'group_obj_apartments|node|objekt|form',
            31 => 'group_ort|node|objekt|form',
            32 => 'group_project_card|node|objekt|teaser',
            33 => 'group_sonstiges|node|apartment|default',
            34 => 'group_sonstiges|node|objekt|default',
            35 => 'group_sonstiges|node|objekt|wohn_und_geschaeftshaus',
            36 => 'group_texte|node|apartment|form',
            37 => 'group_text|node|apartment|default',
            38 => 'group_text|node|objekt|default',
            39 => 'group_wrapper|node|apartment|teaser',
          ),
          'field_instance' => 
          array (
            0 => 'node-apartment-field_apart_alloc_incident_costs',
            1 => 'node-apartment-field_apart_bathrooms',
            2 => 'node-apartment-field_apart_ceiling_height',
            3 => 'node-apartment-field_apart_commission',
            4 => 'node-apartment-field_apart_description',
            5 => 'node-apartment-field_apart_erweitertes_expose',
            6 => 'node-apartment-field_apart_expose',
            7 => 'node-apartment-field_apart_floor',
            8 => 'node-apartment-field_apart_floor_plan',
            9 => 'node-apartment-field_apart_gallery',
            10 => 'node-apartment-field_apart_hoa_fee',
            11 => 'node-apartment-field_apart_living_space',
            12 => 'node-apartment-field_apart_location',
            13 => 'node-apartment-field_apart_maint_reserve_value',
            14 => 'node-apartment-field_apart_maintenance_reserve',
            15 => 'node-apartment-field_apart_nalloc_incid_cost',
            16 => 'node-apartment-field_apart_net_rent',
            17 => 'node-apartment-field_apart_no',
            18 => 'node-apartment-field_apart_other',
            19 => 'node-apartment-field_apart_pictures',
            20 => 'node-apartment-field_apart_price',
            21 => 'node-apartment-field_apart_price_parking',
            22 => 'node-apartment-field_apart_rate_of_return',
            23 => 'node-apartment-field_apart_regionbound_counter',
            24 => 'node-apartment-field_apart_rooms',
            25 => 'node-apartment-field_apart_sleeping_rooms',
            26 => 'node-apartment-field_apart_type',
            27 => 'node-apartment-field_ausstattung',
            28 => 'node-apartment-field_bezirk',
            29 => 'node-apartment-field_kategorie',
            30 => 'node-apartment-field_moving_in_from',
            31 => 'node-apartment-field_obj_schattenobjekt',
            32 => 'node-apartment-field_object_ref',
            33 => 'node-apartment-field_objekt_wkt',
            34 => 'node-apartment-field_objektid_nunumeric',
            35 => 'node-apartment-field_status_quo',
            36 => 'node-apartment-title_field',
            37 => 'node-kartenmarker-field_marker_adresse',
            38 => 'node-kartenmarker-field_marker_text',
            39 => 'node-kartenmarker-field_marker_wkt',
            40 => 'node-kartenmarker-title_field',
            41 => 'node-objekt-field_address',
            42 => 'node-objekt-field_address_shadow_object',
            43 => 'node-objekt-field_ansprechpartner',
            44 => 'node-objekt-field_apart_floor_plan',
            45 => 'node-objekt-field_apart_price',
            46 => 'node-objekt-field_bezirk',
            47 => 'node-objekt-field_cvm_cvm',
            48 => 'node-objekt-field_developer',
            49 => 'node-objekt-field_heating_type',
            50 => 'node-objekt-field_kategorie',
            51 => 'node-objekt-field_moving_in_from',
            52 => 'node-objekt-field_no_of_floors',
            53 => 'node-objekt-field_obj_acquise',
            54 => 'node-objekt-field_obj_apartments',
            55 => 'node-objekt-field_obj_enev_consumption_value',
            56 => 'node-objekt-field_obj_enev_date',
            57 => 'node-objekt-field_obj_enev_file',
            58 => 'node-objekt-field_obj_enev_haustyp',
            59 => 'node-objekt-field_obj_gemeinschaftsgeschaeft',
            60 => 'node-objekt-field_obj_kond_acquise',
            61 => 'node-objekt-field_obj_kond_gemeingesch',
            62 => 'node-objekt-field_obj_konditionen_tipp',
            63 => 'node-objekt-field_obj_schattenobjekt',
            64 => 'node-objekt-field_obj_tippgeber',
            65 => 'node-objekt-field_obj_verkaeufer',
            66 => 'node-objekt-field_object_desc_commercial',
            67 => 'node-objekt-field_object_desc_freehold',
            68 => 'node-objekt-field_object_description',
            69 => 'node-objekt-field_object_description_invest',
            70 => 'node-objekt-field_object_images',
            71 => 'node-objekt-field_object_location',
            72 => 'node-objekt-field_object_multi_apart_types',
            73 => 'node-objekt-field_object_other',
            74 => 'node-objekt-field_object_text_schattenobjekt',
            75 => 'node-objekt-field_object_txt_map_popup',
            76 => 'node-objekt-field_objekt_effizienzklasse',
            77 => 'node-objekt-field_objekt_endenergiebedarf',
            78 => 'node-objekt-field_objekt_energieausweistyp',
            79 => 'node-objekt-field_objekt_energietraeger',
            80 => 'node-objekt-field_objekt_wkt',
            81 => 'node-objekt-field_objektid_nunumeric',
            82 => 'node-objekt-field_rent_commission',
            83 => 'node-objekt-field_sale_commission',
            84 => 'node-objekt-field_wug_act_rent',
            85 => 'node-objekt-field_wug_no_of_units',
            86 => 'node-objekt-field_wug_occupancy',
            87 => 'node-objekt-field_wug_opt_constrruct',
            88 => 'node-objekt-field_wug_total_space',
            89 => 'node-objekt-field_year_built',
            90 => 'node-objekt-title_field',
            91 => 'node-oeffnungszeit-body',
            92 => 'node-oeffnungszeit-field_oeffnungszeiten',
            93 => 'node-oeffnungszeit-title_field',
            94 => 'node-page-body',
            95 => 'node-page-title_field',
            96 => 'node-referenz-body',
            97 => 'node-referenz-field_ref_adresse',
            98 => 'node-referenz-field_ref_anzahl_wohnungen',
            99 => 'node-referenz-field_ref_foto',
            100 => 'node-referenz-field_ref_typ',
            101 => 'node-referenz-title_field',
            102 => 'taxonomy_term-category-description_field',
            103 => 'taxonomy_term-category-name_field',
            104 => 'taxonomy_term-vocabulary_5-description_field',
            105 => 'taxonomy_term-vocabulary_5-name_field',
            106 => 'taxonomy_term-vocabulary_6-description_field',
            107 => 'taxonomy_term-vocabulary_6-name_field',
          ),
          'filter' => 
          array (
            0 => 'full_html',
          ),
          'flag' => 
          array (
            0 => 'merken',
          ),
          'image' => 
          array (
            0 => 'colorbox_full',
            1 => 'colorboxbreakpoints_theme_hk_theme_desk_1x',
            2 => 'colorboxbreakpoints_theme_hk_theme_mobile_1x',
            3 => 'colorboxbreakpoints_theme_hk_theme_narrow_1x',
            4 => 'colorboxbreakpoints_theme_hk_theme_wide_1x',
            5 => 'flexfullbreakpoints_theme_hk_theme_desk_1x',
            6 => 'flexfullbreakpoints_theme_hk_theme_mobile_1x',
            7 => 'flexfullbreakpoints_theme_hk_theme_narrow_1x',
            8 => 'flexfullbreakpoints_theme_hk_theme_wide_1x',
            9 => 'flexthumbbreakpoints_theme_hk_theme_desk_1x',
            10 => 'flexthumbbreakpoints_theme_hk_theme_mobile_1x',
            11 => 'flexthumbbreakpoints_theme_hk_theme_narrow_1x',
            12 => 'flexthumbbreakpoints_theme_hk_theme_wide_1x',
            13 => 'map-popup',
            14 => 'referenz',
          ),
          'node' => 
          array (
            0 => 'apartment',
            1 => 'kartenmarker',
            2 => 'objekt',
            3 => 'oeffnungszeit',
            4 => 'page',
            5 => 'referenz',
          ),
          'picture_mapping' => 
          array (
            0 => 'map_popup',
          ),
          'slick_optionset' => 
          array (
            0 => 'referenzen',
            1 => 'wohnungsgalerie',
            2 => 'wohnungsgalerie_thumbs',
          ),
          'taxonomy' => 
          array (
            0 => 'category',
            1 => 'vocabulary_3',
            2 => 'vocabulary_5',
            3 => 'vocabulary_6',
          ),
          'user_permission' => 
          array (
            0 => 'access content',
            1 => 'clone node',
            2 => 'create apartment content',
            3 => 'create objekt content',
            4 => 'create oeffnungszeit content',
            5 => 'create page content',
            6 => 'create referenz content',
            7 => 'create url aliases',
            8 => 'delete any apartment content',
            9 => 'delete any expose content',
            10 => 'delete any kartenmarker content',
            11 => 'delete any objekt content',
            12 => 'delete any oeffnungszeit content',
            13 => 'delete any page content',
            14 => 'delete any referenz content',
            15 => 'edit any apartment content',
            16 => 'edit any expose content',
            17 => 'edit any kartenmarker content',
            18 => 'edit any objekt content',
            19 => 'edit any oeffnungszeit content',
            20 => 'edit any page content',
            21 => 'edit any referenz content',
          ),
          'variable' => 
          array (
            0 => 'field_bundle_settings_node__apartment',
            1 => 'field_bundle_settings_node__kartenmarker',
            2 => 'field_bundle_settings_node__objekt',
            3 => 'field_bundle_settings_node__oeffnungszeit',
            4 => 'field_bundle_settings_node__page',
            5 => 'field_bundle_settings_node__referenz',
            6 => 'language_content_type_apartment',
            7 => 'language_content_type_kartenmarker',
            8 => 'language_content_type_objekt',
            9 => 'language_content_type_oeffnungszeit',
            10 => 'language_content_type_page',
            11 => 'language_content_type_referenz',
            12 => 'menu_options_apartment',
            13 => 'menu_options_kartenmarker',
            14 => 'menu_options_objekt',
            15 => 'menu_options_oeffnungszeit',
            16 => 'menu_options_page',
            17 => 'menu_options_referenz',
            18 => 'menu_parent_apartment',
            19 => 'menu_parent_kartenmarker',
            20 => 'menu_parent_objekt',
            21 => 'menu_parent_oeffnungszeit',
            22 => 'menu_parent_page',
            23 => 'menu_parent_referenz',
            24 => 'node_options_apartment',
            25 => 'node_options_kartenmarker',
            26 => 'node_options_objekt',
            27 => 'node_options_oeffnungszeit',
            28 => 'node_options_page',
            29 => 'node_options_referenz',
            30 => 'node_preview_apartment',
            31 => 'node_preview_kartenmarker',
            32 => 'node_preview_objekt',
            33 => 'node_preview_oeffnungszeit',
            34 => 'node_preview_page',
            35 => 'node_preview_referenz',
            36 => 'node_submitted_apartment',
            37 => 'node_submitted_kartenmarker',
            38 => 'node_submitted_objekt',
            39 => 'node_submitted_oeffnungszeit',
            40 => 'node_submitted_page',
            41 => 'node_submitted_referenz',
          ),
          'wysiwyg' => 
          array (
            0 => 'full_html',
          ),
        ),
        'features_exclude' => 
        array (
          'Workflow' => 
          array (
            'draft_ready_published_archived' => 'draft_ready_published_archived',
          ),
          'dependencies' => 
          array (
            'workflow' => 'workflow',
            'viewfield' => 'viewfield',
            'workflowfield' => 'workflowfield',
            'flexslider_views' => 'flexslider_views',
            'feeds' => 'feeds',
          ),
          'entity_rule_setting' => 
          array (
            0 => '8',
            1 => '20',
            2 => '23',
            3 => '3',
            4 => '4',
            5 => '7',
          ),
          'field_base' => 
          array (
            'field_save_workflow' => 'field_save_workflow',
            'field_view' => 'field_view',
          ),
          'field_instance' => 
          array (
            'node-apartment-field_save_workflow' => 'node-apartment-field_save_workflow',
            'node-objekt-field_save_workflow' => 'node-objekt-field_save_workflow',
          ),
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'hk_expose' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/features/hk_expose/hk_expose.module',
      'name' => 'hk_expose',
      'type' => 'module',
      'owner' => '',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Expose',
        'description' => 'Expose functions to create and update Exposés on content change',
        'core' => '7.x',
        'package' => 'Features',
        'version' => '7.x-1.0-rc10',
        'project' => 'hk_expose',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'custom_formatters',
          2 => 'ds',
          3 => 'entity',
          4 => 'entityreference',
          5 => 'entityreference_view_widget',
          6 => 'features',
          7 => 'file_entity',
          8 => 'filefield_paths',
          9 => 'hk_ct',
          10 => 'image',
          11 => 'media',
          12 => 'node',
          13 => 'rules',
          14 => 'rules_download',
          15 => 'strongarm',
          16 => 'text',
          17 => 'views',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'custom_formatters:custom_formatters:2',
            1 => 'ds:ds:1',
            2 => 'file_entity:file_default_displays:1',
            3 => 'strongarm:strongarm:1',
            4 => 'views:views_default:3.0',
          ),
          'ds_view_modes' => 
          array (
            0 => 'expose_link',
          ),
          'features_api' => 
          array (
            0 => 'api:2',
          ),
          'field_base' => 
          array (
            0 => 'field_expo_anschreiben',
            1 => 'field_expo_haus',
            2 => 'field_expo_kontaktadresse',
            3 => 'field_expo_objektbild',
            4 => 'field_expo_wohnungen',
          ),
          'field_instance' => 
          array (
            0 => 'node-expose-field_expo_anschreiben',
            1 => 'node-expose-field_expo_haus',
            2 => 'node-expose-field_expo_kontaktadresse',
            3 => 'node-expose-field_expo_objektbild',
            4 => 'node-expose-field_expo_wohnungen',
            5 => 'node-expose-title_field',
          ),
          'file_display' => 
          array (
            0 => 'document__expose_link__file_field_custom_formatters_expose_link',
            1 => 'document__expose_link__file_field_file_default',
            2 => 'document__expose_link__file_field_file_download_link',
            3 => 'document__expose_link__file_field_file_table',
            4 => 'document__expose_link__file_field_file_url_plain',
            5 => 'document__expose_link__file_field_media_large_icon',
            6 => 'document__expose_link__file_picture',
          ),
          'formatters' => 
          array (
            0 => 'expose_link',
          ),
          'image' => 
          array (
            0 => 'expose',
          ),
          'node' => 
          array (
            0 => 'expose',
          ),
          'rules_config' => 
          array (
            0 => 'rules_create_pdf_expose',
            1 => 'rules_create_pdf_expose_when_object_or_apart_changed',
          ),
          'variable' => 
          array (
            0 => 'field_bundle_settings_node__expose',
            1 => 'language_content_type_expose',
            2 => 'menu_options_expose',
            3 => 'menu_parent_expose',
            4 => 'node_options_expose',
            5 => 'node_preview_expose',
            6 => 'node_submitted_expose',
          ),
          'views_view' => 
          array (
            0 => 'expose',
          ),
        ),
        'project path' => 'sites/all/modules/features',
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0-rc10',
    ),
    'hk_rules' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/features/hk_rules/hk_rules.module',
      'name' => 'hk_rules',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Rules',
        'description' => 'All rules actively used on site',
        'core' => '7.x',
        'package' => 'Features',
        'version' => '7.x-1.0',
        'project' => 'hk_rules',
        'dependencies' => 
        array (
          0 => 'crm_core_activity',
          1 => 'entity',
          2 => 'entity_rules',
          3 => 'mimemail',
          4 => 'path',
          5 => 'rules',
          6 => 'rules_download',
          7 => 'rules_i18n',
          8 => 'workflow_rules',
        ),
        'features' => 
        array (
          'entity_rule_setting' => 
          array (
            0 => '54',
            1 => '55',
            2 => '56',
            3 => '57',
            4 => '58',
            5 => '61',
            6 => '62',
            7 => '63',
          ),
          'features_api' => 
          array (
            0 => 'api:2',
          ),
          'rules_config' => 
          array (
            0 => 'hk_expose_create_pdf_map_for_expose',
            1 => 'hk_rules_e_mail_to_client_when_inquiry_sent_de_',
            2 => 'hk_rules_vbo_change_workflow_status_to_shadow_apartment',
            3 => 'rules_after_login_redirect_admin_users_to_dashboard',
            4 => 'rules_create_corresponding_entity_reference_from_apartment',
            5 => 'rules_e_mail_to_client_and_office_when_inquiry_sent',
            6 => 'rules_e_mail_to_client_when_contact_form_sent',
            7 => 'rules_e_mail_to_office_when_contact_form_sent',
            8 => 'rules_e_mail_to_office_when_inquiry_sent',
            9 => 'rules_e_mail_to_publisher_when_workflow_ready',
            10 => 'rules_favoriten_anfrage',
            11 => 'rules_publish_content_when_workflow_state_active',
            12 => 'rules_publish_object_when_apartment_is_published',
            13 => 'rules_unpublish_content_when_workflow_state_is_not_active',
            14 => 'rules_vbo_change_workflow_status',
            15 => 'rules_vbo_change_workflow_status_to_archived',
            16 => 'rules_vbo_change_workflow_status_to_ready',
            17 => 'rules_vbo_change_workflow_status_to_sold',
          ),
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'hk_search' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/features/hk_search/hk_search.module',
      'name' => 'hk_search',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Search + Map',
        'description' => 'All Features around the Search API/Solr implementation, including Map',
        'core' => '7.x',
        'package' => 'Features',
        'version' => '7.x-1.0',
        'project' => 'hk_search',
        'dependencies' => 
        array (
          0 => 'current_search',
          1 => 'ds_extras',
          2 => 'hk_ct',
          3 => 'ip_geoloc',
          4 => 'leaflet_label',
          5 => 'leaflet_mapbox',
          6 => 'leaflet_markercluster',
          7 => 'menu',
          8 => 'search_api_solr',
          9 => 'search_api_views',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'current_search:current_search:1',
            1 => 'ds:ds:1',
            2 => 'ds_extras:ds_extras:1',
            3 => 'facetapi:facetapi_defaults:1',
            4 => 'strongarm:strongarm:1',
            5 => 'views:views_default:3.0',
          ),
          'current_search' => 
          array (
            0 => 'suchseiten',
          ),
          'facetapi' => 
          array (
            0 => 'search_api@solr_node_index::field_apart_living_space',
            1 => 'search_api@solr_node_index::field_apart_price',
            2 => 'search_api@solr_node_index::field_apart_rooms',
            3 => 'search_api@solr_node_index::field_bezirk',
            4 => 'search_api@solr_node_index::field_kategorie',
          ),
          'features_api' => 
          array (
            0 => 'api:2',
          ),
          'search_api_index' => 
          array (
            0 => 'solr_node_index',
          ),
          'search_api_server' => 
          array (
            0 => 'solr',
          ),
          'variable' => 
          array (
            0 => 'facetapi:block_cache:search_api@solr_node_index',
            1 => 'facetapi:translator_module',
            2 => 'facetapi_pretty_paths_searcher_search_api@solr_node_index',
            3 => 'facetapi_pretty_paths_searcher_search_api@solr_node_index_options',
            4 => 'search_api_ajax_pages',
            5 => 'search_api_ajax_visibility',
            6 => 'search_api_facets_search_ids',
          ),
          'views_view' => 
          array (
            0 => 'karten',
          ),
        ),
        'features_exclude' => 
        array (
          'dependencies' => 
          array (
            'flexslider_views' => 'flexslider_views',
          ),
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
    'hk_translations' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/modules/features/hk_translations/hk_translations.module',
      'name' => 'hk_translations',
      'type' => 'module',
      'owner' => '',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => '0',
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Translations',
        'description' => 'All multilingual functionality',
        'core' => '7.x',
        'package' => 'Features',
        'version' => '7.x-1.0',
        'project' => 'hk_translations',
        'dependencies' => 
        array (
          0 => 'ctools',
          1 => 'entity',
          2 => 'entity_translation',
          3 => 'entity_translation_i18n_menu',
          4 => 'facetapi_i18n',
          5 => 'fallback_language_negotiation',
          6 => 'features',
          7 => 'features_translations',
          8 => 'hreflang',
          9 => 'i18n',
          10 => 'i18n_block',
          11 => 'i18n_menu',
          12 => 'i18n_string',
          13 => 'i18n_variable',
          14 => 'i18nviews',
          15 => 'locale',
          16 => 'localize_fields',
          17 => 'strongarm',
          18 => 'translation',
          19 => 'translation_helpers',
          20 => 'transliteration',
        ),
        'features' => 
        array (
          'ctools' => 
          array (
            0 => 'strongarm:strongarm:1',
          ),
          'features_api' => 
          array (
            0 => 'api:2',
          ),
          'language' => 
          array (
            0 => 'de',
            1 => 'en',
            2 => 'ru',
            3 => 'zh-hans',
          ),
          'translations_de' => 
          array (
            0 => 'de:blocks',
            1 => 'de:current_search',
            2 => 'de:default',
            3 => 'de:facetapi',
            4 => 'de:menu',
            5 => 'de:rules',
            6 => 'de:views',
          ),
          'translations_ru' => 
          array (
            0 => 'ru:blocks',
            1 => 'ru:current_search',
            2 => 'ru:default',
            3 => 'ru:facetapi',
            4 => 'ru:menu',
            5 => 'ru:rules',
            6 => 'ru:views',
          ),
          'translations_zh_hans' => 
          array (
            0 => 'zh_hans:blocks',
            1 => 'zh_hans:current_search',
            2 => 'zh_hans:default',
            3 => 'zh_hans:facetapi',
            4 => 'zh_hans:menu',
            5 => 'zh_hans:rules',
            6 => 'zh_hans:views',
          ),
          'user_permission' => 
          array (
            0 => 'administer entity translation',
            1 => 'toggle field translatability',
            2 => 'translate admin strings',
            3 => 'translate any entity',
            4 => 'translate content',
            5 => 'translate file entities',
            6 => 'translate interface',
            7 => 'translate node entities',
            8 => 'translate taxonomy_term entities',
            9 => 'translate user-defined strings',
          ),
          'variable' => 
          array (
            0 => 'date_api_use_iso8601',
            1 => 'date_api_version',
            2 => 'date_default_timezone',
            3 => 'date_first_day',
            4 => 'date_format_datum_ohne_uhrzeit',
            5 => 'date_format_energieausweis',
            6 => 'date_format_long',
            7 => 'date_format_medium',
            8 => 'date_format_short',
            9 => 'entity_translation_entity_types',
            10 => 'entity_translation_hide_translation_links_apartment',
            11 => 'entity_translation_hide_translation_links_expose',
            12 => 'entity_translation_hide_translation_links_kartenmarker',
            13 => 'entity_translation_hide_translation_links_kieze_schattenobjekte',
            14 => 'entity_translation_hide_translation_links_objekt',
            15 => 'entity_translation_hide_translation_links_oeffnungszeit',
            16 => 'entity_translation_hide_translation_links_page',
            17 => 'entity_translation_hide_translation_links_referenz',
            18 => 'entity_translation_node_metadata_apartment',
            19 => 'entity_translation_node_metadata_expose',
            20 => 'entity_translation_node_metadata_kartenmarker',
            21 => 'entity_translation_node_metadata_kieze_schattenobjekte',
            22 => 'entity_translation_node_metadata_objekt',
            23 => 'entity_translation_node_metadata_oeffnungszeit',
            24 => 'entity_translation_node_metadata_page',
            25 => 'entity_translation_node_metadata_referenz',
            26 => 'entity_translation_revision_enabled',
            27 => 'entity_translation_settings_file__audio',
            28 => 'entity_translation_settings_file__document',
            29 => 'entity_translation_settings_file__image',
            30 => 'entity_translation_settings_file__video',
            31 => 'entity_translation_settings_node__apartment',
            32 => 'entity_translation_settings_node__kartenmarker',
            33 => 'entity_translation_settings_node__objekt',
            34 => 'entity_translation_settings_node__oeffnungszeit',
            35 => 'entity_translation_settings_node__page',
            36 => 'entity_translation_settings_node__referenz',
            37 => 'entity_translation_settings_taxonomy_term__bilder_objekt_id',
            38 => 'entity_translation_settings_taxonomy_term__category',
            39 => 'entity_translation_settings_taxonomy_term__salutation',
            40 => 'entity_translation_settings_taxonomy_term__vocabulary_3',
            41 => 'entity_translation_settings_taxonomy_term__vocabulary_5',
            42 => 'entity_translation_settings_taxonomy_term__vocabulary_6',
            43 => 'entity_translation_shared_labels',
            44 => 'i18n_string_allowed_formats',
            45 => 'i18n_string_source_language',
            46 => 'language_content_type_wohnung',
            47 => 'language_default',
            48 => 'language_negotiation_language',
            49 => 'language_negotiation_language_content',
            50 => 'language_negotiation_language_url',
            51 => 'language_types',
            52 => 'locale_field_language_fallback',
            53 => 'locale_language_providers_weight_language',
            54 => 'locale_language_providers_weight_language_content',
            55 => 'localize_fields_entsencoded',
            56 => 'translation_language_type',
          ),
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.0',
    ),
  ),
  'themes' => 
  array (
    'adminimal' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/themes/adminimal_theme/adminimal.info',
      'name' => 'adminimal',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Adminimal',
        'description' => 'Minimalist administration theme.',
        'core' => '7.x',
        'scripts' => 
        array (
          0 => 'js/jRespond.js',
          1 => 'js/adminimal_theme.js',
        ),
        'settings' => 
        array (
          'shortcut_module_link' => '1',
          'style_checkboxes' => '1',
          'display_icons_config' => '1',
          'rounded_buttons' => '1',
          'sticky_actions' => '0',
          'avoid_custom_font' => '0',
          'adminimal_ckeditor' => '1',
          'custom_css' => '0',
          'use_custom_media_queries' => '0',
          'media_query_mobile' => 'only screen and (max-width: 480px)',
          'media_query_tablet' => 'only screen and (min-width : 481px) and (max-width : 1024px)',
        ),
        'regions' => 
        array (
          'hidden' => 'Hidden',
          'content_before' => 'Before Content',
          'sidebar_left' => 'Sidebar Left',
          'content' => 'Content',
          'sidebar_right' => 'Sidebar Right',
          'content_after' => 'After Content',
          'help' => 'Help',
          'page_top' => 'Page top',
          'page_bottom' => 'Page bottom',
        ),
        'version' => '7.x-1.24',
        'project' => 'adminimal_theme',
        'datestamp' => '1456190957',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.24',
    ),
    'bartik' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/themes/bartik/bartik.info',
      'name' => 'bartik',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Bartik',
        'description' => 'A flexible, recolorable theme with many regions.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/layout.css',
            1 => 'css/style.css',
            2 => 'css/colors.css',
          ),
          'print' => 
          array (
            0 => 'css/print.css',
          ),
        ),
        'regions' => 
        array (
          'header' => 'Header',
          'help' => 'Help',
          'page_top' => 'Page top',
          'page_bottom' => 'Page bottom',
          'highlighted' => 'Highlighted',
          'featured' => 'Featured',
          'content' => 'Content',
          'sidebar_first' => 'Sidebar first',
          'sidebar_second' => 'Sidebar second',
          'triptych_first' => 'Triptych first',
          'triptych_middle' => 'Triptych middle',
          'triptych_last' => 'Triptych last',
          'footer_firstcolumn' => 'Footer first column',
          'footer_secondcolumn' => 'Footer second column',
          'footer_thirdcolumn' => 'Footer third column',
          'footer_fourthcolumn' => 'Footer fourth column',
          'footer' => 'Footer',
        ),
        'settings' => 
        array (
          'shortcut_module_link' => '0',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'garland' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/themes/garland/garland.info',
      'name' => 'garland',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Garland',
        'description' => 'A multi-column theme which can be configured to modify colors and switch between fixed and fluid width layouts.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'style.css',
          ),
          'print' => 
          array (
            0 => 'print.css',
          ),
        ),
        'settings' => 
        array (
          'garland_width' => 'fluid',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'hk_adminimal' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/themes/hk_adminimal_theme/hk_adminimal.info',
      'name' => 'hk_adminimal',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Adminimal',
        'description' => 'Minimalist administration subtheme based on Adminimal.',
        'core' => '7.x',
        'scripts' => 
        array (
          0 => 'js/jRespond.js',
          1 => 'js/adminimal_theme.js',
        ),
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'css/hk_adminimal-custom.css',
          ),
        ),
        'settings' => 
        array (
          'shortcut_module_link' => '1',
          'style_checkboxes' => '1',
          'display_icons_config' => '1',
          'avoid_custom_font' => '0',
          'custom_css' => '0',
          'use_custom_media_queries' => '0',
          'media_query_mobile' => 'only screen and (max-width: 480px)',
          'media_query_tablet' => 'only screen and (min-width : 481px) and (max-width : 1024px)',
        ),
        'regions' => 
        array (
          'hidden' => 'Hidden',
          'content_before' => 'Before Content',
          'sidebar_left' => 'Sidebar Left',
          'content' => 'Content',
          'sidebar_right' => 'Sidebar Right',
          'content_after' => 'After Content',
          'help' => 'Help',
          'page_top' => 'Page top',
          'page_bottom' => 'Page bottom',
          'sidebar_first' => 'First sidebar (Hidden)',
        ),
        'regions_hidden' => 
        array (
          0 => 'hidden',
          1 => 'sidebar_first',
        ),
        'version' => '7.x-1.22',
        'project' => 'hk_adminimal_theme',
        'datestamp' => '1439157541',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.22',
    ),
    'hk_theme' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/themes/hk_theme/hk_theme.info',
      'name' => 'hk_theme',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'HK Theme',
        'description' => 'Custom Theme based on Bear Skin Starter Theme | Zen sub-theme',
        'screenshot' => 'screenshot.png',
        'core' => '7.x',
        'base theme' => 'zen',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'system.menus.css',
            1 => 'css/normalize.css',
            2 => 'css/layout.css',
            3 => 'css/tabs.css',
            4 => 'css/pages.css',
            5 => 'css/blocks.css',
            6 => 'css/navigation.css',
            7 => 'css/bear-menu.css',
            8 => 'css/forms.css',
            9 => 'css/print.css',
            10 => 'css/formalize.css',
            11 => 'css/select2.css',
            12 => 'css/responsive-nav.css',
            13 => 'css/responsive.css',
            14 => 'css/bear.css',
            15 => 'css/components.css',
            16 => 'hk_colorbox/colorbox_hk_colorbox.css',
          ),
        ),
        'scripts' => 
        array (
          0 => 'js/jquery.selectorquery.min.js',
          1 => 'js/jquery.eqheight.js',
          2 => 'js/select2.min.js',
          3 => 'js/script.js',
          4 => 'hk_colorbox/colorbox_hk_colorbox.js',
          5 => 'js/jquery.meanmenu.min.js',
        ),
        'regions' => 
        array (
          'header' => 'Header',
          'navigation' => 'Navigation bar',
          'highlighted' => 'Highlighted',
          'help' => 'Help',
          'search' => 'Search',
          'content' => 'Content',
          'sidebar_first' => 'First sidebar',
          'sidebar_second' => 'Second sidebar',
          'footer' => 'Footer',
          'page_top' => 'Page top',
          'page_bottom' => 'Page bottom',
        ),
        'features' => 
        array (
          0 => 'logo',
          1 => 'favicon',
          2 => 'main_menu',
          3 => 'secondary_menu',
        ),
        'settings' => 
        array (
          'zen_breadcrumb' => 'yes',
          'zen_breadcrumb_separator' => ' › ',
          'zen_breadcrumb_home' => '1',
          'zen_breadcrumb_trailing' => '1',
          'zen_breadcrumb_title' => '0',
          'zen_skip_link_anchor' => 'main-menu',
          'zen_skip_link_text' => 'Jump to navigation',
          'zen_html5_respond_meta' => 
          array (
            0 => 'respond',
            1 => 'html5',
            2 => 'meta',
          ),
          'zen_rebuild_registry' => '0',
          'zen_wireframes' => '0',
          'user_menu' => '1',
          'responsive_nav' => '1',
          'sticky_footer' => '1',
        ),
        'plugins' => 
        array (
          'panels' => 
          array (
            'layouts' => 'panels-layouts',
          ),
        ),
        'breakpoints' => 
        array (
          'tv' => 'only screen and (min-width: 3456px)',
          'wide' => '(min-width: 1200px)',
          'desk' => '(min-width: 851px)',
          'narrow' => '(min-width: 560px)',
          'mobile' => '(min-width: 0px)',
        ),
        'multipliers' => 
        array (
          'mobile' => 
          array (
            0 => '1.5x',
            1 => '2x',
          ),
        ),
        'version' => '7.x-1.2',
        'project' => 'hk_theme',
        'datestamp' => '1407266328',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-1.2',
    ),
    'seven' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/themes/seven/seven.info',
      'name' => 'seven',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '1',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Seven',
        'description' => 'A simple one-column, tableless, fluid width administration theme.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'screen' => 
          array (
            0 => 'reset.css',
            1 => 'style.css',
          ),
        ),
        'settings' => 
        array (
          'shortcut_module_link' => '1',
        ),
        'regions' => 
        array (
          'content' => 'Content',
          'help' => 'Help',
          'page_top' => 'Page top',
          'page_bottom' => 'Page bottom',
          'sidebar_first' => 'First sidebar',
        ),
        'regions_hidden' => 
        array (
          0 => 'sidebar_first',
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'stark' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/themes/stark/stark.info',
      'name' => 'stark',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Stark',
        'description' => 'This theme demonstrates Drupal\'s default HTML markup and CSS styles. To learn how to build your own theme and override Drupal\'s default code, see the <a href="http://drupal.org/theme-guide">Theming Guide</a>.',
        'package' => 'Core',
        'version' => '7.43',
        'core' => '7.x',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'layout.css',
          ),
        ),
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.43',
    ),
    'zen' => 
    array (
      'filename' => '/data/disk/o4507778742/static/addweb-dev-1/sites/all/themes/zen/zen.info',
      'name' => 'zen',
      'type' => 'theme',
      'owner' => 'themes/engines/phptemplate/phptemplate.engine',
      'status' => '0',
      'bootstrap' => '0',
      'schema_version' => 0,
      'weight' => '0',
      'info' => 
      array (
        'name' => 'Zen',
        'description' => 'Zen sub-themes are the ultimate starting themes for Drupal 7. Read the <a href="https://drupal.org/node/873778">online docs</a> or the included README-FIRST.txt on how to create a theme with Zen.',
        'screenshot' => 'zen-internals/screenshot.png',
        'core' => '7.x',
        'engine' => 'phptemplate',
        'stylesheets' => 
        array (
          'all' => 
          array (
            0 => 'system.menus.css',
          ),
        ),
        'regions' => 
        array (
          'header' => 'Header',
          'navigation' => 'Navigation bar',
          'highlighted' => 'Highlighted',
          'help' => 'Help',
          'content' => 'Content',
          'sidebar_first' => 'First sidebar',
          'sidebar_second' => 'Second sidebar',
          'footer' => 'Footer',
          'bottom' => 'Page bottom',
          'page_top' => 'Page top',
          'page_bottom' => 'Page bottom',
        ),
        'settings' => 
        array (
          'zen_breadcrumb' => 'yes',
          'zen_breadcrumb_separator' => ' › ',
          'zen_breadcrumb_home' => '1',
          'zen_breadcrumb_trailing' => '0',
          'zen_breadcrumb_title' => '0',
          'zen_layout' => 'zen-responsive-sidebars',
          'zen_skip_link_anchor' => 'main-menu',
          'zen_skip_link_text' => 'Jump to navigation',
          'zen_html5_respond_meta' => 
          array (
            0 => 'respond',
            1 => 'html5',
            2 => 'meta',
          ),
          'zen_rebuild_registry' => '0',
          'zen_wireframes' => '0',
        ),
        'plugins' => 
        array (
          'panels' => 
          array (
            'layouts' => 'panels-layouts',
          ),
        ),
        'version' => '7.x-5.6',
        'project' => 'zen',
        'datestamp' => '1448957644',
        'dependencies' => 
        array (
        ),
        'php' => '5.2.4',
      ),
      'version' => '7.x-5.6',
    ),
  ),
);
$options['installed'] = true;
# Aegir additions
$_SERVER['db_type'] = $options['db_type'];
$_SERVER['db_port'] = $options['db_port'];
$_SERVER['db_host'] = $options['db_host'];
$_SERVER['db_user'] = $options['db_user'];
$_SERVER['db_passwd'] = $options['db_passwd'];
$_SERVER['db_name'] = $options['db_name'];

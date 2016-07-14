<?php # local settings.php 
$conf['search_cron_limit'] = 0;
$conf['feeds_process_limit'] = 2000;
$conf['image_allow_insecure_derivatives'] = TRUE;
$conf['image_suppress_itok_output'] = TRUE;

$conf['cache_backends'][] = 'sites/all/modules/contrib/mobile_switch/mobile_switch_database_cache.inc';
$conf['cache_class_cache_page'] = 'MobileSwitchDatabaseCache';

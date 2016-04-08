<?php
/**
 * @file
 * hk_translations.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function hk_translations_locale_default_languages() {
  $languages = array();

  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'DE',
    'native' => 'DE',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => 'herbert-kohlmeyer.de',
    'prefix' => '',
    'weight' => -10,
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'EN',
    'native' => 'EN',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => 'herbert-kohlmeyer.com',
    'prefix' => '',
    'weight' => -9,
  );
  // Exported language: ru.
  $languages['ru'] = array(
    'language' => 'ru',
    'name' => 'RU',
    'native' => 'RU',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => 'ru.herbert-kohlmeyer.com',
    'prefix' => '',
    'weight' => 0,
  );
  // Exported language: zh-hans.
  $languages['zh-hans'] = array(
    'language' => 'zh-hans',
    'name' => 'Chinese, Simplified',
    'native' => '中',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'zh',
    'weight' => -8,
  );
  return $languages;
}

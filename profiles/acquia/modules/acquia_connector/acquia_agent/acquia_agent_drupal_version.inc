<?php

/**
 * @file
 *   Include file to provide Acquia Drupal version number.
 *
 *   Used to tell Acquia Drupal and non-Acquia Drupal installations from each
 *   other. Version data here also used to inform users of updates and to detect
 *   file changes when running Acquia Drupal.
 */
 
/**
 * Is this an Acquia Drupal install?
 */
define('IS_ACQUIA_DRUPAL', TRUE);

/**
 * Acquia Drupal version information (only used if IS_ACQUIA_DRUPAL).
 */
define('ACQUIA_DRUPAL_VERSION' , '7.24.26 (Drupal 7.24 core)');
define('ACQUIA_DRUPAL_SERIES'  , '7.0');
define('ACQUIA_DRUPAL_BRANCH'  , '7.x');
define('ACQUIA_DRUPAL_REVISION', '6017');

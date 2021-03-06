<?php
/**
 * @file
 */

/**
 * Implements hook_drush_init().
 */
function devops_drush_init() {
  // Check and ensure that Drush DevTools exists as it is a requirement
  // for this Drush DevOps package.
  if (!defined('DEVTOOLS_VERSION')) {
    drush_set_error('DRUSH_DEVOPS: Missing required installed Drush package Drush DevTools. Available: http://github.com/amcgowanca/drush_devtools.');
  }
}

/**
 * Implements hook_drush_command().
 */
function devops_drush_command() {
  $commands = array();
  $commands['devops-init'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => 'Initialize the working directory structure for builds and releases.',
  );
  return $commands;
}

/**
 * Implements hook_drush_help().
 */
function devops_drush_help($section) {
  switch ($section) {
    case 'meta:devops:title':
      return dt('Devops');
  }
}

/**
 * Initializes a new working directory structure and project for Devops.
 */
function drush_devops_init() {
}

<?php

function _system_info_resource_access($op = 'view', $args = array()) {
  return TRUE;
}

function system_info_resources() {
  $resource = array(
    'index' => array(
      'callback' => '_system_info_resource_index',
       'access callback' => '_system_info_resource_access',
        'access arguments' => array('view'),
        'access arguments append' => TRUE,
      ),
  );
  return $resource;
}

function _system_info_resource_index() { 
  $var['version'] = VERSION;
  return $var;
}
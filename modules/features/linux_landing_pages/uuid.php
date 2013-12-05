<?php
include_once 'linux_landing_pages.features.uuid_node.inc';
$uuids = linux_landing_pages_uuid_features_default_content();
foreach ($uuids as $node) {
  echo "// {$node['title']} \n";
  echo "'{$node['uuid']}' => '',\n";
}

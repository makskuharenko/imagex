<?php
/**
 * @file
 */

/**
 * Converts a field operations string into an associative array.
 *
 * For example, converts the following into a mapped array:
 *   A|Aaron
 *   B|Brett
 *   C|Charlie
 * And outputs an array, array('A' => 'Aaron', 'B' => 'Brett' ... ).
 * 
 * @param string $string
 *   The field options string to convert.
 *
 * @return array $array
 *   An associative array representing the $string.
 */
function imagex_field_options_string_to_map($string) {
  $array = array();
  $pieces = explode("\n", $string);

  if (is_array($pieces)) {
    foreach ($pieces as $piece) {
      $piece = explode('|', $piece);
      if (isset($piece[0]) && isset($piece[1])) {
        $piece = array_map('trim', $piece);
        $array[$piece[0]] = $piece[1];
      }
    }
  }

  return $array;
}

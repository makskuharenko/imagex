<?php

/**
 * @file
 * Search result excerpt.
 */

/**
 * Matches all 'N' Unicode character classes (numbers).
 */
define('PREG_CLASS_NUMBERS',
  '\x{30}-\x{39}\x{b2}\x{b3}\x{b9}\x{bc}-\x{be}\x{660}-\x{669}\x{6f0}-\x{6f9}' .
  '\x{966}-\x{96f}\x{9e6}-\x{9ef}\x{9f4}-\x{9f9}\x{a66}-\x{a6f}\x{ae6}-\x{aef}' .
  '\x{b66}-\x{b6f}\x{be7}-\x{bf2}\x{c66}-\x{c6f}\x{ce6}-\x{cef}\x{d66}-\x{d6f}' .
  '\x{e50}-\x{e59}\x{ed0}-\x{ed9}\x{f20}-\x{f33}\x{1040}-\x{1049}\x{1369}-' .
  '\x{137c}\x{16ee}-\x{16f0}\x{17e0}-\x{17e9}\x{17f0}-\x{17f9}\x{1810}-\x{1819}' .
  '\x{1946}-\x{194f}\x{2070}\x{2074}-\x{2079}\x{2080}-\x{2089}\x{2153}-\x{2183}' .
  '\x{2460}-\x{249b}\x{24ea}-\x{24ff}\x{2776}-\x{2793}\x{3007}\x{3021}-\x{3029}' .
  '\x{3038}-\x{303a}\x{3192}-\x{3195}\x{3220}-\x{3229}\x{3251}-\x{325f}\x{3280}-' .
  '\x{3289}\x{32b1}-\x{32bf}\x{ff10}-\x{ff19}');

/**
 * Matches all 'P' Unicode character classes (punctuation).
 */
define('PREG_CLASS_PUNCTUATION',
  '\x{21}-\x{23}\x{25}-\x{2a}\x{2c}-\x{2f}\x{3a}\x{3b}\x{3f}\x{40}\x{5b}-\x{5d}' .
  '\x{5f}\x{7b}\x{7d}\x{a1}\x{ab}\x{b7}\x{bb}\x{bf}\x{37e}\x{387}\x{55a}-\x{55f}' .
  '\x{589}\x{58a}\x{5be}\x{5c0}\x{5c3}\x{5f3}\x{5f4}\x{60c}\x{60d}\x{61b}\x{61f}' .
  '\x{66a}-\x{66d}\x{6d4}\x{700}-\x{70d}\x{964}\x{965}\x{970}\x{df4}\x{e4f}' .
  '\x{e5a}\x{e5b}\x{f04}-\x{f12}\x{f3a}-\x{f3d}\x{f85}\x{104a}-\x{104f}\x{10fb}' .
  '\x{1361}-\x{1368}\x{166d}\x{166e}\x{169b}\x{169c}\x{16eb}-\x{16ed}\x{1735}' .
  '\x{1736}\x{17d4}-\x{17d6}\x{17d8}-\x{17da}\x{1800}-\x{180a}\x{1944}\x{1945}' .
  '\x{2010}-\x{2027}\x{2030}-\x{2043}\x{2045}-\x{2051}\x{2053}\x{2054}\x{2057}' .
  '\x{207d}\x{207e}\x{208d}\x{208e}\x{2329}\x{232a}\x{23b4}-\x{23b6}\x{2768}-' .
  '\x{2775}\x{27e6}-\x{27eb}\x{2983}-\x{2998}\x{29d8}-\x{29db}\x{29fc}\x{29fd}' .
  '\x{3001}-\x{3003}\x{3008}-\x{3011}\x{3014}-\x{301f}\x{3030}\x{303d}\x{30a0}' .
  '\x{30fb}\x{fd3e}\x{fd3f}\x{fe30}-\x{fe52}\x{fe54}-\x{fe61}\x{fe63}\x{fe68}' .
  '\x{fe6a}\x{fe6b}\x{ff01}-\x{ff03}\x{ff05}-\x{ff0a}\x{ff0c}-\x{ff0f}\x{ff1a}' .
  '\x{ff1b}\x{ff1f}\x{ff20}\x{ff3b}-\x{ff3d}\x{ff3f}\x{ff5b}\x{ff5d}\x{ff5f}-' .
  '\x{ff65}');

/**
 * Matches CJK (Chinese, Japanese, Korean) letter-like characters.
 */
define('PREG_CLASS_CJK', '\x{1100}-\x{11FF}\x{3040}-\x{309F}\x{30A1}-\x{318E}' .
  '\x{31A0}-\x{31B7}\x{31F0}-\x{31FF}\x{3400}-\x{4DBF}\x{4E00}-\x{9FCF}' .
  '\x{A000}-\x{A48F}\x{A4D0}-\x{A4FD}\x{A960}-\x{A97F}\x{AC00}-\x{D7FF}' .
  '\x{F900}-\x{FAFF}\x{FF21}-\x{FF3A}\x{FF41}-\x{FF5A}\x{FF66}-\x{FFDC}' .
  '\x{20000}-\x{2FFFD}\x{30000}-\x{3FFFD}');

/**
 * Helper function for array_walk() in linux_page_compiler_excerpt().
 */
function linux_page_compiler_excerpt_replace(&$text) {
  $text = preg_quote($text, '/');
}

/**
 * Utility function; Generates text excerpt for search results.
 * Copied from search.module's search_excerpt() function.
 */
function linux_page_compiler_excerpt($keys, $text) {
  // We highlight around non-indexable or CJK characters.
  $boundary = '(?:(?<=[' . PREG_CLASS_UNICODE_WORD_BOUNDARY . PREG_CLASS_CJK . '])|(?=[' . PREG_CLASS_UNICODE_WORD_BOUNDARY . PREG_CLASS_CJK . ']))';

  // Extract positive keywords and phrases
  preg_match_all('/ ("([^"]+)"|(?!OR)([^" ]+))/', ' ' . $keys, $matches);
  $keys = array_merge($matches[2], $matches[3]);

  // Prepare text by stripping HTML tags and decoding HTML entities.
  $text = strip_tags(str_replace(array('<', '>'), array(' <', '> '), $text));
  $text = decode_entities($text);

  // Slash-escape quotes in the search keyword string.
  array_walk($keys, 'linux_page_compiler_excerpt_replace');
  $workkeys = $keys;

  // Extract fragments around keywords.
  // First we collect ranges of text around each keyword, starting/ending
  // at spaces, trying to get to 256 characters.
  // If the sum of all fragments is too short, we look for second occurrences.
  $ranges = array();
  $included = array();
  $foundkeys = array();
  $length = 0;
  while ($length < 256 && count($workkeys)) {
    foreach ($workkeys as $k => $key) {
      if (strlen($key) == 0) {
        unset($workkeys[$k]);
        unset($keys[$k]);
        continue;
      }
      if ($length >= 256) {
        break;
      }
      // Remember occurrence of key so we can skip over it if more occurrences
      // are desired.
      if (!isset($included[$key])) {
        $included[$key] = 0;
      }
      // Locate a keyword (position $p, always >0 because $text starts with a
      // space). First try bare keyword, but if that doesn't work, try to find a
      // derived form from search_simplify().
      $p = 0;
      if (preg_match('/' . $boundary . $key . $boundary . '/iu', $text, $match, PREG_OFFSET_CAPTURE, $included[$key])) {
        $p = $match[0][1];
      }
      // Now locate a space in front (position $q) and behind it (position $s),
      // leaving about 60 characters extra before and after for context.
      // Note that a space was added to the front and end of $text above.
      if ($p) {
        if (($q = strpos(' ' . $text, ' ', max(0, $p - 61))) !== FALSE) {
          $end = substr($text . ' ', $p, 80);
          if (($s = strrpos($end, ' ')) !== FALSE) {
            // Account for the added spaces.
            $q = max($q - 1, 0);
            $s = min($s, strlen($end) - 1);
            $ranges[$q] = $p + $s;
            $length += $p + $s - $q;
            $included[$key] = $p + 1;
          }
          else {
            unset($workkeys[$k]);
          }
        }
        else {
          unset($workkeys[$k]);
        }
      }
      else {
        unset($workkeys[$k]);
      }
    }
  }

  if (count($ranges) == 0) {
    // We didn't find any keyword matches, so just return the first part of the
    // text. We also need to re-encode any HTML special characters that we
    // entity-decoded above.
    return check_plain(truncate_utf8($text, 256, TRUE, TRUE));
  }

  // Sort the text ranges by starting position.
  ksort($ranges);

  // Now we collapse overlapping text ranges into one. The sorting makes it O(n).
  $newranges = array();
  foreach ($ranges as $from2 => $to2) {
    if (!isset($from1)) {
      $from1 = $from2;
      $to1 = $to2;
      continue;
    }
    if ($from2 <= $to1) {
      $to1 = max($to1, $to2);
    }
    else {
      $newranges[$from1] = $to1;
      $from1 = $from2;
      $to1 = $to2;
    }
  }
  $newranges[$from1] = $to1;

  // Fetch text
  $out = array();
  foreach ($newranges as $from => $to) {
    $out[] = substr($text, $from, $to - $from);
  }

  // Let translators have the ... separator text as one chunk.
  $dots = explode('!excerpt', t('... !excerpt ... !excerpt ...'));

  $text = (isset($newranges[0]) ? '' : $dots[0]) . implode($dots[1], $out) . $dots[2];
  $text = check_plain($text);

  // Slash-escape quotes in keys found in a derived form and merge with original keys.
  array_walk($foundkeys, 'linux_page_compiler_excerpt_replace');
  $keys = array_merge($keys, $foundkeys);

  // Highlight keywords. Must be done at once to prevent conflicts ('strong' and '<strong>').
  $text = preg_replace('/' . $boundary . '(' . implode('|', $keys) . ')' . $boundary . '/iu', '<strong>\0</strong>', $text);
  return $text;
}
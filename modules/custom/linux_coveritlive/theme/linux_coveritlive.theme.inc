<?php
/**
 * @file
 * Theme functions
 */

/**
 * Implements hook_preprocess_linux_coveritlive_block().
 *
 */
function template_preprocess_linux_coveritlive_block(&$vars) {
  $conf = $vars['conf'];
  $posts = $vars['posts'];
  $vars['posts_raw'] = $posts;
  $vars['posts_rendered'] = array();

  if (!empty($vars['ajax_render'])) {
    $vars['update_time'] = t('Updated at: @date', array('@date' => format_date(time(), 'short')));
  }
  else {
    $vars['block_id'] = linux_coveritlive_render_delta($conf);
  }

  //loop through posts and render theme
  if (!empty($posts)) {
    foreach ($posts as $post) {
      $vars['posts_rendered'][] = theme('linux_coveritlive_item', array('post' => $post));
    }
  }
}

/**
 * Implements hook_preprocess_linux_coveritlive_item().
 */
function template_preprocess_linux_coveritlive_item(&$vars) {
  $post = $vars['post'];
  $vars['post_classes_array'] = array();

  //process some vars
  $blog_vars = array(
    'author_name' => !empty($post['author_name']) ? $post['author_name'] : 'unknown',
    'date' => date("M j, Y", $post['timestamp']),
    'date_ago' => format_interval((time() - $post['timestamp']) , 1),
  );

  // posts seem to be in different medium so offer tpl suggestion
  // see: http://www.coveritlive.com/index.php?option=com_content&task=view&id=281
  if (!empty($post['type'])) {
    $vars['post_classes_array'][] = 'linux-coveritlive-item-' . $post['type'];
    $variables['theme_hook_suggestions'][] = 'linux_coveritlive_item__' . $post['type'];

    //sadly coverit doesn't standardize fields so got see what we're receiving
    switch ($post['type']) {
      case 'host_comment':
      case 'guest_comment':
        $blog_vars['title'] = filter_xss($post['comment']);
        break;

      case 'image':
        $img_attr = array(
          'src' => $post['uri_thumb'],
          'alt' => $post['name'],
        );
        $a_attr = array(
          'href' => $post['uri'],
          'rel' => 'shadowbox',
        );
        $blog_vars['content'] = '<a ' . drupal_attributes($a_attr) . '><img ' . drupal_attributes($img_attr) . ' /></a>';
        if (!empty($post['caption'])) {
          $blog_vars['content'] = $blog_vars['content'] . '<span class="img-caption">' . $post['caption'] . '</span>';
        }
        break;

      // @todo - other types if required
      case 'instagram':
        break;

      case 'video':
        break;

      case 'audio':
        break;

      case 'wikipedia':
        break;

      case 'rss':
        break;

      case 'tweet':
        break;
    }
  }

  //make usable in t() function
  $blog_vars_t = array();
  foreach ($blog_vars as $k => $blog_var) {
    $blog_vars_t['@' . $k] = $blog_var;
  }

  $vars['blog_vars'] = $blog_vars;
  $vars['blog_vars_t'] = $blog_vars_t;
}

/**
 * Implements hook_preprocess_linux_coveritlive_block().
 */
function template_process_linux_coveritlive_item(&$vars) {
  if (!empty($vars['post_classes_array'])) {
    $vars['post_classes'] = ' ' . implode($vars['post_classes_array']);
  }
}

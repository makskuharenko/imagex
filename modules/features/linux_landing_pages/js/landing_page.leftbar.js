(function ($) {

Drupal.behaviors.linux_landing_pages_leftbar = {
  attach: function (context) {
    $('.js-leftbar-sort').once('js-leftbar-sort', function() {
      $pane = $(this).parents('.landing-pages-left-bar');
      // Run the Jquery Plugin for the leftbar
      $pane.leftBar();
    });
  }
};

Drupal.ajax.prototype.commands.triggerDOMChange = function (ajax, response, status) {
  $('.landing-pages-left-bar').trigger('viewsAjaxDOMChange');
};
})(jQuery);

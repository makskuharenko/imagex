/**
 * @file
 * Update CoverItLive blocks via Ajax.
 */

(function ($) {

  Drupal.behaviors.linuxCoveritliveBlockAjax = {
    attach: function (context, settings) {
      var blocks = settings.linuxCoveritliveBlockAjax.blocks;      
      
      jQuery.each(blocks, function(delta, conf) {
        var element = jQuery('#'+ delta);
        var interval = conf.linux_coveritlive_ajax_interval * 1000;
        var url = settings.linuxCoveritliveBlockAjax.url +'/'+  conf.linux_coveritlive_stream_key +'/'+ conf.linux_coveritlive_item_count;
        
        console.log(interval);
        setInterval(function() {
          // Loader
          element.addClass('ajax-updating');
          
          // Ajax call
          jQuery.ajax({
            url: url,
            type: 'GET',
            dataType: 'html',
            success: function (response) {
              element.removeClass('ajax-updating').addClass('ajax-success');
              element.html(response);
            },
            error: function () {
              element.removeClass('ajax-updating').addClass('ajax-error');
            }
          });
        },
        interval);
      });

    }
  };

})(jQuery);

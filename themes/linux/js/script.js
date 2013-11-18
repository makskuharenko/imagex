(function ($) {
 
  // jPanel Menu settings
  // ----------------------------------------------------------------------------
  
  var jPM = $.jPanelMenu({
    menu: '.region-first',
    trigger: '.menu-profile'
  });

  var jRes = jRespond([
      {
          label: 'small',
          enter: 0,
          exit: 850
      },{
          label: 'large',
          enter: 850,
          exit: 10000
      }
  ]);

  // register enter and exit functions for multiple breakpoints and functions
  // ----------------------------------------------------------------------------

  jRes.addFunc([
    {
        breakpoint: 'small',
        enter: function() {
          jPM.on();
        },
        exit: function() {
          jPM.off();
          //var s = skrollr.init();
        }
    },{
        breakpoint: 'large',
        enter: function() {
         //var s = skrollr.init();
        },
        exit: function() {
        }
    }
  ]);

  // Changing class on scroll so that the navigation rests at the top of the page
  // ----------------------------------------------------------------------------

  var eTop = $('#block-panels-mini-global-header').offset().top;

  $(window).scroll(function() { //when window is scrolled
      if (eTop - $(window).scrollTop() <= 0) {
        $('#header-wrapper, #panel-wrapper').addClass('fixed');
      } else {
        $('#header-wrapper, #panel-wrapper').removeClass('fixed');
      }
  });

  // Show and hide the mobile menu

  $('.menu-utility').on('click', function() {
    $('#mini-panel-mobile_main_menu').toggle();
    $(this).toggleClass('active');
  });

  // Show and Hide the filter for the most of something block
  // ----------------------------------------------------------------------------

  Drupal.behaviors.filteredViewDropDown = { 
    attach: function (context, settings) { 

      // When the pane title is clicked. Show the drop down.
      $('.filtered-view', context).on('click', '.pane-title', function() {
        $('.pane-menu-menu-most-recent-filter').show();
      });

      $('.pane-menu-menu-most-recent-filter', context).on('click', 'a', function() {
        var selectedFilter = $(this).attr('class');
        var header = $('.filtered-view h2');

        header.text($(this).text());
        header.removeClass('popular commented shared');

        switch (selectedFilter) {
          case 'popular':
            header.addClass('popular');
            break;
          case 'commented':
            header.addClass('commented');
            break;
          case 'shared':
            header.addClass('shared');
            break;
        }

        $(this).parent().prependTo($(this).parents('ul'));
        $('.pane-menu-menu-most-recent-filter', context).hide();

        return false;
      });
    } 
  };

})(jQuery);
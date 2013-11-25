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
        filteredView();
      },
      exit: function() {
        jPM.off();
      }
    },{
      breakpoint: 'large',
      enter: function() {
        filteredView();
      },
      exit: function() {
        // Do Nothing
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

  $('.menu-utility').click(function() {
    $('#mini-panel-mobile_main_menu').toggle();
    $(this).toggleClass('active');
  });

  // Show and Hide the filter for the most of something block
  // ----------------------------------------------------------------------------

  function filteredView() {
    var filtersMenu, filtersView, currentClass;

    $('.filtered-view').on('click', '.pane-title', function() {
      filtersMenu = $(this).parent().prev();
      filtersMenu.show();
    });


    $('.filtered-menu').on('click', 'a, span', function(e) {
      e.preventDefault();

      var selectedText = $(this).text();

      filtersView = $(this).parents('div.filtered-menu').next();
      currentClass = $(this).attr('class');

      filtersView.find('h2').removeClass().addClass('pane-title ' + currentClass);
      filtersView.find('h2').text(selectedText);
      $(this).parent().prependTo($(this).parents('ul'));

      filtersMenu.hide();
    });
  }

})(jQuery);
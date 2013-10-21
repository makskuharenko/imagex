(function ($) {
 
  // jPanel Menu settings
  var jPM = $.jPanelMenu({
    menu: '.region-first',
    trigger: '.menu-utility'
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

  // When the pane title is clicked. Show the drop down.
  $('.pane-test-views-panel-pane-5').on('click', '.pane-title', function() {
  	$('.pane-menu-menu-most-recent-filter').show();
  });/*.mouseleave(function() {
  	$('.pane-menu-menu-most-recent-filter').hide();
  });*/

  $('.pane-menu-menu-most-recent-filter').on('click', 'a', function() {
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
  	$('.pane-menu-menu-most-recent-filter').hide();

  	return false;
  });

  // Changing class on scroll so that the navigation rests at the top of the page

  var eTop = $('#block-panels-mini-global-header').offset().top; //get the offset top of the element

  $(window).scroll(function() { //when window is scrolled
      if (eTop - $(window).scrollTop() <= 0) {
        $('#header-wrapper, #panel-wrapper').addClass('fixed');
      } else {
        $('#header-wrapper, #panel-wrapper').removeClass('fixed');
      }
  });

})(jQuery);
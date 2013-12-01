/*!
 * jQuery lightweight plugin boilerplate
 * Original author: @ajpiano
 * Further changes, comments: @addyosmani
 * Licensed under the MIT license
 */

// the semi-colon before the function invocation is a safety
// net against concatenated scripts and/or other plugins
// that are not closed properly.
;(function ( $, window, document, undefined ) {

    // undefined is used here as the undefined global
    // variable in ECMAScript 3 and is mutable (i.e. it can
    // be changed by someone else). undefined isn't really
    // being passed in so we can ensure that its value is
    // truly undefined. In ES5, undefined can no longer be
    // modified.

    // window and document are passed through as local
    // variables rather than as globals, because this (slightly)
    // quickens the resolution process and can be more
    // efficiently minified (especially when both are
    // regularly referenced in your plugin).

    // Create the defaults once
    var pluginName = "leftBar",
        defaults = {
            propertyName: "value"
        };

    // The actual plugin constructor
    function Plugin( element, options ) {
        this.element = element;

        // jQuery has an extend method that merges the
        // contents of two or more objects, storing the
        // result in the first object. The first object
        // is generally empty because we don't want to alter
        // the default options for future instances of the plugin
        this.options = $.extend( {}, defaults, options) ;

        this._defaults = defaults;
        this._name = pluginName;
        $this = $(this.element);
        _this = this;        
        this.init();
    }

    Plugin.prototype = {

        init: function() {
            this.$overlay = $('<div></div>');
            this.$overlay.css({
              width: '100%',
              height: '100%',
              position: 'absolute',
              zIndex: 100,
              backgroundColor: '#CCCCCC',
              opacity: 0.25,
            }).hide().addClass('js-leftbar-overlay').prependTo($this);
            $this.bind('viewsAjaxDOMChange', function() {
              _this.ajaxChange();
            });
            this.prepForm();
        },
        
        prepForm: function() {
          this.$sort = $this.find('#edit-sort-by');
          this.$form = $this.find('form'); 
          this.$form.hide();
          this.$title = $this.find('h2.pane-title');      
          selectOptions = [];
          this.$options = [];
          this.$sort.find('option').each(function() {
           selectOptions.push({key: $(this).val(), label: $(this).text(), selected: $(this).is(':selected')});
          });
          this.buildDropDown(selectOptions);
        },
        
        buildDropDown: function(selectOptions) {
            // some logic
            this.$dropdown = $('<div></div>');
            this.$dropdown.addClass('js-leftbar-dropdown').css({
              zIndex: 99,
              position: 'absolute',
            });
            $.each(selectOptions, function(index, value) {
              $option = $('<div></div>');
              $option.addClass('js-leftbar-option').addClass('js-leftbar-option-' + value.key);
              $option.css('cursor', 'pointer');
              $option.attr('rel', value.key);
              $option.text(value.label);
              $option.appendTo(_this.$dropdown);
              if (value.selected == true) {
                _this.$title.text(value.label);
                if (_this.titleClass != undefined) {
                  _this.$title.removeClass(_this.titleClass);
                }
                _this.$title.addClass('js-leftbar-option-' + value.key);
                _this.titleClass = 'js-leftbar-option-' + value.key;
                $option.hide();
              }
              $option.bind('click', function() {
                 _this.changeForm(this.getAttribute('rel'));
                 _this.$dropdown.slideUp(150);
              });
            });
            this.$title.after(this.$dropdown);
            this.$dropdown.hide();
            // Remove the Toggled class in case this was triggered after a rebuild
            this.$title.removeClass('js-dropdown-toggled');
            this.$title.unbind('click');
            this.$title.bind('click', function(){
              _this.$title.toggleClass('js-dropdown-toggled');
              _this.$dropdown.slideToggle(150);
            });
        },
        
        changeForm: function(value) {
          this.$sort.find('option').each(function() {
              //may want to use $.trim in here
              selected = false;
              if ($(this).val() == value) {
                selected = true;
              }
              $(this).attr('selected', selected);
          });
          this.$sort.trigger('change');
          this.$overlay.show();
        },
        
        ajaxChange: function() {
          // Slide the dropdown up if it's still active
          this.$dropdown.remove();

          // hide the overlay
          this.$overlay.hide();
          this.prepForm();
        },
    };

    // A really lightweight plugin wrapper around the constructor,
    // preventing against multiple instantiations
    $.fn[pluginName] = function ( options ) {
        return this.each(function () {
            if (!$.data(this, "plugin_" + pluginName)) {
                $.data(this, "plugin_" + pluginName,
                new Plugin( this, options ));
            }
        });
    };

})( jQuery, window, document );
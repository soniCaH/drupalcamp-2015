/**
 * @file
 * Routeplanner specific JavaScript.
 */

(function ($) {
  Drupal.behaviors.routeplanner = {
    attach: function (context, settings) {
      $('.block-drupalcamp-routeplanner .dl-wrapper .dl-col-right #routeplanAanvraagFormId .dl-border').addClass('clearfix');
    }
  };
})(jQuery);

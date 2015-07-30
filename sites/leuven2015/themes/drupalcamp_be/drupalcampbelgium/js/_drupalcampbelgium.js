/**
 * @file
 * Implement custom javascript here.
 */

(
  function (root, factory) {
    if (typeof define === 'function' && define.amd) {
      // AMD module.
      define(factory);
    }
    else if (typeof exports === 'object') {
      // CommonJS-like environment (i.e. Node).
      module.exports = factory();
    }
    else {
      // Browser global.
      root.transformicons = factory();
    }
  }(this || window, function () {

    // ####################
    // MODULE TRANSFORMICON
    // ####################
    'use strict';

    console.log('text');

    var
      tcon = {},// Static class.
      _transformClass = 'tcon-transform',

      DEFAULT_EVENTS = {
        transform: ['click'],
        revert: ['click']
      };

    // ##############
    // private methods
    // ##############
    /**
     * Normalize a selector into an array of DOM elements.
     *
     * Normalize a selector string, a single DOM element or an array of elements
     * into an array of DOM elements.
     *
     * @param {(string|element|array)} elements
     *   Selector, DOM element or Array of DOM elements
     *
     * @returns {array}
     *   Array of DOM elements
     *
     * @private
     */
    var getElementList = function (elements) {
      if (typeof elements === 'string') {
        return Array.prototype.slice.call(document.querySelectorAll(elements));
      }
      else if (typeof elements === 'undefined' || elements instanceof Array) {
        return elements;
      }
      else {
        return [elements];
      }
    };

    /**
     * Normalize a string with eventnames into an array of eventnames.
     *
     * Normalize a string with eventnames separated by spaces or an array of
     * eventnames into an array of eventnames.
     *
     * @param {(string|array)} elements
     *   String with eventnames separated by spaces or array of eventnames
     *
     * @returns {array}
     *   Array of eventnames
     *
     * @private
     */
    var getEventList = function (events) {
      if (typeof events === 'string') {
        return events.toLowerCase().split(' ');
      }
      else {
        return events;
      }
    };

    /**
     * Attach or remove transformicon events to one or more elements.
     *
     * @param {(string|element|array)} elements
     *   Selector, DOM element or Array of DOM elements to be toggled
     * @param {object} [events]
     *   An Object containing one or more special event definitions
     * @param {boolean} [remove=false]
     *   Defines wether the listeners should be added (default) or removed.
     *
     * @private
     */
    var setListeners = function (elements, events, remove) {
      var
        method = (
            remove ? 'remove' : 'add'
          ) + 'EventListener',
        elementList = getElementList(elements),
        currentElement = elementList.length,
        eventLists = {};

      // Get events or use defaults.
      for (var prop in DEFAULT_EVENTS) {
        eventLists[prop] = (
        events && events[prop]
        ) ? getEventList(events[prop]) : DEFAULT_EVENTS[prop];
      }

      // Add or remove all events for all occasions to all elements.
      while (currentElement--) {
        for (var occasion in eventLists) {
          var currentEvent = eventLists[occasion].length;
          while (currentEvent--) {
            elementList[currentElement][method](eventLists[occasion][currentEvent], handleEvent);
          }
        }
      }
    };

    /**
     * Event handler for transform events.
     *
     * @param {object} event
     *   Event object
     *
     * @private
     */
    var handleEvent = function (event) {
      tcon.toggle(event.currentTarget);
    };

    // ##############
    // public methods
    // ##############
    /**
     * Add transformicon behavior to one or more elements.
     *
     * @param {(string|element|array)} elements
     *   Selector, DOM element or Array of DOM elements to be toggled
     * @param {object} [events]
     *   An Object containing one or more special event definitions
     * @param {(string|array)} [events.transform]
     *   One or more events that trigger the transform.
     *   Can be an Array or string with events seperated by space.
     * @param {(string|array)} [events.revert]
     *   One or more events that trigger the reversion.
     *   Can be an Array or string with events seperated by space.
     *
     * @returns {transformicon}
     *   Transformicon instance for chaining
     *
     * @public
     */
    tcon.add = function (elements, events) {
      setListeners(elements, events);
      return tcon;
    };

    /**
     * Remove transformicon behavior from one or more elements.
     *
     * @param {(string|element|array)} elements
     *   Selector, DOM element or Array of DOM elements to be toggled
     * @param {object} [events]
     *   An Object containing one or more special event definitions
     * @param {(string|array)} [events.transform]
     *   One or more events that trigger the transform.
     *   Can be an Array or string with events seperated by space.
     * @param {(string|array)} [events.revert]
     *   One or more events that trigger the reversion.
     *   Can be an Array or string with events seperated by space.
     *
     * @returns {transformicon}
     *   transformicon instance for chaining
     *
     * @public
     */
    tcon.remove = function (elements, events) {
      setListeners(elements, events, true);
      return tcon;
    };

    /**
     * Put one or more elements in the transformed state.
     *
     * @param {(string|element|array)} elements
     *   Selector, DOM element or Array of DOM elements to be transformed
     *
     * @returns {transformicon}
     *   transformicon instance for chaining
     *
     * @public
     */
    tcon.transform = function (elements) {
      getElementList(elements).forEach(function (element) {
        element.classList.add(_transformClass);
      });
      return tcon;
    };

    /**
     * Revert one or more elements to the original state.
     *
     * @param {(string|element|array)} elements
     *   Selector, DOM element or Array of DOM elements to be reverted
     *
     * @returns {transformicon}
     *   transformicon instance for chaining
     *
     * @public
     */
    tcon.revert = function (elements) {
      getElementList(elements).forEach(function (element) {
        element.classList.remove(_transformClass);
      });
      return tcon;
    };

    /**
     * Toggles one or more elements between transformed and original state.
     *
     * @param {(string|element|array)} elements
     *   Selector, DOM element or Array of DOM elements to be toggled
     *
     * @returns {transformicon}
     *   transformicon instance for chaining
     *
     * @public
     */
    tcon.toggle = function (elements) {
      getElementList(elements).forEach(function (element) {
        tcon[element.classList.contains(_transformClass) ? 'revert' : 'transform'](element);
      });
      return tcon;
    };

    return tcon;
  })
);

jQuery(document).ready(function ($) {
  $(document).foundation();
  transformicons.add('.tcon');
});

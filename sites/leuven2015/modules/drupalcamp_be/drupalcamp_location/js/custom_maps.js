/**
 * @file
 * Maps specific JavaScript.
 */

google.maps.event.addDomListener(window, 'load', init);

function init() {
  // Basic options for a simple Google Map.
  var mapOptions = {
    zoom: 15,

    // KHLeuven Centered.
    center: new google.maps.LatLng(50.880647, 4.674663),

    // How you would like to style the map.
    styles: [
      {
        "featureType": "administrative",
        "stylers": [
          {
            "visibility": "off"
          }
        ]
      },
      {
        "featureType": "poi",
        "stylers": [
          {
            "visibility": "simplified"
          }
        ]
      },
      {
        "featureType": "road",
        "elementType": "labels",
        "stylers": [
          {
            "visibility": "simplified"
          }
        ]
      },
      {
        "featureType": "water",
        "stylers": [
          {
            "visibility": "simplified"
          }
        ]
      },
      {
        "featureType": "transit",
        "stylers": [
          {
            "visibility": "simplified"
          }
        ]
      },
      {
        "featureType": "landscape",
        "stylers": [
          {
            "visibility": "simplified"
          }
        ]
      },
      {
        "featureType": "road.highway",
        "stylers": [
          {
            "visibility": "off"
          }
        ]
      },
      {
        "featureType": "road.local",
        "stylers": [
          {
            "visibility": "on"
          }
        ]
      },
      {
        "featureType": "road.highway",
        "elementType": "geometry",
        "stylers": [
          {
            "visibility": "on"
          }
        ]
      },
      {
        "featureType": "water",
        "stylers": [
          {
            "color": "#abbaa4"
          }
        ]
      },
      {
        "featureType": "transit.line",
        "elementType": "geometry",
        "stylers": [
          {
            "color": "#3f518c"
          }
        ]
      },
      {
        "featureType": "road.highway",
        "stylers": [
          {
            "color": "#ad9b8d"
          }
        ]
      }
    ]
  };

  // Get the HTML DOM element that will contain your map.
  // We are using a div with id="map" seen below in the <body>.
  var mapElement = document.getElementById('map');

  // Create the Google Map using our element and options defined above.
  var map = new google.maps.Map(mapElement, mapOptions);

  var marker = new google.maps.Marker({
    position: {lat: 50.880647, lng: 4.674663},
    map: map,
    title: 'DrupalCamp 2015!'
  });
}

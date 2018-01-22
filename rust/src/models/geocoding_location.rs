/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct GeocodingLocation {
  #[serde(rename = "point")]
  point: Option<::models::GeocodingPoint>,
  /// OSM Id
  #[serde(rename = "osm_id")]
  osm_id: Option<String>,
  /// N = node, R = relation, W = way
  #[serde(rename = "osm_type")]
  osm_type: Option<String>,
  /// The osm key of the result like `place` or `amenity`
  #[serde(rename = "osm_key")]
  osm_key: Option<String>,
  #[serde(rename = "name")]
  name: Option<String>,
  #[serde(rename = "country")]
  country: Option<String>,
  #[serde(rename = "city")]
  city: Option<String>,
  #[serde(rename = "state")]
  state: Option<String>,
  #[serde(rename = "street")]
  street: Option<String>,
  #[serde(rename = "housenumber")]
  housenumber: Option<String>,
  #[serde(rename = "postcode")]
  postcode: Option<String>
}

impl GeocodingLocation {
  pub fn new() -> GeocodingLocation {
    GeocodingLocation {
      point: None,
      osm_id: None,
      osm_type: None,
      osm_key: None,
      name: None,
      country: None,
      city: None,
      state: None,
      street: None,
      housenumber: None,
      postcode: None
    }
  }

  pub fn set_point(&mut self, point: ::models::GeocodingPoint) {
    self.point = Some(point);
  }

  pub fn with_point(mut self, point: ::models::GeocodingPoint) -> GeocodingLocation {
    self.point = Some(point);
    self
  }

  pub fn point(&self) -> Option<&::models::GeocodingPoint> {
    self.point.as_ref()
  }

  pub fn reset_point(&mut self) {
    self.point = None;
  }

  pub fn set_osm_id(&mut self, osm_id: String) {
    self.osm_id = Some(osm_id);
  }

  pub fn with_osm_id(mut self, osm_id: String) -> GeocodingLocation {
    self.osm_id = Some(osm_id);
    self
  }

  pub fn osm_id(&self) -> Option<&String> {
    self.osm_id.as_ref()
  }

  pub fn reset_osm_id(&mut self) {
    self.osm_id = None;
  }

  pub fn set_osm_type(&mut self, osm_type: String) {
    self.osm_type = Some(osm_type);
  }

  pub fn with_osm_type(mut self, osm_type: String) -> GeocodingLocation {
    self.osm_type = Some(osm_type);
    self
  }

  pub fn osm_type(&self) -> Option<&String> {
    self.osm_type.as_ref()
  }

  pub fn reset_osm_type(&mut self) {
    self.osm_type = None;
  }

  pub fn set_osm_key(&mut self, osm_key: String) {
    self.osm_key = Some(osm_key);
  }

  pub fn with_osm_key(mut self, osm_key: String) -> GeocodingLocation {
    self.osm_key = Some(osm_key);
    self
  }

  pub fn osm_key(&self) -> Option<&String> {
    self.osm_key.as_ref()
  }

  pub fn reset_osm_key(&mut self) {
    self.osm_key = None;
  }

  pub fn set_name(&mut self, name: String) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: String) -> GeocodingLocation {
    self.name = Some(name);
    self
  }

  pub fn name(&self) -> Option<&String> {
    self.name.as_ref()
  }

  pub fn reset_name(&mut self) {
    self.name = None;
  }

  pub fn set_country(&mut self, country: String) {
    self.country = Some(country);
  }

  pub fn with_country(mut self, country: String) -> GeocodingLocation {
    self.country = Some(country);
    self
  }

  pub fn country(&self) -> Option<&String> {
    self.country.as_ref()
  }

  pub fn reset_country(&mut self) {
    self.country = None;
  }

  pub fn set_city(&mut self, city: String) {
    self.city = Some(city);
  }

  pub fn with_city(mut self, city: String) -> GeocodingLocation {
    self.city = Some(city);
    self
  }

  pub fn city(&self) -> Option<&String> {
    self.city.as_ref()
  }

  pub fn reset_city(&mut self) {
    self.city = None;
  }

  pub fn set_state(&mut self, state: String) {
    self.state = Some(state);
  }

  pub fn with_state(mut self, state: String) -> GeocodingLocation {
    self.state = Some(state);
    self
  }

  pub fn state(&self) -> Option<&String> {
    self.state.as_ref()
  }

  pub fn reset_state(&mut self) {
    self.state = None;
  }

  pub fn set_street(&mut self, street: String) {
    self.street = Some(street);
  }

  pub fn with_street(mut self, street: String) -> GeocodingLocation {
    self.street = Some(street);
    self
  }

  pub fn street(&self) -> Option<&String> {
    self.street.as_ref()
  }

  pub fn reset_street(&mut self) {
    self.street = None;
  }

  pub fn set_housenumber(&mut self, housenumber: String) {
    self.housenumber = Some(housenumber);
  }

  pub fn with_housenumber(mut self, housenumber: String) -> GeocodingLocation {
    self.housenumber = Some(housenumber);
    self
  }

  pub fn housenumber(&self) -> Option<&String> {
    self.housenumber.as_ref()
  }

  pub fn reset_housenumber(&mut self) {
    self.housenumber = None;
  }

  pub fn set_postcode(&mut self, postcode: String) {
    self.postcode = Some(postcode);
  }

  pub fn with_postcode(mut self, postcode: String) -> GeocodingLocation {
    self.postcode = Some(postcode);
    self
  }

  pub fn postcode(&self) -> Option<&String> {
    self.postcode.as_ref()
  }

  pub fn reset_postcode(&mut self) {
    self.postcode = None;
  }

}



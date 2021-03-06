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
pub struct VehicleType {
  /// Unique identifier for the vehicle type
  #[serde(rename = "type_id")]
  type_id: Option<String>,
  /// Profile of vehicle type
  #[serde(rename = "profile")]
  profile: Option<String>,
  /// array of capacity dimensions
  #[serde(rename = "capacity")]
  capacity: Option<Vec<i32>>,
  /// speed_factor of vehicle type
  #[serde(rename = "speed_factor")]
  speed_factor: Option<f64>,
  /// service time factor of vehicle type
  #[serde(rename = "service_time_factor")]
  service_time_factor: Option<f64>,
  /// cost parameter per distance unit, here meter is used
  #[serde(rename = "cost_per_meter")]
  cost_per_meter: Option<f64>,
  /// cost parameter per time unit, here second is used
  #[serde(rename = "cost_per_second")]
  cost_per_second: Option<f64>,
  /// cost parameter vehicle activation, i.e. fixed costs per vehicle
  #[serde(rename = "cost_per_activation")]
  cost_per_activation: Option<f64>
}

impl VehicleType {
  pub fn new() -> VehicleType {
    VehicleType {
      type_id: None,
      profile: None,
      capacity: None,
      speed_factor: None,
      service_time_factor: None,
      cost_per_meter: None,
      cost_per_second: None,
      cost_per_activation: None
    }
  }

  pub fn set_type_id(&mut self, type_id: String) {
    self.type_id = Some(type_id);
  }

  pub fn with_type_id(mut self, type_id: String) -> VehicleType {
    self.type_id = Some(type_id);
    self
  }

  pub fn type_id(&self) -> Option<&String> {
    self.type_id.as_ref()
  }

  pub fn reset_type_id(&mut self) {
    self.type_id = None;
  }

  pub fn set_profile(&mut self, profile: String) {
    self.profile = Some(profile);
  }

  pub fn with_profile(mut self, profile: String) -> VehicleType {
    self.profile = Some(profile);
    self
  }

  pub fn profile(&self) -> Option<&String> {
    self.profile.as_ref()
  }

  pub fn reset_profile(&mut self) {
    self.profile = None;
  }

  pub fn set_capacity(&mut self, capacity: Vec<i32>) {
    self.capacity = Some(capacity);
  }

  pub fn with_capacity(mut self, capacity: Vec<i32>) -> VehicleType {
    self.capacity = Some(capacity);
    self
  }

  pub fn capacity(&self) -> Option<&Vec<i32>> {
    self.capacity.as_ref()
  }

  pub fn reset_capacity(&mut self) {
    self.capacity = None;
  }

  pub fn set_speed_factor(&mut self, speed_factor: f64) {
    self.speed_factor = Some(speed_factor);
  }

  pub fn with_speed_factor(mut self, speed_factor: f64) -> VehicleType {
    self.speed_factor = Some(speed_factor);
    self
  }

  pub fn speed_factor(&self) -> Option<&f64> {
    self.speed_factor.as_ref()
  }

  pub fn reset_speed_factor(&mut self) {
    self.speed_factor = None;
  }

  pub fn set_service_time_factor(&mut self, service_time_factor: f64) {
    self.service_time_factor = Some(service_time_factor);
  }

  pub fn with_service_time_factor(mut self, service_time_factor: f64) -> VehicleType {
    self.service_time_factor = Some(service_time_factor);
    self
  }

  pub fn service_time_factor(&self) -> Option<&f64> {
    self.service_time_factor.as_ref()
  }

  pub fn reset_service_time_factor(&mut self) {
    self.service_time_factor = None;
  }

  pub fn set_cost_per_meter(&mut self, cost_per_meter: f64) {
    self.cost_per_meter = Some(cost_per_meter);
  }

  pub fn with_cost_per_meter(mut self, cost_per_meter: f64) -> VehicleType {
    self.cost_per_meter = Some(cost_per_meter);
    self
  }

  pub fn cost_per_meter(&self) -> Option<&f64> {
    self.cost_per_meter.as_ref()
  }

  pub fn reset_cost_per_meter(&mut self) {
    self.cost_per_meter = None;
  }

  pub fn set_cost_per_second(&mut self, cost_per_second: f64) {
    self.cost_per_second = Some(cost_per_second);
  }

  pub fn with_cost_per_second(mut self, cost_per_second: f64) -> VehicleType {
    self.cost_per_second = Some(cost_per_second);
    self
  }

  pub fn cost_per_second(&self) -> Option<&f64> {
    self.cost_per_second.as_ref()
  }

  pub fn reset_cost_per_second(&mut self) {
    self.cost_per_second = None;
  }

  pub fn set_cost_per_activation(&mut self, cost_per_activation: f64) {
    self.cost_per_activation = Some(cost_per_activation);
  }

  pub fn with_cost_per_activation(mut self, cost_per_activation: f64) -> VehicleType {
    self.cost_per_activation = Some(cost_per_activation);
    self
  }

  pub fn cost_per_activation(&self) -> Option<&f64> {
    self.cost_per_activation.as_ref()
  }

  pub fn reset_cost_per_activation(&mut self) {
    self.cost_per_activation = None;
  }

}




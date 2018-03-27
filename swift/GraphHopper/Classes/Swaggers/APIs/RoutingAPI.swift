//
// RoutingAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class RoutingAPI: APIBase {
    /**
     Routing Request
     
     - parameter point: (query) Specify multiple points for which the route should be calculated. The order is important. Specify at least two points. 
     - parameter pointsEncoded: (query) IMPORTANT- TODO - currently you have to pass false for the swagger client - Have not found a way to force add a parameter. If &#x60;false&#x60; the coordinates in &#x60;point&#x60; and &#x60;snapped_waypoints&#x60; are returned as array using the order [lon,lat,elevation] for every point. If &#x60;true&#x60; the coordinates will be encoded as string leading to less bandwith usage. You&#39;ll need a special handling for the decoding of this string on the client-side. We provide open source code in [Java](https://github.com/graphhopper/graphhopper/blob/d70b63660ac5200b03c38ba3406b8f93976628a6/web/src/main/java/com/graphhopper/http/WebHelper.java#L43) and [JavaScript](https://github.com/graphhopper/graphhopper/blob/d70b63660ac5200b03c38ba3406b8f93976628a6/web/src/main/webapp/js/ghrequest.js#L139). It is especially important to use no 3rd party client if you set &#x60;elevation&#x3D;true&#x60;! 
     - parameter key: (query) Get your key at graphhopper.com 
     - parameter locale: (query) The locale of the resulting turn instructions. E.g. &#x60;pt_PT&#x60; for Portuguese or &#x60;de&#x60; for German (optional)
     - parameter instructions: (query) If instruction should be calculated and returned (optional)
     - parameter vehicle: (query) The vehicle for which the route should be calculated. Other vehicles are foot, small_truck, ... (optional)
     - parameter elevation: (query) If &#x60;true&#x60; a third dimension - the elevation - is included in the polyline or in the GeoJson. If enabled you have to use a modified version of the decoding method or set points_encoded to &#x60;false&#x60;. See the points_encoded attribute for more details. Additionally a request can fail if the vehicle does not support elevation. See the features object for every vehicle. (optional)
     - parameter calcPoints: (query) If the points for the route should be calculated at all printing out only distance and time. (optional)
     - parameter pointHint: (query) Optional parameter. Specifies a hint for each &#x60;point&#x60; parameter to prefer a certain street for the closest location lookup. E.g. if there is an address or house with two or more neighboring streets you can control for which street the closest location is looked up. (optional)
     - parameter chDisable: (query) Use this parameter in combination with one or more parameters of this table (optional)
     - parameter weighting: (query) Which kind of &#39;best&#39; route calculation you need. Other option is &#x60;shortest&#x60; (e.g. for &#x60;vehicle&#x3D;foot&#x60; or &#x60;bike&#x60;), &#x60;short_fastest&#x60; if time and distance is expensive e.g. for &#x60;vehicle&#x3D;truck&#x60; (optional)
     - parameter edgeTraversal: (query) Use &#x60;true&#x60; if you want to consider turn restrictions for bike and motor vehicles. Keep in mind that the response time is roughly 2 times slower. (optional)
     - parameter algorithm: (query) The algorithm to calculate the route. Other options are &#x60;dijkstra&#x60;, &#x60;astar&#x60;, &#x60;astarbi&#x60;, &#x60;alternative_route&#x60; and &#x60;round_trip&#x60; (optional)
     - parameter heading: (query) Favour a heading direction for a certain point. Specify either one heading for the start point or as many as there are points. In this case headings are associated by their order to the specific points. Headings are given as north based clockwise angle between 0 and 360 degree. This parameter also influences the tour generated with &#x60;algorithm&#x3D;round_trip&#x60; and force the initial direction. (optional)
     - parameter headingPenalty: (query) Penalty for omitting a specified heading. The penalty corresponds to the accepted time delay in seconds in comparison to the route without a heading. (optional)
     - parameter passThrough: (query) If &#x60;true&#x60; u-turns are avoided at via-points with regard to the &#x60;heading_penalty&#x60;. (optional)
     - parameter roundTripDistance: (query) If &#x60;algorithm&#x3D;round_trip&#x60; this parameter configures approximative length of the resulting round trip (optional)
     - parameter roundTripSeed: (query) If &#x60;algorithm&#x3D;round_trip&#x60; this parameter introduces randomness if e.g. the first try wasn&#39;t good. (optional)
     - parameter alternativeRouteMaxPaths: (query) If &#x60;algorithm&#x3D;alternative_route&#x60; this parameter sets the number of maximum paths which should be calculated. Increasing can lead to worse alternatives. (optional)
     - parameter alternativeRouteMaxWeightFactor: (query) If &#x60;algorithm&#x3D;alternative_route&#x60; this parameter sets the factor by which the alternatives routes can be longer than the optimal route. Increasing can lead to worse alternatives. (optional)
     - parameter alternativeRouteMaxShareFactor: (query) If &#x60;algorithm&#x3D;alternative_route&#x60; this parameter specifies how much alternatives routes can have maximum in common with the optimal route. Increasing can lead to worse alternatives. (optional)
     - parameter avoid: (query) comma separate list to avoid certain roads. You can avoid motorway, ferry, tunnel or track (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func routeGet(point point: [String], pointsEncoded: Bool, key: String, locale: String? = nil, instructions: Bool? = nil, vehicle: String? = nil, elevation: Bool? = nil, calcPoints: Bool? = nil, pointHint: [String]? = nil, chDisable: Bool? = nil, weighting: String? = nil, edgeTraversal: Bool? = nil, algorithm: String? = nil, heading: Int32? = nil, headingPenalty: Int32? = nil, passThrough: Bool? = nil, roundTripDistance: Int32? = nil, roundTripSeed: Int64? = nil, alternativeRouteMaxPaths: Int32? = nil, alternativeRouteMaxWeightFactor: Int32? = nil, alternativeRouteMaxShareFactor: Int32? = nil, avoid: String? = nil, completion: ((data: RouteResponse?, error: ErrorType?) -> Void)) {
        routeGetWithRequestBuilder(point: point, pointsEncoded: pointsEncoded, key: key, locale: locale, instructions: instructions, vehicle: vehicle, elevation: elevation, calcPoints: calcPoints, pointHint: pointHint, chDisable: chDisable, weighting: weighting, edgeTraversal: edgeTraversal, algorithm: algorithm, heading: heading, headingPenalty: headingPenalty, passThrough: passThrough, roundTripDistance: roundTripDistance, roundTripSeed: roundTripSeed, alternativeRouteMaxPaths: alternativeRouteMaxPaths, alternativeRouteMaxWeightFactor: alternativeRouteMaxWeightFactor, alternativeRouteMaxShareFactor: alternativeRouteMaxShareFactor, avoid: avoid).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Routing Request
     - GET /route
     - The GraphHopper Routing API allows to calculate route and implement navigation via the turn instructions
     - examples: [{contentType=application/json, example={
  "paths" : [ {
    "descend" : 5.962133916683182,
    "instructions" : "",
    "ascend" : 1.4658129805029452,
    "distance" : 0.8008281904610115,
    "bbox" : [ 5.637376656633329, 5.637376656633329 ],
    "time" : 6,
    "points_encoded" : true,
    "points" : {
      "coordinates" : ""
    },
    "snapped_waypoints" : {
      "coordinates" : ""
    }
  }, {
    "descend" : 5.962133916683182,
    "instructions" : "",
    "ascend" : 1.4658129805029452,
    "distance" : 0.8008281904610115,
    "bbox" : [ 5.637376656633329, 5.637376656633329 ],
    "time" : 6,
    "points_encoded" : true,
    "points" : {
      "coordinates" : ""
    },
    "snapped_waypoints" : {
      "coordinates" : ""
    }
  } ],
  "info" : {
    "took" : 2.3021358869347655,
    "copyrights" : [ "copyrights", "copyrights" ]
  }
}}]
     
     - parameter point: (query) Specify multiple points for which the route should be calculated. The order is important. Specify at least two points. 
     - parameter pointsEncoded: (query) IMPORTANT- TODO - currently you have to pass false for the swagger client - Have not found a way to force add a parameter. If &#x60;false&#x60; the coordinates in &#x60;point&#x60; and &#x60;snapped_waypoints&#x60; are returned as array using the order [lon,lat,elevation] for every point. If &#x60;true&#x60; the coordinates will be encoded as string leading to less bandwith usage. You&#39;ll need a special handling for the decoding of this string on the client-side. We provide open source code in [Java](https://github.com/graphhopper/graphhopper/blob/d70b63660ac5200b03c38ba3406b8f93976628a6/web/src/main/java/com/graphhopper/http/WebHelper.java#L43) and [JavaScript](https://github.com/graphhopper/graphhopper/blob/d70b63660ac5200b03c38ba3406b8f93976628a6/web/src/main/webapp/js/ghrequest.js#L139). It is especially important to use no 3rd party client if you set &#x60;elevation&#x3D;true&#x60;! 
     - parameter key: (query) Get your key at graphhopper.com 
     - parameter locale: (query) The locale of the resulting turn instructions. E.g. &#x60;pt_PT&#x60; for Portuguese or &#x60;de&#x60; for German (optional)
     - parameter instructions: (query) If instruction should be calculated and returned (optional)
     - parameter vehicle: (query) The vehicle for which the route should be calculated. Other vehicles are foot, small_truck, ... (optional)
     - parameter elevation: (query) If &#x60;true&#x60; a third dimension - the elevation - is included in the polyline or in the GeoJson. If enabled you have to use a modified version of the decoding method or set points_encoded to &#x60;false&#x60;. See the points_encoded attribute for more details. Additionally a request can fail if the vehicle does not support elevation. See the features object for every vehicle. (optional)
     - parameter calcPoints: (query) If the points for the route should be calculated at all printing out only distance and time. (optional)
     - parameter pointHint: (query) Optional parameter. Specifies a hint for each &#x60;point&#x60; parameter to prefer a certain street for the closest location lookup. E.g. if there is an address or house with two or more neighboring streets you can control for which street the closest location is looked up. (optional)
     - parameter chDisable: (query) Use this parameter in combination with one or more parameters of this table (optional)
     - parameter weighting: (query) Which kind of &#39;best&#39; route calculation you need. Other option is &#x60;shortest&#x60; (e.g. for &#x60;vehicle&#x3D;foot&#x60; or &#x60;bike&#x60;), &#x60;short_fastest&#x60; if time and distance is expensive e.g. for &#x60;vehicle&#x3D;truck&#x60; (optional)
     - parameter edgeTraversal: (query) Use &#x60;true&#x60; if you want to consider turn restrictions for bike and motor vehicles. Keep in mind that the response time is roughly 2 times slower. (optional)
     - parameter algorithm: (query) The algorithm to calculate the route. Other options are &#x60;dijkstra&#x60;, &#x60;astar&#x60;, &#x60;astarbi&#x60;, &#x60;alternative_route&#x60; and &#x60;round_trip&#x60; (optional)
     - parameter heading: (query) Favour a heading direction for a certain point. Specify either one heading for the start point or as many as there are points. In this case headings are associated by their order to the specific points. Headings are given as north based clockwise angle between 0 and 360 degree. This parameter also influences the tour generated with &#x60;algorithm&#x3D;round_trip&#x60; and force the initial direction. (optional)
     - parameter headingPenalty: (query) Penalty for omitting a specified heading. The penalty corresponds to the accepted time delay in seconds in comparison to the route without a heading. (optional)
     - parameter passThrough: (query) If &#x60;true&#x60; u-turns are avoided at via-points with regard to the &#x60;heading_penalty&#x60;. (optional)
     - parameter roundTripDistance: (query) If &#x60;algorithm&#x3D;round_trip&#x60; this parameter configures approximative length of the resulting round trip (optional)
     - parameter roundTripSeed: (query) If &#x60;algorithm&#x3D;round_trip&#x60; this parameter introduces randomness if e.g. the first try wasn&#39;t good. (optional)
     - parameter alternativeRouteMaxPaths: (query) If &#x60;algorithm&#x3D;alternative_route&#x60; this parameter sets the number of maximum paths which should be calculated. Increasing can lead to worse alternatives. (optional)
     - parameter alternativeRouteMaxWeightFactor: (query) If &#x60;algorithm&#x3D;alternative_route&#x60; this parameter sets the factor by which the alternatives routes can be longer than the optimal route. Increasing can lead to worse alternatives. (optional)
     - parameter alternativeRouteMaxShareFactor: (query) If &#x60;algorithm&#x3D;alternative_route&#x60; this parameter specifies how much alternatives routes can have maximum in common with the optimal route. Increasing can lead to worse alternatives. (optional)
     - parameter avoid: (query) comma separate list to avoid certain roads. You can avoid motorway, ferry, tunnel or track (optional)

     - returns: RequestBuilder<RouteResponse> 
     */
    public class func routeGetWithRequestBuilder(point point: [String], pointsEncoded: Bool, key: String, locale: String? = nil, instructions: Bool? = nil, vehicle: String? = nil, elevation: Bool? = nil, calcPoints: Bool? = nil, pointHint: [String]? = nil, chDisable: Bool? = nil, weighting: String? = nil, edgeTraversal: Bool? = nil, algorithm: String? = nil, heading: Int32? = nil, headingPenalty: Int32? = nil, passThrough: Bool? = nil, roundTripDistance: Int32? = nil, roundTripSeed: Int64? = nil, alternativeRouteMaxPaths: Int32? = nil, alternativeRouteMaxWeightFactor: Int32? = nil, alternativeRouteMaxShareFactor: Int32? = nil, avoid: String? = nil) -> RequestBuilder<RouteResponse> {
        let path = "/route"
        let URLString = GraphHopperAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "point": point,
            "locale": locale,
            "instructions": instructions,
            "vehicle": vehicle,
            "elevation": elevation,
            "points_encoded": pointsEncoded,
            "calc_points": calcPoints,
            "point_hint": pointHint,
            "ch.disable": chDisable,
            "weighting": weighting,
            "edge_traversal": edgeTraversal,
            "algorithm": algorithm,
            "heading": heading?.encodeToJSON(),
            "heading_penalty": headingPenalty?.encodeToJSON(),
            "pass_through": passThrough,
            "round_trip.distance": roundTripDistance?.encodeToJSON(),
            "round_trip.seed": roundTripSeed?.encodeToJSON(),
            "alternative_route.max_paths": alternativeRouteMaxPaths?.encodeToJSON(),
            "alternative_route.max_weight_factor": alternativeRouteMaxWeightFactor?.encodeToJSON(),
            "alternative_route.max_share_factor": alternativeRouteMaxShareFactor?.encodeToJSON(),
            "avoid": avoid,
            "key": key
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<RouteResponse>.Type = GraphHopperAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

}

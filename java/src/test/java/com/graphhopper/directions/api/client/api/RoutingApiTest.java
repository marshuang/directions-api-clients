/*
 * GraphHopper Directions API
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package com.graphhopper.directions.api.client.api;

import com.graphhopper.directions.api.client.ApiException;
import com.graphhopper.directions.api.client.model.GHError;
import com.graphhopper.directions.api.client.model.RouteResponse;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for RoutingApi
 */
@Ignore
public class RoutingApiTest {

    private final RoutingApi api = new RoutingApi();

    
    /**
     * Routing Request
     *
     * The GraphHopper Routing API allows to calculate route and implement navigation via the turn instructions
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void routeGetTest() throws ApiException {
        List<String> point = null;
        Boolean pointsEncoded = null;
        String key = null;
        String locale = null;
        Boolean instructions = null;
        String vehicle = null;
        Boolean elevation = null;
        Boolean calcPoints = null;
        List<String> pointHint = null;
        Boolean chDisable = null;
        String weighting = null;
        Boolean edgeTraversal = null;
        String algorithm = null;
        Integer heading = null;
        Integer headingPenalty = null;
        Boolean passThrough = null;
        Integer roundTripDistance = null;
        Long roundTripSeed = null;
        Integer alternativeRouteMaxPaths = null;
        Integer alternativeRouteMaxWeightFactor = null;
        Integer alternativeRouteMaxShareFactor = null;
        String avoid = null;
        RouteResponse response = api.routeGet(point, pointsEncoded, key, locale, instructions, vehicle, elevation, calcPoints, pointHint, chDisable, weighting, edgeTraversal, algorithm, heading, headingPenalty, passThrough, roundTripDistance, roundTripSeed, alternativeRouteMaxPaths, alternativeRouteMaxWeightFactor, alternativeRouteMaxShareFactor, avoid);

        // TODO: test validations
    }
    
}

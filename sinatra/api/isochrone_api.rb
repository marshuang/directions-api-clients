require 'json'


MyApp.add_route('GET', '/api/1/isochrone', {
  "resourcePath" => "/Isochrone",
  "summary" => "Isochrone Request",
  "nickname" => "isochrone_get", 
  "responseClass" => "IsochroneResponse", 
  "endpoint" => "/isochrone", 
  "notes" => "The GraphHopper Isochrone API allows calculating an isochrone of a locations means to calculate 'a line connecting points at which a vehicle arrives at the same time,' see [Wikipedia](http://en.wikipedia.org/wiki/Isochrone_map). It is also called **reachability** or **walkability**. ",
  "parameters" => [
    {
      "name" => "point",
      "description" => "Specify the start coordinate",
      "dataType" => "string",
      "paramType" => "query",
      
      "allowableValues" => "",
      
    },
    {
      "name" => "time_limit",
      "description" => "Specify which time the vehicle should travel. In seconds.",
      "dataType" => "int",
      "paramType" => "query",
      
      "allowableValues" => "",
      "defaultValue" => "600"
    },
    {
      "name" => "distance_limit",
      "description" => "Specify which distance the vehicle should travel. In meter.",
      "dataType" => "int",
      "paramType" => "query",
      
      "allowableValues" => "",
      "defaultValue" => "-1"
    },
    {
      "name" => "vehicle",
      "description" => "Possible vehicles are bike, car, foot and [more](https://graphhopper.com/api/1/docs/supported-vehicle-profiles/)",
      "dataType" => "string",
      "paramType" => "query",
      
      "allowableValues" => "",
      "defaultValue" => "car"
    },
    {
      "name" => "buckets",
      "description" => "For how many sub intervals an additional polygon should be calculated.",
      "dataType" => "int",
      "paramType" => "query",
      
      "allowableValues" => "",
      "defaultValue" => "1"
    },
    {
      "name" => "reverse_flow",
      "description" => "If &#x60;false&#x60; the flow goes from point to the polygon, if &#x60;true&#x60; the flow goes from the polygon \&quot;inside\&quot; to the point. Example usage for &#x60;false&#x60;&amp;#58; *How many potential customer can be reached within 30min travel time from your store* vs. &#x60;true&#x60;&amp;#58; *How many customers can reach your store within 30min travel time.*",
      "dataType" => "boolean",
      "paramType" => "query",
      
      "allowableValues" => "",
      "defaultValue" => "false"
    },
    {
      "name" => "weighting",
      "description" => "Can be fastest or shortest",
      "dataType" => "string",
      "paramType" => "query",
      
      "allowableValues" => "",
      "defaultValue" => "fastest"
    },
    {
      "name" => "key",
      "description" => "Get your key at graphhopper.com",
      "dataType" => "string",
      "paramType" => "query",
      
      "allowableValues" => "",
      
    },
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end


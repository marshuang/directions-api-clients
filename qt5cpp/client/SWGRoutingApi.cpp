/**
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

#include "SWGRoutingApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {

SWGRoutingApi::SWGRoutingApi() {}

SWGRoutingApi::~SWGRoutingApi() {}

SWGRoutingApi::SWGRoutingApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGRoutingApi::routeGet(QList<QString*>* point, bool points_encoded, QString* key, QString* locale, bool instructions, QString* vehicle, bool elevation, bool calc_points, QList<QString*>* point_hint, bool ch_disable, QString* weighting, bool edge_traversal, QString* algorithm, qint32 heading, qint32 heading_penalty, bool pass_through, qint32 round_trip_distance, qint64 round_trip_seed, qint32 alternative_route_max_paths, qint32 alternative_route_max_weight_factor, qint32 alternative_route_max_share_factor, QString* avoid) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/route");




    if (point->size() > 0) {
      if (QString("multi").indexOf("multi") == 0) {
        foreach(QString* t, *point) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else 
            fullPath.append("?");
          fullPath.append("point=").append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("point=");
        qint32 count = 0;
        foreach(QString* t, *point) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("point=");
        qint32 count = 0;
        foreach(QString* t, *point) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("locale"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(locale)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("instructions"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(instructions)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("vehicle"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(vehicle)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("elevation"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(elevation)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("points_encoded"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(points_encoded)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("calc_points"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(calc_points)));



    if (point_hint->size() > 0) {
      if (QString("multi").indexOf("multi") == 0) {
        foreach(QString* t, *point_hint) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else 
            fullPath.append("?");
          fullPath.append("point_hint=").append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("point_hint=");
        qint32 count = 0;
        foreach(QString* t, *point_hint) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("point_hint=");
        qint32 count = 0;
        foreach(QString* t, *point_hint) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("ch.disable"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(ch_disable)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("weighting"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(weighting)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("edge_traversal"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(edge_traversal)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("algorithm"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(algorithm)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("heading"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(heading)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("heading_penalty"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(heading_penalty)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("pass_through"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(pass_through)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("round_trip.distance"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(round_trip_distance)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("round_trip.seed"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(round_trip_seed)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("alternative_route.max_paths"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(alternative_route_max_paths)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("alternative_route.max_weight_factor"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(alternative_route_max_weight_factor)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("alternative_route.max_share_factor"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(alternative_route_max_share_factor)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("avoid"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(avoid)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("key"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(key)));


    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGRoutingApi::routeGetCallback);

    worker->execute(&input);
}

void
SWGRoutingApi::routeGetCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    

    QString json(worker->response);
    SWGRouteResponse* output = static_cast<SWGRouteResponse*>(create(json, QString("SWGRouteResponse")));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit routeGetSignal(output);
    } else {
        emit routeGetSignalE(output, error_type, error_str);
        emit routeGetSignalEFull(worker, error_type, error_str);
    }
}


}

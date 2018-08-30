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


#include "SWGRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGRequest::SWGRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRequest::SWGRequest() {
    init();
}

SWGRequest::~SWGRequest() {
    this->cleanup();
}

void
SWGRequest::init() {
    vehicles = new QList<SWGVehicle*>();
    m_vehicles_isSet = false;
    vehicle_types = new QList<SWGVehicleType*>();
    m_vehicle_types_isSet = false;
    services = new QList<SWGService*>();
    m_services_isSet = false;
    shipments = new QList<SWGShipment*>();
    m_shipments_isSet = false;
    relations = new QList<SWGRelation*>();
    m_relations_isSet = false;
    objectives = new QList<SWGObjective*>();
    m_objectives_isSet = false;
    cost_matrices = new QList<SWGCostMatrix*>();
    m_cost_matrices_isSet = false;
    configuration = new SWGConfiguration();
    m_configuration_isSet = false;
}

void
SWGRequest::cleanup() {
    if(vehicles != nullptr) { 
        auto arr = vehicles;
        for(auto o: *arr) { 
            delete o;
        }
        delete vehicles;
    }
    if(vehicle_types != nullptr) { 
        auto arr = vehicle_types;
        for(auto o: *arr) { 
            delete o;
        }
        delete vehicle_types;
    }
    if(services != nullptr) { 
        auto arr = services;
        for(auto o: *arr) { 
            delete o;
        }
        delete services;
    }
    if(shipments != nullptr) { 
        auto arr = shipments;
        for(auto o: *arr) { 
            delete o;
        }
        delete shipments;
    }
    if(relations != nullptr) { 
        auto arr = relations;
        for(auto o: *arr) { 
            delete o;
        }
        delete relations;
    }
    if(objectives != nullptr) { 
        auto arr = objectives;
        for(auto o: *arr) { 
            delete o;
        }
        delete objectives;
    }
    if(cost_matrices != nullptr) { 
        auto arr = cost_matrices;
        for(auto o: *arr) { 
            delete o;
        }
        delete cost_matrices;
    }
    if(configuration != nullptr) { 
        delete configuration;
    }
}

SWGRequest*
SWGRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRequest::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&vehicles, pJson["vehicles"], "QList", "SWGVehicle");
    
    ::Swagger::setValue(&vehicle_types, pJson["vehicle_types"], "QList", "SWGVehicleType");
    
    ::Swagger::setValue(&services, pJson["services"], "QList", "SWGService");
    
    ::Swagger::setValue(&shipments, pJson["shipments"], "QList", "SWGShipment");
    
    ::Swagger::setValue(&relations, pJson["relations"], "QList", "SWGRelation");
    
    ::Swagger::setValue(&objectives, pJson["objectives"], "QList", "SWGObjective");
    
    ::Swagger::setValue(&cost_matrices, pJson["cost_matrices"], "QList", "SWGCostMatrix");
    ::Swagger::setValue(&configuration, pJson["configuration"], "SWGConfiguration", "SWGConfiguration");
    
}

QString
SWGRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    if(vehicles->size() > 0){
        toJsonArray((QList<void*>*)vehicles, obj, "vehicles", "SWGVehicle");
    }
    
    if(vehicle_types->size() > 0){
        toJsonArray((QList<void*>*)vehicle_types, obj, "vehicle_types", "SWGVehicleType");
    }
    
    if(services->size() > 0){
        toJsonArray((QList<void*>*)services, obj, "services", "SWGService");
    }
    
    if(shipments->size() > 0){
        toJsonArray((QList<void*>*)shipments, obj, "shipments", "SWGShipment");
    }
    
    if(relations->size() > 0){
        toJsonArray((QList<void*>*)relations, obj, "relations", "SWGRelation");
    }
    
    if(objectives->size() > 0){
        toJsonArray((QList<void*>*)objectives, obj, "objectives", "SWGObjective");
    }
    
    if(cost_matrices->size() > 0){
        toJsonArray((QList<void*>*)cost_matrices, obj, "cost_matrices", "SWGCostMatrix");
    }
     
    if((configuration != nullptr) && (configuration->isSet())){
        toJsonValue(QString("configuration"), configuration, obj, QString("SWGConfiguration"));
    }

    return obj;
}

QList<SWGVehicle*>*
SWGRequest::getVehicles() {
    return vehicles;
}
void
SWGRequest::setVehicles(QList<SWGVehicle*>* vehicles) {
    this->vehicles = vehicles;
    this->m_vehicles_isSet = true;
}

QList<SWGVehicleType*>*
SWGRequest::getVehicleTypes() {
    return vehicle_types;
}
void
SWGRequest::setVehicleTypes(QList<SWGVehicleType*>* vehicle_types) {
    this->vehicle_types = vehicle_types;
    this->m_vehicle_types_isSet = true;
}

QList<SWGService*>*
SWGRequest::getServices() {
    return services;
}
void
SWGRequest::setServices(QList<SWGService*>* services) {
    this->services = services;
    this->m_services_isSet = true;
}

QList<SWGShipment*>*
SWGRequest::getShipments() {
    return shipments;
}
void
SWGRequest::setShipments(QList<SWGShipment*>* shipments) {
    this->shipments = shipments;
    this->m_shipments_isSet = true;
}

QList<SWGRelation*>*
SWGRequest::getRelations() {
    return relations;
}
void
SWGRequest::setRelations(QList<SWGRelation*>* relations) {
    this->relations = relations;
    this->m_relations_isSet = true;
}

QList<SWGObjective*>*
SWGRequest::getObjectives() {
    return objectives;
}
void
SWGRequest::setObjectives(QList<SWGObjective*>* objectives) {
    this->objectives = objectives;
    this->m_objectives_isSet = true;
}

QList<SWGCostMatrix*>*
SWGRequest::getCostMatrices() {
    return cost_matrices;
}
void
SWGRequest::setCostMatrices(QList<SWGCostMatrix*>* cost_matrices) {
    this->cost_matrices = cost_matrices;
    this->m_cost_matrices_isSet = true;
}

SWGConfiguration*
SWGRequest::getConfiguration() {
    return configuration;
}
void
SWGRequest::setConfiguration(SWGConfiguration* configuration) {
    this->configuration = configuration;
    this->m_configuration_isSet = true;
}


bool 
SWGRequest::isSet(){
    bool isObjectUpdated = false;
    do{
        if(vehicles->size() > 0){ isObjectUpdated = true; break;}
        if(vehicle_types->size() > 0){ isObjectUpdated = true; break;}
        if(services->size() > 0){ isObjectUpdated = true; break;}
        if(shipments->size() > 0){ isObjectUpdated = true; break;}
        if(relations->size() > 0){ isObjectUpdated = true; break;}
        if(objectives->size() > 0){ isObjectUpdated = true; break;}
        if(cost_matrices->size() > 0){ isObjectUpdated = true; break;}
        if(configuration != nullptr && configuration->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}


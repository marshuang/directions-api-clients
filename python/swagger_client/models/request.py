# coding: utf-8

"""
    GraphHopper Directions API

    You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.  # noqa: E501

    OpenAPI spec version: 1.0.0
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six

from swagger_client.models.configuration import Configuration  # noqa: F401,E501
from swagger_client.models.cost_matrix import CostMatrix  # noqa: F401,E501
from swagger_client.models.objective import Objective  # noqa: F401,E501
from swagger_client.models.relation import Relation  # noqa: F401,E501
from swagger_client.models.service import Service  # noqa: F401,E501
from swagger_client.models.shipment import Shipment  # noqa: F401,E501
from swagger_client.models.vehicle import Vehicle  # noqa: F401,E501
from swagger_client.models.vehicle_type import VehicleType  # noqa: F401,E501


class Request(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'vehicles': 'list[Vehicle]',
        'vehicle_types': 'list[VehicleType]',
        'services': 'list[Service]',
        'shipments': 'list[Shipment]',
        'relations': 'list[Relation]',
        'objectives': 'list[Objective]',
        'cost_matrices': 'list[CostMatrix]',
        'configuration': 'Configuration'
    }

    attribute_map = {
        'vehicles': 'vehicles',
        'vehicle_types': 'vehicle_types',
        'services': 'services',
        'shipments': 'shipments',
        'relations': 'relations',
        'objectives': 'objectives',
        'cost_matrices': 'cost_matrices',
        'configuration': 'configuration'
    }

    def __init__(self, vehicles=None, vehicle_types=None, services=None, shipments=None, relations=None, objectives=None, cost_matrices=None, configuration=None):  # noqa: E501
        """Request - a model defined in Swagger"""  # noqa: E501

        self._vehicles = None
        self._vehicle_types = None
        self._services = None
        self._shipments = None
        self._relations = None
        self._objectives = None
        self._cost_matrices = None
        self._configuration = None
        self.discriminator = None

        if vehicles is not None:
            self.vehicles = vehicles
        if vehicle_types is not None:
            self.vehicle_types = vehicle_types
        if services is not None:
            self.services = services
        if shipments is not None:
            self.shipments = shipments
        if relations is not None:
            self.relations = relations
        if objectives is not None:
            self.objectives = objectives
        if cost_matrices is not None:
            self.cost_matrices = cost_matrices
        if configuration is not None:
            self.configuration = configuration

    @property
    def vehicles(self):
        """Gets the vehicles of this Request.  # noqa: E501

        An array of vehicles that can be employed  # noqa: E501

        :return: The vehicles of this Request.  # noqa: E501
        :rtype: list[Vehicle]
        """
        return self._vehicles

    @vehicles.setter
    def vehicles(self, vehicles):
        """Sets the vehicles of this Request.

        An array of vehicles that can be employed  # noqa: E501

        :param vehicles: The vehicles of this Request.  # noqa: E501
        :type: list[Vehicle]
        """

        self._vehicles = vehicles

    @property
    def vehicle_types(self):
        """Gets the vehicle_types of this Request.  # noqa: E501

        An array of vehicle types  # noqa: E501

        :return: The vehicle_types of this Request.  # noqa: E501
        :rtype: list[VehicleType]
        """
        return self._vehicle_types

    @vehicle_types.setter
    def vehicle_types(self, vehicle_types):
        """Sets the vehicle_types of this Request.

        An array of vehicle types  # noqa: E501

        :param vehicle_types: The vehicle_types of this Request.  # noqa: E501
        :type: list[VehicleType]
        """

        self._vehicle_types = vehicle_types

    @property
    def services(self):
        """Gets the services of this Request.  # noqa: E501

        An array of services  # noqa: E501

        :return: The services of this Request.  # noqa: E501
        :rtype: list[Service]
        """
        return self._services

    @services.setter
    def services(self, services):
        """Sets the services of this Request.

        An array of services  # noqa: E501

        :param services: The services of this Request.  # noqa: E501
        :type: list[Service]
        """

        self._services = services

    @property
    def shipments(self):
        """Gets the shipments of this Request.  # noqa: E501

        An array of shipments  # noqa: E501

        :return: The shipments of this Request.  # noqa: E501
        :rtype: list[Shipment]
        """
        return self._shipments

    @shipments.setter
    def shipments(self, shipments):
        """Sets the shipments of this Request.

        An array of shipments  # noqa: E501

        :param shipments: The shipments of this Request.  # noqa: E501
        :type: list[Shipment]
        """

        self._shipments = shipments

    @property
    def relations(self):
        """Gets the relations of this Request.  # noqa: E501

        An array of relations  # noqa: E501

        :return: The relations of this Request.  # noqa: E501
        :rtype: list[Relation]
        """
        return self._relations

    @relations.setter
    def relations(self, relations):
        """Sets the relations of this Request.

        An array of relations  # noqa: E501

        :param relations: The relations of this Request.  # noqa: E501
        :type: list[Relation]
        """

        self._relations = relations

    @property
    def objectives(self):
        """Gets the objectives of this Request.  # noqa: E501

        An array of objectives  # noqa: E501

        :return: The objectives of this Request.  # noqa: E501
        :rtype: list[Objective]
        """
        return self._objectives

    @objectives.setter
    def objectives(self, objectives):
        """Sets the objectives of this Request.

        An array of objectives  # noqa: E501

        :param objectives: The objectives of this Request.  # noqa: E501
        :type: list[Objective]
        """

        self._objectives = objectives

    @property
    def cost_matrices(self):
        """Gets the cost_matrices of this Request.  # noqa: E501

        An array of cost matrices  # noqa: E501

        :return: The cost_matrices of this Request.  # noqa: E501
        :rtype: list[CostMatrix]
        """
        return self._cost_matrices

    @cost_matrices.setter
    def cost_matrices(self, cost_matrices):
        """Sets the cost_matrices of this Request.

        An array of cost matrices  # noqa: E501

        :param cost_matrices: The cost_matrices of this Request.  # noqa: E501
        :type: list[CostMatrix]
        """

        self._cost_matrices = cost_matrices

    @property
    def configuration(self):
        """Gets the configuration of this Request.  # noqa: E501


        :return: The configuration of this Request.  # noqa: E501
        :rtype: Configuration
        """
        return self._configuration

    @configuration.setter
    def configuration(self, configuration):
        """Sets the configuration of this Request.


        :param configuration: The configuration of this Request.  # noqa: E501
        :type: Configuration
        """

        self._configuration = configuration

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, Request):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other

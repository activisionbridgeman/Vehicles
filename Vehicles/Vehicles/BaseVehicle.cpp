#pragma once
#include <iostream>

// Base vehicle class that vehicles can derive from
class BaseVehicle {
public:
	void drive() {};
    float weight; // in pounds
	float topSpeed; // in miles/hour
	void calculateTravelTime (float miles) {}
};
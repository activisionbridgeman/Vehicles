#include "BaseVehicle.cpp"
#include <iostream>

// Airplane class derived from BaseVehicle
class Airplane : public BaseVehicle {
public:
	void drive() {
		std::cout << "The airplane flew into a wormhole.\n";
	}
	float altitude; // in miles
	float topSpeed = 500; // in miles/hour
	void calculateTravelTime(float miles)
	{
		std::cout << "At top speed, the airplane will take " << miles / topSpeed << " hours to reach its destination.\n";
	}
};
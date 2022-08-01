#include "BaseVehicle.cpp"
#include <iostream>

// Car class derived from BaseVehicle
class Car : public BaseVehicle {
public:
	void drive() {
		std::cout << "The car drove into a lake.\n";
	}
	std::string color;
	float topSpeed = 70; // in miles/hour
	void calculateTravelTime(float miles)
	{
		std::cout << "At top speed, the car will take " << miles / topSpeed << " hours to reach its destination.\n";
	}
};
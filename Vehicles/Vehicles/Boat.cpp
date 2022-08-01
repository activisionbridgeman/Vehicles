#include "BaseVehicle.cpp"
#include <iostream>

// Boat class derived from BaseVehicle
class Boat : public BaseVehicle {
public:
	void drive() {
		std::cout << "The boat rammed into an iceberg.\n";
	}
	bool hasSail;
	float topSpeed = 30; // in miles/hour
	void calculateTravelTime(float miles)
	{
		std::cout << "At top speed, the boat will take " << miles / topSpeed << " hours to reach its destination.\n";
	}
};
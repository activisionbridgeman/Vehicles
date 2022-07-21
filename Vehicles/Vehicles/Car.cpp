#include "BaseVehicle.cpp"

class Car : BaseVehicle {
public:
	void drive() {
		std::cout << "The car drove into a lake.\n";
	}
};
#include "BaseVehicle.cpp"

class Boat : BaseVehicle {
public:
	void drive() {
		std::cout << "The boat rammed into an iceberg.\n";
	}
};
#include "BaseVehicle.cpp"

class Airplane : BaseVehicle {
public:
	void drive() {
		std::cout << "The plane flew into a wormhole.\n";
	}
};
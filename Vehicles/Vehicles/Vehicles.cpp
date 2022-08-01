// Vehicles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write and print out data for 3 different types of vehicles (plane, car, and boat)
//

#include <iostream>
#include "Airplane.cpp"
#include "Car.cpp"
#include "Boat.cpp"

int main()
{
    Airplane* airplane = new Airplane();
    airplane->altitude = 6;
    airplane->weight = 50000;
    airplane->calculateTravelTime(1000);
    airplane->drive();

    std::cout << "\n";

    Car* car = new Car();
    car->color = "blue";
    car->weight = 3000;
    car->calculateTravelTime(50);
    car->drive();

    std::cout << "\n";

    Boat* boat = new Boat();
    boat->hasSail = true;
    boat->weight = 2000;
    boat->calculateTravelTime(200);
    boat->drive();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

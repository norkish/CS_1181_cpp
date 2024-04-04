#include <iostream>

#include "car.h"

using namespace std;

int main() {

    // Car myCar = {0.0, 23.1}; // creating object without constructor
    Car myCar(23.1);
    // Car myCar; // Default constructor

    cout << "Fuel: " << myCar.fuelReading << endl;
    myCar.refuel();
    cout << "Fuel: " << myCar.fuelReading << endl;

    cout << "Odo reading: " << myCar.odoReading << endl;
    myCar.drive(350.2);
    cout << "Odo reading: " << myCar.odoReading << endl;

    return 0;
}

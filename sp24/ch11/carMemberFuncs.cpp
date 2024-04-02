#include <iostream>

using namespace std;

/*
 * in gallons
 */
const double MAX_FUEL = 35.7;

// Write a program that creates a car structure with instance attributes:
//odometerReading
//fuelReading
//speed
struct Car {
    /*
     * odometer reading in miles
     */
    double odoReading;

    /*
     * fuel in gallons
     */
    double fuelReading;

    void refuel() {
        // implicitly referencing the fuelReading attribute of "this" Car object
        // this->fuelReading = MAX_FUEL;
        fuelReading = MAX_FUEL;
    }

    void drive(double milesDriven) {
        // the following 2 lines are equivalent
        // this->odoReading += milesDriven;
        odoReading += milesDriven;
    }
};

//Write non-member functions:
void refuel(Car & carToRefuel) {
    carToRefuel.fuelReading = MAX_FUEL;
}

void drive(Car & carToDrive, double milesDriven) {
    carToDrive.odoReading += milesDriven;
}

int main() {
    Car myCar = {0.0, 23.1};

    cout << "Fuel: " << myCar.fuelReading << endl;
//    refuel(myCar);
    myCar.refuel();
    cout << "Fuel: " << myCar.fuelReading << endl;

    cout << "Odo reading: " << myCar.odoReading << endl;
//    drive(myCar, 350.2);
    myCar.drive(350.2);
    cout << "Odo reading: " << myCar.odoReading << endl;

    return 0;
}

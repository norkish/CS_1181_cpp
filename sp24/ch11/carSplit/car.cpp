//
// Created by Paul Bodily on 4/4/24.
//

#include "car.h"

Car::Car(double _fuelReading) {
    fuelReading = _fuelReading;
    odoReading = 0.0;
}

Car::Car() {
    fuelReading = 0.0;
    odoReading = 0.0;
}

void Car::refuel() {
    fuelReading = MAX_FUEL;
}

void Car::drive(double milesDriven) {
    odoReading += milesDriven;
}

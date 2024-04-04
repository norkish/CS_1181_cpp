//
// Created by Paul Bodily on 4/4/24.
//

#ifndef CAR_CAR_H
#define CAR_CAR_H

const double MAX_FUEL = 35.7;

struct Car {
    double odoReading;
    double fuelReading;

    Car(double _fuelReading);
    Car();

    void refuel();
    void drive(double milesDriven);
};


#endif //CAR_CAR_H

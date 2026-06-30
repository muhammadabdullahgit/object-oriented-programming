// q2.h
#ifndef _Q2_H
#define _Q2_H

#include <string>

using namespace std;

struct Car {
    string licensePlate;
    string make;
    string model;
    int parkingLocation;

    Car();
    // Constructor
    Car(string licensePlate, string make, string model, int parkingLocation);

    // Destructor
    ~Car();
};

Car addCar(string licensePlate, string make, string model, int parkingLocation);

void deleteCar(Car &car);

void printCarDetails(const Car &car);

void checkCarParkingLocation(const Car &car);
void q2();
#endif

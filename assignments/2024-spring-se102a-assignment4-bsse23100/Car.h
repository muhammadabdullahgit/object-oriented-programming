//
// Created by Dell on 22/02/2024.
//
#include <iostream>
#include <string>

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CAR_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CAR_H

class Car {
    string make;
    string model;
    string licensePlate;
    bool available;
public:
    Car();

    Car(string carMake, string carModel, string carLicensePlate);

    string getMake();

    string getModel();

    string getCarLicensePlate();

    bool isAvailable();

    void rentCar();

    void returnCar();

    Car operator=(Car &other);
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CAR_H

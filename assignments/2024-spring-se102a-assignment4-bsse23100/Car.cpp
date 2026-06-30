//
// Created by Dell on 22/02/2024.
//

#include "Car.h"

Car::Car() {
    make = "";
    model = "";
    licensePlate = "";
    available = true;
}

Car::Car(string carMake, string carModel, string carLicensePlate) {
    make = carMake;
    model = carModel;
    licensePlate = carLicensePlate;
    available = true;

}

string Car::getMake() {
    return make;
}

string Car::getModel() {
    return model;
}

string Car::getCarLicensePlate() {
    return licensePlate;
}

bool Car::isAvailable() {
    return available;
}

void Car::rentCar() {
    if (!available) {
        cout << "car is not available" << endl;
    } else {
        available = false;
        cout << "car is given on rent" << endl;
    }
}

void Car::returnCar() {
    if (!available) {
        available = true;
        cout << "car is available for rent again" << endl;
    }
}

Car Car::operator=(Car &other) {
    if (this != &other) {
        make = other.make;
        model = other.model;
        licensePlate = other.licensePlate;
        available = other.available;
    }
    return *this;
}
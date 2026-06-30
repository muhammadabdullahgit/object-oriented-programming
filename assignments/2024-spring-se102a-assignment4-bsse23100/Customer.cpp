//
// Created by Dell on 22/02/2024.
//

#include "Customer.h"

Customer::Customer() {
    name = "";
    rentedCarCount = 0;
}

Customer::Customer(string customerName) {
    name = customerName;
}

string Customer::displayRentedCars() {
    string display;
    for (int i = 0; i < MAX_CARS; ++i) {
        if (rentedCars[i]->getMake() != "") {
            if (rentedCars[i]->isAvailable()) {
                display= rentedCars[i]->getMake() + " " + rentedCars[i]->getModel() + " (License Plate: " +
                         rentedCars[i]->getCarLicensePlate() + ")";
                return display;
            }
        }
    }
    return "";
}

int Customer::getCount() {
    return rentedCarCount;
}

string Customer::getName() {
    return name;
}

void Customer::rentCar(Car &car) {
    if (rentedCarCount < MAX_CARS) {
        rentedCarCount += 1;
        rentedCars[rentedCarCount] = &car;
        car.rentCar();
    } else {
        cout << "car is not not available for rent" << endl;
    }
}

void Customer::returnCar(Car &car) {
    for (int i = 0; i < rentedCarCount; ++i) {
        if (rentedCars[i] == &car) {
            car.returnCar();
            if (rentedCars[i]->isAvailable()) {
                rentedCarCount -= 1;
                return;
            } else {
                cout << "car is not returned" << endl;
                return;
            }
        }
    }
}

Customer Customer::operator=(Customer &other) {
    if (this != &other) {
        name = other.name;
        rentedCarCount = other.rentedCarCount;
        for (int i = 0; i < rentedCarCount; ++i) {
            this->rentedCars[i] = other.rentedCars[i];
        }
    }
    return *this;
}

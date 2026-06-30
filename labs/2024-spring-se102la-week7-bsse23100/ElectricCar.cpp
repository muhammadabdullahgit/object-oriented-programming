//
// Created by Dell on 11/03/2024.
//

#include "ElectricCar.h"

ElectricCar::ElectricCar(int batteryCapacity) {
    this->batteryCapacity = batteryCapacity;
}

ElectricCar::~ElectricCar() {

}

double ElectricCar::calculateMileage() const {
    double mileage;
    mileage = batteryCapacity / 10.0;
    return mileage;
}

ostream &ElectricCar::printDetails(ostream &os) const {
    os << "ElectricCar - Engine CC: " << engineCC;
    os << ", Horsepower: " << horsepower;
    return os;
}
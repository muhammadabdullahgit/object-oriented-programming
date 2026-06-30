//
// Created by Dell on 11/03/2024.
//

#include "HybridCar.h"

HybridCar::HybridCar(int engineCC, int horsepower, int batteryCapacity) {
    this->engineCC = engineCC;
    this->horsepower = horsepower;
    this->batteryCapacity = batteryCapacity;
}

HybridCar::~HybridCar() {
}

double HybridCar::calculateMileage() const {
    double mileage;
    mileage = ((engineCC) / 100) + (horsepower / 50) + (batteryCapacity / 15);
    return mileage;
}

ostream &HybridCar::printDetails(ostream &os) const {
    os << "HybridCar - Engine CC: " << engineCC;
    os << ", Horsepower: " << horsepower;
    return os;
}
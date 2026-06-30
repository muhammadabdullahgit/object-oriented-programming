//
// Created by Dell on 11/03/2024.
//

#include "SportsCar.h"

SportsCar::SportsCar(int engineCC, int horsepower) {
    this->engineCC = engineCC;
    this->horsepower = horsepower;
}

SportsCar::~SportsCar() {

}

double SportsCar::calculateMileage() const {
    double mileage;
    mileage = ((engineCC) / 120) + (horsepower / 50);
    return mileage;
}

ostream &SportsCar::printDetails(ostream &os) const {
    os << "SportsCar - Engine CC: " << engineCC;
    os << ", Horsepower: " << horsepower;
    return os;
}
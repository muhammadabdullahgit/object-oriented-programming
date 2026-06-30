//
// Created by Dell on 11/03/2024.
//

#include "SUV.h"

SUV::SUV(int engineCC, int horsepower) {
    this->engineCC = engineCC;
    this->horsepower = horsepower;
}

SUV::~SUV() {

}

double SUV::calculateMileage() const {
    double mileage;
    mileage = ((engineCC) / 80) + (horsepower / 40);
    return mileage;
}

ostream &SUV::printDetails(ostream &os) const {
    os << "SUV - Engine CC: " << engineCC;
    os << ", Horsepower: " << horsepower;
    return os;
}
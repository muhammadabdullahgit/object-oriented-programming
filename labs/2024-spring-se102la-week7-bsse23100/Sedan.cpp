//
// Created by Dell on 11/03/2024.
//

#include "Sedan.h"

Sedan::Sedan(int engineCC, int horsepower) {
    this->engineCC = engineCC;
    this->horsepower = horsepower;
}

Sedan::~Sedan() {

}

double Sedan::calculateMileage() const {
    double mileage;
    mileage = ((engineCC) / 100) + (horsepower / 50);
    return mileage;
}

ostream &Sedan::printDetails(ostream &os) const {
    os << "Sedan - Engine CC: " << engineCC;
    os << ", Horsepower: " << horsepower;
    return os;
}
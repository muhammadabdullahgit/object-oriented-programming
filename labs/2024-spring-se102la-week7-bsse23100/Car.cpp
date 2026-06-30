//
// Created by Dell on 11/03/2024.
//

#include "Car.h"

Car::Car() {

}

Car::Car(int engineCC, int horsepower) {
    this->engineCC = engineCC;
    this->horsepower = horsepower;
}

Car::~Car() {

}

//virtual double Car::calculateMileage() const = 0;
ostream &Car::printDetails(ostream &os) const {
    os << "Car - Engine CC: " << engineCC;
    os << ", Horsepower: " << horsepower << endl;
    return os;
}

ostream &operator<<(ostream &os, const Car &car) {
    return car.printDetails(os);
}

int Car::getEngineCC() const {
    return engineCC;
}

int Car::getHorsepower() const {
    return horsepower;
}

bool Car::compareMileage(const Car &other) const {
    return false;
}

bool Car::operator<(const Car &other) const {
    if (engineCC < other.engineCC) {
        if (horsepower < other.horsepower) {
            return true;
        }
    }
    return false;
}

bool Car::operator>(const Car &other) const {
    if (engineCC > other.engineCC) {
        if (horsepower > other.horsepower) {
            return true;
        }
    }
    return false;
}

bool Car::operator==(const Car &other) const {
    if (engineCC == other.engineCC) {
        if (horsepower == other.horsepower) {
            return true;
        }
    }
    return false;
}

bool Car::operator!=(const Car &other) const {
    if (engineCC != other.engineCC) {
        if (horsepower != other.horsepower) {
            return true;
        }
    }
    return false;
}
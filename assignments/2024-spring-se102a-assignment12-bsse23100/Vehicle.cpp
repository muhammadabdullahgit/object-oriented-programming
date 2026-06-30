//
// Created by Dell on 12/05/2024.
//

#include "Vehicle.h"

Vehicle::Vehicle() {}

Vehicle::Vehicle(string id, bool checkPeakHour) {
    this->id = id;
    this->checkPeakHour = checkPeakHour;
}

string Vehicle::getId() {
    return id;
}

bool Vehicle::getCheckPeakHour() {
    return checkPeakHour;
}
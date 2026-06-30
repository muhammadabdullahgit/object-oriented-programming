//
// Created by Dell on 12/05/2024.
//

#include "Cars.h"

Cars::Cars() {}

Cars::Cars(string id, bool checkPeakHour) {
    this->id = id;
    this->checkPeakHour = checkPeakHour;
}

string Cars::getId() {
    return id;
}

bool Cars::getCheckPeakHour() {
    return checkPeakHour;
}

double Cars::calculateTollTax(double distance, bool check) {
    double tax;
    if (check) {
        tax = 30 * distance;
    } else {
        tax = 20 * distance;
    }
    return tax;
}
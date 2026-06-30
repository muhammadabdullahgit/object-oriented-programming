//
// Created by Dell on 12/05/2024.
//

#include "Buses.h"

Buses::Buses() {}

Buses::Buses(string id, bool checkPeakHour) {
    this->id = id;
    this->checkPeakHour = checkPeakHour;
}

string Buses::getId() {
    return id;
}

bool Buses::getCheckPeakHour() {
    return checkPeakHour;
}

double Buses::calculateTollTax(double distance, bool check) {
    double tax;
    if (check) {
        tax = 40 * distance;
    } else {
        tax = 30 * distance;
    }
    return tax;
}
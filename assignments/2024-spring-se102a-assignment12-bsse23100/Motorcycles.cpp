//
// Created by Dell on 12/05/2024.
//

#include "Motorcycles.h"

Motorcycles::Motorcycles() {}

Motorcycles::Motorcycles(string id, bool checkPeakHour) {
    this->id = id;
    this->checkPeakHour = checkPeakHour;
}

string Motorcycles::getId() {
    return id;
}

bool Motorcycles::getCheckPeakHour() {
    return checkPeakHour;
}

double Motorcycles::calculateTollTax(double distance, bool check) {
    double tax;
    if (check) {
        tax = 20 * distance;
    } else {
        tax = 10 * distance;
    }
    return tax;
}
//
// Created by Dell on 12/05/2024.
//

#include "Trucks.h"

Trucks::Trucks() {}

Trucks::Trucks(string id, bool checkPeakHour) {
    this->id = id;
    this->checkPeakHour = checkPeakHour;
}

string Trucks::getId() {
    return id;
}

bool Trucks::getCheckPeakHour() {
    return checkPeakHour;
}

double Trucks::calculateTollTax(double distance, bool check) {
    double tax;
    if (check) {
        tax = 50 * distance;
    } else {
        tax = 40 * distance;
    }
    return tax;
}
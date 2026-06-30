//
// Created by Dell on 12/05/2024.
//
#include <iostream>
#include "Vehicle.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_BUSES_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_BUSES_H


class Buses : public Vehicle {
public:
    Buses();

    Buses(string id, bool checkPeakHour);

    string getId();

    bool getCheckPeakHour();

    double calculateTollTax(double distance, bool check) override;
};


#endif //INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_BUSES_H

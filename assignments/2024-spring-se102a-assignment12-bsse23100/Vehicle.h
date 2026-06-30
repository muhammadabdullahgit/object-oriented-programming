//
// Created by Dell on 12/05/2024.
//
#include <iostream>
#include <vector>

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_VEHICLE_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_VEHICLE_H


class Vehicle {
protected:
    string id;
    bool checkPeakHour;
public:
    Vehicle();

    Vehicle(string id, bool checkPeakHour);

    string getId();

    bool getCheckPeakHour();

    virtual double calculateTollTax(double distance, bool check) = 0;
};


#endif //INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_VEHICLE_H

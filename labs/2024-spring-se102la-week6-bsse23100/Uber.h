//
// Created by Dell on 04/03/2024.
//
#include <iostream>
#include "Driver.h"
#include "vector"

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK6_BSSE23100_UBER_H
#define INC_2024_SPRING_SE102LA_WEEK6_BSSE23100_UBER_H

class Uber {
    string companyName;
    Driver *drivers;
    Ride *tasks;
    int driverCount;
    int taskCount;
    int driverCapacity;
    int taskCapacity;
public:
    Uber();

    Uber(const string &companyName);

    ~Uber();

    void addDriver(const Driver &driver);

    void requestRide(const Ride &ride);

    Driver getDriverByID(int driverID) const;

    void displayAllDrivers() const;

    void displayAllRides() const;
};

#endif //INC_2024_SPRING_SE102LA_WEEK6_BSSE23100_UBER_H

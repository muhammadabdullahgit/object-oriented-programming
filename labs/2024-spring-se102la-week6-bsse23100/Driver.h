//
// Created by Dell on 04/03/2024.
//
#include <iostream>
#include "Ride.h"
#include "vector"

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK6_BSSE23100_DRIVER_H
#define INC_2024_SPRING_SE102LA_WEEK6_BSSE23100_DRIVER_H

class Driver {
    int driverID;
    string name;
    double hourlyRate;
    Ride *tasksCompleted;
    int tasksCompletedCount;
    int tasksCompletedCapacity;
    int ridesCompletedCount;
    double additionalBonus;
public:
    Driver();

    Driver(int driverID, const string &name, double hourlyRate);

    ~Driver();

    int getDriverID() const;

    string getName();

    void displayProfile() const;

    void completeRide(const Ride &ride);

    double calculateEarnings() const;

    void completeRideBonus(double bonusAmount);

    int getRidesCompletedCount() const;

    double getTotalEarnings() const;

    double getOneDayEarnings(int hoursWorked) const;

    friend ostream &operator<<(ostream &os, const Driver &driver);
};

#endif //INC_2024_SPRING_SE102LA_WEEK6_BSSE23100_DRIVER_H

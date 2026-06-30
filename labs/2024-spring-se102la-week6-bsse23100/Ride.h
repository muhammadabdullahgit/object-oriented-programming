//
// Created by Dell on 04/03/2024.
//
#include <iostream>

using namespace std;

#ifndef INC_2024_SPRING_SE102LA_WEEK6_BSSE23100_RIDE_H
#define INC_2024_SPRING_SE102LA_WEEK6_BSSE23100_RIDE_H

class Ride {
    int rideID;
    string passengerName;
    string startLocation;
    string endLocation;
    double fare;
public:
    Ride();

    Ride(int rideID, string passengerName, string startLocation, string endLocation, double fare);

    double calculateFare() const;

    int getRideID();

    string getPassengerName();

    friend ostream &operator<<(ostream &os, const Ride &ride);
};

ostream &operator<<(ostream &os, const Ride &ride);

#endif //INC_2024_SPRING_SE102LA_WEEK6_BSSE23100_RIDE_H

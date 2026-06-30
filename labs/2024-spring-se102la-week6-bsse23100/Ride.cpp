//
// Created by Dell on 04/03/2024.
//

#include "Ride.h"

Ride::Ride() {

}

Ride::Ride(int rideID, string passengerName, string startLocation, string endLocation, double fare) {
    this->rideID = rideID;
    this->passengerName = passengerName;
    this->startLocation = startLocation;
    this->endLocation = endLocation;
    this->fare = fare;
}

double Ride::calculateFare() const {
    return fare;
}

int Ride::getRideID(){
    return rideID;
}

string Ride::getPassengerName(){
    return passengerName;
}

ostream &operator<<(ostream &os, const Ride &ride) {
    os << "ride id =" << ride.rideID;
    os << "passenger name =" << ride.passengerName;
    os << "start location =" << ride.startLocation;
    os << "end location =" << ride.endLocation;
    os << "fare =" << ride.fare;
    return os;
}
//
// Created by Dell on 04/03/2024.
//
#include "Uber.h"

Uber::Uber() {

}

Uber::Uber(const string &companyName) {
    this->companyName = companyName;
    driverCount=0;
    taskCount=0;
    driverCapacity=10;
    taskCapacity=10;
    drivers=new Driver[driverCapacity];
    tasks=new Ride[taskCapacity];
}

Uber::~Uber() {
}

void Uber::addDriver(const Driver &driver) {
   if(driverCount>=driverCapacity){
       cout<<"driver capacity is full"<<endl;
       return;
   }
   drivers[driverCount++]=driver;
}

void Uber::requestRide(const Ride &ride) {
   if(taskCount>=taskCapacity){
       cout<<"task capacity is full"<<endl;
       return;
   }
   tasks[taskCount++]=ride;
}

Driver Uber::getDriverByID(int driverID) const {
    for (int i = 0; i < driverCount; ++i) {
        if (drivers[i].getDriverID() == driverID) {
            return drivers[i];
        }
    }
    cout<<"driver not found"<<endl;
    return Driver(0, "", 0.0);
}

void Uber::displayAllDrivers() const {
    for (int i = 0; i < driverCount; ++i) {
        cout << "Driver ID: " << drivers[i].getDriverID() << ", Name: " << drivers[i].getName() << endl;
    }
}

void Uber::displayAllRides() const {
    for (int i = 0; i < taskCount; ++i) {
        cout << "Ride ID: " << tasks[i].getRideID() << ", Passenger: " << tasks[i].getPassengerName() <<endl;

    }
}
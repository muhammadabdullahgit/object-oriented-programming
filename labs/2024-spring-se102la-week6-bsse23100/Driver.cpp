//
// Created by Dell on 04/03/2024.
//

#include "Driver.h"

Driver::Driver() {
}

Driver::Driver(int driverID, const string &name, double hourlyRate) {
    this->driverID = driverID;
    this->name = name;
    this->hourlyRate = hourlyRate;
    tasksCompletedCapacity=10;
    tasksCompletedCount=0;
    additionalBonus=0.0;
    ridesCompletedCount=0;
    tasksCompleted=new Ride[tasksCompletedCapacity];
}

Driver::~Driver() {

}

int Driver::getDriverID() const {
    return driverID;
}

string Driver::getName(){
    return name;
}

void Driver::displayProfile() const {
    cout << "driver id =" << driverID;
    cout << "name =" << name;
    cout << "hourly rate =" << hourlyRate;
    cout << "total rides completed =" << ridesCompletedCount;
    cout << "additional bonus =" << additionalBonus;
    cout << "Total Earnings: $" << getTotalEarnings()<<endl;
    cout << "One-Day Earnings (8 hours): $" << getOneDayEarnings(8)<<endl;
}

void Driver::completeRide(const Ride &ride) {
    if(tasksCompletedCount>=tasksCompletedCapacity){
        cout<<"capacity is full"<<endl;
        return;
    }
    tasksCompleted[tasksCompletedCount++]=ride;
    ridesCompletedCount++;
}

double Driver::calculateEarnings() const {
    double totalRidesFare=0.0;
    for (int i = 0; i < tasksCompletedCount; ++i) {
        totalRidesFare+=tasksCompleted[i].calculateFare();
    }
    return totalRidesFare;
}

void Driver::completeRideBonus(double bonusAmount) {
    additionalBonus += bonusAmount;
}

int Driver::getRidesCompletedCount() const {
    return ridesCompletedCount;
}

double Driver::getTotalEarnings() const {
   // return (ridesCompletedCount * hourlyRate)+ additionalBonus;
    return calculateEarnings()+additionalBonus;
}

double Driver::getOneDayEarnings(int hoursWorked) const {
    return ((hoursWorked * hourlyRate)+(calculateEarnings()));
}

ostream &operator<<(ostream &os, const Driver &driver) {
    os << " driver ID =" << driver.driverID;
    os << " name =" << driver.name;
    os << " hourly rate =" << driver.hourlyRate;
    os << "tasks completed =" << driver.tasksCompleted;
    os << " tasks completed count =" << driver.tasksCompletedCount;
    os << " tasks completed capacity =" << driver.tasksCompletedCapacity;
    os << " rides completed count =" << driver.ridesCompletedCount;
    os << " additional bonus =" << driver.additionalBonus;
    return os;
}
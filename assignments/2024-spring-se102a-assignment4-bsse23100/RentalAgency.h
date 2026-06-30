//
// Created by Dell on 22/02/2024.
//
#include <iostream>
#include <string>
#include <sstream>
#include "Car.h"
#include "Customer.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_RENTALAGENCY_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_RENTALAGENCY_H
const int MAX_CUSTOMERS = 50;

class RentalAgency {
    Car Cars[MAX_CARS];
    Customer Customers[MAX_CUSTOMERS];
    int CarCount;
    int CustomerCount;
public:
    RentalAgency();

    void addCar(string carMake, string carModel, string carLicensePlate);

    void addCustomer(string customerName);

    void rentCar(string licensePlate, string customerName);

    void returnCar(string licensePlate, string customerName);

    int getCustomerCount();

    int getAvailableCarCount();

    int getCustomerRentedCarCount(string CustomerName);

    void displayAvailableCars(ostringstream &output);

    void displayRentedCarsForCustomer(string CustomerName, ostringstream &output);

    RentalAgency operator=(RentalAgency &other);
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_RENTALAGENCY_H

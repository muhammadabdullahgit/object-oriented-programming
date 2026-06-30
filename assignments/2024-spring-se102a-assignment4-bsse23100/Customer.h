//
// Created by Dell on 22/02/2024.
//
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CUSTOMER_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CUSTOMER_H
const int MAX_CARS = 50;

class Customer {
    string name;
    Car *rentedCars[MAX_CARS];
    int rentedCarCount;
public:
    Customer();

    Customer(string customerName);

    string displayRentedCars();

    int getCount();

    string getName();

    void rentCar(Car &car);

    void returnCar(Car &car);

    Customer operator=(Customer &other);
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CUSTOMER_H

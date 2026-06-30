//
// Created by Dell on 11/03/2024.
//
#include <iostream>
#include "Car.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK7_BSSE23100_ELECTRICCAR_H
#define INC_2024_SPRING_SE102LA_WEEK7_BSSE23100_ELECTRICCAR_H

class ElectricCar : public Car {
    int batteryCapacity;
public:
    ElectricCar(int batteryCapacity);

    virtual ~ElectricCar();

    virtual double calculateMileage() const override;

    virtual ostream &printDetails(ostream &os) const override;


};

#endif //INC_2024_SPRING_SE102LA_WEEK7_BSSE23100_ELECTRICCAR_H

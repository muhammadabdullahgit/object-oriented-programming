//
// Created by Dell on 11/03/2024.
//
#include <iostream>
#include "Car.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK7_BSSE23100_SEDAN_H
#define INC_2024_SPRING_SE102LA_WEEK7_BSSE23100_SEDAN_H

class Sedan : public Car {
public:
    Sedan(int engineCC, int horsepower);

    virtual ~Sedan();

    virtual double calculateMileage() const override;

    virtual ostream &printDetails(ostream &os) const override;

};

#endif //INC_2024_SPRING_SE102LA_WEEK7_BSSE23100_SEDAN_H

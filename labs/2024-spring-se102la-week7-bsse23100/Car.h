//
// Created by Dell on 11/03/2024.
//
#include <iostream>
#include <sstream>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK7_BSSE23100_CAR_H
#define INC_2024_SPRING_SE102LA_WEEK7_BSSE23100_CAR_H

class Car {
protected:
    int engineCC;
    int horsepower;
public:
    Car();

    Car(int engineCC, int horsepower);

    virtual ~Car();

    virtual double calculateMileage() const = 0;

    virtual ostream &printDetails(ostream &os) const;

    friend ostream &operator<<(ostream &os, const Car &car);

    int getEngineCC() const;

    int getHorsepower() const;

    virtual bool compareMileage(const Car &other) const;

    bool operator<(const Car &other) const;

    bool operator>(const Car &other) const;

    bool operator==(const Car &other) const;

    bool operator!=(const Car &other) const;

};

ostream &operator<<(ostream &os, const Car &car);

#endif //INC_2024_SPRING_SE102LA_WEEK7_BSSE23100_CAR_H

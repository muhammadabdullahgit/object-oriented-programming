//
// Created by Dell on 18/04/2024.
//
#include<iostream>
#include <vector>
//#include "Person.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_STAFF_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_STAFF_H

//  inheritance
class Staff {//: public Person {
protected:
    string name;
    int staffID;
    string area;
public:
    Staff();

    Staff(const string &_name, int _staffID, string _area);

    virtual void displayInfo() const;

    string getName();

    int getStaffID();

    string getArea();

    friend ostream &operator<<(ostream &abdullah, const Staff &other);

    friend istream &operator>>(istream &abdullah, Staff &other);

    ~Staff();

};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_STAFF_H

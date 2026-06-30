//
// Created by Dell on 01/04/2024.
//
#include <iostream>
using namespace std;
#include "Tenant.h"
#include "Employee.h"
#include "Visitor.h"
#include "Singleton.h"
#ifndef INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_CAR_H
#define INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_CAR_H


class Car {
public:
    Car();
    void parkTenant(Tenant& t);
    void parkEmp(Employee& v);
    void parkVisitor(Visitor& v);
};


#endif //INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_CAR_H

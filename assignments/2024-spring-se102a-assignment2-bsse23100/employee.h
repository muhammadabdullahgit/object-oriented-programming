#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include "address.h"
#include <string>

using namespace std;

struct Employee {
    string employeeID;
    string name;
    double salary;
    Address address; 

    Employee(string employeeID, string name, double salary, string street, string city, string state, string ZIP); // Constructor
    ~Employee(); 

    void updateSalary(double percentageIncrease);
    void printEmployeeInfo();
};

#endif

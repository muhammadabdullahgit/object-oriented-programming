//
// Created by Dell on 01/04/2024.
//
#include <iostream>
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_EMPLOYEE_H
#define INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_EMPLOYEE_H


class Employee {
    string empName;
    string carNum;
    int bikeNum;
public:
    Employee();
    Employee(string name, string num);
    Employee(string name, int num1);
    ~Employee();
};


#endif //INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_EMPLOYEE_H

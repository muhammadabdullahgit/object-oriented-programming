//
// Created by Dell on 15/04/2024.
//
#include <iostream>
#include <vector>
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK12_BSSE23100_EMPLOYEE_H
#define INC_2024_SPRING_SE102LA_WEEK12_BSSE23100_EMPLOYEE_H


class Employee {
    string name;
    string role;
public:
    Employee();
    Employee(string name, string role);
    void display();
};


#endif //INC_2024_SPRING_SE102LA_WEEK12_BSSE23100_EMPLOYEE_H

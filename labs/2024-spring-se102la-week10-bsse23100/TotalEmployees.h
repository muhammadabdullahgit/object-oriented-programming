//
// Created by Dell on 08/04/2024.
//
# include <iostream>

using namespace std;

#include <vector>
#include "Employee.h"

#ifndef INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_TOTALEMPLOYEES_H
#define INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_TOTALEMPLOYEES_H


class TotalEmployees {
    vector<Employee *> emp;
public:
    TotalEmployees();

    void addEmployee(Employee *employee);

    void removeEmployee(int id);

    void displayEmp();

    void markAttendance(int id, string date, bool status);

    void updateSalary(int id, double updatedSalary);
};


#endif //INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_TOTALEMPLOYEES_H

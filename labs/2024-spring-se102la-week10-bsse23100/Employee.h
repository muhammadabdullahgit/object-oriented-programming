//
// Created by Dell on 08/04/2024.
//
# include <iostream>

using namespace std;

#include <vector>

#ifndef INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_EMPLOYEE_H
#define INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_EMPLOYEE_H


class Employee {
protected:
    string name;
    int empId;
    string role;
    double salary;
    vector<bool> attendance;
    vector<string> attendanceDate;
public:
    Employee();

    Employee(string name, int id, string role, double salary);

    int getId();

    string getName();

    string getRole();

    void markAttendance(string date, bool attendanceStatus);

    void updateSalary(double updatedSalary);

    void display();

};


#endif //INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_EMPLOYEE_H

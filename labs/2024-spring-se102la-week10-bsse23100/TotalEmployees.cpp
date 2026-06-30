//
// Created by Dell on 08/04/2024.
//

#include "TotalEmployees.h"

TotalEmployees::TotalEmployees() {

}

void TotalEmployees::addEmployee(Employee *employee) {
    emp.push_back(employee);
}

void TotalEmployees::removeEmployee(int id) {
    for (auto employee = emp.begin(); employee != emp.end(); ++employee) {
        if ((*employee)->getId() == id) {
            delete *employee;
            emp.erase(employee);
            break;
        }
    }
}

void TotalEmployees::displayEmp() {
    for (auto employee: emp) {
        employee->display();
    }
}

void TotalEmployees::markAttendance(int id, string date, bool status) {
    for (auto employee: emp) {
        if (employee->getId() == id) {
            employee->markAttendance(date, status);
            break;
        }
    }
}

void TotalEmployees::updateSalary(int id, double updatedSalary) {
    for (auto employee: emp) {
        if (employee->getId() == id) {
            employee->updateSalary(updatedSalary);
            break;
        }
    }
}
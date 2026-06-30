#include "employee.h"
#include <iostream>

Employee::Employee(string employeeID, string name, double salary, string street, string city, string state, string ZIP)
    : employeeID(employeeID), name(name), salary(salary), address({ street, city, state, ZIP }) {
   
}

Employee::~Employee() {
    
}

void Employee::updateSalary(double percentageIncrease) {
    
}

void Employee::printEmployeeInfo() {
   
}

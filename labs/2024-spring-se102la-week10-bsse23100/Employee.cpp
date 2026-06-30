//
// Created by Dell on 08/04/2024.
//

#include "Employee.h"

Employee::Employee() {

}

Employee::Employee(string name, int id, string role, double salary) {
    this->name = name;
    this->empId = id;
    this->role = role;
    this->salary = salary;
    attendance.push_back(true);
    attendanceDate.push_back("new employee");
}

int Employee::getId() {
    return empId;
}

string Employee::getName() {
    return name;
}

string Employee::getRole() {
    return role;
}

void Employee::markAttendance(string date, bool attendanceStatus) {
    attendanceStatus = true;
    attendance.push_back(attendanceStatus);
    attendanceDate.push_back(date);
}

void Employee::updateSalary(double updatedSalary) {
    salary = updatedSalary;
}

void Employee::display() {
    cout << "name =" << name << endl;
    cout << "id =" << empId << endl;
    cout << "role =" << role << endl;
    cout << "salary =" << salary << endl;
    cout << "attendance =" << endl;
    for (int i = 0; i < attendanceDate.size(); ++i) {
        cout << "date =" << attendanceDate[i] << endl;
        cout << "status =" << (attendance[i] ? "present" : "absent") << endl;
    }
}

//
// Created by Dell on 18/04/2024.
//

#include "Staff.h"

Staff::Staff() {}

Staff::Staff(const string &_name, int _staffID, string _area) : name(_name), staffID(_staffID), area(_area) {}


void Staff::displayInfo() const {
    cout << "Name: " << name << ", Staff ID: " << staffID << " ,area: " << area << endl;
}

string Staff::getName() {
    return name;
}

int Staff::getStaffID() {
    return staffID;
}

string Staff::getArea() {
    return area;
}

Staff::~Staff() {

}

ostream &operator<<(ostream &abdullah, const Staff &other) {
    abdullah << "Name: " << other.name << endl;
    abdullah << "Staff ID: " << other.staffID << endl;
    abdullah << "Area: " << other.area << endl;
    return abdullah;
}

istream &operator>>(istream &abdullah, Staff &other) {
    cout << "enter Name: " << endl;
    abdullah >> other.name;
    cout << "enter Staff ID: " << endl;
    abdullah >> other.staffID;
    cout << "enter Area: " << endl;
    abdullah >> other.area;
    return abdullah;
}

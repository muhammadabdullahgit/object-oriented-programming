//
// Created by Dell on 01/03/2024.
//

#include "MainCourse.h"

MainCourse::MainCourse(string name, string description, double price) {
    this->name = name;
    this->description = description;
    this->price = price;

}

string MainCourse::displayDetails() {
    string display;
    display = "MainCourse: " + getName() + ", Description: " + description + ", Price: $" +
             to_string(getPrice()).substr(0, 5);
    return display;
}
//
// Created by Dell on 01/03/2024.
//

#include "Starter.h"

Starter::Starter(string name, string description, double price) {
    this->name = name;
    this->description = description;
    this->price = price;

}

string Starter::displayDetails() {
    string display;
    display = "Starter: " + getName() + ", Description: " + description + ", Price: $" +
             to_string(getPrice()).substr(0, 5);
    return display;
}
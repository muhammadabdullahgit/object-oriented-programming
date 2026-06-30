//
// Created by Dell on 01/03/2024.
//

#include "Dessert.h"

Dessert::Dessert(string name, string description, double price) {
    this->name = name;
    this->description = description;
    this->price = price;

}

string Dessert::displayDetails() {
    string display;
    display = "Dessert: " + getName() + ", Description: " + description + ", Price: $" +
             to_string(getPrice()).substr(0, 4);
    return display;
}
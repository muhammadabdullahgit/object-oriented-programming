//
// Created by Dell on 01/03/2024.
//

#include "Dish .h"

Dish::Dish() {
}

string Dish::getName() {
    return name;
}

double Dish::getPrice() {
    return price;
}

Dish::Dish(string name, double price) {
    this->name = name;
    this->price = price;
}

string Dish::displayDetails() {
    string display;
    display = "Combined: " + getName() + ", Price: $" +
              to_string(getPrice()).substr(0, 5);
    return display;
}

Dish Dish::operator+(const Dish &other) {
    Dish temp;
    temp.name = name + " + " + other.name;
    temp.price = price + other.price;
    return temp;
}

string printMenu(vector<Dish> order) {
    string display;
    double totalPrice=0.0;
    for (Dish& other:order) {
        display=display+other.displayDetails();
        totalPrice+=other.getPrice();
    }
    cout<<"total price: $"<<totalPrice<<endl;
    display=display+"total price: $"+ to_string(totalPrice).substr(0,5);
    return display;
}





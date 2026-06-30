//
// Created by Dell on 01/03/2024.
//
#include <iostream>
#include <vector>

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_DISH_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_DISH_H

class Dish {
protected:
    string name;
    double price;
public:
    Dish();

    Dish(string name, double price);

    string getName();

    double getPrice();

    string displayDetails();

    Dish operator+(const Dish &other);
};
string printMenu(vector<Dish> order);
#endif //INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_DISH_H

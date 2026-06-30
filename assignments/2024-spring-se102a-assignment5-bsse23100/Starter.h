//
// Created by Dell on 01/03/2024.
//
#include <iostream>
#include "Dish .h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_STARTER_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_STARTER_H

class Starter : public Dish {
public:
    string description;
public:
    Starter(string name, string description, double price);

    string displayDetails();
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_STARTER_H

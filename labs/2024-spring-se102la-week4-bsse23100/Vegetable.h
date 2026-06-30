//
// Created by Dell on 19/02/2024.
//
#include <iostream>
using namespace std;
#include "Food.h"
#ifndef INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_VEGETABLE_H
#define INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_VEGETABLE_H
class Vegetable:public Food {
public:
    string color;
    Vegetable(string name, int calories, string color);
    void printColor();
};
#endif //INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_VEGETABLE_H

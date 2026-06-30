//
// Created by Dell on 19/02/2024.
//
#include <iostream>
using namespace std;
#include"Food.h"
#ifndef INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_FRUIT_H
#define INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_FRUIT_H
class Fruit:public Food {
public:
    string taste;
    Fruit(string name, int calories, string taste);
    void printTaste();
};
#endif //INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_FRUIT_H

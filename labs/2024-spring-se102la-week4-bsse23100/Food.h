#include <iostream>
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_FOOD_H
#define INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_FOOD_H
class Food{
public:
    string name;
    int calories;
    Food();
    Food(string name,int color);
    void printInfo();
};

#endif //INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_FOOD_H

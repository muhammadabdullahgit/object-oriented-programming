# include "Animal.h"
# include <iostream>
using namespace std;

#ifndef INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_BIRD_H
#define INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_BIRD_H
class Bird:public Animal{
public:
    string featherColor;
    Bird(string n,int a,string f);
    void printFeatherColor();
};
#endif //INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_BIRD_H

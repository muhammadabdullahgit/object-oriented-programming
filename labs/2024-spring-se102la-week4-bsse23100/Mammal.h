# include "Animal.h"
# include <iostream>
using namespace std;

#ifndef INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_MAMMAL_H
#define INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_MAMMAL_H
class Mammal:public Animal{
public:
    string sound;
    Mammal(string n,int a,string s);
    void printSound();
};
#endif //INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_MAMMAL_H

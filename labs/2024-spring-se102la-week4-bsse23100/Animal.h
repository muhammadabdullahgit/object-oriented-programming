# include <iostream>

using namespace std;

#ifndef INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_ANIMAL_H
#define INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_ANIMAL_H
 class Animal{
 public:
     string name ;
     int age;
     Animal();
     Animal(string n,int a);
     void printInfo();
 };

#endif //INC_2024_SPRING_SE102LA_WEEK4_BSSE23100_ANIMAL_H

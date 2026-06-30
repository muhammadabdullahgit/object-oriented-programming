//
// Created by AAA on 4/18/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PERSON_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PERSON_H
#include <iostream>
using namespace std;
class Person {
    string name;
    int age;
public:
    Person();
    Person(const string& name,int age);
    string getName();
    void setNameAndAge();
    int getAge();
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PERSON_H

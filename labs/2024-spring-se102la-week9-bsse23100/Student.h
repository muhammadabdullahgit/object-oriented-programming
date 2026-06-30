//
// Created by Dell on 01/04/2024.
//
#include <iostream>
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_STUDENT_H
#define INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_STUDENT_H


class Student {
    string studentName;
    int bikeNum;
public:
    Student();
    Student(string name, int num);
    ~Student();
};


#endif //INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_STUDENT_H

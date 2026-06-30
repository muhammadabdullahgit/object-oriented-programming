//
// Created by Dell on 01/04/2024.
//
#include <iostream>
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_VISITOR_H
#define INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_VISITOR_H


class Visitor {
    string visitorName;
    string carNum;
    int bikeNum;
public:
    Visitor();
    Visitor(string name, string num);
    Visitor(string name, int num1);
    ~Visitor();
};


#endif //INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_VISITOR_H

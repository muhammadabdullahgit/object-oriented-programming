//
// Created by Dell on 08/03/2024.
//
#include <iostream>
#include "sstream"
#include "Number.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_LOGS_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_LOGS_H

class Logs {
    Number *number;
    int sizeOfNumbersArray;
public:
    Logs();

    void addNumber(Number number1);

    int size();

    void displayNumbers(ostringstream &oss);

    Number getNumber(int number1);
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_LOGS_H

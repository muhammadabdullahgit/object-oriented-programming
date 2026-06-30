//
// Created by Dell on 08/03/2024.
//
#include <iostream>
#include "Number.h"
#include "Complex.h"
#include "Logs.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_CALCULATOR_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_CALCULATOR_H

class Calculator {
    Logs *logs;
    Number number;
public:
    Calculator();

    Number add(Number num1, Number num2);

    Number subtract(Number num1, Number num2);

    Number multiply(Number num1, Number num2);

    Number divide(Number num1, Number num2);

    void addNumberToLogs(Logs &l, Number num);

    Number recallNumberFromLogs(Logs &l, int num);
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_CALCULATOR_H

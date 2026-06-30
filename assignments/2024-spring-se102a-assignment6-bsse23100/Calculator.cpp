//
// Created by Dell on 08/03/2024.
//

#include "Calculator.h"

Calculator::Calculator() {
    logs = nullptr;
    number = 0;
}

Number Calculator::add(Number num1, Number num2) {
    Number num3;
    num3 = num1 + num2;
    return num3;
}

Number Calculator::subtract(Number num1, Number num2) {
    Number num3;
    num3 = num1 - num2;
    return num3;
}

Number Calculator::multiply(Number num1, Number num2) {
    Number num3;
    num3 = num1 * num2;
    return num3;
}

Number Calculator::divide(Number num1, Number num2) {
    Number num3;
    num3 = num1 / num2;
    return num3;
}

void Calculator::addNumberToLogs(Logs &l, Number num) {
    if (!logs) {
        this->logs = &l;
    }
    logs->addNumber(num);
}

Number Calculator::recallNumberFromLogs(Logs &l, int num) {
    return l.getNumber(num);
}
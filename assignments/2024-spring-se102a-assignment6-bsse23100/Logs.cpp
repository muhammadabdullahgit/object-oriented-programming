//
// Created by Dell on 08/03/2024.
//
#include "Logs.h"

Logs::Logs() {
    number = nullptr;
    sizeOfNumbersArray = 0;
}

void Logs::addNumber(Number number1) {
    Number *arr = new Number[sizeOfNumbersArray + 1];
    for (int i = 0; i < sizeOfNumbersArray; ++i) {
        arr[i] = number[i];
    }
    arr[sizeOfNumbersArray] = number1;
    sizeOfNumbersArray++;
    if (!number) {
        delete[]number;
    }
    number = arr;
}

int Logs::size() {
    return sizeOfNumbersArray;
}

void Logs::displayNumbers(ostringstream &oss) {
    oss << "Previously entered numbers:\n";
    for (int i = 0; i < sizeOfNumbersArray; ++i) {
        oss << number[i].getValue() << "\n";
    }
}

Number Logs::getNumber(int number1) {
    return number[number1];
}
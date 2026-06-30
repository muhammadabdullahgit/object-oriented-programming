//
// Created by Dell on 08/03/2024.
//
#include <iostream>

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_NUMBER_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_NUMBER_H

class Number {
    double value;
public:
    Number();

    Number(double value);

    double getValue();

    Number operator+(Number &other);

    Number operator-(const Number &other);

    Number operator*(const Number &other);

    Number operator/(const Number &other);

    friend Number operator%(const Number &other, const Number &other1);

    friend Number operator++(Number &other, int);

    friend Number operator--(Number &other, int);

    bool operator==(const Number &other) const;
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_NUMBER_H

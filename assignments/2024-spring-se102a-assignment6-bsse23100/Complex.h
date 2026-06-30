//
// Created by Dell on 08/03/2024.
//
#include <iostream>
# include "Number.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_COMPLEX_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_COMPLEX_H

class Complex : public Number {
    double real;
    double imaginary;
public:
    Complex();

    Complex(double real, double imaginary);

    double getReal();

    double getImaginary();

    Complex operator+(Complex &other);

    Complex operator-(const Complex &other);

    Complex operator*(const Complex &other);

    Complex operator/(const Complex &other);

    bool operator==(const Complex &complex) const;
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT6_BSSE23100_COMPLEX_H

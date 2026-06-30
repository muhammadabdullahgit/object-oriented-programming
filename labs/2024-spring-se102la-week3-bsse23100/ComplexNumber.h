//
// Created by Dell on 12/02/2024.
//
#include <iostream>
using namespace std;

#ifndef INC_2024_SPRING_SE102LA_WEEK3_BSSE23100_COMPLEXNUMBER_H
#define INC_2024_SPRING_SE102LA_WEEK3_BSSE23100_COMPLEXNUMBER_H
class ComplexNumber{
    double real;
    double imaginary;
public:
    ComplexNumber();
    ComplexNumber(double x,double y);
    ComplexNumber(const ComplexNumber & a);
    void operator=(const ComplexNumber & a);
    ~ComplexNumber();
    double getReal();
    double getImaginary();
    ComplexNumber add(const ComplexNumber &a);
     void  display();

};
#endif //INC_2024_SPRING_SE102LA_WEEK3_BSSE23100_COMPLEXNUMBER_H

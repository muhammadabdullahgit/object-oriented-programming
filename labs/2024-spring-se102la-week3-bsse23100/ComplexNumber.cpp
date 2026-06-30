#include "ComplexNumber.h"

ComplexNumber::ComplexNumber() {
    real = 0.0;
    imaginary = 0.0;
}

ComplexNumber::ComplexNumber(double x, double y) {
    real = x;
    imaginary = y;
}

ComplexNumber::~ComplexNumber() {
}

ComplexNumber::ComplexNumber(const ComplexNumber &a) {
    real = a.real;
    imaginary = a.imaginary;
}

void ComplexNumber::operator=(const ComplexNumber &a) {
    real = a.real;
    imaginary = a.imaginary;
}

double ComplexNumber::getReal() {
    return real;
}

double ComplexNumber::getImaginary() {
    return imaginary;
}

ComplexNumber c1;
ComplexNumber c2;

ComplexNumber ComplexNumber::add(const ComplexNumber &other) {
    ComplexNumber c3;
    c3.real = real + other.real;
    c3.imaginary = imaginary + other.imaginary;
    return c3;
}

void ComplexNumber::display() {
    cout << real << "+" << imaginary << "i" << endl;
}


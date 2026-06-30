//
// Created by Dell on 08/03/2024.
//

#include "Complex.h"

Complex::Complex() {

}

Complex::Complex(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

double Complex::getReal() {
    return real;
}

double Complex::getImaginary() {
    return imaginary;
}

Complex Complex::operator+(Complex &other) {
    Complex complex;
    complex.real = real + other.real;
    complex.imaginary = imaginary + other.imaginary;
    return Complex(complex.real, complex.imaginary);
}

Complex Complex::operator-(const Complex &other) {
    Complex complex;
    complex.real = real - other.real;
    complex.imaginary = imaginary - other.imaginary;
    return Complex(complex.real, complex.imaginary);
}

Complex Complex::operator*(const Complex &other) {
    Complex complex;
    complex.real = (real * other.real) - (imaginary * other.imaginary);
    complex.imaginary = (real * other.imaginary) + (other.real * imaginary);
    return Complex(complex.real, complex.imaginary);
}

Complex Complex::operator/(const Complex &other) {
    Complex complex;
    double constant = (other.real * other.real) + (other.imaginary * other.imaginary);
    complex.real = ((real * other.real) + (imaginary * other.imaginary)) / constant;
    complex.imaginary = ((other.real * imaginary) - (real * other.imaginary)) / constant;
    return Complex(complex.real, complex.imaginary);
}

bool Complex::operator==(const Complex &complex) const {
    if ((real == complex.real) && (imaginary == complex.imaginary)) {
        return true;
    } else {
        return false;
    }
}

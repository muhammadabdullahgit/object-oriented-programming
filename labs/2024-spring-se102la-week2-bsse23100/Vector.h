//
// Created by Dell on 29/01/2024.
//
#include <iostream>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK2_BSSE23100_VECTOR_H
#define INC_2024_SPRING_SE102LA_WEEK2_BSSE23100_VECTOR_H
struct Vector {
    double x, y, z;

    // Constructor with parameters

    Vector(double xVal, double yVal, double zVal);
    // Function to compute the dot product of two vectors
    double dotProduct(const Vector& other) const;

    // Function to compute the cross product of two vectors
    Vector crossProduct(const Vector& other) const;
};
#endif //INC_2024_SPRING_SE102LA_WEEK2_BSSE23100_VECTOR_H

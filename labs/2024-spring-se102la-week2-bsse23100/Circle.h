//
// Created by Dell on 29/01/2024.
//
#include <iostream>
# include <cmath>
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK2_BSSE23100_CIRCLE_H
#define INC_2024_SPRING_SE102LA_WEEK2_BSSE23100_CIRCLE_H
struct Circle {
    struct Geometry {
double radius;
    };
    Geometry geometry;

    // Constructor with parameters
    Circle(double diameter) ;
    // Function to calculate the circumference of the circle
    double calculateCircumference() const;
};
#endif //INC_2024_SPRING_SE102LA_WEEK2_BSSE23100_CIRCLE_H

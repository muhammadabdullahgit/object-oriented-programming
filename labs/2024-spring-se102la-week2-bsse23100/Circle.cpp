//
// Created by Dell on 29/01/2024.
//

#include "Circle.h"

// Circle functions
Circle::Circle(double diameter) {
//Write your logic here
    geometry.radius=diameter/2;
}

double Circle::calculateCircumference() const {
//Write your logic here
    return 2*M_PI*geometry.radius;
}
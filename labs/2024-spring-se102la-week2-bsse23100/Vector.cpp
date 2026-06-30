//
// Created by Dell on 29/01/2024.
//

#include "Vector.h"
// Vector functions
Vector::Vector(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {
}

double Vector::dotProduct(const Vector& other) const {
//Write your logic here
return ((x)*(other.x))+((y)*(other.y))+((z)*(other.z)); ;
}

Vector Vector::crossProduct(const Vector& other) const {
//Write your logic here
Vector a(0,0,0);
a.x = ((y*other.z)-(z*other.y));
a.y = -((x*other.z)-(z*other.x));
a.z = ((x*other.y)+(y*other.x));
return a;
}
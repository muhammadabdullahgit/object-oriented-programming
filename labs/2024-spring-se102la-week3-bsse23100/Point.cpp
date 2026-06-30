#include "Point.h"
#include <cmath>
Point::Point() {
    x=0.0;
    y=0.0;
}
Point::Point(double a, double b) {
    x=a;
    y=b;
}
Point::Point( const Point &a) {
    x=a.x;
    y=a.y;
}
void Point :: operator=(const Point & a){
    x=a.x;
    y=a.y;
}
Point::~Point(){
}
double Point :: getX(){
    return x;
}
double Point :: getY(){
    return y;
}
double Point :: distanceFromOrigin(){
    double a;
    a= sqrt((pow(x-0,2)+ pow(y-0,2)));
    return a;
}
void Point::display(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}

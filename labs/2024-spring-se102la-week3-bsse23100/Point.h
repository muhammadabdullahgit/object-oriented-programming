# include <iostream>
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK3_BSSE23100_POINT_H
#define INC_2024_SPRING_SE102LA_WEEK3_BSSE23100_POINT_H
class Point{
double x;
double y;
public:
    Point();
    Point(double a, double b);
    Point( const Point &a);
    void operator=(const Point & a);
    ~Point();
    double getX();
    double getY();
    double distanceFromOrigin();
    void display();
};
#endif //INC_2024_SPRING_SE102LA_WEEK3_BSSE23100_POINT_H

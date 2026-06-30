#include <iostream>
#include "Vector.h"
#include "Circle.h"
using namespace std;
int main() {
    int x;
    cout<<"enter 1 for dot product"<<endl;
    cout<<"enter 2 for cross product"<<endl;
    cout<<"enter 3 for circumference of circle"<<endl;
    cin>>x;
    switch (x) {
        case 1: {
            Vector v(1.0, 2.0, 3.0);
            Vector u(4.0, 5.0, 6.0);
            cout << "dot product =" << v.dotProduct(u);
            break;
        }
        case 2: {
            Vector v(1.0, 2.0, 3.0);
            Vector u(4.0, 5.0, 6.0);
            Vector y= v.crossProduct(u);
            cout<<"i="<<y.x<<endl;
            cout<<"j="<<y.y<<endl;
            cout<<"z="<<y.z<<endl;
             break;
        }
        case 3:{
            Circle circle(4);
            cout<<circle.calculateCircumference()<<endl;
            break;
        }
        default:{
            cout<<"some error occurred in main"<<endl;
            break;
        }
    }
    return 0;
}

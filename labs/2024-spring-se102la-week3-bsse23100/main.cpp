#include <iostream>
#include "ComplexNumber.h"
#include "Point.h"
using namespace std;

int main() {
    int x;
    cout<<"enter 1 to perform operations on complex numbers "<<endl;
    cout<<"enter 2 to perform operations on points "<<endl;
    cin>>x;
    switch (x){
        case 1:{
            ComplexNumber c1(2.0, 3.0);
            ComplexNumber c2(4.0, -1.0);
            c1.getReal();
            c1.getImaginary();
            ComplexNumber c3(c1);
            int a;
            cout<<"enter 1 to call add function"<<endl;
            cout<<"enter 2 to call display function"<<endl;
            cin >>a;
            switch (a) {
                case 1: {
                    ComplexNumber c4 = c1.add(c2);
                    break;
                }
                case 2: {
                    ComplexNumber c4 = c1.add(c2);
                    c4.display();
                    break;
                }
                default: {
                    cout << "some error occurred in  task 1" << endl;
                    break;
                }
            }
                    break;
        }
        case 2:{
            Point p1(3.0, 4.0);
            Point p2(-1.0, 2.0);
            p1.getX() ;
            p2.getX();
            int a;
            cout<<"enter 1 to calculate distance from origin"<<endl;
            cout<<"enter 2 to call display function"<<endl;
            cin>>a;
            switch (a) {
                case 1: {
                    p1.distanceFromOrigin();
                    p2.distanceFromOrigin();
                    break;
                }
                case 2: {
                    p1.distanceFromOrigin();
                    p1.display();
                    p2.distanceFromOrigin();
                    p2.display();
                    break;
                }
                default:{
                    cout<<"some error occurred in  task 2"<<endl;
                    break;
                }
            }
            break;
        }
        default:{
            cout<< "you entered wrong choice"<<endl;
            break;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
#include "Tenant.h"
#include "Employee.h"
#include "Visitor.h"
#include "Student.h"
#include <vector>
#include "Car.h"
#include "Singleton.h"
int main() {
    int choice;
   // cout<<"enter 1 for bike"<<endl;
    cout<<"enter 2 for car"<<endl;
    cin>>choice;
    switch (choice) {
     //   case 1: {
     //   int choice1;
         /*   cout << "enter 1 if you are tenant" << endl;
            cout << "enter 2 if you are employee" << endl;
            cout << "enter 3 if you are visitor" << endl;
            cout << "enter 4 if you are student" << endl;
            cout << "otherwise enter 5" << endl;
            cin >> choice1;
            switch(choice1){
                case 1:{

                    Singleton ;

                    break;
                }
            }
            break;
        }*/

        case 2:{
            Tenant t("t","t1");
            Employee e("e","e1");
            Visitor v("v","v1");
            int choice2;
            cout << "enter 1 if you are tenant" << endl;
            cout << "enter 2 if you are employee" << endl;
            cout << "enter 3 if you are visitor" << endl;
            cout << "otherwise enter 4" << endl;
            cin>>choice2;
            switch (choice2) {
                case1:{
                   // Singleton::s;
                    break;
                }case2:{
                    break;
                }case3:{
                    break;
                }default:{
                    break;
                }
            }
            break;
        }
        default:{
            cout<<"access not allowed"<<endl;
            break;
        }
    }
    return 0;
}

#include <iostream>
#include "library.h"
#include "student.h"
#include "employee.h"
using namespace std;

int main() {

  //Make a Menu Driven Program and Call your functions here
  int x;
    cout<<"enter question you want to run "<<endl;
    cin>>x;
    switch(x){
        case 1:{
            q1();
            break;
        }
        default:{
            cout<<"some error occurred in main"<<endl;
            break;
        }
    }
    return 0;
}

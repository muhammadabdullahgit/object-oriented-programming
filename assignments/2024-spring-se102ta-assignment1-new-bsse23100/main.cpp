#include <iostream>
#include "q1.h"
#include "q2.h"
#include "q3.h"
using namespace std;

int main() {
    int x;
    cout <<"enter question you want to run "<<endl;
    cin>>x;
    switch(x){
        case 1:{
            q1();
            break;
        }
        case 2:{
            q2();
            break;
        }
        case 3:{
            q3();
            break;
        }
        default:{
            cout<<"some error occurred"<<endl;
            break;
        }
    }
  //Make a Menu Driven Program and Call your functions here
    return 0;
}

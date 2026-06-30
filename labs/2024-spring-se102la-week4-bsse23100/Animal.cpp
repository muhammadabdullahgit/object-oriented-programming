
#include "Animal.h"
Animal::Animal(){
}
Animal::Animal(string n,int a){
    name=n;
    age=a;
}
void Animal:: printInfo(){
    cout<<"name of animal="<<name<<endl;
    cout<<"age of animal="<<age<<endl;
}
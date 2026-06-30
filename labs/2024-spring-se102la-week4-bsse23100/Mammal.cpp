
#include "Mammal.h"
Mammal::Mammal(string n,int a,string s){
    name=n;
    age=a;
    sound=s;
}
void Mammal::printSound(){
    cout<<"name of mammal ="<<name<<endl;
    cout<<"age of mammal ="<<age<<endl;
    cout<<"sound of mammal ="<<sound<<endl;
}

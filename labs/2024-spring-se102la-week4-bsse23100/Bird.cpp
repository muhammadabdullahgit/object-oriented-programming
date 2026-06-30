#include "Bird.h"
Bird::Bird(string n,int a,string f){
    name=n;
    age=a;
    featherColor=f;
}
void Bird:: printFeatherColor(){
    cout<<"name of bird  ="<<name<<endl;
    cout<<"age of bird ="<<age<<endl;
 cout<<"feather colour="<<featherColor<<endl;
}


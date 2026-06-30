//
// Created by Dell on 25/03/2024.
//

#include "functions.h"
functions::functions(){
    x=0;
    y=0;
    cout<<"d="<<x<<endl;
    cout<<"de="<<y;
}
functions::functions(int a){
    x=a;
    cout<<"1="<<x;
}
functions::functions(int a,int b){
    x=a;
    y=b;
    cout<<"1="<<x<<endl;
    cout<<"2="<<y;
}
functions::~functions(){
    cout<<"destructor"<<endl;
}
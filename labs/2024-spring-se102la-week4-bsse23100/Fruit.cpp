//
// Created by Dell on 19/02/2024.
//

#include "Fruit.h"
Fruit::Fruit(string name,int calories,string taste){
    this->name=name;
    this->calories=calories;
    this->taste=taste;
}
void Fruit::printTaste(){
    cout<<"name of fruit="<<name<<endl;
    cout<<"calories of fruit ="<<calories<<endl;
    cout<<"taste of fruit ="<<taste<<endl;

}

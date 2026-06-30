//
// Created by Dell on 19/02/2024.
//

#include "Vegetable.h"

Vegetable::Vegetable(string name,int calories,string color){
    this->name=name;
    this->calories=calories;
    this->color=color;
}
void Vegetable::printColor(){
    cout<<"name of vegetable="<<name<<endl;
    cout<<"calories of vegetable ="<<calories<<endl;
    cout<<"color of vegetable ="<<color<<endl;

}
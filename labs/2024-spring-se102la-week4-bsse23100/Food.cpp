//
// Created by Dell on 19/02/2024.
//

#include "Food.h"
Food::Food(){
}
Food::Food(string name,int calories){
    this->name=name;
    this->calories=calories;
}
void Food::printInfo(){
    cout<<"name of food="<<name<<endl;
    cout<<"calories of food ="<<calories<<endl;
}

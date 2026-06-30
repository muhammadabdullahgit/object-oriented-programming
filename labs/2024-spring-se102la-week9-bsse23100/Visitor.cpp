//
// Created by Dell on 01/04/2024.
//

#include "Visitor.h"
Visitor::Visitor(){}
Visitor::Visitor(string name, string num){
    this->visitorName=name;
    this->carNum=num;
}
Visitor::Visitor(string name, int num1){
    this->visitorName=name;
    this->bikeNum=num1;
}
Visitor::~Visitor(){

}
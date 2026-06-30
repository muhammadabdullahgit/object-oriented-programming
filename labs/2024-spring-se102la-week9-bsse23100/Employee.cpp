//
// Created by Dell on 01/04/2024.
//

#include "Employee.h"
Employee::Employee(){}
Employee::Employee(string name, string num){
this->empName=name;
this->carNum=num;
}
Employee::Employee(string name, int num1){
    this->empName=name;
    this->bikeNum=num1;
}
Employee::~Employee(){

}
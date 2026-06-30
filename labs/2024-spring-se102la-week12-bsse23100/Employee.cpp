//
// Created by Dell on 15/04/2024.
//

#include "Employee.h"
Employee::Employee(){

}
Employee::Employee(string name, string role){
    this->name=name;
    this->role=role;
}
void Employee::display(){
    cout<<endl;
    cout<<"name="<<name<<endl;
    cout<<"role="<<role<<endl;
    cout<<endl;
}
//
// Created by AAA on 4/18/2024.
//

#include "Person.h"
Person::Person(const string& name,int age):name(name),age(age){
}
string Person::getName(){
    return name;
}
int Person::getAge(){
    return age;
}
Person::Person() {}
void Person::setNameAndAge() {
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
}
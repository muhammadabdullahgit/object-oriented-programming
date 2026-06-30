//
// Created by Dell on 22/01/2024.
//
#include "functions.h"
#include <iostream>
using namespace std;
struct Car{
    string model;
    Car (string a){
        model = a;
        cout<<"car model("<<model<<")is created"<<endl;
    }
    ~Car(){
        cout<<"car model("<<model<<")is destroyed"<<endl;

    }
};
void q1() {
    Car *arr =new Car[2]{Car("Toyota"),Car("Honda")};
   delete[] arr;
}
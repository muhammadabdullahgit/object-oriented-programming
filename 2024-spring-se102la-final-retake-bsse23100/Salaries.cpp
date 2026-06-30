//
// Created by Dell on 18/05/2024.
//

#include "Salaries.h"
Salaries::Salaries(){}
Salaries::Salaries(string employee,string date,string month,double amount){
    this->employee=employee;
    this->date=date;
    this->month=month;
    this->amount=amount;
}
string Salaries::getEmployee(){ return employee;}
string Salaries::getDate(){return date;}
string Salaries::getMonth(){return month;}
double Salaries::getAmount(){return amount;}
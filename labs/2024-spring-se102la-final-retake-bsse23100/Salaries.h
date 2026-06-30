//
// Created by Dell on 18/05/2024.
//
#include <iostream>
#include <fstream>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_SALARIES_H
#define INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_SALARIES_H


class Salaries {
    string employee;
    string date;
    string month;
    double amount;
public:
    Salaries();
    Salaries(string employee,string date,string month,double amount);
    string getEmployee();
    string getDate();
    string getMonth();
    double getAmount();
};


#endif //INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_SALARIES_H

//
// Created by Dell on 18/05/2024.
//
#include <iostream>
#include <fstream>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_CLIENT_H
#define INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_CLIENT_H


class Client {
    string name;
    double taxAmount;
    double remainingAmount;
public:
    Client();
    Client(string name,double taxAmount,double remainingAmount);
    void setName(string name);
    void setTaxAmount( double taxAmount);
    void setRemainingAmount(double remainingAmount);
    string getName();
    double getTaxAmount();
    double getRemainingAmount();
    void display();
    void calculateTax(double amount);

};


#endif //INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_CLIENT_H

//
// Created by Dell on 15/04/2024.
//
#include <iostream>
#include <vector>
#include "Order.h"
#include "Employee.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK12_BSSE23100_SINGLETON_H
#define INC_2024_SPRING_SE102LA_WEEK12_BSSE23100_SINGLETON_H


class singleton {
    static singleton *instance;
    vector<Order *> order;
    vector<Employee*>employee;

    singleton();

public:
    static singleton *getInstance();
    void receiveOrder(Order *order1);
    void processOrder(string ordId);
    void deliveryProcessing(string ordId,string date);
    void displayOrder(Order *order1);
    void displayEmployee(Employee *employee1);

};


#endif //INC_2024_SPRING_SE102LA_WEEK12_BSSE23100_SINGLETON_H

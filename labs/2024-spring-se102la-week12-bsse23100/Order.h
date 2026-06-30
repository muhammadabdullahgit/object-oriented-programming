//
// Created by Dell on 15/04/2024.
//
#include <iostream>
#include <vector>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK12_BSSE23100_ORDER_H
#define INC_2024_SPRING_SE102LA_WEEK12_BSSE23100_ORDER_H


class Order {
    string ordName;
    string ordId;
    string ordType;
    string customerName;
    string address;
    string status;
    string date;
public:
    Order();

    Order(string name, string id, string cName, string address, string type,string date);

    string getOrdName();

    string getOrdId();

    string getCustomerName();

    string getAddress();

    string getOrdType();

    string getStatus();

    string getDate();

    void processOrder();

    void delivery(string d);

    void display();
};


#endif //INC_2024_SPRING_SE102LA_WEEK12_BSSE23100_ORDER_H

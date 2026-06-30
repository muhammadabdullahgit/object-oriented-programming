//
// Created by Dell on 16/04/2024.
//
# include <iostream>
#include "Sales.h"
#include "Customer.h"

using namespace std;

#include <vector>

#ifndef INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_SALESMANAGEMENT_H
#define INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_SALESMANAGEMENT_H


class SalesManagement {
    vector<Sales *> sale;
    vector<Customer *> orders;
    bool fullFill;

public:
    SalesManagement();
    void addSalesRecord(Sales *sales);


    void addCustomerOrder(Customer *order);

    void generateInvoice( Customer *order);

    void fulfillOrder( Customer *order);

    void trackDelivery( Customer *order);

    ~SalesManagement();

};


#endif //INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_SALESMANAGEMENT_H

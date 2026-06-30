//
// Created by Dell on 16/04/2024.
//
# include <iostream>

using namespace std;

#include <vector>
#ifndef INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_SALES_H
#define INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_SALES_H


class Sales {
        int transactionId;
        string customerId;
        double amount;

    public:
        Sales(int id, const string& customer, double amount);

        int getTransactionId();

        string getCustomerId();

        double getAmount() ;
};


#endif //INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_SALES_H

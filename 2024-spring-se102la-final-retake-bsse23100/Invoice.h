//
// Created by Dell on 18/05/2024.
//
#include <iostream>
#include <fstream>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_INVOICE_H
#define INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_INVOICE_H


class Invoice {
    string client;
    string period_start;
    string period_end;
    double amount;
    string description;
public:
    Invoice();

    Invoice(string client, string period_start, string period_end, double amount, string description);

    string getClient();

    void setClient(string client);

    string getPeriod_start();

    void setPeriod_start(string period_start);

    string getPeriod_end();

    void setPeriod_end(string period_end);

    double getAmount();

    void setAmount(double amount);

    string getDescription();

    void setDescription(string description);
};


#endif //INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_INVOICE_H

//
// Created by Dell on 18/05/2024.
//
#include <iostream>
#include <fstream>
#include "Transactions.h"
#include "Invoice.h"
#include "Salaries.h"
#include "Client.h"
#include <vector>
using namespace std;
#include "nlohmann/json.hpp"
using json=nlohmann::json;
#ifndef INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_MANAGEMENT_H
#define INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_MANAGEMENT_H


class Management {
    static Management* instance;
vector<Transactions *>transactions;
vector<Invoice *>invoice;
vector<Salaries *>salaries;
vector<Client *>client;
public:
    static Management* getInstance();
    Management();
    void readTransactions();
    void readInvoice();
    void readSalaries();
    void addClient(Client* client1);
    void calculatingClientTax();
};


#endif //INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_MANAGEMENT_H

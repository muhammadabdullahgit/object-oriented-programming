//
// Created by Dell on 01/04/2024.
//
#include <iostream>
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_TENANT_H
#define INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_TENANT_H


class Tenant {
    string tenantName;
    string carNum;
    int bikeNum;
public:
    Tenant();
    Tenant(string name, string num);
    Tenant(string name, int num1);
    ~Tenant();
};

#endif //INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_TENANT_H

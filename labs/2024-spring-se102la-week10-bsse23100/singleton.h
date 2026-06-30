//
// Created by Dell on 14/04/2024.
//
# include <iostream>
#include "TotalEmployees.h"
#include "Employee.h"
#include "inventory.h"
#include "Production.h"
#include "productionManagement.h"
#include "Sales.h"
#include "SalesManagement.h"
using namespace std;

#include <vector>

#ifndef INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_SINGLETON_H
#define INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_SINGLETON_H

class singleton {
    TotalEmployees *empSystem;
    inventory *inventorySystem;
    productionManagement* productionManagementSystem;
    SalesManagement* salesManagementSystem;
    static singleton *instance;

    singleton();

public:
    static singleton *getInstance();

    TotalEmployees *getEmployeeManagementSystem();

    inventory *getInventoryManagementSystem();
    productionManagement *getProductionManagementSystem();
    SalesManagement *getSalesManagementSystem();

    ~singleton();
};


#endif //INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_SINGLETON_H

//
// Created by Dell on 16/04/2024.
//
# include <iostream>
#include "Production.h"

using namespace std;

#include <vector>
#ifndef INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_PRODUCTIONMANAGEMENT_H
#define INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_PRODUCTIONMANAGEMENT_H


class productionManagement {
    vector<Production*> production;

public:
    productionManagement();

    void addProductionBatch(Production* p);
    void qualityControl();

    double calculateProductionEfficiency();
    void displayProductionBatches();

    ~productionManagement() {
        for (auto p : production) {
            delete p;
        }
    }
};


#endif //INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_PRODUCTIONMANAGEMENT_H

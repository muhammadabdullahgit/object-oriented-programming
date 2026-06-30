//
// Created by Dell on 16/04/2024.
//
# include <iostream>

using namespace std;

#include <vector>
#ifndef INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_PRODUCTION_H
#define INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_PRODUCTION_H


class Production {
    int batchNum;
    string prodType;
    int quantity;
    bool qualityControl;

public:
    Production(int batchNumber, const string& productType, int producedQuantity);

    void performQualityControl();

    int getBatchNumber();

    string getProductType();

    int getQuantity();

    bool getQualityControl();
};


#endif //INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_PRODUCTION_H

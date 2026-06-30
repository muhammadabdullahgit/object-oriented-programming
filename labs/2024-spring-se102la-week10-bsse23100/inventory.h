//
// Created by Dell on 14/04/2024.
//
# include <iostream>

using namespace std;

#include <vector>

#ifndef INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_INVENTORY_H
#define INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_INVENTORY_H


class inventory {
    int rawMaterial;
    int product;
    int packagingMaterial;
public:
    inventory();

    inventory(int rawMaterial, int product, int packagingMaterial);

    void replenishInventory(int rawMaterialQuantity, int productQuantity, int packagingMaterialQuantity);

    void trackStock();

};


#endif //INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_INVENTORY_H

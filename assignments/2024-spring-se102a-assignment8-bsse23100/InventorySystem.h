//
// Created by Dell on 30/03/2024.
//
#include <iostream>
#include "vector"
#include <sstream>

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT8_BSSE23100_INVENTORYSYSTEM_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT8_BSSE23100_INVENTORYSYSTEM_H


class InventorySystem {
    InventorySystem(){}

    static InventorySystem *instance;
    vector<string> inventorySystem;
public:
    static InventorySystem *getInstance();

    void addProduct(string type);

    void removeProduct(string type);

    void displayInventory(stringstream &output);

    void emptyInventory();

};


#endif //INC_2024_SPRING_SE102A_ASSIGNMENT8_BSSE23100_INVENTORYSYSTEM_H

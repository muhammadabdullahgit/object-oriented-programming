//
// Created by Dell on 30/03/2024.
//

#include "InventorySystem.h"

InventorySystem *InventorySystem::instance = nullptr;

InventorySystem *InventorySystem::getInstance() {
    if (instance == nullptr) {
        instance = new InventorySystem();
    }
    return instance;
}

void InventorySystem::addProduct(string type) {
    inventorySystem.push_back(type);
}

void InventorySystem::removeProduct(string type) {
    for (auto item = inventorySystem.begin(); item != inventorySystem.end(); ++item) {
        if (*item == type) {
            inventorySystem.pop_back();
            break;
        }
    }
}

void InventorySystem::displayInventory(stringstream &output) {
    if (this->inventorySystem.empty()) {
        output << "Current Inventory:\n";
    } else {
        output << "Current Inventory:\n";
        for (const auto &item: inventorySystem) {
            output << "- " << item << endl;
        }
    }
}

void InventorySystem::emptyInventory() {
    inventorySystem = {};
}
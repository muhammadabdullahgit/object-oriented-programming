//
// Created by Dell on 14/04/2024.
//

#include "inventory.h"

inventory::inventory() {

}

inventory::inventory(int rawMaterial, int product, int packagingMaterial)
        : rawMaterial(rawMaterial), product(product), packagingMaterial(packagingMaterial) {}

void inventory::replenishInventory(int rawMaterialQuantity, int productQuantity, int packagingMaterialQuantity) {
    rawMaterial += rawMaterialQuantity;
    product += productQuantity;
    packagingMaterial += packagingMaterialQuantity;
    cout << "Inventory is replenished " << endl;
}

void inventory::trackStock() {
    cout<<endl;
    cout << "Raw Material  " << rawMaterial << endl;
    cout << "Product " << product << endl;
    cout << "Packaging Material  " << packagingMaterial << endl;
    cout<<endl;
}


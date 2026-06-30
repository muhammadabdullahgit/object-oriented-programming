//
// Created by Dell on 14/04/2024.
//

#include "singleton.h"

 singleton* singleton::instance = nullptr;

singleton::singleton() {
    empSystem = new TotalEmployees();
    inventorySystem = new inventory();
    productionManagementSystem = new productionManagement();
    salesManagementSystem = new SalesManagement();

}

singleton *singleton::getInstance() {
    if (instance==nullptr) {
        instance = new singleton();
    }
    return instance;
}

TotalEmployees *singleton::getEmployeeManagementSystem() {
    return empSystem;
}

inventory *singleton::getInventoryManagementSystem() {
    return inventorySystem;
}
productionManagement *singleton::getProductionManagementSystem(){
    return productionManagementSystem;
}
SalesManagement *singleton::getSalesManagementSystem(){
    return salesManagementSystem;
}

singleton::~singleton() {
    delete empSystem;
    delete inventorySystem;
    delete productionManagementSystem;
    delete salesManagementSystem;
}
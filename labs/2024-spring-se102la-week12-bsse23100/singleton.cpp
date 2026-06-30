//
// Created by Dell on 15/04/2024.
//

#include "singleton.h"
 singleton *singleton::instance=nullptr;
singleton::singleton() {

}
singleton *singleton::getInstance() {
    if (instance==nullptr) {
        instance = new singleton();
    }
    return instance;
}
void singleton::receiveOrder(Order *order1){
    order.push_back(order1);
}
void singleton::processOrder(string ordId){
    for (Order* ord:order) {
        if(ord->getOrdId()==ordId){
            ord->processOrder();
            break;
        }
    }
}
void singleton::deliveryProcessing(string ordId,string date){
    for (Order* ord:order) {
        if(ord->getOrdId()==ordId){
            ord->delivery(date);
            break;
        }
    }
}
void singleton::displayOrder(Order *order1){
    order1->display();
}
void singleton::displayEmployee(Employee *employee1){
    employee1->display();
}
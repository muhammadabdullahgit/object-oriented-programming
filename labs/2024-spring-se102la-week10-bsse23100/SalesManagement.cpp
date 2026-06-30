//
// Created by Dell on 16/04/2024.
//

#include "SalesManagement.h"
SalesManagement::SalesManagement(){
fullFill= false;
}
void SalesManagement::addSalesRecord(Sales* sales) {
    sale.push_back(sales);
}


void SalesManagement:: addCustomerOrder(Customer* order) {
    orders.push_back(order);
}

void SalesManagement::generateInvoice(Customer* order) {
    cout << " Order ID =" << order->getOrderId() << ":" << endl;
    cout << "Customer ID= " << order->getCustomerId() <<endl;
    cout << "Product= " << order->getProduct() << endl;
    cout << "Quantity= " << order->getQuantity() <<endl;
}

void SalesManagement::fulfillOrder( Customer* order) {
    fullFill= true;
   cout << "Order ID " << order->getOrderId() << " fulfilled." << endl;
}

void SalesManagement::trackDelivery( Customer* order) {
    if(fullFill) {
        cout << "Order ID= " << order->getOrderId() << " delivered" << endl;
    }
    else{
        cout << "Order ID= " << order->getOrderId() << " in process" << endl;
    }
}
SalesManagement::~SalesManagement() {
    for (auto s : sale) {
        delete s;
    }
    for (auto ord : orders) {
        delete ord;
    }
}
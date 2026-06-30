//
// Created by Dell on 15/04/2024.
//

#include "Order.h"

Order::Order() {

}

Order::Order(string name, string id, string cName, string address, string type,string date) {
    ordName = name;
    ordId = id;
    customerName = cName;
    this->address = address;
    ordType = type;
    this->status="";
    this->date=date;
}

string Order::getOrdName() {
    return ordName;
}

string Order::getOrdId() {
    return ordId;
}

string Order::getCustomerName() {
    return customerName;
}

string Order::getAddress() {
    return address;
}

string Order::getOrdType() {
    return ordType;
}

string  Order::getStatus(){
    return status;
}
string  Order::getDate(){
    return date;
}

void Order::processOrder(){
    status="processed";
    cout<< "order is processing"<<endl;
}

void Order::display(){
    cout<<endl;
    cout<<" order name = "<<ordName<<endl;
    cout<<" order id = "<<ordId<<endl;
    cout<<" order type = "<<ordType<<endl;
    cout<<" customer name = "<<customerName<<endl;
    cout<<" address = "<<address<<endl;
    cout<<" status = "<<status<<endl;
    cout<<" date = "<<date<<endl;
    cout<<endl;
}

void Order::delivery(string d){
    date=d;
    status="scheduled";
    cout<<"order is scheduled to deliver"<<endl;
}
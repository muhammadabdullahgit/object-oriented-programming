//
// Created by Dell on 18/05/2024.
//

#include "Management.h"
Management* Management::instance = nullptr;
Management::Management(){}
Management* Management:: getInstance(){
    if(instance== nullptr){
        instance=new Management;
    }
    return instance;
}
void Management::readTransactions(){
    ifstream transactionFile("json/transactions.json");
    if(!transactionFile.is_open()){
        cout<<"file not open"<<endl;
        return;
    }
    json t;
    transactionFile>>t;
    transactionFile.close();
    cout<<" transaction file is read "<<endl;
}
void Management::readInvoice(){
    ifstream invoiceFile("json/invoices.json");
    if(!invoiceFile.is_open()){
        cout<<"file not open"<<endl;
        return;
    }
    json i;
    invoiceFile>>i;
    invoiceFile.close();
    cout<<" invoice file is read "<<endl;
}
void Management::readSalaries(){
    ifstream salariesFile("json/salaries.json");
    if(!salariesFile.is_open()){
        cout<<"file not open"<<endl;
        return;
    }
    json s;
    salariesFile>>s;
    salariesFile.close();
    cout<<" Salaries file is read "<<endl;
}
void Management::addClient(Client* client1){
    client.push_back(client1);
}
void Management::calculatingClientTax(){
    /*ifstream invoiceFile("json/invoices.json");
    if(!invoiceFile.is_open()){
        cout<<"file not open"<<endl;
        return;
    }
    json i;
    invoiceFile>>i;
    invoiceFile.close();
    cout<<" invoice file is read "<<endl;
    for(auto& a:i){

    }*/
}
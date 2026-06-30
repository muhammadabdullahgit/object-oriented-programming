//
// Created by Dell on 16/04/2024.
//

#include "Production.h"
Production::Production(int batchNumber, const string& productType, int producedQuantity)
        : batchNum(batchNumber), prodType(productType), quantity(producedQuantity), qualityControl(false) {}
void Production::performQualityControl() {
     int minimumReq=0;
     cout<<"enter quality control minimum requirement"<<endl;
     cin>>minimumReq;
    if (quantity >=minimumReq ) {
        qualityControl = true;
    }
}
int Production::getBatchNumber() {
    return batchNum;
}
string Production::getProductType()  {
    return prodType;
}
int  Production::getQuantity() {
    return quantity;
}
bool Production::getQualityControl(){
    return qualityControl;
}
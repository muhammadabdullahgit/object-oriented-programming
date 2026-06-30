//
// Created by Dell on 16/04/2024.
//

#include "productionManagement.h"
productionManagement::productionManagement(){

}
void productionManagement::addProductionBatch(Production* p) {
    production.push_back(p);
}
void productionManagement::qualityControl() {
    for (auto p : production) {
        p->performQualityControl();
    }
}
double productionManagement::calculateProductionEfficiency() {
    int producedQuantity = 0;
    for (auto p : production) {
        producedQuantity += p->getQuantity();
    }
    int totalPassed = 0;
    for (auto p : production) {
        if (p->getQualityControl()) {
            totalPassed += p->getQuantity();
        }
    }
    if (producedQuantity == 0) {
        return 0.0;
    }
    return (totalPassed) / producedQuantity * 100.0;
}
void  productionManagement::displayProductionBatches() {
    cout << "Production Batches:" << endl;
    for (auto p : production) {
        cout << "Batch Number= " << p->getBatchNumber() << endl;
        cout<<"Product Type: " << p->getProductType() << endl;
        cout<<"Quantity Produced: " << p->getQuantity()<<endl;
        if (p->getQualityControl()) {
            cout << "Quality Control is Passed"<< endl;;
        } else {
            cout << "Quality Control is Failed"<< endl;;
        }
        cout << endl;
    }
}
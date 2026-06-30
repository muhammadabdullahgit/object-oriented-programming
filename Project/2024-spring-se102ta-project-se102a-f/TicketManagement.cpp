//
// Created by Dell on 21/04/2024.
//

#include "TicketManagement.h"

TicketManagement *TicketManagement::instance = nullptr;

TicketManagement::TicketManagement() {
}

TicketManagement *TicketManagement::getInstance() {
    if (instance == nullptr) {
        instance = new TicketManagement();
    }
    return instance;
}

void TicketManagement::addBusinessTicket(BusinessTicket *bTicket) {
    b.push_back(bTicket);
    writeBusinessToJsonFile();
    for (int i = 0; i < b.size(); ++i) {
        if (bTicket->getTicketNumber() == b[i]->getTicketNumber()) {
            cout << endl;
            b[i]->reserveTicket();
        }
    }
}

void TicketManagement::addLowerAcTicket(LowerAcTicket *lACTicket) {
    lAC.push_back(lACTicket);
    writeLowerACToJsonFile();
    for (int i = 0; i < lAC.size(); ++i) {
        if (lACTicket->getTicketNumber() == lAC[i]->getTicketNumber()) {
            cout << endl;
            lAC[i]->reserveTicket();
        }
    }
}

void TicketManagement::addLocalTicket(LocalTicket *lTicket) {
    l.push_back(lTicket);
    writeLocalToJsonFile();
    for (int i = 0; i < l.size(); ++i) {
        if (lTicket->getTicketNumber() == l[i]->getTicketNumber()) {
            cout << endl;
            l[i]->reserveTicket();
        }
    }
}

void TicketManagement::RemoveBusinessTicket(int tNum) {
    for (int i = 0; i < b.size(); ++i) {
        if (tNum == b[i]->getTicketNumber()) {
            b.erase(b.begin() + i);
            cout << endl;
            b[i]->cancelTicket();
            writeBusinessToJsonFile();
            return;
        }
    }
}

void TicketManagement::RemoveLowerAcTicket(int tNum) {
    for (int i = 0; i < lAC.size(); ++i) {
        if (tNum == lAC[i]->getTicketNumber()) {
            lAC.erase(lAC.begin() + i);
            cout << endl;
            lAC[i]->cancelTicket();
            writeLowerACToJsonFile();
            return;
        }
    }
}

void TicketManagement::RemoveLocalTicket(int tNum) {
    for (int i = 0; i < l.size(); ++i) {
        if (tNum == l[i]->getTicketNumber()) {
            l.erase(l.begin() + i);
            cout << endl;
            l[i]->cancelTicket();
            writeLocalToJsonFile();
            return;
        }
    }
}

void TicketManagement::displayBusinessTicket() {
    for (auto bT: b) {
        bT->displayTicketInfo();
    }
}

void TicketManagement::displayLowerAcTicket() {
    for (auto lACT: lAC) {
        lACT->displayTicketInfo();
    }
}

void TicketManagement::displayLocalTicket() {
    for (auto lTic: l) {
        lTic->displayTicketInfo();
    }
}

void TicketManagement::readBusinessFromJsonFile() {
    ifstream jsonFile("BusinessTicket.json");
    if (!jsonFile) {
        cout << "Failed to open JSON file." << endl;
        return;
    }
    json inputData;
    jsonFile >> inputData;
    jsonFile.close();
    b.clear();
    for (auto &business: inputData["BusinessTicket"]) {
        BusinessTicket *businessTicket = new BusinessTicket;
        string passName = business["passengerName"];
        businessTicket->setPassengerName(passName);
        string tranId = business["transactionID"];
        businessTicket->setTransactionId(tranId);
        string payMethod = business["paymentMethod"];
        businessTicket->setPaymentMethod(payMethod);
        int ticNumber = business["ticketNumber"];
        businessTicket->setTicketNumber(ticNumber);
        double priceOfTicket = business["ticketPrice"];
        businessTicket->setPrice(priceOfTicket);
        json a = business["DateTime"];
        DateTime d1{a["day"], a["month"], a["year"], a["hour"], a["minutes"]};
        businessTicket->setDateTime(d1);
        addBusinessTicket(businessTicket);
    }
}

void TicketManagement::readLowerACFromJsonFile() {
    ifstream jsonFile("LowerAC.json");
    if (!jsonFile) {
        cout << "Failed to open JSON file." << endl;
        return;
    }
    json inputData;
    jsonFile >> inputData;
    jsonFile.close();
    lAC.clear();
    for (auto &lowerAC: inputData["LowerACTicket"]) {
        LowerAcTicket *lowerACTicket = new LowerAcTicket;
        string passName = (lowerAC["passengerName"]);
        lowerACTicket->setPassengerName(passName);
        string tranId = (lowerAC["transactionID"]);
        lowerACTicket->setTransactionId(tranId);
        string payMethod = (lowerAC["paymentMethod"]);
        lowerACTicket->setPaymentMethod(payMethod);
        int ticNumber = (lowerAC["ticketNumber"]);
        lowerACTicket->setTicketNumber(ticNumber);
        double priceOfTicket = (lowerAC["ticketPrice"]);
        lowerACTicket->setPrice(priceOfTicket);
        json a = lowerAC["DateTime"];
        DateTime d1{a["day"], a["month"], a["year"], a["hour"], a["minutes"]};
        lowerACTicket->setDateTime(d1);
        addLowerAcTicket(lowerACTicket);
    }
}

void TicketManagement::readLocalFromJsonFile() ____{
    ifstream jsonFile("LocalTicket.json");
    if (!jsonFile) {
        cout << "Failed to open JSON file." << endl;
        return;
    }
    json inputData;
    jsonFile >> inputData;
    jsonFile.close();
    l.clear();
    for (auto &local: inputData["LocalTicket"]) {
        LocalTicket *localTicket = new LocalTicket;
        string passName = (local["passengerName"]);
        localTicket->setPassengerName(passName);
        string tranId = (local["transactionID"]);
        localTicket->setTransactionId(tranId);
        string payMethod = (local["paymentMethod"]);
        localTicket->setPaymentMethod(payMethod);
        int ticNumber = (local["ticketNumber"]);
        localTicket->setTicketNumber(ticNumber);
        double priceOfTicket = (local["ticketPrice"]);
        localTicket->setPrice(priceOfTicket);
        json a = local["DateTime"];
        DateTime d1{a["day"], a["month"], a["year"], a["hour"], a["minutes"]};
        localTicket->setDateTime(d1);
        addLocalTicket(localTicket);
    }
}

void TicketManagement::writeBusinessToJsonFile() {
    json writeBusinessTicketDetails;
    for (auto &business: b) {
        json a1;
        a1["passengerName"] = business->getPassengerName();
        a1["transactionID"] = business->getTransactionId();
        a1["paymentMethod"] = business->getPaymentMethod();
        a1["ticketNumber"] = business->getTicketNumber();
        a1["ticketPrice"] = business->getPrice();
        a1["DateTime"]["day"] = business->getDateTime().getDay();
        a1["DateTime"]["month"] = business->getDateTime().getMonth();
        a1["DateTime"]["year"] = business->getDateTime().getYear();
        a1["DateTime"]["hour"] = business->getDateTime().getHour();
        a1["DateTime"]["minutes"] = business->getDateTime().getMinutes();
        writeBusinessTicketDetails["BusinessTicket"].push_back(a1);
    }
    ofstream output("BusinessTicket.json");
    if (!output) {
        cout << "File not open\n";
        return;
    }
    output << setw(4) << writeBusinessTicketDetails << endl;
    output.close();
}

void TicketManagement::writeLowerACToJsonFile() {
    json writeLowerACTicketDetails;
    for (auto &lowerAC: lAC) {
        json a1;
        a1["passengerName"] = lowerAC->getPassengerName();
        a1["transactionID"] = lowerAC->getTransactionId();
        a1["paymentMethod"] = lowerAC->getPaymentMethod();
        a1["ticketNumber"] = lowerAC->getTicketNumber();
        a1["ticketPrice"] = lowerAC->getPrice();
        a1["DateTime"]["day"] = lowerAC->getDateTime().getDay();
        a1["DateTime"]["month"] = lowerAC->getDateTime().getMonth();
        a1["DateTime"]["year"] = lowerAC->getDateTime().getYear();
        a1["DateTime"]["hour"] = lowerAC->getDateTime().getHour();
        a1["DateTime"]["minutes"] = lowerAC->getDateTime().getMinutes();
        writeLowerACTicketDetails["LowerACTicket"].push_back(a1);
    }
    ofstream output("LowerAC.json");
    if (!output) {
        cout << "File not open\n";
        return;
    }
    output << setw(4) << writeLowerACTicketDetails << endl;
    output.close();
}

void TicketManagement::writeLocalToJsonFile() {
    json writeLocalTicketDetails;
    for (auto &local: l) {
        json a1;
        a1["passengerName"] = local->getPassengerName();
        a1["transactionID"] = local->getTransactionId();
        a1["paymentMethod"] = local->getPaymentMethod();
        a1["ticketNumber"] = local->getTicketNumber();
        a1["ticketPrice"] = local->getPrice();
        a1["DateTime"]["day"] = local->getDateTime().getDay();
        a1["DateTime"]["month"] = local->getDateTime().getMonth();
        a1["DateTime"]["year"] = local->getDateTime().getYear();
        a1["DateTime"]["hour"] = local->getDateTime().getHour();
        a1["DateTime"]["minutes"] = local->getDateTime().getMinutes();
        writeLocalTicketDetails["LocalTicket"].push_back(a1);
    }
    ofstream output("LocalTicket.json");
    if (!output) {
        cout << "File not open\n";
        return;
    }
    output << setw(4) << writeLocalTicketDetails << endl;
    output.close();
}

TicketManagement::~TicketManagement() {
    instance = nullptr;
}
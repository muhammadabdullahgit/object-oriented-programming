//
// Created by Dell on 18/04/2024.
//
#include<iostream>
#include <vector>
#include "Payment.h"
#include "DateTime.h"
#include <fstream>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;
#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_TICKET_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_TICKET_H


class Ticket {
protected:
    string passengerName;
    int ticketNumber;
    Payment *payment = new Payment(); // Aggregation
    DateTime dt; //composition
public:

    Ticket();

    Ticket(const string &_passengerName, int _ticketNumber, const string &_transactionId, double _price,
           const string &_paymentMethod);

    virtual void displayTicketInfo() = 0;

    virtual void reserveTicket() = 0;

    virtual void cancelTicket() = 0;

    string getPassengerName();

    void setPassengerName(string &passName);

    int getTicketNumber();

    void setTicketNumber(int &t);

    double getPrice();

    void setPrice(double &p);

    string getTransactionId();

    void setTransactionId(string &tm);

    string getPaymentMethod();

    void setPaymentMethod(string &pm);

    DateTime getDateTime();

    void setDateTime(DateTime &dateTime);

    int generateTicketNumber();

    string generateTransactionId();

    ~Ticket();
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_TICKET_H

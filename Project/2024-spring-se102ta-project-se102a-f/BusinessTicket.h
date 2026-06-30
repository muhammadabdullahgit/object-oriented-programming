//
// Created by Dell on 18/04/2024.
//
#include<iostream>
#include <vector>
#include "Ticket.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_BUSINESSTICKET_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_BUSINESSTICKET_H

// Derived class
class BusinessTicket : public Ticket {
public:
    BusinessTicket();

    BusinessTicket(const string &_passengerName, int _ticketNumber, const string &_transactionId, double _price,
                   const string &_paymentMethod);

    void displayTicketInfo() override;

    void reserveTicket()override;

    void cancelTicket()override;
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_BUSINESSTICKET_H

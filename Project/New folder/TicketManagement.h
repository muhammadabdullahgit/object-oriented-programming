//
// Created by Dell on 21/04/2024.
//
#include<iostream>
#include <vector>
#include "Ticket.h"
#include "LowerAcTicket.h"
#include "LocalTicket.h"
#include "BusinessTicket.h"

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_TICKETMANAGEMENT_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_TICKETMANAGEMENT_H


class TicketManagement {
    static TicketManagement *instance;
    vector<BusinessTicket *> b; //aggregation
    vector<LowerAcTicket *> lAC;
    vector<LocalTicket *> l;
public:
    static TicketManagement *getInstance();

    TicketManagement();

    void addBusinessTicket(BusinessTicket *bTicket);

    void addLowerAcTicket(LowerAcTicket *lACTicket);

    void addLocalTicket(LocalTicket *lTicket);

    void RemoveBusinessTicket(int tNum);

    void RemoveLowerAcTicket(int tNum);

    void RemoveLocalTicket(int tNum);

    void displayBusinessTicket();

    void displayLowerAcTicket();

    void displayLocalTicket();

    void readBusinessFromJsonFile();

    void readLowerACFromJsonFile();

    void readLocalFromJsonFile();

    void writeBusinessToJsonFile();

    void writeLowerACToJsonFile();

    void writeLocalToJsonFile();

    ~TicketManagement();
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_TICKETMANAGEMENT_H

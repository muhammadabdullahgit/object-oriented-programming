//
// Created by AAA on 4/28/2024.
//

#include "Muhammad_Abdullah.h"

void Muhammad_Abdullah::abdullah_menu() {
    system("clear");
    cout << "\t\t-----------------------------------------" << endl;
    cout << "\t\tWelcome to Railway Management System \n";
    cout << "\t\t-----------------------------------------" << endl;
    int x;
    cout << "Enter  1 for business ticket " << endl;
    cout << "Enter  2 for lower AC ticket " << endl;
    cout << "Enter  3 for Local ticket " << endl;
    cout << "Enter 4 to exit"<<endl;
    cin >> x;
    TicketManagement *ticketManagement= TicketManagement::getInstance();
//    Ticket *t = new Ticket();
    srand(time(NULL));
    switch (x) {
        case 1: {//Business Ticket
            Ticket* t= new BusinessTicket;
            ticketManagement->readBusinessFromJsonFile();
            int choice;
            do {
                cout << "Enter 1 to reserve ticket to display ticket and payment invoice" << endl;
                cout << "Enter 2 to cancel ticket" << endl;
                cout << "Enter 3 to display all Business tickets" << endl;
                cout << "Enter 4 to exit if you dont want to reserve or cancel more tickets" << endl;
                cin >> choice;
                switch (choice) {
                    case 1: {
                        string pName, transactionId, pMethod;
                        int tNum;
                        tNum = t->generateTicketNumber();
                        transactionId = t->generateTransactionId();
                        double tPrice;
                        cout << "enter passenger name" << endl;
                        cin >> pName;
                        cout << "enter payment Method" << endl;
                        cin >> pMethod;
                        cout << "enter ticket price" << endl;
                        cin >> tPrice;
                        DateTime dateTime;
                        cin >> dateTime;
                        BusinessTicket *b = new BusinessTicket{pName, tNum, transactionId, tPrice, pMethod};
                        b->setDateTime(dateTime);
                        t=b;
                        ticketManagement->addBusinessTicket(b);
                        t->displayTicketInfo();
                        break;
                    }
                    case 2: {
                        int ticketNumber;
                        cout << "enter ticket number" << endl;
                        cin >> ticketNumber;
                        ticketManagement->RemoveBusinessTicket(ticketNumber);
                        break;
                    }
                    case 3: {
                        ticketManagement->readBusinessFromJsonFile();
                        ticketManagement->displayBusinessTicket();
                        break;
                    }
                    case 4: {
                        cout << "exiting" << endl;
                        break;
                    }
                    default: {
                        cout << "wrong option pressed" << endl;
                        break;
                    }
                }
            } while (choice != 4);
            break;
        }
        case 2: {//Lower AC
            Ticket* t= new LowerAcTicket;
            ticketManagement->readLowerACFromJsonFile();
            int choice;
            do {
                cout << "enter 1 to reserve ticket to display ticket and payment invoice" << endl;
                cout << "enter 2 to cancel ticket" << endl;
                cout << "enter 3 to display all Lower AC tickets" << endl;
                cout << "enter 4 to exit if you dont want to reserve or cancel more tickets" << endl;
                cin >> choice;
                switch (choice) {
                    case 1: {
                        string pName, transactionId, pMethod;
                        int tNum;
                        tNum = t->generateTicketNumber();
                        transactionId = t->generateTransactionId();
                        double tPrice;
                        cout << "enter passenger name" << endl;
                        cin >> pName;
                        cout << "enter payment Method" << endl;
                        cin >> pMethod;
                        cout << "enter ticket price" << endl;
                        cin >> tPrice;
                        DateTime dateTime;
                        cin >> dateTime;
                        LowerAcTicket *lAC = new LowerAcTicket{pName, tNum, transactionId, tPrice, pMethod};
                        lAC->setDateTime(dateTime);
                        t=lAC;
                        ticketManagement->addLowerAcTicket(lAC);
                        t->displayTicketInfo();
                        break;
                    }
                    case 2: {
                        int ticketNumber;
                        cout << "enter ticket number" << endl;
                        cin >> ticketNumber;
                        ticketManagement->RemoveLowerAcTicket(ticketNumber);
                        break;
                    }
                    case 3: {
                        ticketManagement->readLowerACFromJsonFile();
                        ticketManagement->displayLowerAcTicket();
                        break;
                    }
                    case 4: {
                        cout << "exiting" << endl;
                        break;
                    }
                    default: {
                        cout << "wrong option pressed" << endl;
                        break;
                    }
                }
            } while (choice != 4);
            break;
        }
        case 3: {//Local
            Ticket* t= new LocalTicket;
            ticketManagement->readLocalFromJsonFile();
            int choice;
            do {
                cout << "enter 1 to reserve ticket to display ticket and payment invoice" << endl;
                cout << "enter 2 to cancel ticket" << endl;
                cout << "enter 3 to display all Local tickets" << endl;
                cout << "enter 4 to exit if you dont want to reserve or cancel more tickets" << endl;
                cin >> choice;
                switch (choice) {
                    case 1: {
                        string pName, transactionId, pMethod;
                        int tNum;
                        tNum = t->generateTicketNumber();
                        transactionId = t->generateTransactionId();
                        double tPrice;
                        cout << "enter passenger name" << endl;
                        cin >> pName;
                        cout << "enter payment Method" << endl;
                        cin >> pMethod;
                        cout << "enter ticket price" << endl;
                        cin >> tPrice;
                        DateTime dateTime;
                        cin >> dateTime;
                        LocalTicket *l = new LocalTicket{pName, tNum, transactionId, tPrice, pMethod};
                        l->setDateTime(dateTime);
                        t=l;
                        ticketManagement->addLocalTicket(l);
                        t->displayTicketInfo();
                        break;
                    }
                    case 2: {
                        int ticketNumber;
                        cout << "enter ticket number" << endl;
                        cin >> ticketNumber;
                        ticketManagement->RemoveLocalTicket(ticketNumber);
                        break;
                    }
                    case 3: {
                        ticketManagement->readLocalFromJsonFile();
                        ticketManagement->displayLocalTicket();
                        break;
                    }
                    case 4: {
                        cout << "exiting" << endl;
                        break;
                    }
                    default: {
                        cout << "wrong option pressed" << endl;
                        break;
                    }
                }
            } while (choice != 4);
            break;
        }
        default: {
            cout << "wrong key pressed in main menu" << endl;
            break;
        }
    }
}
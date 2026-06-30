//
// Created by Dell on 18/04/2024.
//

#include "LocalTicket.h"

LocalTicket::LocalTicket() {

}

LocalTicket::LocalTicket(const string &_passengerName, int _ticketNumber, const string &_transactionId, double _price,
                         const string &_paymentMethod)
        : Ticket(_passengerName, _ticketNumber, _transactionId, _price, _paymentMethod) {
}

void LocalTicket::displayTicketInfo() {
    cout << endl;
    cout << "Local Ticket - Passenger: " << passengerName << ", ticket Number: " << ticketNumber
         << endl;
    cout << "\t Date and Time :" << endl;
    cout << dt << endl;
    payment->displayPaymentInfo();
    cout << endl;
}

void LocalTicket::reserveTicket() {
    cout << "Local Ticket reserved successfully." << endl;
}

void LocalTicket::cancelTicket() {
    cout << "Local Ticket reservation canceled successfully." << endl;

}


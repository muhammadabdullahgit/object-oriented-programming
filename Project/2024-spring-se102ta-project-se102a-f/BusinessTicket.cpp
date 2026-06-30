//
// Created by Dell on 18/04/2024.
//

#include "BusinessTicket.h"

BusinessTicket::BusinessTicket() {}

BusinessTicket::BusinessTicket(const string &_passengerName, int _ticketNumber, const string &_transactionId,
                               double _price, const string &_paymentMethod)
        : Ticket(_passengerName, _ticketNumber, _transactionId, _price, _paymentMethod) {
}

void BusinessTicket::displayTicketInfo() {
    cout << endl;
    cout << "Business Class Ticket - Passenger: " << passengerName << ", ticket Number: " << ticketNumber
         << endl;
    cout << "\t Date and Time :" << endl;
    cout << dt << endl;
    payment->displayPaymentInfo();
    cout << endl;
}

void BusinessTicket::reserveTicket() {
    cout << "Business Ticket reserved successfully." << endl;
}

void BusinessTicket::cancelTicket() {
    cout << "Business Ticket reservation canceled successfully." << endl;

}
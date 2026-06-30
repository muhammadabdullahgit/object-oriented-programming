//
// Created by Dell on 18/04/2024.
//

#include "LowerAcTicket.h"

LowerAcTicket::LowerAcTicket() {}

LowerAcTicket::LowerAcTicket(const string &_passengerName, int _ticketNumber, const string &_transactionId,
                             double _price, const string &_paymentMethod)
        : Ticket(_passengerName, _ticketNumber, _transactionId, _price, _paymentMethod) {
}

void LowerAcTicket::displayTicketInfo() {
    cout << endl;
    cout << "LowerAc Ticket - Passenger: " << passengerName << ", ticket Number: " << ticketNumber
         << endl;
    cout << "\t Date and Time :" << endl;
    cout << dt << endl;
    payment->displayPaymentInfo();
    cout << endl;
}

void LowerAcTicket::reserveTicket() {
    cout << "Lower AC Ticket reserved successfully." << endl;
}

void LowerAcTicket::cancelTicket() {
    cout << "Lower AC Ticket reservation canceled successfully." << endl;
}

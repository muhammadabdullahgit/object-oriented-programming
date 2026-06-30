//
// Created by Dell on 18/04/2024.
//

#include "Ticket.h"

Ticket::Ticket() {

}


Ticket::Ticket(const string &_passengerName, int _ticketNumber, const string &_transactionId, double _price,
               const string &_paymentMethod)
        : passengerName(_passengerName), ticketNumber(_ticketNumber) {
    payment->setPaymentClassTransactionId(_transactionId);
    payment->setPaymentClassPrice(_price);
    payment->setPaymentClassPaymentMethod(_paymentMethod);
}

string Ticket::getPassengerName() {
    return passengerName;
}

void Ticket::setPassengerName(string &passName) {
    passengerName = passName;
}

int Ticket::getTicketNumber() {
    return ticketNumber;
}

void Ticket::setTicketNumber(int &t) {
    ticketNumber = t;
}

double Ticket::getPrice() {
    return payment->getPrice();
}

void Ticket::setPrice(double &p) {
    payment->setPaymentClassPrice(p);
}

string Ticket::getTransactionId() {
    return payment->getTransactionId();
}

void Ticket::setTransactionId(string &tm) {
    payment->setPaymentClassTransactionId(tm);
}

string Ticket::getPaymentMethod() {
    return payment->getPaymentMethod();
}

void Ticket::setPaymentMethod(string &pm) {
    payment->setPaymentClassPaymentMethod(pm);
}

DateTime Ticket::getDateTime() {
    return dt;
}

void Ticket::setDateTime(DateTime &dateTime) {
    dt = dateTime;
}

// Generate a random ticket number between 10000 and 99999
int Ticket::generateTicketNumber() {
    return rand() % 90000 + 10000;
}

// Generate a random 4-digit random number between 0 and 9999
string Ticket::generateTransactionId() {
    return to_string(rand() % 10000);
}

Ticket::~Ticket() {
}
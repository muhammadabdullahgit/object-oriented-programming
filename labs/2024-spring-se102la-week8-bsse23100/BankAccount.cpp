//
// Created by Dell on 18/03/2024.
//
#include "BankAccount.h"

BankAccount::BankAccount(Customer &holder, double initialBalance) : accountHolder(holder) {
    this->balance = initialBalance;
}

string BankAccount::getAccountHolder() const {
    return accountHolder.getName();
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setBalance(double finalBalance) {
    balance = finalBalance;
}

void BankAccount::deposit(double amount) {
    balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        cout << " balance in account is insufficient cannot withdraw" << endl;
        balance += 0;
    }
}
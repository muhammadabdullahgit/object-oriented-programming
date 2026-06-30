//
// Created by Dell on 18/03/2024.
//

#include "Bank.h"

Bank *Bank::instance = nullptr;

Bank::Bank() {

}

Bank &Bank::getInstance() {
    if (instance == nullptr) {
        instance = new Bank();
    }
    return *instance;
}

void Bank::transfer(BankAccount &fromAccount, BankAccount &toAccount, double amount) {
    if (fromAccount.getBalance() >= amount) {
        fromAccount.setBalance(fromAccount.getBalance() - amount);
        toAccount.setBalance(toAccount.getBalance() + amount);
    } else {
        cout << "balance in account is insufficient cannot transfer" << endl;
    }
}
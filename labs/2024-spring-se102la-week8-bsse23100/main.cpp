#include "BankAccount.h"
#include "Bank.h"
#include "Customer.h"
#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"enter  1 to check customer name"<<endl;
    cout<<"enter  2 to check account balance"<<endl;
    cout<<"enter  3 to deposit"<<endl;
    cout<<"enter  4 to withdraw"<<endl;
    cout<<"enter  5 to transfer funds"<<endl;
    cin>>x;
    switch(x) {
        case 1: {
            Customer BSSE23100 = Customer("BSSE 23100");
            cout<<"name of customer : "<<BSSE23100.getName() <<endl;
            break;
        }
        case 2: {
            Customer BSSE23100 = Customer("BSSE 23100");
            BankAccount account = BankAccount(BSSE23100, 1000.0);
            cout<<" balance in account : "<<account.getBalance();
            break;
        }
        case 3: {
            Customer BSSE23100 = Customer("BSSE 23100");
            BankAccount account = BankAccount(BSSE23100, 1000.0);
            account.deposit(500.0);
            cout<<" balance in account : "<<account.getBalance();
            break;
        }
        case 4: {
            Customer BSSE23100 = Customer("BSSE 23100");
            BankAccount account = BankAccount(BSSE23100, 1500.0);
           cout<<"initial balance in account : "<<account.getBalance()<<endl;
            account.withdraw(300.0);
            cout<<"balance after withdrawal : "<<account.getBalance() <<endl;
            account.withdraw(1500.0);
            cout<<"balance after withdrawing insufficient amount : "<<account.getBalance()<<endl;
            break;
        }
        case 5:{
            Customer BSSE23100 = Customer("BSSE 23100");
            BankAccount account = BankAccount(BSSE23100, 1500.0);
            Customer Abdullah = Customer("Abdullah");
            BankAccount account1 = BankAccount(Abdullah, 2000.0);
            Bank::getInstance().transfer(account,account1,500);
            cout<<"funds is transfer to other account"<<endl;
            break;
        }
        default: {
            cout << "wrong key pressed in main menu" << endl;
            break;
        }
    }

    return 0;
}
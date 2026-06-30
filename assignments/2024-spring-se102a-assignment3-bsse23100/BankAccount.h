# include<iostream>
using namespace std;

#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT3_BSSE23100_BANKACCOUNT_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT3_BSSE23100_BANKACCOUNT_H
class BankAccount {
private:
    string* ownerName;
    double *balance;

public:
    BankAccount(string& name, double& initialBalance);
    BankAccount(BankAccount& other);
    BankAccount(BankAccount& other, bool deepCopy);
    ~BankAccount();
    string getOwnerName();
    double getBalance();
    void setOwnerName(string a);
    void setBalance(double b);
    void display();
};
void q1();
#endif //INC_2024_SPRING_SE102A_ASSIGNMENT3_BSSE23100_BANKACCOUNT_H

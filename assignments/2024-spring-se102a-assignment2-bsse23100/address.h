#ifndef _ADDRESS_H
#define _ADDRESS_H
#include <string>

using namespace std;

struct Address {
    string street;
    string city;
    string state;
    string ZIP;
Address(string Street,string City,string State,string zIP);
    Address(); 
};

#endif

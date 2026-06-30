#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"
#include "Transactions.h"
#include "Invoice.h"
#include "Salaries.h"
#include "Client.h"
#include "Management.h"
using namespace std;
using json = nlohmann::json;

/* HOW TO SPLIT A STRING ? SAMPLE CODE */
//The find(const string& str, size_t pos = 0) function returns the position of the first occurrence of str in the string, or npos if the string is not found.

//string s = "U_B_S";
//string delimiter = "_";
//size_t pos = 0;
//string split;
//while ((pos = s.find(delimiter)) != string::npos) {
//split = s.substr(0, pos);
//std::cout << split << std::endl;
//s.erase(0, pos + delimiter.length());
//}
//cout << s << endl;



int main(){
Management*management=Management::getInstance();
int choice;
do {
    cout << "enter 1 for reading transactions,invoices and salaries file" << endl;
    cout << "enter 2 to view financial information of client,employee and company " << endl;
    cout << "enter 3 to calculate client tax" << endl;
    cout << "enter 4 to create separate json file for each client" << endl;
    cout << "enter 5 to create separate json file for each employee" << endl;
    cout << "enter 6 to exit" << endl;
    cin >> choice;
    switch (choice) {
        case 1: {
            cout<<endl;
            management->readTransactions();
            management->readInvoice();
            management->readSalaries();
            cout<<endl;
            break;
        }
        case 2: {
            break;
        }
        case 3: {
            break;
        }
        case 4: {
            break;
        }
        case 5: {
            break;
        }
        case 6: {
            cout<<" exiting "<<endl;
            break;
        }
        default:{
            cout<<"you entered wrong choice.input again"<<endl;
            break;
        }
    }
} while (choice!=6);
return 0;
}

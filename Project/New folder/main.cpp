#include "Umar_Ahmad.h"
#include "Ali_Hasnain.h"
#include "Muhammad_Abdullah.h"
#include <iostream>
using namespace std;
int main()
{
    system("clear");
    cout << "\t\t-----------------------------------------"<<endl;
    cout << "\t\tWelcome to Railway Management System \n";
    cout << "\t\t-----------------------------------------"<<endl;
    int choice;
    do {
        cout << "\nWhich part do you ant to perform:" << endl;
        cout << "1. Umar Ahmad (For Admin Part)" << endl;
        cout << "2. Ali Hasnain (For Management of Train and its functionality and Passenger Part)" << endl;
        cout << "3. Muhammad Abdullah (For Ticket and Passenger Part )" << endl;
        cout << "4. Exit" << endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch (choice) {
            case 1:{
                Umar_Ahmad umarAhmad;
                umarAhmad.umar_menu();
            }
                break;
            case 2:{
                Ali_Hasnain aliHasnain;
                aliHasnain.ali_menu();
            }
                break;
            case 3:{
                Muhammad_Abdullah muhammadAbdullah;
                muhammadAbdullah.abdullah_menu();
            }
                break;
            case 4:{
                cout<<"Thank Tou for visiting here......"<<endl;
            }
                break;
            default:
                cout<<"Invalid input! Try again."<<endl;
        }
    } while (choice!=4);
    return 0;
}

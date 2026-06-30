#include <iostream>
#include <vector>
#include "Order.h"
#include "Employee.h"
#include "Customer.h"
#include "singleton.h"

using namespace std;

int main() {
    int x;
    do {
        singleton* s=singleton::getInstance();
        cout<<endl;
        cout << "enter  1 for order processing" << endl;
        cout << "enter  2 for employee scheduling" << endl;
        //cout << "enter  3 for customer actions" << endl;
        cout << "enter  4 to exit" << endl;
        cin >> x;
        switch (x) {
            case 1: {
                string ordName,ordId,ordType,customerName,address,date;
                cout<<" enter order name "<<endl;
                cin>>ordName;
                cout<<" enter order id "<<endl;
                cin>>ordId;
                cout<<" enter order type(rush/regular) "<<endl;
                cin>>ordType;
                cout<<" enter customer name "<<endl;
                cin>>customerName;
                cout<<" enter address "<<endl;
                cin>>address;
                cout<<" enter date(DD/MM/YYYY) "<<endl;
                cin>>date;
                Order* Ord=new Order(ordName,ordId,customerName,address,ordType,date);
                s->receiveOrder(Ord);
                s->processOrder(ordId);
                s->deliveryProcessing(ordId,date);
                s->displayOrder(Ord);
                break;
            }
            case 2: {
                string n,r;
                cout<<"enter name"<<endl;
                cin>>n;
                cout<<"enter role(driver / dispatcher)"<<endl;
                cin>>r;
                Employee* Emp=new Employee(n,r);
                s->displayEmployee(Emp);
                break;
            }
            /*case 3: {
                break;
            }*/
            case 4: {
                cout << " exiting " << endl;
                break;
            }
            default: {
                cout << "wrong key pressed in main menu" << endl;
                break;
            }
        }
    } while (x != 4);
    return 0;
}

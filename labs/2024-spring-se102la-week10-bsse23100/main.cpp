# include <iostream>
#include "Employee.h"
#include "TotalEmployees.h"
#include "inventory.h"
#include "singleton.h"

using namespace std;

#include <vector>

int main() {
    singleton *s = singleton::getInstance();
    int x;
    cout << "enter  1 to run employee management" << endl;
    cout << "enter  2 to run inventory management" << endl;
    cout << "enter  3 to run production management" << endl;
    cout << "enter  4 to run sales management" << endl;
    cin >> x;
    switch (x) {
        case 1: {
            TotalEmployees *totalEmployees;
            totalEmployees = s->getEmployeeManagementSystem();
            int choice;
            do {
                cout << "enter  1 to add employee" << endl;
                cout << "enter  2 to remove employee" << endl;
                cout << "enter  3 to mark attendance" << endl;
                cout << "enter  4 to update salary" << endl;
                cout << "enter  5 to display employee " << endl;
                cout << "enter  6 to exit" << endl;
                cin >> choice;
                switch (choice) {
                    case 1: {
                        int a, empId;
                        double salary;
                        string name, role;
                        cout << "enter number of employees you want to add" << endl;
                        cin >> a;
                        for (int i = 0; i < a; ++i) {
                            cout << "enter name" << endl;
                            cin >> name;
                            cout << "enter id" << endl;
                            cin >> empId;
                            cout << "enter role" << endl;
                            cin >> role;
                            cout << "enter salary" << endl;
                            cin >> salary;
                            totalEmployees->addEmployee(new Employee(name, empId, role, salary));
                            cout << "employee( " << name << " ) is added" << endl;
                        }
                        break;
                    }
                    case 2: {
                        int a, empId;
                        cout << "enter number of employees you want to remove" << endl;
                        cin >> a;
                        for (int i = 0; i < a; ++i) {
                            cout << "enter emp id" << endl;
                            cin >> empId;
                            totalEmployees->removeEmployee(empId);
                            cout << "employee( " << empId << " ) is removed" << endl;
                        }
                        break;
                    }
                    case 3: {
                        int empId;
                        string date;
                        bool status;
                        cout << "enter id" << endl;
                        cin >> empId;
                        cout << "enter date(DD/MM/YYYY)" << endl;
                        cin >> date;
                        cout << "enter 1 for present and 0 for absent" << endl;
                        cin >> status;
                        totalEmployees->markAttendance(empId, date, status);
                        cout << "employee( " << empId << " ) attendance is marked" << endl;
                        break;
                    }
                    case 4: {
                        int empId;
                        double salary;
                        cout << " enter id" << endl;
                        cin >> empId;
                        cout << "enter updated salary" << endl;
                        cin >> salary;
                        totalEmployees->updateSalary(empId, salary);
                        cout << "employee( " << empId << " ) salary is updated" << endl;
                        break;
                    }
                    case 5: {
                        totalEmployees->displayEmp();
                        break;
                    }
                    case 6: {
                        cout << "Exiting" << endl;
                        break;
                    }
                    default: {
                        cout << "wrong option pressed in employee menu" << endl;
                    }
                }
            } while (choice != 6);
            break;
        }
        case 2: {
            inventory *inventoryManagement = s->getInventoryManagementSystem();
            int choice, rawMaterial, product, packagingMaterial;
            cout << "enter raw material quantity" << endl;
            cin >> rawMaterial;
            cout << "enter product quantity" << endl;
            cin >> product;
            cout << "enter packaging material quantity" << endl;
            cin >> packagingMaterial;
            inventoryManagement = new inventory(rawMaterial, product, packagingMaterial);
            cout << endl;
            do {
                cout << " enter 1 to Track stock" << endl;
                cout << " enter 2 to replenish inventory" << endl;
                cout << " enter 3 to exit" << endl;
                cin >> choice;

                switch (choice) {
                    case 1: {
                        inventoryManagement->trackStock();
                        break;
                    }
                    case 2: {
                        int rawMaterialQuantity, productQuantity, packagingMaterialQuantity;
                        cout << "Enter quantity to replenish for raw material" << endl;
                        cin >> rawMaterialQuantity;
                        cout << "Enter quantity to replenish for product " << endl;
                        cin >> productQuantity;
                        cout << "Enter quantity to replenish for packaging material " << endl;
                        cin >> packagingMaterialQuantity;
                        inventoryManagement->replenishInventory(rawMaterialQuantity, productQuantity,
                                                                packagingMaterialQuantity);
                        break;
                    }
                    case 3: {
                        std::cout << "Exiting" << std::endl;
                        break;
                    }
                    default: {
                        cout << "wrong key pressed in inventory management menu" << endl;
                        break;
                    }
                }
            } while (choice != 3);
            break;
        }
        case 3: {
            productionManagement *production = s->getProductionManagementSystem();
            int batchNumber, producedQuantity;
            string productType;
            cout << "enter batch number" << endl;
            cin >> batchNumber;
            cout << "enter product type" << endl;
            cin >> productType;
            cout << "enter quantity" << endl;
            cin >> producedQuantity;
            production->addProductionBatch(new Production(batchNumber, productType, producedQuantity));
            int choice;
            do {
                cout << " enter 1 to perform quality control" << endl;
                cout << " enter 2 to calculate efficiency" << endl;
                cout << " enter 3 to display" << endl;
                cout << " enter 4 to exit" << endl;
                cin >> choice;
                switch (choice) {
                    case 1: {
                        production->qualityControl();
                        cout<<"quality control is performed"<<endl;
                        cout<<endl;
                        production->displayProductionBatches();
                        break;
                    }
                    case 2: {
                        double efficiency = production->calculateProductionEfficiency();
                        cout << "Production Efficiency = " << efficiency << "%" << endl;
                        break;
                    }
                    case 3:{
                        production->displayProductionBatches();
                    }
                    case 4: {
                        cout<<" exiting "<<endl;
                        break;
                    }

                    default: {
                        cout << "wrong option pressed in production management menu" << endl;
                        break;
                    }
                }
            } while (choice != 4);
            break;
        }
        case 4:{
            SalesManagement *sales = s->getSalesManagementSystem();
            int tId,ordId,qty;
            string customerId,productName;
            double amount;
            cout << "enter sales id" << endl;
            cin >> tId;
            cout << "enter customer id" << endl;
            cin >> customerId;
            cout << "enter amount" << endl;
            cin >> amount;
            cout << "enter order id" << endl;
            cin >> ordId;
            cout << "enter product name" << endl;
            cin >> productName;
            cout << "enter product quantity" << endl;
            cin >> qty;
            sales->addSalesRecord(new Sales(tId, customerId, amount));
            sales->addCustomerOrder(new Customer(ordId, customerId, productName, qty));
            int choice;
            do {
                cout << " enter 1 to full fill order" << endl;
                cout << " enter 2 to generate invoice" << endl;
                cout << " enter 3 to track delivery" << endl;
                cout << " enter 4 to exit" << endl;
                cin >> choice;
                switch (choice) {
                    case 1:{
                        sales->fulfillOrder(new Customer(ordId, customerId, productName, qty));
                        break;
                    }
                    case 2:{
                        sales->generateInvoice(new Customer(ordId, customerId, productName, qty));
                        break;
                    }
                    case 3:{
                        sales->trackDelivery(new Customer(ordId, customerId, productName, qty));
                        break;
                    }
                    case 4:{
                        cout<<" exiting"<<endl;
                        break;
                    }
                    default: {
                        cout << "wrong key pressed in sales menu" << endl;
                        break;
                    }
                }
            }while(choice!=4);
            break;
        }
        default: {
            cout << "wrong key pressed in main menu" << endl;
            break;
        }
    }

    return 0;
}

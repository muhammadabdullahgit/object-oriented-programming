#include <iostream>
#include <sstream>
#include "InventorySystem.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"

using namespace std;

int main() {
    int x;
    cout << "enter  1 to run question 1" << endl;
    cout << "enter  2 to run question 2" << endl;
    cin >> x;
    switch (x) {
        case 1: {
            InventorySystem* inventorySystem = InventorySystem::getInstance();
            inventorySystem->addProduct("Apple");
            stringstream actualOutput;
            inventorySystem->displayInventory(actualOutput);
            cout<<"removing products"<<endl;
            inventorySystem->removeProduct("Apple");
            inventorySystem->displayInventory(actualOutput);
            break;
        }
        case 2: {
            int y;
            cout << "enter  1 to use warrior attack and special ability" << endl;
            cout << "enter  2 use mage attack and special ability" << endl;
            cout << "enter  3 use archer attack and special ability" << endl;
            cin >> x;
            switch (x) {
                case 1: {
                    Warrior warrior;
                    warrior.attack();
                    warrior.useSpecialAbility();
                    break;
                }
                case 2: {
                    Mage mage;
                    mage.attack();
                    mage.useSpecialAbility();
                    break;
                }
                case 3: {
                    Archer archer;
                    archer.attack();
                    archer.useSpecialAbility();
                    break;
                }
                default: {
                    cout << "wrong key pressed in q2 menu" << endl;
                    break;
                }
            }
            break;
        }
        default: {
            cout << "wrong key pressed in main menu" << endl;
            break;
        }
    }
    //Make a Menu Driven Program and Call your functions here
    return 0;
}

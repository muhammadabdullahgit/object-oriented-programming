#include <iostream>
#include <fstream>
#include "Management.h"
#include "AssignmentManagement.h"
#include "Assignment.h"
#include "nlohmann/json.hpp"
using namespace std;
using json = nlohmann::json;


int main()
{
   // Management*management=Management::getInstance();
    AssignmentManagement *assignmentManagement=new AssignmentManagement();
    assignmentManagement->readAssignment1FromJson();
    assignmentManagement->displayAllAssignments();
    Management*management=Management::getInstance();

return 0;
}
    /*int x;
    do {
        cout << "enter 1 to read file" << endl;
        cout << "enter 2 to get plagiarism stats" << endl;
        cout << "enter 3 to get result" << endl;
        cout << "enter 4 to result with best policy" << endl;
        cout << "enter 5 to write new json file" << endl;
        cout << "enter 6 to exit" << endl;
        cin >> x;
        switch (x) {
            case 1: {
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
            }case 6: {
                cout<< " exiting"<<endl;
                break;
            }
            default:{
                cout<<"you entered wrong choice. enter again"<<endl;
                break;
            }
        }
    }while(x!=6);
}
*/
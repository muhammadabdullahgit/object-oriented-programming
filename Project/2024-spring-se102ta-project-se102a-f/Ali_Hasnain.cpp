//
// Created by AAA on 4/28/2024.
//

#include "Ali_Hasnain.h"

void Ali_Hasnain::ali_menu() {
    //singleton method
    Train *train =Train::getInstance();
    train->readEngineDataFromJson();
    //boogie class object
    Boogie bogi(15,2,52,"Business");
    //dining car object
    DiningCar dincar;
    dincar.readTableDataFromJson();
    //passenger class object
    Passenger passengerobj("Ali",20,2,"35301-6219897-1");
    //feedback class object
    Feedback fdback;
    int quest;
    do {            //main menu
        system("clear");
        cout << "\t\t\tWelcome to Ali's Work \t\t\t" << endl;          //welcome notes
        cout << "You have the following Options:" << endl;
        cout << "  1. Admin\n"
                "  2. Passenger\n"      //making menu options
                "  3. Exit" << endl;
        cout << "Enter the Option from the Given Choice: ";
        cin >> quest;
        switch (quest) {
            case 1: {                                         //for option 1
                do {            //admin menu
                    system("clear");
                    cout << "\t\t\tWelcome to Admin Portal\t\t\t" << endl;          //welcome notes
                    cout << "Choose the Field you want to Work On:" << endl;
                    cout << "  1. Data of Train\n"
                            "  2. Boogies Data of Train\n"        //making menu options
                            "  3. Dining Car of Train\n"
                            "  4. Emergency Situation for Engine\n"
                            "  5. Exit" << endl;
                    cout << "Enter the Option from the Given Choice: ";
                    cin >> quest;
                    switch (quest) {
                        case 1: {            //for option 1
                            do {system("clear");
                                cout << "\t\t\tWelcome to Train Information Portal\t\t\t"
                                     << endl;          //welcome notes
                                cout << "Choose the Field you want to Work On:" << endl;
                                cout << "  1. Specifying Train to Routes\n"
                                        "  2. Assigning Engines To Train\n"        //making menu options
                                        "  3. Exit" << endl;
                                cout << "Enter the Option from the Given Choice: ";
                                cin >> quest;
                                switch (quest) {
                                    case 1: {            //for option 1
                                        train->trainInfo();
                                        train->trainData();
                                        break;
                                    }
                                    case 2: {
                                        train->addengineInfo();
                                        train->engineInfo();
                                        train->assignEngine();
                                        break;
                                    }
                                    case 3:{
                                        break;
                                    }
                                    default:            //showing default value
                                        cout << "Enter a Valid option from the list" << endl;       //default value
                                }
                            } while (quest != 3);
                            break;
                        }
                        case 2: {
                            do {system("clear");
                                cout << "\t\t\tWelcome to Boogie Information Portal\t\t\t" << endl;          //welcome notes
                                cout << "Choose the Field you want to Work On:" << endl;
                                cout << "  1. Specifying Boogie information\n"
                                        "  2. Specifying Seats To Boogie\n"        //making menu options
                                        "  3. Exit" << endl;
                                cout << "Enter the Option from the Given Choice: ";
                                cin >> quest;
                                switch (quest) {
                                    case 1: {            //for option 1
                                        bogi.boogieInfo();
                                        break;
                                    }
                                    case 2: {
                                        bogi.seatInfo();
                                        break;
                                    }
                                    default:            //showing default value
                                        cout << "Enter a Valid option from the list" << endl;       //default value
                                }
                            } while (quest != 3);
                            break;
                        }
                        case 3: {
                            do {system("clear");
                                cout << "\t\t\tWelcome to Dining Car Portal\t\t\t" << endl;          //welcome notes
                                cout << "Choose the Field you want to Work On:" << endl;
                                cout << "  1. Specifying Dining Table information\n"
                                        //making menu options
                                        "  2. Exit" << endl;
                                cout << "Enter the Option from the Given Choice: ";
                                cin >> quest;
                                switch (quest) {
                                    case 1: {            //for option 1
                                        dincar.addableInfo();
                                        break;
                                    }
                                    case 2:{
                                        break;
                                    }
                                    default:            //showing default value
                                        cout << "Enter a Valid option from the list" << endl;       //default value
                                }
                            } while (quest != 2);
                            break;
                        }
                        case 4: {
                            do {system("clear");
                                cout << "\t\tWelcome to Emergency Portal for Engine\t\t"
                                     << endl;          //welcome notes
                                cout << "Choose the Field you want to Work On:" << endl;
                                cout << "  1. Specifying Engine for Emergency Situation\n"
                                        //making menu options
                                        "  2. Exit" << endl;
                                cout << "Enter the Option from the Given Choice: ";
                                cin >> quest;
                                switch (quest) {
                                    case 1: {            //for option 1
                                        train->engineInfo();
                                        train->assignEngine();
                                        train->engineInfo();
                                        break;
                                    }
                                    case 2:{
                                        break;
                                    }
                                    default:            //showing default value
                                        cout << "Enter a Valid option from the list" << endl;       //default value
                                }
                            } while (quest != 2);
                            break;
                        }
                        case 5:{
                            break;
                        }
                        default:            //showing default value
                            cout << "Enter a Valid option from the list" << endl;       //default value
                    }
                } while (quest!=5);
                break;
            }
            case 2: {                                         //for option 1
                do{system("clear");
                    cout << "\t\tWelcome to Passenger Portal\t\t" << endl;          //welcome notes
                    cout << "Choose the Field you want to Work On:" << endl;
                    cout << "  1. Enter Data in Portal\n"
                            "  2. Revised Input Data in Portal\n"        //making menu options
                            "  3. Check Train on Routes\n"
                            "  4. Check Seats in Train\n"
                            "  5. Check Table in Dining Car\n"
                            "  6. Book Table in Dining Car\n"
                            "  7. Revised Table Booking\n"
                            "  8. Give FeedBack\n"
                            "  9. Exit" << endl;
                    cout << "Enter the Option from the Given Choice: ";
                    cin >> quest;
                    switch (quest) {
                        case 1: {            //for option 1
                            passengerobj.addPassenger();
                            break;
                        }
                        case 2: {
                            cout << "- - - Following are the Details- - -" << endl;
                            passengerobj.displayPassengerInfo();
                            break;
                        }
                        case 3: {
                            cout << "Check the Stored File on Portal Named as Train" << endl;
                            break;
                        }
                        case 4: {
                            bogi.displaySeatInfo();
                            break;
                        }
                        case 5: {
                            dincar.tableInfo();
                            break;
                        }
                        case 6: {
                            dincar.booktable();
                            break;
                        }
                        case 7: {
                            cout << "After Booking, Following Tables are Available:";
                            dincar.tableInfo();
                            break;
                        }
                        case 8: {
                            cin>>fdback;
                            cout<<fdback;
                            fdback.addFeedbackDataToJson(fdback.getTicketNumber(),fdback.getFeedBack());
                        }
                        case 9:{
                            break;
                        }
                        default:            //showing default value
                            cout << "Enter a Valid option from the list" << endl;       //default value
                    }
                }while (quest != 9);
                break;
            }
            case 3:{
                break;
            }
            default:            //showing default value
                cout << "Enter a Valid option from the list" << endl;       //default value
        }
    }while (quest != 3);











//    Passenger passengerobj("Ali",20,2,"35301-6219897-1");
//    passengerobj.addPassenger();
//    cout<<"- - - Following are the Details- - -"<<endl;
//    passengerobj.displayPassengerInfo();
//    Boogie bogi(15,2,52,"Business");
//    bogi.seatInfo();
//    bogi.displaySeatInfo();
//    bogi.boogieInfo();
//    DiningCar dincar;
//    dincar.readTableDataFromJson();
//    cout<<"Welcome Sir: "<<endl;
//    dincar.addableInfo();
//    dincar.tableInfo();
//    dincar.booktable();
//    cout<<"After Booking, Following Tables are Available:";
//    dincar.tableInfo();
//    Feedback<int> fdback;
//    cout<<"Thanks for Your Feedback"<<endl;
//    cout<<fdback;
//    Train *train =Train::getInstance();
//    train->readEngineDataFromJson();
//    cout<<"Welcome Sir: "<<endl;
//    train->trainInfo();
//    train->trainData();
//    train->addengineInfo();
//    train->engineInfo();
//    train->assignEngine();
//    train->engineInfo();

}
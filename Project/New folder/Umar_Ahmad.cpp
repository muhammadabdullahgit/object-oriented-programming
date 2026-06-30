//
// Created by AAA on 4/28/2024.
//

#include "Umar_Ahmad.h"
//For Printing menu of Umar Ahmad's work
void Umar_Ahmad::umar_menu() {
    Admin &admin = Admin::getInstance();
    int choice;
    cout<<"Enter 0 to login: ";
    cin>>choice;
    if (choice==0){
        if (!admin.loginAdmin()) {//It will check that login process is successful or not
            cout << "Login failed. Exiting program." << endl;
            return;
        }
    }
    admin.readAnnouncementsJsonFile();//It will read the announcements from Json file
    admin.readFromJsonFile();//It will read the Routes from Json file
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add Route" << endl;
        cout << "2. Delete Route" << endl;
        cout << "3. Add Station to Route" << endl;
        cout << "4. Delete Station" << endl;
        cout << "5. Add Platform to Station" << endl;
        cout << "6. Delete Platform" << endl;
        cout << "7. Print Routes" << endl;
        cout << "8. Add Announcement" << endl;
        cout << "9. Print Announcements" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                system("clear");
                int t_stations;
                Route route;
                route.setRouteInfo();
                DateTime d1;
                cout<<"Enter arrival time of Route:\n";
                cin>>d1;//It will take the details of arrival time
                DateTime d2;
                cout<<"Enter Departure time of Route:\n";
                cin>>d2;//It will take the details of departure time
                Schedule sch{d1,d2};
                route.setSchedule(sch);//It will set the schedule
                cout<<"How many stations are in this route: ";
                cin>>t_stations;
                for (int i = 1; i <=t_stations; ++i) {
                    Station* station=new Station;
                    station->setStationInfo();
                    cout << "How many Platforms are in this Station: ";
                    int t_platforms=1;
                    cin >> t_platforms;
                    for (int k = 1; k <= t_platforms; ++k) {
                        Platform platform;
                        platform.setPlatformInfo();
                        station->addPlatform(platform);
                    }
                    route.addStationToRoute(station);
                }
                admin.addRoute(&route);
            }
                break;
            case 2: {
                system("clear");
                string name;
                cout<<"Enter Route Name: ";
                cin>>name;
                admin.deleteRoute(name);//It will delete the station from route
            }
                break;
            case 3: {
                system("clear");
                string name;
                cout<<"Enter Route Name: ";
                cin>>name;
                admin.addStationToRoute(name);//It will add the station to route
                admin.writeRouteToJson();
            }
                break;
            case 4: {
                system("clear");
                string name;
                cout<<"Enter Route Name: ";
                cin>>name;
                admin.deleteStation(name);//It will delete the station from route
                admin.writeRouteToJson();
            }
                break;
            case 5: {
                system("clear");
                string name;
                cout<<"Enter Route Name: ";
                cin>>name;
                admin.addPlatformToStation(name);//It will add the platform to station
                admin.writeRouteToJson();
            }
                break;
            case 6: {
                system("clear");
                string name;
                cout<<"Enter Route Name: ";
                cin>>name;
                admin.deletePlatform(name);//It will delete the route from station
                admin.writeRouteToJson();
            }
                break;
            case 7: {
                system("clear");
                cout<<"Route Details\n";
                admin.readFromJsonFile();
                admin.printRoutes();//It will print the details of route
            }
                break;
            case 8: {
                system("clear");
                // Add Announcement
                Announcements announcement;
                announcement.setAnnouncementMessage();//It will set the announcements details
                admin.addAnnouncement(announcement);//It will add the announcement
            }
                break;
            case 9: {
                system("clear");
                admin.readAnnouncementsJsonFile();
                for (const auto& announcement : admin.getAnnouncement()) {
                    cout << announcement << endl;//It will print the announcements
                }
            }
                break;
            case 10: {
                // Exit
                cout << "Exiting program." << endl;
            }
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 10);
}
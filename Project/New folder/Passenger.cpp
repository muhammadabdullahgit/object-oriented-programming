//
// Created by lenovo on 4/19/2024.
//

#include "Passenger.h"
Passenger::Passenger() {
    //default constructor
}
Passenger::Passenger(string user_Name, int age, int passenger_Number,string cnic) {
    //constructor
    this->user_Name=user_Name;
    this->age=age;
    this->passenger_Number=passenger_Number;
    this->cnic=cnic;
}
//getter for user name
string Passenger::getusername()const{
    return user_Name;
}
//getter for age
int Passenger::getage()const{
    return age;
}
//getter for number of passenger
int Passenger::getpaseengernumber()const{
    return passenger_Number;
}
//getter for cnic
string Passenger::getcnic()const{
    return cnic;
}
//Static member function definition
//use static to keep the same vector information for all passengers
vector<Passenger>Passenger::passengers;
void Passenger::inputPassengerInfo() {
        cout<<"Enter the Name of Passenger "<<":";
        cin.ignore();
        getline(cin,user_Name);
        cout<<"Enter the CNIC of "<<user_Name<<":";
        cin.ignore();
        getline(cin,cnic);
        cout<<"Enter the Age of "<<user_Name<<":";
        cin>>age;
        passengers.push_back(*this);    //to add current passenger object to vector
}
//function to add passenger for management portal
void Passenger::addPassenger() {
    cout<<"Enter the Number of Passengers: ";
    cin>>passenger_Number;      //asking passenger about number of passengers
    for(int i=0;i<passenger_Number;i++){
        Passenger P;        //making object of passenger
        cout<<"- - - Enter the Information Here For "<<i+1<<"- - -"<<endl;
        P.inputPassengerInfo();     //using passenger object to call function stated above
        addPassengerDataToJson(P);      //writing data to file
    }
}
//function to display info of passenger to passenger
void Passenger::displayPassengerInfo() {
//    cout<<"Following are the Details of Passenger: "<<endl;
    for(const auto&psngr:passengers){
        cout<<"Name of Passenger: "<<psngr.user_Name<<endl;
        cout<<"CNIC of Passenger: "<<psngr.cnic<<endl;
        cout<<"Age of Passenger: "<<psngr.age<<endl;
    }
}
//function to write data in passenger file
void Passenger::addPassengerDataToJson(const Passenger& newPassenger){
    const string fileName="Passenger.json";
    json jsonData;
    ifstream inputFile(fileName);
    if(!inputFile.is_open())
    {
        //display message if file does not open
        cerr<<"There is an error while opening: "<<fileName<<endl;
    }
    inputFile>>jsonData;
    inputFile.close();
    json newPassengerJsonData={
            //storing data
            {"Name",newPassenger.getusername()} ,
            {"CNIC",newPassenger.getcnic()},
            {"Age",newPassenger.getage()}
    };
    jsonData["Passengers"].push_back(newPassengerJsonData);      //storing number of data
    ofstream outputFile(fileName);
    if(outputFile.is_open())
    {
        //setting alignment
        outputFile<<setw(4)<<jsonData;
        outputFile.close();
        cout<<"Passenger Data have been added to file:"<<endl;
    }
}
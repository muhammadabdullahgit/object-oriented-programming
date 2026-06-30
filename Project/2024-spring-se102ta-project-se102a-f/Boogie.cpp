//
// Created by lenovo on 4/21/2024.
//

#include "Boogie.h"
Boogie::Boogie() {
    //default constructor
}
//constructor
Boogie::Boogie(int total_Boogie, int boogie_Number, int capacity, string boogie_Type) {
    this->total_Boogie=total_Boogie;
    this->boogie_Number=boogie_Number;
    this->capacity=capacity;
    this->boogie_Type=boogie_Type;
}
//function to get information of seats such as numbers of seats
void Boogie::seatInfo(){
    cout<<"Enter the Capacity of Seats For Boogies: ";
    cin>>capacity;          //asking admin to assign number of seats
    for (int i=0;i<capacity;i++){
        seatsAvailable.push_back(i+1);
        addSeatDataToJson(i+1);
        //vector of class seat which is composed in Boogie
    }
}

void Boogie::displaySeatInfo(){
    //function to display the number of seats
    cout<<"Seats in Boogies are: "<<endl;
    for(const auto& seat:seatsAvailable){
       cout<<seat<<endl;     //using getter from seat to display numbers of seats
                             //showing output as number of seats
    }
    cout<<endl;
}
void Boogie::boogieInfo(){
    //function to get the information of Boogies
    cout<<"Enter the Total Number of Boogies: ";
    cin>>total_Boogie;      //asking admin to assign total number of boogie for train
    for (int i=0;i<total_Boogie;i++){
      cout<<"Boogie Number: "<<i+1<<endl;       //asking and assigning boogie number from admin
      boogie_Number=i+1;
      cout<<"Enter the Boogie Type for "<<i+1<< ": ";       //asking boogie type from admin
      cin>>boogie_Type;
      addBoogieDataToJson(boogie_Number,boogie_Type);       //writing files such as boogie info to json
    }
}
void Boogie::addSeatDataToJson(int newSeat){
    const string fileName="Seats.json";
    json jsonData;
    ifstream inputFile(fileName);
    if(!inputFile.is_open())
    {
        //display message if file does not open
        cerr<<"There is an error while opening: "<<fileName<<endl;
    }
    inputFile>>jsonData;
    inputFile.close();
    json newSeatJsonData={
            //storing data
            {"Seat No",newSeat}
    };
    jsonData["Seats"].push_back(newSeatJsonData);      //storing number of data
    ofstream outputFile(fileName);
    if(outputFile.is_open())
    {
        //setting alignment
        outputFile<<setw(4)<<jsonData;
        outputFile.close();
    }
}

void Boogie::addBoogieDataToJson(int boogieNo,string boogieType){       //function for wtiting
    const string fileName="Boogie.json";        //filename
    json jsonData;
    ifstream inputFile(fileName);
    if(!inputFile.is_open())
    {   //display message if file is not opened
        cerr<<"There is an error while opening: "<<fileName<<endl;
    }
    inputFile>>jsonData;
    inputFile.close();
    json newBoogieJsonData={
            //storing data
            {"BoogieNO",boogieNo} ,
            {"BoogieType",boogieType}
    };
    //to store the number of data in Boogie
    jsonData["Boogies"].push_back(newBoogieJsonData);
    ofstream outputFile(fileName);
    if(outputFile.is_open())
    {
        //setting alignment
        outputFile<<setw(4)<<jsonData;
        outputFile.close();
    }
}

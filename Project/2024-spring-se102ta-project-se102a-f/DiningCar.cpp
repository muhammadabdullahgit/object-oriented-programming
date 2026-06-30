//
// Created by lenovo on 4/26/2024.
//

#include "DiningCar.h"
DiningCar::DiningCar() {
    //default coonstructor
}
DiningCar::DiningCar(int table_capacity) {
    //constructor
    this->table_capacity=table_capacity;
}
//function to add table information from admin
void DiningCar::addableInfo() {
    cout<<"Enter the Total Number of Table you Want to Add for Passengers: ";
    cin>>table_capacity;        //asking number of table to add from admin
    for (int i=0;i<table_capacity;i++){
        tables.push_back(DiningTable(i+1));         //vector of dining table class composed in dining car
    }
}
//function to display table information to passenger
void DiningCar::tableInfo() {
    cout<<"Total Numbers of Table in Dining Car: "<<endl;
    for(auto& table:tables){            //loop to check availability of table ... loop to vector of tables
        if(table.checkoccupied()){          //checking occupied from dining table
            cout<<"Table No."<<table.gettableNumber()<<" is Available"<<endl;       //if empty then show available
        }
        else{       //if not empty then display table has occupies
            cout<<"Table No."<<table.gettableNumber()<<" is Occupied"<<endl;
        }
    }
}
//funcion to book a table for passenger
void DiningCar::booktable() {
    int table_Number;
    cout<<"Enter the table you want to Book: ";
    cin>>table_Number;          //asking user to book a specific table number
    bool found=false;           //initializing the bool as false statement
    for(auto& table:tables) {   //loop to vector of tables
        if (table.gettableNumber() ==table_Number) {    //checking table number matched with table
            found = true;       //change the bool statement as true
            table.setoccupied(false);           //making value of occupied tale false to show unavailability of table
            cout << "Table." << table_Number << " has been Booked" << endl;
            changeBookingDataInJson(table_Number);      //to change the data written in json according to booking of table
            break;
        }
    }
    if(!found){ //display message if table not found
        cout<<"Sorry! This Table dose not Exist "<<endl;
    }
}
//json data after the booking of table from passenger
void DiningCar::changeBookingDataInJson(int no){        //writing data
    const string fileName="DinningTable.json";          //file name
    json jsonData;
    ifstream inputFile(fileName);
    if(!inputFile.is_open())
        //display message if file is not opened
    {
        cerr<<"There is an error while opening: "<<fileName<<endl;
    }
    inputFile>>jsonData;
    inputFile.close();
    // to show the unavailability of table
    for(auto& table:jsonData["DinningTables"])
    {  if(table["TableNo"]==no) {
            table["Availability"] = false;
            break;
        }
    }
    ofstream outputFile(fileName);
    if(outputFile.is_open())
    {
        //setting the alignment of data
        outputFile<<setw(4)<<jsonData;
        outputFile.close();
        //display message after storing data
        cout<<"Dinning Table Data have been added to file:"<<endl;
    }
}
//filing  function to read data from json file
void DiningCar::readTableDataFromJson(){
    DiningTable dining;
    for(auto& table:dining.readDataFromJson())
    {
        //read data for the vector of tables
        tables.push_back(table);
    }
}
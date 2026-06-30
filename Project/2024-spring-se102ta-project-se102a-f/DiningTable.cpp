//
// Created by lenovo on 4/26/2024.
//

#include "DiningTable.h"
DiningTable::DiningTable() {
    //default constructor
}
DiningTable::DiningTable(int table_Number) {
    //constructor 1 to be used in Dining car for vector of table
    this->table_Number=table_Number;
}
DiningTable::DiningTable(int table_Number, bool is_Occupied) {
    //constructor
    this->table_Number=table_Number;
    this->isOccupied=is_Occupied;
}
//getter for table number
int DiningTable::gettableNumber() {
    return table_Number;
}
//setter for table number
void DiningTable::setTableNo(int no){
    table_Number=no;
}
//bool check whether table is available or not
bool DiningTable::checkoccupied() {
    return isOccupied;
}
//stter for occupied table
void DiningTable::setoccupied(bool available) {
    isOccupied=available;
}
//reading data from json befor booking any table
vector<DiningTable> DiningTable::readDataFromJson(){        //reading vector of table before booking
    vector<DiningTable>table2;
    const string fileName="DinningTable.json";
    json jsonData;
    ifstream inputFile(fileName);
    if(!inputFile.is_open())
    {   //display message if file not opened
        cerr<<"There is an error while opening: "<<fileName<<endl;
    }
    inputFile>>jsonData;
    inputFile.close();
    for(auto& table:jsonData["DinningTables"])
    {   //to store number of data of tables
        DiningTable table1;
        table1.setoccupied(table["Availability"]);
        table1.setTableNo(table["TableNo"]);
        table2.push_back(table1);
    }
    return table2;
}
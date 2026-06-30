//
// Created by lenovo on 4/26/2024.
//

#include "Train.h"
Train*Train::instance= nullptr;         // initializing static pointer
Train::Train() {
    //default constructor
}
//singleton class
Train*Train::getInstance() {
    if(instance== nullptr){
        instance=new Train;
    }
    return instance;
}
Train::Train(int no_Of_Engines, string train_Name, int train_Number) {
    //constructor
    this->no_Of_Engines=no_Of_Engines;
    this->train_Name=train_Name;
    this->train_Number=train_Number;
}
//function to add train info
void Train::trainInfo() {
    //adding train info by asking data from admin
    cout<<"Enter the Number of Trains For the route: ";
    cin>>train_Number;          //asking admin to assign number of train
    for (int i=0;i<train_Number;i++){
        trains.push_back(i+1);          //using vector of trains
    }
}
//function to take train data
void Train::trainData() {
    string eng_Num;
    for (int i=0;i<train_Number;i++){       //taking name of trains from admin
        cout<<"Enter Name of Train."<<i+1<<" :";
        cin>>train_Name;
        cout<<"Enter the Engine ID for "<<train_Name<<" :";
        cin>>eng_Num;
        //storing data in json file
        addTrainDataToJson(train_Name,eng_Num);
    }
}
//function to add information of engine
void Train::addengineInfo()  {
    //adding engine to train by asking number of engines
    cout<<"Enter the Total Number of Engines You Have in Inventory: ";
    cin>>no_Of_Engines;        //asking number of engine to add from admin
    for (int i=0;i<no_Of_Engines;i++){
        engines.push_back(Engine(i+1));         //vector of engine class composed in train
    }
}
//function to show informartion of engines in inventory
void Train::engineInfo() {
    cout<<"Total Numbers of Engine in Inventory: "<<endl;
    for(int i=0;i<no_Of_Engines;i++){
        if(engines[i].checkassigned()){         //checking availability of engine
            cout<<"Engine No."<<engines[i].getengineNumber()<<" is Available"<<endl;
        }       //give output of available engine
        else{
            //give output of assigned engine
            cout<<"Engine No."<<engines[i].getengineNumber()<<" is Assigned"<<endl;
        }
    }
}
//function to assign engine by admin in emergency situation
void Train::assignEngine() {
    int eng_Number;
    cout<<"Enter the Engine you want to Assigned: ";
    cin>>eng_Number;          //asking user to assign engine
    bool found=false;           //initializing the bool as false statement
    for(auto& engine:engines) {   //loop to vector of engines
        if (engine.getengineNumber() ==eng_Number) {    //checking engine number matched with engine
            found = true;       //change the bool statement as true
            engine.setassigned(false);           //making value of assigned engine false to show unavailability of engine
            cout << "Engine." << eng_Number<< " has been Assigned" << endl;
            changeAssignedDataInJson(eng_Number);      //to change the data written in json according to assigning of engine
            break;
        }
    }
    if(!found){ //display message if engine not found
        cout<<"Sorry! This Engine dose not Exist "<<endl;
    }
}
void Train::addTrainDataToJson(string trainName,string engineID){       //function for wtiting
    const string fileName="Train.json";        //filename
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
            {"Train Name",trainName},
            {"Engine ID",engineID}
    };
    //to store the number of data in Boogie
    jsonData["Train"].push_back(newBoogieJsonData);
    ofstream outputFile(fileName);
    if(outputFile.is_open())
    {
        //setting alignment
        outputFile<<setw(4)<<jsonData;
        outputFile.close();
        //display message after writing data
//        cout<<"Boogie Data have been added to file:"<<endl;
    }
}
void Train::addEngineDataToJson(int engineNo,bool availability){       //function for wtiting
    const string fileName="Engine.json";        //filename
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
            {"Engine No",engineNo} ,
            {"Availability",availability}
    };
    //to store the number of data in engine
    jsonData["Engine"].push_back(newBoogieJsonData);
    ofstream outputFile(fileName);
    if(outputFile.is_open())
    {
        //setting alignment
        outputFile<<setw(4)<<jsonData;
        outputFile.close();
        //display message after writing data
    }
}
void Train::changeAssignedDataInJson(int no){        //writing data
    const string fileName="Engine.json";          //file name
    json jsonData;
    ifstream inputFile(fileName);
    if(!inputFile.is_open())
        //display message if file is not opened
    {
        cerr<<"There is an error while opening: "<<fileName<<endl;
    }
    inputFile>>jsonData;
    inputFile.close();
    // to show the unavailability of engine
    for(auto& engine:jsonData["Engine"])
    {  if(engine["Engine No"]==no) {
            engine["Availability"] = false;
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
        cout<<"Engine Data have been added to file:"<<endl;
    }
}
void Train::readEngineDataFromJson(){
    Engine eng;
    for(auto& engine:eng.readDataFromJson())
    {
        //read data for the vector of engine
        engines.push_back(engine);
    }
}
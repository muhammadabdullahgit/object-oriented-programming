//
// Created by lenovo on 4/24/2024.
//

#include "Engine.h"
Engine::Engine() {
    //default constructor
}
Engine::Engine(int engine_Number) {
    //constructor for vector
    this->engine_Number=engine_Number;
}
Engine::Engine(int engine_Number, bool isAssigned) {
    //constructor
    this->engine_Number=engine_Number;
    this->isAssigned=isAssigned;
}
//getter for engine number
int Engine::getengineNumber() {
    return engine_Number;
}
//for check availability
bool Engine::checkassigned() {
    return isAssigned;
}
//setter for bool assigned
void Engine::setassigned(bool assign) {
    isAssigned=assign;
}
//setter for engine number
void Engine::setEngineNo(int no) {
    engine_Number=no;
}
//vector to read all engines
vector<Engine> Engine::readDataFromJson(){        //reading vector of engine before booking
    vector<Engine>engine2;
    const string fileName="Engine.json";
    json jsonData;
    ifstream inputFile(fileName);
    if(!inputFile.is_open())
    {   //display message if file not opened
        cout<<"There is an error while opening: "<<fileName<<endl;
    }
    inputFile>>jsonData;
    inputFile.close();
    for(auto& engine:jsonData["Engine"])
    {   //to store number of data of engines
        Engine engine1;
        engine1.setassigned(engine["Availability"]);
        engine1.setEngineNo(engine["Engine No"]);
        engine2.push_back(engine1);
    }
    return engine2;
}
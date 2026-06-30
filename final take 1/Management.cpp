//
// Created by Dell on 13/05/2024.
//

#include "Management.h"
Management*Management::instance=nullptr;
Management::Management() {}
Management*Management::getInstance(){
    if(instance== nullptr){
        instance=new Management();
    }
    return instance;
}
void  Management::displayAssignments(){
    for(auto& assignment:assignmentManagement){
        assignment->readAssignment1FromJson();
        assignment->displayAllAssignments();
    }
}
/*
void Management::readAssignmentFromJson(){
    ifstream inputAssignmentFile("assignment1.json");
    if(!inputAssignmentFile){
        cout<<"file not open"<<endl;
        return;
    }
    json inputData;
    inputAssignmentFile>>inputData;
    inputAssignmentFile.close();
}
void Management::readQuizFromJson();
void Management::readProjectFromJson();
void Management::readMidTermFromJson();
void Management::readFinalFromJson();
void Management::writeAssignmentFromJson();
void Management::writeQuizFromJson();
void Management::writeProjectFromJson();
void Management::writeMidTermFromJson();
void Management::writeFinalFromJson();*/

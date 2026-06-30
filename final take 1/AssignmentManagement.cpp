//
// Created by Dell on 13/05/2024.
//

#include "AssignmentManagement.h"
AssignmentManagement::AssignmentManagement(){}
void AssignmentManagement::readAssignment1FromJson() {
    ifstream inputAssignmentFile;
    for (int i=0;i<9;i++){
    inputAssignmentFile.open("assignment"+ to_string(i)+".json");
    }
    if(!inputAssignmentFile.is_open()){
        cout<<"file not open"<<endl;
        return;
    }
    json input;
    inputAssignmentFile>>input;
    inputAssignmentFile.close();
    assignment.clear();
    for( auto &ass:input) {
        Assignment *assignment1 = new Assignment();
        string rollNo = ass["rollNo"];
        assignment1->setRollNo(rollNo);
        int marks = ass["marks"];
        assignment1->setMarks(marks);
        int total = ass["total"];
        assignment1->setTotal(total);
        bool plagiarism = ass["plagiarism"];
        assignment1->setPlagiarism(plagiarism);
        addAssignment(assignment1);
    }
}
void AssignmentManagement::addAssignment(Assignment* assignment1){
   assignment.push_back(assignment1);
}
/*void AssignmentManagement::readAssignment2FromJson(){}
void AssignmentManagement::readAssignment3FromJson(){}
void AssignmentManagement::readAssignment4FromJson(){}*/
void AssignmentManagement::displayAllAssignments(){
    for(auto& a:assignment){
        a->displayAssignment();
    }
}
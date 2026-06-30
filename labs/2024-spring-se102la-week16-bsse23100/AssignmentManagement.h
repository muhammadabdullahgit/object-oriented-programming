//
// Created by Dell on 13/05/2024.
//
#include <iostream>
#include <fstream>
#include <vector>
#include "Assignment.h"
#include "nlohmann/json.hpp"
using namespace std;
using json = nlohmann::json;
#ifndef INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_ASSIGNMENTMANAGEMENT_H
#define INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_ASSIGNMENTMANAGEMENT_H


class AssignmentManagement {
   vector<Assignment*>assignment;
public:
    AssignmentManagement();
    void readAssignment1FromJson();
    void addAssignment(Assignment* assignment1);
    /*void readAssignment2FromJson();
    void readAssignment3FromJson();
    void readAssignment4FromJson();*/
    void displayAllAssignments();
};


#endif //INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_ASSIGNMENTMANAGEMENT_H

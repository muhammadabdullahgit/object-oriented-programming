//
// Created by Dell on 13/05/2024.
//
#include <iostream>
#include <fstream>
#include "Student.h"
#include "Assignment.h"
#include "AssignmentManagement.h"
#include "Quiz.h"
#include "Project.h"
#include "MidTerm.h"
#include "Final.h"
#include <vector>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_MANAGEMENT_H
#define INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_MANAGEMENT_H


class Management {
    /*vector<Student *> student;
    vector<Assignment *> assignment;
    vector<Quiz *> quiz;
    vector<Project *> project;
    vector<MidTerm *> midTerm;
    vector<Final *> final;*/
    vector<AssignmentManagement*> assignmentManagement;
    static Management*instance;
    Management();
public:
    static Management*getInstance();
    /*void readAssignmentFromJson();
    void readQuizFromJson();
    void readProjectFromJson();
    void readMidTermFromJson();
    void readFinalFromJson();
    void writeAssignmentFromJson();
    void writeQuizFromJson();
    void writeProjectFromJson();
    void writeMidTermFromJson();
    void writeFinalFromJson();*/
    void displayAssignments();
};


#endif //INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_MANAGEMENT_H

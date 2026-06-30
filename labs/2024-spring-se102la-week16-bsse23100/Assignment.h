//
// Created by Dell on 13/05/2024.
//
#include <iostream>
#include "Student.h"
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_ASSIGNMENT_H
#define INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_ASSIGNMENT_H


class Assignment: public Student{
public:
    Assignment();
    Assignment(string rollNo,int marks,int total,bool plagiarism);
    void setRollNo(string rollNo);
    void setMarks(int marks);
    void setTotal(int total);
    void setPlagiarism(bool plagiarism);
    string getRollNo();
    int getMarks();
    int getTotal();
    bool getPlagiarism();
    void displayAssignment();
};


#endif //INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_ASSIGNMENT_H

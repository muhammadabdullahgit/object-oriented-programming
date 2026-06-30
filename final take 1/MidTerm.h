//
// Created by Dell on 13/05/2024.
//
#include <iostream>
#include "Student.h"
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_MIDTERM_H
#define INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_MIDTERM_H


class MidTerm: public Student{
public:
    MidTerm(string rollNo,int marks,int total,bool plagiarism);
    void setRollNo(string rollNo);
    void setMarks(int marks);
    void getTotal(int total);
    void getPlagiarism(bool plagiarism);
    string getRollNo();
    int getMarks();
    int getTotal();
    bool getPlagiarism();
};


#endif //INC_2024_SPRING_SE102LA_WEEK16_BSSE23100_MIDTERM_H

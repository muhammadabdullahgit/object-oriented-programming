# include<iostream>
using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT3_BSSE23100_STUDENT_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT3_BSSE23100_STUDENT_H
class Student {
private:
    float gpa;
public:
    string studentName;
    int studentID;
    Student(string name, int id, float initialGPA);
    void setGPA(float newGPA);
    float getGPA();
    void printStudentInfo();
};


void q2();
#endif //INC_2024_SPRING_SE102A_ASSIGNMENT3_BSSE23100_STUDENT_H

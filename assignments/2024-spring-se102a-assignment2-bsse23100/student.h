#ifndef _STUDENT_H
#define _STUDENT_H

#include "course.h"
#include <string>

using namespace std;

struct Student {
    string studentID;
    string name;
    int gradeLevel;
    Course* courses; 
    int courseCount; 

    Student(string studentID, string name, int gradeLevel); 
    ~Student();
    void addCourse(string courseCode, string courseName, int credits);
    void printStudentInfo();
    void printCourseInfo(string courseCode);
};

#endif

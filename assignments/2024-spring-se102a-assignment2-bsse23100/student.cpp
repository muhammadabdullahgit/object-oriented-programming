#include "student.h"
#include <iostream>

Student::Student(string studentID, string name, int gradeLevel) : studentID(studentID), name(name), gradeLevel(gradeLevel), courses(nullptr), courseCount(0) {
}

Student::~Student() {
}

void Student::addCourse(string courseCode, string courseName, int credits) {

}

void Student::printStudentInfo() {

}

void Student::printCourseInfo(string courseCode) {

}

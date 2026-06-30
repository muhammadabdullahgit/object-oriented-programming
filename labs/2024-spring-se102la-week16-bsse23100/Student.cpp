//
// Created by Dell on 13/05/2024.
//

#include "Student.h"
Student::Student(){}
Student::Student(string rollNo,int marks,int total,bool plagiarism){
        this->rollNo=rollNo;
        this->marks=marks;
        this->total=total;
        this->plagiarism=plagiarism;
}
void Student::setRollNo(string rollNo){
    this->rollNo=rollNo;
}
void Student::setMarks(int marks){
    this->marks=marks;
}
void Student::setTotal(int total){
    this->total=total;
}
void Student::setPlagiarism(bool plagiarism){
    this->plagiarism=plagiarism;
}
string Student::getRollNo(){
    return rollNo;
}
int Student::getMarks(){
    return marks;
}
int Student::getTotal(){
    return total;
}
bool Student::getPlagiarism(){
    return plagiarism;
}
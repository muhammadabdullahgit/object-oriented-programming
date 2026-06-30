//
// Created by Dell on 13/05/2024.
//

#include "Project.h"
Project::Project(string rollNo,int marks,int total,bool plagiarism){
    this->rollNo=rollNo;
    this->marks=marks;
    this->total=total;
    this->plagiarism=plagiarism;
}
void Project::setRollNo(string rollNo){
    this->rollNo=rollNo;
}
void Project::setMarks(int marks){
    this->marks=marks;
}
void Project::getTotal(int total){
    this->total=total;
}
void Project::getPlagiarism(bool plagiarism){
    this->plagiarism=plagiarism;
}
string Project::getRollNo(){
    return rollNo;
}
int Project::getMarks(){
    return marks;
}
int Project::getTotal(){
    return total;
}
bool Project::getPlagiarism(){
    return plagiarism;
}
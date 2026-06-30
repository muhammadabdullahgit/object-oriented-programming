//
// Created by Dell on 13/05/2024.
//

#include "Assignment.h"
Assignment::Assignment(){}
Assignment::Assignment(string rollNo,int marks,int total,bool plagiarism){
    this->rollNo=rollNo;
    this->marks=marks;
    this->total=total;
    this->plagiarism=plagiarism;
}
void Assignment::setRollNo(string rollNo){
    this->rollNo=rollNo;
}
void Assignment::setMarks(int marks){
    this->marks=marks;
}
void Assignment::setTotal(int total){
    this->total=total;
}
void Assignment::setPlagiarism(bool plagiarism){
    this->plagiarism=plagiarism;
}
string Assignment::getRollNo(){
    return rollNo;
}
int Assignment::getMarks(){
    return marks;
}
int Assignment::getTotal(){
    return total;
}
bool Assignment::getPlagiarism(){
    return plagiarism;
}
void Assignment::displayAssignment(){
    cout<<"rollNo ="<<rollNo<<endl;
    cout<<"marks ="<<marks<<endl;
    cout<<"total ="<<total<<endl;
    cout<<"plagiarism ="<<plagiarism<<endl;
}
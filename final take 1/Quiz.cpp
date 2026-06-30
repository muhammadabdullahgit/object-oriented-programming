//
// Created by Dell on 13/05/2024.
//

#include "Quiz.h"
Quiz::Quiz(string rollNo,int marks,int total,bool plagiarism){
    this->rollNo=rollNo;
    this->marks=marks;
    this->total=total;
    this->plagiarism=plagiarism;
}
void Quiz::setRollNo(string rollNo){
    this->rollNo=rollNo;
}
void Quiz::setMarks(int marks){
    this->marks=marks;
}
void Quiz::getTotal(int total){
    this->total=total;
}
void Quiz::getPlagiarism(bool plagiarism){
    this->plagiarism=plagiarism;
}
string Quiz::getRollNo(){
    return rollNo;
}
int Quiz::getMarks(){
    return marks;
}
int Quiz::getTotal(){
    return total;
}
bool Quiz::getPlagiarism(){
    return plagiarism;
}
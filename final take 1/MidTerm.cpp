//
// Created by Dell on 13/05/2024.
//

#include "MidTerm.h"
MidTerm::MidTerm(string rollNo,int marks,int total,bool plagiarism){
    this->rollNo=rollNo;
    this->marks=marks;
    this->total=total;
    this->plagiarism=plagiarism;
}
void MidTerm::setRollNo(string rollNo){
    this->rollNo=rollNo;
}
void MidTerm::setMarks(int marks){
    this->marks=marks;
}
void MidTerm::getTotal(int total){
    this->total=total;
}
void MidTerm::getPlagiarism(bool plagiarism){
    this->plagiarism=plagiarism;
}
string MidTerm::getRollNo(){
    return rollNo;
}
int MidTerm::getMarks(){
    return marks;
}
int MidTerm::getTotal(){
    return total;
}
bool MidTerm::getPlagiarism(){
    return plagiarism;
}
//
// Created by Dell on 13/05/2024.
//

#include "Final.h"
Final::Final(string rollNo,int marks,int total,bool plagiarism){
    this->rollNo=rollNo;
    this->marks=marks;
    this->total=total;
    this->plagiarism=plagiarism;
}
void Final::setRollNo(string rollNo){
    this->rollNo=rollNo;
}
void Final::setMarks(int marks){
    this->marks=marks;
}
void Final::getTotal(int total){
    this->total=total;
}
void Final::getPlagiarism(bool plagiarism){
    this->plagiarism=plagiarism;
}
string Final::getRollNo(){
    return rollNo;
}
int Final::getMarks(){
    return marks;
}
int Final::getTotal(){
    return total;
}
bool Final::getPlagiarism(){
    return plagiarism;
}
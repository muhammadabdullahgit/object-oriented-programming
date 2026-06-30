#include "Student.h"

Student::Student(string name, int id, float initialGPA) {
    studentName=name;
    studentID=id;
    gpa=initialGPA;
}
void Student::setGPA(float newGPA){
    if(newGPA>=0&&newGPA<=4) {
        gpa = newGPA;
    }
}
float Student:: getGPA(){
    return gpa;
}
void Student::printStudentInfo(){
    cout<<"student name="<<studentName<<endl;
    cout<<"student id="<<studentID<<endl;
    cout<<"student gpa="<<gpa<<endl;
}
void q2(){
    string name;
    int id;
    float initialGPA;
    cout << "enter your name" << endl;
    cin>>name;
    cout << "enter your id" << endl;
    cin >> id;
    cout << "enter your GPA" << endl;
    cin >> initialGPA;
    Student s(name, id, initialGPA);
    s.printStudentInfo();
    return;
}
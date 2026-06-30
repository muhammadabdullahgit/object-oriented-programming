//
// Created by Dell on 01/04/2024.
//

#include "Singleton.h"
Singleton* Singleton:: instance=nullptr;
Singleton* Singleton::getInstance(){
    if(instance== nullptr){
        instance= new Singleton();
    }
    return instance;
}
int Singleton::getEmpCount(){
    return empCount;
}
int Singleton::getTenantCount(){
    return tenantCount;
}
int Singleton::getVisitorCount(){
    return visitorCount;
}
int Singleton::getStudentCount(){
    return studentCount;
}
void Singleton::setEmpCount(int count){
    this->empCount=count;
}
void Singleton::setTenantCount(int count){
    this->tenantCount=count;
}
void Singleton::setVisitorCount(int count){
    this->visitorCount=count;
}
void Singleton::setStudentCount(int count){
    this->studentCount=count;
}
void Singleton::addTenant(Tenant& t){
    if(tenantCount<=50){
        int i=tenantCount;
        T[i+1].push_back(&t);
        tenantCount+=1;
        cout<<"car is parked"<<endl;
    }
    else{
        cout<<"parking is full"<<endl;
    }
}
void Singleton::addEmp(Employee& e){
    if(empCount<=70){
        int i=empCount;
        E[i+1].push_back(&e);
        empCount+=1;
        cout<<"car is parked"<<endl;
    }
    else{
        cout<<"parking is full"<<endl;
    }
}
void Singleton::addVisitor(Visitor& v){
    if(visitorCount<=50){
        int i=visitorCount;
        V[i+1].push_back(&v);
        visitorCount+=1;
        cout<<"car is parked"<<endl;
    }
    else{
        cout<<"parking is full"<<endl;
    }
}
void Singleton::addStudent(Student &s) {
    if(studentCount<=200){
        int i=studentCount;
        S[i+1].push_back(&s);
        studentCount+=1;
        cout<<"bike is parked"<<endl;
    }
    else{
        cout<<"parking is full"<<endl;
    }
}
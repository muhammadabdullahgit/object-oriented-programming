//
// Created by Dell on 01/04/2024.
//
#include <iostream>
using namespace std;
#include "Tenant.h"
#include "Employee.h"
#include "Visitor.h"
#include "Student.h"
#include <vector>
#include "Car.h"
#ifndef INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_SINGLETON_H
#define INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_SINGLETON_H


class Singleton {
static Singleton* instance;
static int empCount;
static int tenantCount;
static int studentCount;
static int visitorCount;
    vector<Tenant *>T[50];
    vector<Employee* >E[70];
    vector<Visitor *>V[50];
    vector<Student *>S[200];
Singleton();
public:
    Singleton* getInstance();
    int getEmpCount();
    int getTenantCount();
    int getVisitorCount();
    int getStudentCount();
    void setEmpCount(int count);
    void setTenantCount(int count);
    void setVisitorCount(int count);
    void setStudentCount(int count);
    void addTenant(Tenant& t);
    void addEmp(Employee& e);
    void addVisitor(Visitor& v);
    void addStudent(Student& s);
};


#endif //INC_2024_SPRING_SE102LA_WEEK9_BSSE23100_SINGLETON_H

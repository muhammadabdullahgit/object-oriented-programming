//
// Created by Dell on 01/04/2024.
//

#include "Tenant.h"
Tenant:: Tenant(){

}
Tenant:: Tenant(string name,string num){
   this->tenantName=name;
   this->carNum=num;

}
Tenant:: Tenant(string name,int num1){
   this->tenantName=name;
   this->bikeNum=num1;
}
Tenant::~Tenant(){

}
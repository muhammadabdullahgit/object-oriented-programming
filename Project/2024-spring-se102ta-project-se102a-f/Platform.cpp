//
// Created by AAA on 4/6/2024.
//

#include "Platform.h"
//Parameterised Constructor for Platform Class
Platform::Platform(string& name,int num):platformNum(num),platformName(name){}
//For returning the name of Platform
string Platform::getPlatformName() {
    return platformName;
}
//Default constructor for Platform Class
Platform::Platform() {
    platformName="";
    platformNum=0;
}
//For assigning the attributes if Platform Class
void Platform::setPlatformInfo() {
    cout<<"Enter Platform Name: ";
    cin.ignore();
    getline(cin,platformName);
    cout<<"Enter Platform Number: ";
    cin>>platformNum;
}
//For returning the number of Platform
int Platform::getPlatformNum() {
    return platformNum;
}
//"<<" operator for Platform class
ostream& operator<<(ostream&umar,const Platform& platform){
umar<<"Platform Name: "<<platform.platformName<<endl;
umar<<"\t\t  Platform Number: "<<platform.platformNum<<endl;
    return umar;
}
// q1.cpp
#include "q1.h"
#include <iostream>
using namespace std;
VenuePass::VenuePass(){
    passHolderName = "";
    passNumber = 0;
    category = "";
    checkInStatus = false;
}
VenuePass::VenuePass(string name, int passNumber, string category) {
    passHolderName = name;
    this->passNumber = passNumber;
    this->category = category;
    checkInStatus = false;
}

VenuePass::~VenuePass() {
}

VenuePass createVenuePass(string name, int passNumber, string category) {
    cout<<"venue pass is created"<<endl;
    return VenuePass(name, passNumber, category);
}

void printCategory(VenuePass &pass) {
    cout<<" category ="<<pass.category<<endl;
}
void printCheckinStatus(VenuePass &pass) {
        if(pass.checkInStatus){
        cout <<"checkin status = true"<< endl;
    }
    else {
        cout <<"checkin status = false"<< endl;
    }
}

void printVenuePassDetails(VenuePass &pass) {
    cout<<" name ="<<pass.passHolderName<<endl;
    cout<<" passNumber ="<<pass.passNumber<<endl;
    cout<<" category ="<<pass.category<<endl;
}
void storingData(VenuePass *&arr, int &size) {
    VenuePass *arr1 = new VenuePass[size * 2];
    for (int i = 0; i < size; ++i) {
        arr1[i] = arr[i];
    }
    delete[] arr;
    arr = arr1;
    size+=1;
}
void q1(){
    string name;
    int passNumber;
    string category;
    int size = 1;
    VenuePass *arr = new VenuePass[1]{VenuePass("", 0, "")};
    for (int i = 0;i<size; i++) {
        cout << "enter your name for pass" << endl;
        cin>> name;
        cout << "enter your pass number" << endl;
        cin >> passNumber;
        cout << "enter your category  "<< endl;
        cin >> category;
        arr[i]= createVenuePass(name,passNumber,category);
        cout<<"enter 1 for checkin"<<endl;
        int x;
        cin>>x;
        if(x==1){
            arr[i].checkInStatus = true;
        }
        else {
            arr[i].checkInStatus = false;
        }
        cout << "enter 1 to enter more venue pass details" << endl;
        int y;
        cin>>y;
        if(y==1){
            storingData(arr,size);
        }
        else {
            break;
        }
    }
    cout << "enter 1 to check category" << endl;
    cout << "enter 2 for checkin status" << endl;
    cout << "enter 3 to print  venue pass" << endl;
    int x;
    cin>>x;
    switch(x){
        case 1: {
            for (int i = 0; i < size; ++i) {
                printCategory(arr[i]);
            }

            break;
        }
        case 2: {
            for (int i = 0; i < size ; ++i) {

                printCheckinStatus(arr[i]);
            }
            break;
        }
        case 3: {
            for (int i = 0; i < size; ++i) {
                printVenuePassDetails(arr[i]);
                printCheckinStatus(arr[i]);
            }
            break;
        }
        default :{
           cout<<"some error occurred in q1"<<endl;
           break;
        }
    }
    delete[]arr;
}
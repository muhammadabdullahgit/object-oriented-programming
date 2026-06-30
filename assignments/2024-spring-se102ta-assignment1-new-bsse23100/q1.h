// q1.h
#ifndef _Q1_H
#define _Q1_H
#include <string>

using namespace std;

struct VenuePass {
    string passHolderName;
    int passNumber;
    string category;
    bool checkInStatus;
    VenuePass();
    VenuePass(string name, int passNumber, string category);

    ~VenuePass();
};

VenuePass createVenuePass(string name, int passNumber, string category);

void printCategory(VenuePass &pass);

void printCheckinStatus(VenuePass &pass);

void printVenuePassDetails(VenuePass &pass);
void q1();
#endif

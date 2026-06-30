//
// Created by lenovo on 4/26/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_FEEDBACK_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_FEEDBACK_H
#include <iostream>
using namespace std;
#include <fstream>
#include "nlohmann/json.hpp"                //including all header files
using json=nlohmann::json;
//template<typename T>
class Feedback {
private:
    int ticket_Number;
    string feed_Back;
public:
    // Constructors
    Feedback();
    Feedback(int ticket_Number, string feed_Back);
//    void temp();
    string getFeedBack();
    int getTicketNumber();
    // function declaration for input
    //void inputfeedback();
    // Output operator declaration
//    template<typename U>
    friend istream& operator>>(istream &is, Feedback& feedback);
    friend ostream& operator<<(ostream &os, const Feedback& feedback);
    void addFeedbackDataToJson(int ticketnumber,string newfeedback);
};
#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_FEEDBACK_H

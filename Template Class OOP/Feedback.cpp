//
// Created by lenovo on 4/27/2024.
//

#include "Feedback.h"
/*
template<typename T>
Feedback<T>::Feedback() {
}

void temp(){
    Feedback<string>f;
    f.inputfeedback();
    cout<<f;
}

template<typename T>
Feedback<T>::Feedback(T ticket_Number, T feed_Back) {
    this->ticket_Number = ticket_Number;
    this->feed_Back = feed_Back;
}

template<typename T>
void Feedback<T>::inputfeedback(){
    cout << "Thank You for Choosing Our Service" << endl;
    cout << "Enter Your Ticket Number: ";
    cin >>ticket_Number;
    cout << "Please Give us Feedback: ";
    cin>>feed_Back;
    cout << "Feedback Received" << endl;
}
template<typename T>
ostream& operator<<(ostream &os, const Feedback<T>& feedback) {
    os << "Ticket Number: " << feedback.ticket_Number << endl;
    os << "Feedback: " << feedback.feed_Back << endl;
    return os;
}*/
template <typename  T>
FeedBack<T>::FeedBack(){}
template <typename  T>
FeedBack<T>::FeedBack(T ticNum, T feedbk){
    this->ticket_number=ticNum;
    this->ticket_feedback=feedbk;
}

void temp(){
    FeedBack<string>fedback;
    fedback.inputFeedBack();
    cout<<fedback;
}
template <typename  T>
void FeedBack<T>::inputFeedBack(){
    cout << "Thank You for Choosing Our Service" << endl;
    cout << "Enter Your Ticket Number: ";
    cin >>ticket_number;
    cout << "Please Give us Feedback: ";
    cin>>ticket_feedback;
    cout << "Feedback Received" << endl;
}

template<typename T>
ostream &operator<<(ostream &os, const FeedBack<T> &fedbk){
    os << "Ticket Number: " << fedbk.ticket_number << endl;
    os << "Feedback: " << fedbk.ticket_feedback << endl;
    return os;
}

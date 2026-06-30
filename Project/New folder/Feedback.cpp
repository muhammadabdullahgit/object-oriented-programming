//
// Created by lenovo on 4/26/2024.
//
#include "Feedback.h"


//template<typename T>
Feedback::Feedback() {
    //default coonstructor
}
//template<typename T>
//void Feedback::temp(){
//    Feedback<int>f;
//}

//template<typename T>
Feedback::Feedback(int ticket_Number, string feed_Back) {
    //coonstructor
    this->ticket_Number = ticket_Number;
    this->feed_Back = feed_Back;
}
//template<typename T>
//getter for ticket number
int Feedback::getTicketNumber() {
    return ticket_Number;
}
//template<typename T>
//getter for feedback
string Feedback::getFeedBack(){
    return feed_Back;
}
//template<typename T>
//function to take feedback as input from passenger
//void Feedback::inputfeedback(){
//    cout << "Thank You for Choosing Our Service" << endl;
//    cout << "Enter Your Ticket Number: ";
//    cin >>ticket_Number;
//    cout << "Please Give us Feedback in *: ";
//    cin>>feed_Back;
//    cout << "Feedback Received" << endl;
//    addFeedbackDataToJson(ticket_Number,feed_Back);
//}
//template<typename T>
//output operator overloading for output
istream& operator>>(istream &is,Feedback&feedback){
    cout << "\t\t\tThank You for Choosing Our Service\t\t\t" << endl;
    cout << "Enter Your Ticket Number: ";
    is >>feedback.ticket_Number;
    cout << "Please Give us Feedback in *: ";
    is >>feedback.feed_Back;
    cout << "\t\t\tFeedback Received\t\t\t" << endl;
    return is;
}
ostream& operator<<(ostream &os, const Feedback& feedback) {
    os << "Ticket Number: " << feedback.ticket_Number << endl;
    os << "Feedback: " << feedback.feed_Back << endl;
    return os;
}
//template<typename T>
//writing data in file
void Feedback::addFeedbackDataToJson(int ticketnumber,string newfeedback){
    const string fileName="Feedback.json";
    json jsonData;
    ifstream inputFile(fileName);
    if(!inputFile.is_open())
    {
        //display message if file does not open
        cerr<<"There is an error while opening"<<fileName<<endl;
    }
    inputFile>>jsonData;
    inputFile.close();
    json newFeedbackJsonData={
            //storing data
            {"Ticket No: ",ticket_Number},
            {"FeedBack: ",feed_Back}
    };
    jsonData["Feedback"].push_back(newFeedbackJsonData);
    ofstream outputFile(fileName);
    if(outputFile.is_open())
    {
        //setting alignment
        outputFile<<setw(4)<<jsonData;
        outputFile.close();
        cout<<"Feedback has been added to file"<<endl;
    }
}
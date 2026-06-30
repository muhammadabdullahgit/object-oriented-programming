//
// Created by lenovo on 4/27/2024.
//

#ifndef INC_2024_SPRING_SE102LA_WEEK7_BSSE23066_FEEDBACK_H
#define INC_2024_SPRING_SE102LA_WEEK7_BSSE23066_FEEDBACK_H
#include <iostream>
using namespace std;
/*template<typename T>
class Feedback {
private:
    T ticket_Number;
    T feed_Back;
public:
    // methods
    Feedback();
    Feedback(T ticket_Number, T feed_Back);
    //void temp();
    // function declaration for input
    void inputfeedback();
    // Output operator declaration
    template<typename U>
    friend ostream& operator<<(ostream &os, const Feedback<U>& feedback);
};*/
template< typename T>
class FeedBack {
    T ticket_number;
    T ticket_feedback;
public:
    FeedBack();

    FeedBack(T ticNum, T feedbk);

    void temp();

    void inputFeedBack();

    template<typename A>
    friend ostream &operator<<(ostream &os, const FeedBack<A> &fedbk);
};




#endif //INC_2024_SPRING_SE102LA_WEEK7_BSSE23066_FEEDBACK_H

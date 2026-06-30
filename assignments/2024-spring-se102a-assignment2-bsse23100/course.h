#ifndef _COURSE_H
#define _COURSE_H

#include <string>

using namespace std;

struct Course {
    string courseCode;
    string courseName;
    int credits;

    Course();
};

#endif

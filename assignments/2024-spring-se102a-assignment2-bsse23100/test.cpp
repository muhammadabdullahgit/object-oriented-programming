#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <sstream>
#include "library.h"
#include "student.h"
#include "employee.h"


TEST_CASE("Q1: Library Management System", "[q1]") {
    Library library("Main Library", "City Center");

    SECTION("Add Books and Print Library Info") {
        library.addBook("The Great Gatsby", "F. Scott Fitzgerald", 1925, "978-0-7432-7356-5");
        library.addBook("To Kill a Mockingbird", "Harper Lee", 1960, "978-0-06-112008-4");
        library.addBook("1984", "George Orwell", 1949, "978-0-452-28423-4");

        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        library.printLibraryInfo();
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Library Name: Main Library\nLocation: City Center\nNumber of Books: 3\n"
                                "Book List:\n  Title: The Great Gatsby\n  Author: F. Scott Fitzgerald\n  Year: 1925\n  ISBN: 978-0-7432-7356-5\n  --------------------------\n"
                                "  Title: To Kill a Mockingbird\n  Author: Harper Lee\n  Year: 1960\n  ISBN: 978-0-06-112008-4\n  --------------------------\n"
                                "  Title: 1984\n  Author: George Orwell\n  Year: 1949\n  ISBN: 978-0-452-28423-4\n  --------------------------\n");
    }

    SECTION("Print Book Info") {
        library.addBook("The Great Gatsby", "F. Scott Fitzgerald", 1925, "978-0-7432-7356-5");
        library.addBook("To Kill a Mockingbird", "Harper Lee", 1960, "978-0-06-112008-4");
        library.addBook("1984", "George Orwell", 1949, "978-0-452-28423-4");
        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        library.printBookInfo("To Kill a Mockingbird");
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Book Details:\n  Title: To Kill a Mockingbird\n  Author: Harper Lee\n  Year: 1960\n  ISBN: 978-0-06-112008-4\n");
    }

    SECTION("Print Book Info (Book not found)") {
        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        library.printBookInfo("Nonexistent Book");
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Book not found.\n");
    }
}

TEST_CASE("Q2: Student Records Management System", "[q2]") {
    Student student("S12345", "Alice Johnson", 10);

    SECTION("Add Courses and Print Student Info") {
        student.addCourse("CS101", "Introduction to Programming", 3);
        student.addCourse("ENG201", "English Composition", 4);
        student.addCourse("MATH301", "Calculus I", 4);

        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        student.printStudentInfo();
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Student ID: S12345\nName: Alice Johnson\nGrade Level: 10\nNumber of Courses: 3\n"
                                "Course List:\n  Code: CS101\n  Name: Introduction to Programming\n  Credits: 3\n  --------------------------\n"
                                "  Code: ENG201\n  Name: English Composition\n  Credits: 4\n  --------------------------\n"
                                "  Code: MATH301\n  Name: Calculus I\n  Credits: 4\n  --------------------------\n");
    }

    SECTION("Print Course Info") {
        student.addCourse("CS101", "Introduction to Programming", 3);
        student.addCourse("ENG201", "English Composition", 4);
        student.addCourse("MATH301", "Calculus I", 4);
        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        student.printCourseInfo("ENG201");
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Course Details:\n  Code: ENG201\n  Name: English Composition\n  Credits: 4\n");
    }

    SECTION("Print Course Info (Course not found)") {
        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        student.printCourseInfo("Nonexistent Course");
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Course not found.\n");
    }
}

TEST_CASE("Q3: Comprehensive Employee Management System Tests", "[q3]") {
    SECTION("Employee Creation and Basic Info") {
        Employee employee1("E12345", "Alice Johnson", 60000.0, "456 Oak St", "Townsville", "NY", "67890");

        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        employee1.printEmployeeInfo();
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Employee ID: E12345\nName: Alice Johnson\nSalary: $60000\nAddress:\n  Street: 456 Oak St\n  City: Townsville\n  State: NY\n  ZIP: 67890\n");
    }

    SECTION("Employee Salary Update and Detailed Info") {
        Employee employee2("E54321", "John Doe", 75000.0, "789 Pine St", "Cityburg", "CA", "12345");

        employee2.updateSalary(15.0);

        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        employee2.printEmployeeInfo();
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Employee ID: E54321\nName: John Doe\nSalary: $86250\nAddress:\n  Street: 789 Pine St\n  City: Cityburg\n  State: CA\n  ZIP: 12345\n");
    }

    SECTION("Employee Address Update and Printing") {
        Employee employee3("E67890", "Bob Johnson", 90000.0, "123 Elm St", "Villagetown", "TX", "56789");

        employee3.address = { "321 Maple St", "Hamletsville", "FL", "34567" };

        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        employee3.printEmployeeInfo();
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Employee ID: E67890\nName: Bob Johnson\nSalary: $90000\nAddress:\n  Street: 321 Maple St\n  City: Hamletsville\n  State: FL\n  ZIP: 34567\n");
    }

    SECTION("Multiple Employee Creation and Printing") {
        Employee employee4("E11111", "Eve Smith", 55000.0, "987 Birch St", "Metropolis", "IL", "45678");
        Employee employee5("E22222", "Charlie Brown", 70000.0, "654 Cedar St", "Suburbia", "WA", "89012");

        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        employee4.printEmployeeInfo();
        cout << "--------------------------\n";
        employee5.printEmployeeInfo();
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Employee ID: E11111\nName: Eve Smith\nSalary: $55000\nAddress:\n  Street: 987 Birch St\n  City: Metropolis\n  State: IL\n  ZIP: 45678\n"
                                "--------------------------\n"
                                "Employee ID: E22222\nName: Charlie Brown\nSalary: $70000\nAddress:\n  Street: 654 Cedar St\n  City: Suburbia\n  State: WA\n  ZIP: 89012\n");
    }
}




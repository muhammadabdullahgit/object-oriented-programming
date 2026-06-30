#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>
#include "BankAccount.h"
#include "Student.h"
#include "LibraryBook.h"
//include ur files here
using namespace std;
template <typename T>
std::string to_string_with_precision(const T a_value, const int n = 6)
{
    std::ostringstream out;
    out.precision(n);
    out << std::fixed << a_value;
    return std::move(out).str();
}

TEST_CASE("BankAccount Functionality Tests", "[BankAccount]") {
    SECTION("Constructor Test") {
        string ownerName = "John Doe";
        double initialBalance = 1000.0;

        BankAccount account(ownerName, initialBalance);

        REQUIRE(account.getOwnerName() == ownerName);
        REQUIRE(account.getBalance() == initialBalance);
    }

    SECTION("Shallow Copy Constructor Test") {
        string ownerName = "Alice Smith";
        double initialBalance = 5000.0;

        BankAccount originalAccount(ownerName, initialBalance);
        BankAccount shallowCopy(originalAccount);

        REQUIRE(shallowCopy.getOwnerName() == originalAccount.getOwnerName());
        REQUIRE(shallowCopy.getBalance() == originalAccount.getBalance());


        originalAccount.setOwnerName("Bob Johnson");
        originalAccount.setBalance(7000.0);

        REQUIRE(shallowCopy.getOwnerName() == originalAccount.getOwnerName());
        REQUIRE(shallowCopy.getBalance() == originalAccount.getBalance());
    }

    SECTION("Deep Copy Constructor Test") {
        string ownerName = "Eva White";
        double initialBalance = 3000.0;

        BankAccount originalAccount(ownerName, initialBalance);
        BankAccount deepCopy(originalAccount, true);

        REQUIRE(deepCopy.getOwnerName() == originalAccount.getOwnerName());
        REQUIRE(deepCopy.getBalance() == originalAccount.getBalance());


        originalAccount.setOwnerName("Daniel Brown");
        originalAccount.setBalance(8000.0);

        REQUIRE(deepCopy.getOwnerName() != originalAccount.getOwnerName());
        REQUIRE(deepCopy.getBalance() != originalAccount.getBalance());
    }
}
    TEST_CASE("Student Management System Tests", "[Student]") {
        SECTION("Constructor Test") {
            string name = "Alice Johnson";
            int id = 12345;
            float initialGPA = 3.5;

            Student student(name, id, initialGPA);

            REQUIRE(student.studentName == name);
            REQUIRE(student.studentID == id);
            REQUIRE(student.getGPA() == initialGPA);
        }

        SECTION("Set GPA Function Test") {
            string name = "Bob Smith";
            int id = 67890;
            float initialGPA = 2.7;

            Student student(name, id, initialGPA);

            float newGPA = 3.8;
            student.setGPA(newGPA);

            REQUIRE(student.getGPA() == newGPA);

            float invalidGPA = 5.5;
            student.setGPA(invalidGPA);

            REQUIRE(student.getGPA() == newGPA);
        }

        SECTION("Print Student Info Test") {

            string name = "Charlie Brown";
            int id = 54321;
            float initialGPA = 3.2;
            Student student(name, id, initialGPA);

            ostringstream output;
        auto cout_buff = cout.rdbuf(output.rdbuf());
        student.printStudentInfo();
        cout.rdbuf(cout_buff);
            // I have added a find function, just find the name in the string output
            REQUIRE(output.str().find( name) != std::string::npos);
            REQUIRE(output.str().find(to_string(id)) != std::string::npos);
        REQUIRE(output.str().find(to_string_with_precision(initialGPA,1)) != std::string::npos);
        }
    }
    TEST_CASE("LibraryBook Functionality Tests", "[LibraryBook]") {
        SECTION("Constructor Test") {
            LibraryBook book;

            REQUIRE(book.getTitle() == "");
            REQUIRE(book.getAuthor() == "");
            REQUIRE(book.getPages() == 0);
        }

        SECTION("Set and Get Functions Test") {
            LibraryBook book;

            book.setTitle("The Great Gatsby");
            book.setAuthor("F. Scott Fitzgerald");
            book.setPages(300);

            REQUIRE(book.getTitle() == "The Great Gatsby");
            REQUIRE(book.getAuthor() == "F. Scott Fitzgerald");
            REQUIRE(book.getPages() == 300);
        }

        SECTION("Copy Constructor Test") {
            LibraryBook originalBook("The Great Gatsby", "F. Scott Fitzgerald", 300);
            LibraryBook copiedBook(originalBook,true);

            REQUIRE(copiedBook.getTitle() == originalBook.getTitle());
            REQUIRE(copiedBook.getAuthor() == originalBook.getAuthor());
            REQUIRE(copiedBook.getPages() == originalBook.getPages());


            originalBook.setTitle("To Kill a Mockingbird");
            originalBook.setAuthor("Harper Lee");
            originalBook.setPages(350);

            REQUIRE(copiedBook.getTitle() != originalBook.getTitle());
            REQUIRE(copiedBook.getAuthor() != originalBook.getAuthor());
            REQUIRE(copiedBook.getPages() != originalBook.getPages());
        }

        SECTION("Assignment Operator Test") {
            LibraryBook originalBook("1984", "George Orwell", 400);
            LibraryBook assignedBook;
            assignedBook = originalBook;

            REQUIRE(assignedBook.getTitle() == originalBook.getTitle());
            REQUIRE(assignedBook.getAuthor() == originalBook.getAuthor());
            REQUIRE(assignedBook.getPages() == originalBook.getPages());


            originalBook.setTitle("Brave New World");
            originalBook.setAuthor("Aldous Huxley");
            originalBook.setPages(320);

            REQUIRE(assignedBook.getTitle() != originalBook.getTitle());
            REQUIRE(assignedBook.getAuthor() != originalBook.getAuthor());
            REQUIRE(assignedBook.getPages() != originalBook.getPages());
        }

        SECTION("Shallow Copy Demonstration Test") {
            LibraryBook originalBook("The Catcher in the Rye", "J.D. Salinger", 220);
            LibraryBook shallowCopyBook(originalBook,false);
            

            originalBook.setTitle("The Old Man and the Sea");
            originalBook.setAuthor("Ernest Hemingway");
            originalBook.setPages(150);

            REQUIRE(shallowCopyBook.getTitle() == originalBook.getTitle());
            REQUIRE(shallowCopyBook.getAuthor() == originalBook.getAuthor());
            REQUIRE(shallowCopyBook.getPages() == originalBook.getPages());
        }
    }


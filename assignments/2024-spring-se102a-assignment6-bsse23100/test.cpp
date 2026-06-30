#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Number.h"
#include "Complex.h"
#include "Logs.h"
#include "Calculator.h"

TEST_CASE("Number Class Test Cases") {
    SECTION("Addition Operator Overload") {
        Number num1(5);
        Number num2(10);

        REQUIRE((num1 + num2).getValue() == 15);
    }

    SECTION("Subtraction Operator Overload") {
        Number num1(10);
        Number num2(5);

        REQUIRE((num1 - num2).getValue() == 5);
    }

    SECTION("Multiplication Operator Overload") {
        Number num1(5);
        Number num2(10);

        REQUIRE((num1 * num2).getValue() == 50);
    }

    SECTION("Division Operator Overload") {
        Number num1(10);
        Number num2(5);

        REQUIRE((num1 / num2).getValue() == 2);
    }

    SECTION("Modulo Operator Overload") {
        Number num1(10);
        Number num2(3);

        REQUIRE((num1 % num2).getValue() == 1);
    }

    SECTION("Post-Increment Operator Overload") {
        Number num(5);
        Number result = num++;

        REQUIRE(result.getValue() == 5);
        REQUIRE(num.getValue() == 6);
    }

    SECTION("Post-Decrement Operator Overload") {
        Number num(5);
        Number result = num--;

        REQUIRE(result.getValue() == 5);
        REQUIRE(num.getValue() == 4);
    }

    SECTION("Combination of Operations") {
        Number num1(5);
        Number num2(2);
        Number num3(3);

        Number result = ((num1 + num2) * num3) / num2;

        REQUIRE(result.getValue() == 10.5);
    }
}

TEST_CASE("Complex Class Test Cases") {
    SECTION("Complex Addition") {
        Complex c1(2, 3);
        Complex c2(1, 2);

        REQUIRE((c1 + c2) == Complex(3, 5));
    }

    SECTION("Complex Subtraction") {
        Complex c1(5, 6);
        Complex c2(2, 3);

        REQUIRE((c1 - c2) == Complex(3, 3));
    }

    SECTION("Complex Multiplication") {
        Complex c1(2, 3);
        Complex c2(1, 2);

        REQUIRE((c1 * c2) == Complex(-4, 7));
    }

    SECTION("Complex Division") {
        Complex c1(2, 3);
        Complex c2(1, 2);

        REQUIRE((c1 / c2) == Complex(1.6, -0.2));
    }
}

TEST_CASE("Logs Class Test Cases") {
    SECTION("Add Number to Logs") {
        Logs logs;
        Number num1(5);
        Number num2(10);

        logs.addNumber(num1);
        logs.addNumber(num2);

        REQUIRE(logs.size() == 2);
    }

    SECTION("Display Numbers in Logs") {
        Logs logs;
        Number num1(5);
        Number num2(10);

        logs.addNumber(num1);
        logs.addNumber(num2);

        std::ostringstream oss;
        logs.displayNumbers(oss);

        std::string expectedOutput = "Previously entered numbers:\n5\n10\n";
        REQUIRE(oss.str() == expectedOutput);
    }
}

TEST_CASE("Calculator Class Test Cases") {
    SECTION("Basic Arithmetic Operations") {
        Calculator calculator;
        Number num1(10);
        Number num2(5);

        REQUIRE(calculator.add(num1, num2) == Number(15));
        REQUIRE(calculator.subtract(num1, num2) == Number(5));
        REQUIRE(calculator.multiply(num1, num2) == Number(50));
        REQUIRE(calculator.divide(num1, num2) == Number(2));
    }

    SECTION("Logging and Recalling Numbers") {
        Calculator calculator;
        Logs logs;
        Number num1(5);
        Number num2(10);

        calculator.addNumberToLogs(logs, num1);
        calculator.addNumberToLogs(logs, num2);

        REQUIRE(calculator.recallNumberFromLogs(logs, 0) == num1);
        REQUIRE(calculator.recallNumberFromLogs(logs, 1) == num2);
    }
}

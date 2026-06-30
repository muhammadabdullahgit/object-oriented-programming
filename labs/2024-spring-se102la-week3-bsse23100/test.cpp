#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "ComplexNumber.h"
#include "Point.h"

TEST_CASE("ComplexNumber Operations", "[ComplexNumber]") {
    ComplexNumber c1(2.0, 3.0);
    ComplexNumber c2(4.0, -1.0);

    SECTION("Copy Constructor and Assignment Operator") {
        ComplexNumber c3(c1);  // Copy constructor
        REQUIRE(c3.getReal() == c1.getReal());
        REQUIRE(c3.getImaginary() == c1.getImaginary());

        ComplexNumber c4;
        c4 = c2;  // Assignment operator
        REQUIRE(c4.getReal() == c2.getReal());
        REQUIRE(c4.getImaginary() == c2.getImaginary());
    }

    SECTION("Addition of Complex Numbers") {
        ComplexNumber result = c1.add(c2);
        REQUIRE(result.getReal() == 6.0);
        REQUIRE(result.getImaginary() == 2.0);
    }
}

TEST_CASE("Point Operations", "[Point]") {
    Point p1(3.0, 4.0);
    Point p2(-1.0, 2.0);

    SECTION("Copy Constructor and Assignment Operator") {
        Point p3(p1);  // Copy constructor
        REQUIRE(p3.getX() == p1.getX());
        REQUIRE(p3.getY() == p1.getY());

        Point p4;
        p4 = p2;  // Assignment operator
        REQUIRE(p4.getX() == p2.getX());
        REQUIRE(p4.getY() == p2.getY());
    }

    SECTION("Distance from Origin") {
        REQUIRE(p1.distanceFromOrigin() == 5.0);
        REQUIRE(p2.distanceFromOrigin() == Approx(2.236).epsilon(0.001));
    }
}

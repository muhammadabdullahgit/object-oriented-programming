#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Vector.h"
#include "Circle.h"

TEST_CASE("Vector Operations") {
    SECTION("Test dot product calculation") {
        Vector v1(1.0, 2.0, 3.0);
        Vector v2(4.0, 5.0, 6.0);
        REQUIRE(v1.dotProduct(v2) == Approx(32.0));
    }

    SECTION("Test cross product calculation") {
        Vector v1(1.0, 2.0, 3.0);
        Vector v2(4.0, 5.0, 6.0);
        Vector result = v1.crossProduct(v2);
        REQUIRE(result.x == Approx(-3.0));
        REQUIRE(result.y == Approx(6.0));
        REQUIRE(result.z == Approx(-3.0));
    }
}

TEST_CASE("Circle Operations") {
    SECTION("Test calculateCircumference function") {
        Circle circle(4.0); // Assuming diameter is 4.0

        // Check if the calculated circumference is approximately 2 * pi * radius
        REQUIRE(circle.calculateCircumference() == Approx(2.0 * M_PI * circle.geometry.radius));
    }
}

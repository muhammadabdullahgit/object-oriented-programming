// test.cpp
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Food.h"
#include "vegetable.h"
#include "Fruit.h"
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"

TEST_CASE("Food Test") {
    Vegetable vegetable("Carrot", 25, "Orange");

    SECTION("Print Info") {
        REQUIRE(vegetable.name == "Carrot");
        REQUIRE(vegetable.calories == 25);
    }

    SECTION("Print Color") {
        REQUIRE(vegetable.color == "Orange");
    }
}

TEST_CASE("Animal Test") {
    Mammal mammal("Lion", 5, "Roar");

    SECTION("Print Info") {
        REQUIRE(mammal.name == "Lion");
        REQUIRE(mammal.age == 5);
    }

    SECTION("Print Sound") {
        REQUIRE(mammal.sound == "Roar");
    }
}

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "q1.h"
#include "q2.h"
#include "q3.h"


TEST_CASE("Q1: createVenuePass and printVenuePassDetails", "[q1]") {
    VenuePass pass = createVenuePass("John Doe", 123, "VIP");
    REQUIRE(pass.passHolderName == "John Doe");
    REQUIRE(pass.passNumber == 123);
    REQUIRE(pass.category == "VIP");
    REQUIRE(pass.checkInStatus == false);

    SECTION("printVenuePassDetails") {
        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        printVenuePassDetails(pass);
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Pass Holder Name: John Doe\nPass Number: 123\nCategory: VIP\nCheck-in Status: No\n");
    }
}

TEST_CASE("Q2: addCar and checkCarParkingLocation", "[q2]") {
    Car car = addCar("ABC123", "Toyota", "Camry", 1);
    REQUIRE(car.licensePlate == "ABC123");
    REQUIRE(car.make == "Toyota");
    REQUIRE(car.model == "Camry");
    REQUIRE(car.parkingLocation == 1);

    SECTION("checkCarParkingLocation") {
        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        checkCarParkingLocation(car);

        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Parking Location: 1\n");
    }
}

TEST_CASE("Q3: createProduct and checkInventoryQuantity", "[q3]") {
    Product product = createProduct(1, "Laptop", 10, 999.99);
    REQUIRE(product.productId == 1);
    REQUIRE(product.productName == "Laptop");
    REQUIRE(product.quantity == 10);
    //REQUIRE(product.price == 999.99);

    SECTION("checkInventoryQuantity") {
        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        checkInventoryQuantity(product);

        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "Inventory Quantity: 10\n");
    }
}


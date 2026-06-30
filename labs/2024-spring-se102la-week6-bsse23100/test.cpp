#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Driver.h"
#include "Ride.h"
#include "Uber.h"

TEST_CASE("Adding a Driver", "[driver]") {
    SECTION("Adding a single driver") {
        Driver driver(1, "John Doe", 20.0);
        REQUIRE(driver.getDriverID() == 1);
        REQUIRE(driver.getRidesCompletedCount() == 0);
    }

    SECTION("Adding multiple drivers") {
        Uber uber("Uber");
        Driver driver1(1, "John Doe", 20.0);
        Driver driver2(2, "Jane Doe", 25.0);

        uber.addDriver(driver1);
        uber.addDriver(driver2);

        REQUIRE(uber.getDriverByID(1).getDriverID() == 1);
        REQUIRE(uber.getDriverByID(2).getDriverID() == 2);
    }

}

TEST_CASE("Requesting a Ride", "[ride]") {
    SECTION("Requesting a single ride") {
        Uber uber("Uber");
        Driver driver(1, "John Doe", 20.0);
        Ride ride(101, "Passenger", "Start", "End", 15.0);

        uber.addDriver(driver);
        uber.requestRide(ride);
        driver.completeRide(ride);

        REQUIRE(driver.getRidesCompletedCount() == 1);
        REQUIRE(driver.calculateEarnings() == 15.0);
    }

    SECTION("Requesting multiple rides") {
        Uber uber("Uber");
        Driver driver(1, "John Doe", 20.0);
        Ride ride1(101, "Passenger1", "Start1", "End1", 15.0);
        Ride ride2(102, "Passenger2", "Start2", "End2", 20.0);

        uber.addDriver(driver);
        uber.requestRide(ride1);
        uber.requestRide(ride2);
        driver.completeRide(ride1);
        driver.completeRide(ride2);

        REQUIRE(driver.getRidesCompletedCount() == 2);
        REQUIRE(driver.calculateEarnings() == 35.0);
    }

}

TEST_CASE("Display All Drivers Test") {
    Uber uber("TestUber");
    Driver driver1(1, "John", 20.0);
    Driver driver2(2, "Alice", 18.0);

    uber.addDriver(driver1);
    uber.addDriver(driver2);

    // Redirect cout to a stringstream to capture the output
    std::stringstream buffer;
    std::streambuf *old = std::cout.rdbuf(buffer.rdbuf());

    SECTION("Displaying All Drivers") {
        uber.displayAllDrivers();
        std::string output = buffer.str();

        // Check if the output contains information about both drivers
        REQUIRE(output.find("Driver ID: 1") != std::string::npos);
        REQUIRE(output.find("Driver ID: 2") != std::string::npos);
    }

    // Restore cout
    std::cout.rdbuf(old);
}

TEST_CASE("Display All Rides Test") {
    Uber uber("TestUber");
    Ride ride1(1, "Passenger1", "LocationA", "LocationB", 15.0);
    Ride ride2(2, "Passenger2", "LocationC", "LocationD", 20.0);

    uber.requestRide(ride1);
    uber.requestRide(ride2);

    // Redirect cout to a stringstream to capture the output
    std::stringstream buffer;
    std::streambuf *old = std::cout.rdbuf(buffer.rdbuf());

    SECTION("Displaying All Rides") {
        uber.displayAllRides();
        std::string output = buffer.str();

        // Check if the output contains information about both rides
        REQUIRE(output.find("Ride ID: 1") != std::string::npos);
        REQUIRE(output.find("Ride ID: 2") != std::string::npos);
    }

    // Restore cout
    std::cout.rdbuf(old);
}

TEST_CASE("Driver Performance Test") {
    Uber uber("TestUber");
    Driver driver(1, "John", 20.0);
    Ride ride1(1, "Passenger1", "LocationA", "LocationB", 15.0);
    Ride ride2(2, "Passenger2", "LocationC", "LocationD", 20.0);

    uber.addDriver(driver);
    driver.completeRide(ride1);
    driver.completeRide(ride2);

    // Redirect cout to a stringstream to capture the output
    std::stringstream buffer;
    std::streambuf *old = std::cout.rdbuf(buffer.rdbuf());

    SECTION("Displaying Driver Performance") {
        std::cout << "Driver Performance:\n";
        std::cout << "Number of Rides Completed: " << driver.getRidesCompletedCount() << "\n";
        std::cout << "Total Earnings: $" << driver.getTotalEarnings() << "\n";

        // Assuming a driver works 8 hours a day
        std::cout << "One-Day Earnings (8 hours): $" << driver.getOneDayEarnings(8) << "\n";

        std::string output = buffer.str();

        // Check if the output contains information about the driver's performance
        REQUIRE(output.find("Number of Rides Completed: 2") != std::string::npos);
        REQUIRE(output.find("Total Earnings: $35") != std::string::npos);
        REQUIRE(output.find("One-Day Earnings (8 hours): $195") != std::string::npos);
    }

    // Restore cout
    std::cout.rdbuf(old);
}

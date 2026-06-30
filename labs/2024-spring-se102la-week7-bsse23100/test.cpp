// test.cpp

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Car.h"
#include "Sedan.h"
#include "SUV.h"
#include "SportsCar.h"
#include "ElectricCar.h"
#include "HybridCar.h"

TEST_CASE("Calculate Sedan Mileage", "[Sedan]") {
    Sedan sedan(1500, 150);
    REQUIRE(sedan.calculateMileage() == Approx(18.0));
}

TEST_CASE("Calculate SUV Mileage", "[SUV]") {
    SUV suv(2000, 200);
    REQUIRE(suv.calculateMileage() == Approx(30.0));
}

TEST_CASE("Calculate Sports Car Mileage", "[SportsCar]") {
    SportsCar sportsCar(1200, 250);
    REQUIRE(sportsCar.calculateMileage() == Approx(15.0));
}

TEST_CASE("Calculate Electric Car Mileage", "[ElectricCar]") {
    ElectricCar electricCar(60);
    REQUIRE(electricCar.calculateMileage() == Approx(6.0));
}

TEST_CASE("Calculate Hybrid Car Mileage", "[HybridCar]") {
    HybridCar hybridCar(1800, 150, 30);
    REQUIRE(hybridCar.calculateMileage() == Approx(23.0));
}

TEST_CASE("Print Car Details", "[Car]") {
    Car *car = new Sedan(1500, 150);
    std::ostringstream output;
    output << *car;

    REQUIRE(output.str() == "Sedan - Engine CC: 1500, Horsepower: 150");

    delete car;
}

TEST_CASE("Compare Sedan and SUV based on Mileage", "[Comparison]") {
    Car *sedan = new Sedan(1500, 150);
    Car *suv = new SUV(2000, 200);

    double sedanMileage = sedan->calculateMileage();
    double suvMileage = suv->calculateMileage();

    bool sedanHasBetterMileage = sedanMileage < suvMileage;
    REQUIRE(sedanHasBetterMileage == true);  // Sedan has better mileage

    delete sedan;
    delete suv;
}

TEST_CASE("Compare Sports Car and Electric Car based on Mileage", "[Comparison]") {
    Car *sportsCar = new SportsCar(1200, 250);
    Car *electricCar = new ElectricCar(60);

    double sportsCarMileage = sportsCar->calculateMileage();
    double electricCarMileage = electricCar->calculateMileage();

    bool sportsCarHasLowerMileage = sportsCarMileage > electricCarMileage;
    REQUIRE(sportsCarHasLowerMileage == true);  // Sports Car has lower mileage

    delete sportsCar;
    delete electricCar;
}

TEST_CASE("Compare Hybrid Car and Sedan based on Mileage", "[Comparison]") {
    Car *hybridCar = new HybridCar(1800, 150, 30);
    Car *sedan = new Sedan(1600, 120);

    double hybridCarMileage = hybridCar->calculateMileage();
    double sedanMileage = sedan->calculateMileage();

    bool hybridCarHasBetterMileage = hybridCarMileage > sedanMileage;
    REQUIRE(hybridCarHasBetterMileage == true);  // Hybrid Car has better mileage

    delete hybridCar;
    delete sedan;
}
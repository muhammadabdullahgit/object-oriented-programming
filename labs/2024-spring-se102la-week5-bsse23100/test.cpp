#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Account.h"
#include "SavingsAccount.h"
#include "CurrentAccount.h"
#include "FixedDepositAccount.h"
#include "IslamicSavingsAccount.h"

TEST_CASE("Savings Account Test", "[SavingsAccount]") {
      SavingsAccount regularSavings(101, "John Doe", 1000.0, 5.0);

    SECTION("Initial Balance") {
        REQUIRE(regularSavings.getBalance() == 1000.0);
    }

    SECTION("Deposit") {
        regularSavings.deposit(500.0);
        REQUIRE(regularSavings.getBalance() == 1500.0);
    }

    SECTION("Withdraw with sufficient funds") {
        REQUIRE(regularSavings.withdraw(200.0) == true);
        REQUIRE(regularSavings.getBalance() == 800.0);
    }

    SECTION("Withdraw with insufficient funds") {
        REQUIRE(regularSavings.withdraw(1200.0) == false);
        REQUIRE(regularSavings.getBalance() == 1000.0);
    }

    SECTION("Calculate Interest") {
        regularSavings.calculateInterest();
    }


    SECTION("Calculate Islamic Profit") {
        IslamicSavingsAccount islamicSavings(201, "Aisha Ali", 1500.0, 3.5);

        REQUIRE(islamicSavings.getBalance() == 1500.0);

        islamicSavings.calculateIslamicProfit();

        // Calculate the expected profit based on the formula
        double expectedProfit = 1500.0 * (3.5 / 100);

        // Check if the balance has been updated correctly
        REQUIRE(islamicSavings.getBalance() == 1500.0 + expectedProfit);
    }
}

TEST_CASE("Islamic Savings Account Test", "[IslamicSavingsAccount]") {
        IslamicSavingsAccount islamicSavings(201, "Aisha Ali", 1500.0, 3.5);

    SECTION("Initial Balance") {
        REQUIRE(islamicSavings.getBalance() == 1500.0);
    }

    SECTION("Calculate Islamic Profit") {
        islamicSavings.calculateIslamicProfit();

    }

    SECTION("Calculate Islamic Profit") {
        IslamicSavingsAccount islamicSavings(201, "Aisha Ali", 1500.0, 3.5);

        REQUIRE(islamicSavings.getBalance() == 1500.0);

        islamicSavings.calculateIslamicProfit();

        // Calculate the expected profit based on the formula
        double expectedProfit = 1500.0 * (3.5 / 100);

        // Check if the balance has been updated correctly
        REQUIRE(islamicSavings.getBalance() == 1500.0 + expectedProfit);
    }
}

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Bank.h"
#include "BankAccount.h"
#include "Customer.h"

Bank &bank = Bank::getInstance();

TEST_CASE("Test BankAccount class") {
    SECTION("Test deposit and withdrawal methods") {
        Customer Ali = Customer("Ali");
        BankAccount account = BankAccount(Ali, 1000.0);
        account.deposit(500.0);
        REQUIRE(account.getBalance() == 1500.0);
        account.withdraw(300.0);
        REQUIRE(account.getBalance() == 1200.0);
        account.withdraw(1500.0);
        REQUIRE(account.getBalance() == 1200.0);
    }
}

TEST_CASE("Test Customer class") {
    SECTION("Test get name method") {
        Customer Ali = Customer("Ali");
        REQUIRE(Ali.getName() == "Ali");
    }
}





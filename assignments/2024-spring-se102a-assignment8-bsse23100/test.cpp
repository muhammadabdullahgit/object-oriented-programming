#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include <sstream>
#include "InventorySystem.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"

TEST_CASE("Singleton instance", "[singleton]") {
    InventorySystem* inventorySystem1 = InventorySystem::getInstance();
    InventorySystem* inventorySystem2 = InventorySystem::getInstance();

    SECTION("Instances are the same") {
        REQUIRE(inventorySystem1 == inventorySystem2);
    }
}

TEST_CASE("Adding products", "[inventory]") {
    InventorySystem* inventorySystem = InventorySystem::getInstance();

    SECTION("Add single product") {
        inventorySystem->addProduct("Apple");
        std::stringstream expectedOutput;
        expectedOutput << "Current Inventory:\n";
        expectedOutput << "- Apple\n";

        std::stringstream actualOutput;
        inventorySystem->displayInventory(actualOutput);
        REQUIRE(actualOutput.str() == expectedOutput.str());
        inventorySystem->emptyInventory();
    }

    SECTION("Add multiple products") {
        inventorySystem->addProduct("Apple");
        inventorySystem->addProduct("Banana");
        inventorySystem->addProduct("Orange");

        std::stringstream expectedOutput;
        expectedOutput << "Current Inventory:\n";
        expectedOutput << "- Apple\n";
        expectedOutput << "- Banana\n";
        expectedOutput << "- Orange\n";

        std::stringstream actualOutput;
        inventorySystem->displayInventory(actualOutput);
        REQUIRE(actualOutput.str() == expectedOutput.str());
        inventorySystem->emptyInventory();
    }
}

TEST_CASE("Removing products", "[inventory]") {
    InventorySystem* inventorySystem = InventorySystem::getInstance();

    SECTION("Remove existing product") {
        inventorySystem->addProduct("Apple");
        inventorySystem->removeProduct("Apple");

        std::stringstream expectedOutput;
        expectedOutput << "Current Inventory:\n";

        std::stringstream actualOutput;
        inventorySystem->displayInventory(actualOutput);
        REQUIRE(actualOutput.str() == expectedOutput.str());
        inventorySystem->emptyInventory();
    }

    SECTION("Remove non-existing product") {
        inventorySystem->addProduct("Apple");
        inventorySystem->removeProduct("Banana");

        std::stringstream expectedOutput;
        expectedOutput << "Current Inventory:\n";
        expectedOutput << "- Apple\n";

        std::stringstream actualOutput;
        inventorySystem->displayInventory(actualOutput);
        REQUIRE(actualOutput.str() == expectedOutput.str());
        inventorySystem->emptyInventory();
    }
}

TEST_CASE("Warrior actions") {
    Warrior warrior;

    SECTION("Attack action") {
        std::stringstream output;
        streambuf *oldCout = cout.rdbuf(output.rdbuf());
        warrior.attack();
        REQUIRE(output.str() == "Warrior attacks with a sword!\n");
        cout.rdbuf(oldCout);
    }

    SECTION("Special ability action") {
        std::stringstream output;
        streambuf *oldCout = cout.rdbuf(output.rdbuf());
        warrior.useSpecialAbility();
        REQUIRE(output.str() == "Warrior uses shield bash!\n");
        cout.rdbuf(oldCout);
    }
}

TEST_CASE("Mage actions") {
    Mage mage;

    SECTION("Attack action") {
        std::stringstream output;
        streambuf *oldCout = cout.rdbuf(output.rdbuf());
        mage.attack();
        REQUIRE(output.str() == "Mage casts a fireball!\n");
        cout.rdbuf(oldCout);
    }

    SECTION("Special ability action") {
        std::stringstream output;
        streambuf *oldCout = cout.rdbuf(output.rdbuf());
        mage.useSpecialAbility();
        REQUIRE(output.str() == "Mage teleports behind enemy!\n");
        cout.rdbuf(oldCout);
    }
}

TEST_CASE("Archer actions") {
    Archer archer;

    SECTION("Attack action") {
        std::stringstream output;
        streambuf *oldCout = cout.rdbuf(output.rdbuf());
        archer.attack();
        REQUIRE(output.str() == "Archer shoots an arrow!\n");
        cout.rdbuf(oldCout);
    }

    SECTION("Special ability action") {
        std::stringstream output;
        streambuf *oldCout = cout.rdbuf(output.rdbuf());
        archer.useSpecialAbility();
        REQUIRE(output.str() == "Archer activates rapid fire!\n");
        cout.rdbuf(oldCout);
    }
}


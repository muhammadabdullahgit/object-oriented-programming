#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>
 // Include your header file here
 //**********************************************************************************//
 //modify the class and method names as needed to match your implementation in implmentation of here//
 // the you can modify the  following code but make sure that these functionalities are tested.
 //************************************************************************************************//



using namespace std;

// create a global main deck of last two digits of your rollnumbers

TEST_CASE("Card class test", "[card]") {
    Card card(5);
    REQUIRE(card.getValue() == 5);

    
    Card anotherCard(10);
    anotherCard = card;
    REQUIRE(anotherCard.getValue() == 5);
}

TEST_CASE("Deck class test", "[deck]") {
    Deck deck(52);
    REQUIRE(deck.getSize() == 52);

   
    Card drawnCard = deck.drawCard();
    REQUIRE(deck.getSize() == 51);

    // careful here with the main desk, you need to pass that here
    deck.discardCard(drawnCard, mainDeck); 
    REQUIRE(deck.getSize() == 52);
}

TEST_CASE("Player class test", "[player]") {
    Player player;
    REQUIRE(player.getHand().getSize() == 0);

    
    Card card(3);
    player.drawCard(card);
    REQUIRE(player.getHand().getSize() == 1);

    
    player.discardCard(card, mainDeck);              // careful here with the main desk, you need to pass that here, craete a global main deck of any size 
    REQUIRE(player.getHand().getSize() == 0);
}

TEST_CASE("CardGame class test", "[cardgame]") {
    
    CardGame game(52);
    REQUIRE(game.getMainDeck().getSize() == 52);

    bool initialTurn = game.getPlayerTurn();
    game.playTurn();
    REQUIRE(game.getPlayerTurn() != initialTurn);
}

TEST_CASE("Rental Car System Functionality Tests", "[RentalCar]") {
    SECTION("Add Car Test") {
        RentalAgency rentalAgency;

        rentalAgency.addCar("Toyota", "Camry", "ABC123");
        rentalAgency.addCar("Honda", "Accord", "XYZ789");

        REQUIRE(rentalAgency.getAvailableCarCount() == 2);
    }

    SECTION("Add Customer Test") {
        RentalAgency rentalAgency;

        rentalAgency.addCustomer("John Doe");
        rentalAgency.addCustomer("Alice Smith");

        REQUIRE(rentalAgency.getCustomerCount() == 2);
    }

    SECTION("Rent and Return Car Test") {
        RentalAgency rentalAgency;

        rentalAgency.addCar("Ford", "Fusion", "DEF456");
        rentalAgency.addCustomer("Bob Johnson");

        rentalAgency.rentCar("DEF456", "Bob Johnson");

        REQUIRE(rentalAgency.getAvailableCarCount() == 0);
        REQUIRE(rentalAgency.getCustomerRentedCarCount("Bob Johnson") == 1);

        rentalAgency.returnCar("DEF456", "Bob Johnson");

        REQUIRE(rentalAgency.getAvailableCarCount() == 1);
        REQUIRE(rentalAgency.getCustomerRentedCarCount("Bob Johnson") == 0);
    }

    SECTION("Display Available Cars Test") {
        RentalAgency rentalAgency;

        rentalAgency.addCar("Chevrolet", "Malibu", "GHI789");
        rentalAgency.addCar("Nissan", "Altima", "JKL012");

        ostringstream output;
        rentalAgency.displayAvailableCars(output);

        REQUIRE(output.str().find("Chevrolet Malibu (License Plate: GHI789)") != std::string::npos);
        REQUIRE(output.str().find("Nissan Altima (License Plate: JKL012)") != std::string::npos);
    }

    SECTION("Display Rented Cars for Customer Test") {
        RentalAgency rentalAgency;

        rentalAgency.addCar("Hyundai", "Elantra", "MNO345");
        rentalAgency.addCustomer("Eva White");

        rentalAgency.rentCar("MNO345", "Eva White");

        ostringstream output;
        rentalAgency.displayRentedCarsForCustomer("Eva White", output);

        REQUIRE(output.str().find("Hyundai Elantra (License Plate: MNO345)") != std::string::npos);
    }
}


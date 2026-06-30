#include <iostream>
#include <string>

using namespace std;

#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "CardGame.h"
#include "Car.h"
#include "Customer.h"
#include "RentalAgency.h"

Deck mainDeck = 100;

int main() {
    int x;
    cout << "enter  1 to run question 1" << endl;
    cout << "enter  2 to run question 2" << endl;
    cin >> x;
    switch (x) {
        case 1: {
            cout << "enter 1 for Card class test " << endl;
            cout << "enter 2 for Deck class test " << endl;
            cout << "enter 3 for Player class test " << endl;
            cout << "enter 4 for CardGame class test " << endl;
            int y;
            cin >> y;
            switch (y) {
                case 1: {
                    //TEST_CASE("Card class test", "[card]") {
                    Card card(5);
                    // REQUIRE(card.getValue() == 5);
                    cout << "card value=" << card.getValue() << endl;

                    Card anotherCard(10);
                    anotherCard = card;
                    //REQUIRE(anotherCard.getValue() == 5);
                    cout << "another card value=" << anotherCard.getValue() << endl;
                    break;
                }
                case 2: {
                    //TEST_CASE("Deck class test", "[deck]") {
                    Deck deck(52);
                    //  REQUIRE(deck.getSize() == 52);
                    cout << "deck size=" << deck.getSize() << endl;


                    Card drawnCard = deck.drawCard();
                    // REQUIRE(deck.getSize() == 51);
                    cout << "deck size after draw one card=" << deck.getSize() << endl;
                    // careful here with the main desk, you need to pass that here
                    deck.discardCard(drawnCard, mainDeck);
                    // REQUIRE(deck.getSize() == 52);
                    cout << "deck size after discard one card=" << deck.getSize() << endl;
                    break;
                }
                case 3: {
                    //TEST_CASE("Player class test", "[player]") {
                    Player player;
                    // REQUIRE(player.getHand().getSize() == 0);
                    cout << "player  hand deck size=" << player.getHand().getSize() << endl;

                    Card card(3);
                    player.drawCard(card);
                    // REQUIRE(player.getHand().getSize() == 1);
                    cout << "player  hand deck size after draw one card=" << player.getHand().getSize() << endl;

                    player.discardCard(card,
                                       mainDeck);              // careful here with the main desk, you need to pass that here, craete a global main deck of any size
                    //  REQUIRE(player.getHand().getSize() == 0);
                    cout << "player  hand deck size after discard one card=" << player.getHand().getSize() << endl;
                    break;
                }
                case 4: {
                    //TEST_CASE("CardGame class test", "[cardgame]") {

                    CardGame game(52);
                    //REQUIRE(game.getMainDeck().getSize() == 52);

                    bool initialTurn = game.getPlayerTurn();
                    game.playTurn();
                    // REQUIRE(game.getPlayerTurn() != initialTurn);
                    game.displayGameState();
                    break;
                }
                default: {
                    cout << "wrong option entered in q1 menu" << endl;
                    break;
                }
            }
            break;
        }
        case 2: {
            int y;
            cout << "enter 1 for Add Car Test " << endl;
            cout << "enter 2 for Add Customer Test " << endl;
            cout << "enter 3 for Rent and Return Car Test " << endl;
            cout << "enter 4 for Display Available Cars Test " << endl;
            cout << "enter 5 for Display Rented Cars for Customer Test " << endl;
            cin >> y;
            switch (y) {
                case 1: {
                    //SECTION("Add Car Test") {
                    RentalAgency rentalAgency;

                    rentalAgency.addCar("Toyota", "Camry", "ABC123");
                    rentalAgency.addCar("Honda", "Accord", "XYZ789");

                    //REQUIRE(rentalAgency.getAvailableCarCount() == 2);
                    cout << "Car count=" << rentalAgency.getAvailableCarCount() << endl;
                    break;
                }
                case 2: {
                    //SECTION("Add Customer Test") {
                    RentalAgency rentalAgency;

                    rentalAgency.addCustomer("John Doe");
                    rentalAgency.addCustomer("Alice Smith");

                    //REQUIRE(rentalAgency.getCustomerCount() == 2);
                    cout << "Customer count=" << rentalAgency.getCustomerCount() << endl;
                    break;
                }
                case 3: {
                    //SECTION("Rent and Return Car Test") {
                    RentalAgency rentalAgency;

                    rentalAgency.addCar("Ford", "Fusion", "DEF456");
                    rentalAgency.addCustomer("Bob Johnson");

                    rentalAgency.rentCar("DEF456", "Bob Johnson");

                    //REQUIRE(rentalAgency.getAvailableCarCount() == 0);
                    // REQUIRE(rentalAgency.getCustomerRentedCarCount("Bob Johnson") == 1);
                    cout << "available car count=" << rentalAgency.getAvailableCarCount() << endl;
                    cout << " available customer count=" << rentalAgency.getCustomerRentedCarCount("Bob Johnson")
                         << endl;
                    rentalAgency.returnCar("DEF456", "Bob Johnson");

                    //REQUIRE(rentalAgency.getAvailableCarCount() == 1);
                    //REQUIRE(rentalAgency.getCustomerRentedCarCount("Bob Johnson") == 0);
                    cout << "available car count=" << rentalAgency.getAvailableCarCount() << endl;
                    cout << " available customer count=" << rentalAgency.getCustomerRentedCarCount("Bob Johnson")
                         << endl;
                    break;
                }
                case 4: {
                    //SECTION("Display Available Cars Test") {
                    RentalAgency rentalAgency;

                    rentalAgency.addCar("Chevrolet", "Malibu", "GHI789");
                    rentalAgency.addCar("Nissan", "Altima", "JKL012");

                    ostringstream output;
                    rentalAgency.displayAvailableCars(output);

                    // REQUIRE(output.str().find("Chevrolet Malibu (License Plate: GHI789)") != std::string::npos);
                    //REQUIRE(output.str().find("Nissan Altima (License Plate: JKL012)") != std::string::npos);
                    cout << output.str();
                    break;

                }
                case 5: {
                    //SECTION("Display Rented Cars for Customer Test") {
                    RentalAgency rentalAgency;

                    rentalAgency.addCar("Hyundai", "Elantra", "MNO345");
                    rentalAgency.addCustomer("Eva White");

                    rentalAgency.rentCar("MNO345", "Eva White");

                    ostringstream output;
                    rentalAgency.displayRentedCarsForCustomer("Eva White", output);
                    //REQUIRE(output.str().find("Hyundai Elantra (License Plate: MNO345)") != std::string::npos);
                    cout << output.str();
                    break;
                }
                default: {
                    cout << "wrong option entered in q2 menu" << endl;
                    break;
                }
            }
            break;
        }
        default: {
            cout << "wrong option entered in main menu" << endl;
            break;
        }
    }
    //Make a Menu Driven Program and Call your functions here

    return 0;
}

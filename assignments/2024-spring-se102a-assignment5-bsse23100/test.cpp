#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include <iostream>
#include <vector>
#include "Dish .h"
#include "Starter.h"
#include "MainCourse.h"
#include "Dessert.h"
#include "MediaItem.h"
#include "AudioTrack.h"
#include "VideoClip.h"
#include "EBook.h"

using namespace std;

// add your libraries

TEST_CASE("Restaurant Management System Functionality") {
    Starter starter1("Appetizer 1", "Crispy Start", 10.99);
    MainCourse mainCourse1("Main Dish 1", "Savory Delight", 24.99);
    Dessert dessert1("Dessert 1", "Sweet Indulgence", 8.99);

    SECTION("Display Details") {
        REQUIRE(starter1.displayDetails() == "Starter: Appetizer 1, Description: Crispy Start, Price: $10.99");
        REQUIRE(mainCourse1.displayDetails() ==
                "MainCourse: Main Dish 1, Description: Savory Delight, Price: $24.99");
        REQUIRE(dessert1.displayDetails() == "Dessert: Dessert 1, Description: Sweet Indulgence, Price: $8.99");
    }

    SECTION("Combine Dishes") {
        Dish combinedDish = starter1 + mainCourse1;
        REQUIRE(combinedDish.displayDetails() == "Combined: Appetizer 1 + Main Dish 1, Price: $35.98");
    }

    SECTION("Create Order and Print Menu") {
        vector<Dish> order;
        order.push_back(starter1);
        order.push_back(mainCourse1);
        order.push_back(dessert1);

        REQUIRE(order.size() == 3);
        printMenu(order);
        REQUIRE(printMenu(order)=="Combined: Appetizer 1, Price: $10.99Combined: Main Dish 1, Price: $24."
                                  "99Combined: Dessert 1, Price: $8.990total price: $44.97");

        // here manually verify the printed output for correctness
    }
}


TEST_CASE("Multimedia Library System Functionality") {
    AudioTrack audioTrack1("Song 1", "Artist 1", 180);  // duration 3 minutes
    VideoClip videoClip1("Clip 1", "720p", 300);        // duration 5 minutes
    EBook eBook1("Book 1", "Author 1", 250);            // duration 4 minutes

    SECTION("Display Details") {
        REQUIRE(audioTrack1.displayDetails() == "AudioTrack: Song 1 by Artist 1, Duration: 180 seconds");
        REQUIRE(videoClip1.displayDetails() == "VideoClip: Clip 1, Resolution: 720p, Duration: 300 seconds");
        REQUIRE(eBook1.displayDetails() == "EBook: Book 1 by Author 1, Duration: 250 seconds");
    }

    SECTION("Combine Media Items") {
        MediaItem combinedItem = audioTrack1 + videoClip1;
        REQUIRE(combinedItem.displayDetails() == "Combined: Song 1 + Clip 1, Duration: 480 seconds");
    }

    SECTION("Create Library and Print") {
        vector<MediaItem> library;
        library.push_back(audioTrack1);
        library.push_back(videoClip1);
        library.push_back(eBook1);

        REQUIRE(library.size() == 3);

        printLibrary(library);
        REQUIRE(printLibrary(library)==  "total duration: 730seconds");
        // here manually verify the printed output for correctness

    }
}

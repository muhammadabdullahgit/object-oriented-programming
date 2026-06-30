#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include <iostream>
#include <vector>
#include "Post.h"
#include "User.h"
#include "SocialMediaPlatform.h"
#include "MediaContent.h"
#include "Movie.h"
#include "TVSeason.h"
#include "NetflixLibrary.h"

using namespace std;

TEST_CASE("SocialMediaPlatform Class Test") {

    // Test case 5: Adding users and posts
    SocialMediaPlatform platform;
    User user1("JohnDoe", "JD001");
    User user2("JaneSmith", "JS002");
    platform += user1;
    platform += user2;

    // Test case 5a: Composing posts
    platform.composePost(user1, "P001", "Hello World!");
    platform.composePost(user2, "P002", "Good morning!");

    REQUIRE(platform.getUserCount() == 2);
    REQUIRE(platform.getPostCount() == 2);

    // Test case 5b: Liking posts
    platform.likePost(user1, "P001");
    platform.likePost(user2, "P002");
    REQUIRE(platform.getPostLikes("P001") == 1);
    REQUIRE(platform.getPostLikes("P002") == 1);
}

TEST_CASE("Adding and removing media content items") {
    NetflixLibrary library;

    SECTION("Adding movies") {
        library.addMediaContent(new Movie("Inception", "Science Fiction", 2010));
        library.addMediaContent(new Movie("The Matrix", "Science Fiction", 1999));

        REQUIRE(library.getMediaContentCount() == 2);

        SECTION("Removing a movie") {
            library.removeMediaContent("Inception");
            REQUIRE(library.getMediaContentCount() == 1);
        }
    }

    SECTION("Adding TV seasons") {
        library.addMediaContent(new TVSeason("Stranger Things", "Science Fiction", 2016, 3));
        library.addMediaContent(new TVSeason("Breaking Bad", "Drama", 2008, 5));

        REQUIRE(library.getMediaContentCount() == 2);

        SECTION("Removing a TV season") {
            library.removeMediaContent("Stranger Things");
            REQUIRE(library.getMediaContentCount() == 1);
        }
    }
}

TEST_CASE("Playing media content items") {
    NetflixLibrary library;

    library.addMediaContent(new Movie("Inception", "Science Fiction", 2010));
    library.addMediaContent(new TVSeason("Stranger Things", "Science Fiction", 2016, 3));

    std::stringstream output;
    streambuf *oldCout = cout.rdbuf(output.rdbuf());

    SECTION("Playing a movie") {
        library.playMediaContent("Inception");
        REQUIRE(output.str() == "Playing movie: Inception\n");
    }

    SECTION("Playing a TV season") {
        library.playMediaContent("Stranger Things");
        REQUIRE(output.str() == "Playing TV season: Stranger Things\n");
    }
    cout.rdbuf(oldCout);
}

TEST_CASE("Displaying media content details") {
    NetflixLibrary library;

    library.addMediaContent(new Movie("Inception", "Science Fiction", 2010));
    library.addMediaContent(new TVSeason("Stranger Things", "Science Fiction", 2016, 3));

    std::stringstream output;
    streambuf *oldCout = cout.rdbuf(output.rdbuf());

    library.displayMediaContent();

    REQUIRE(output.str() ==
            "Title: Inception, Genre: Science Fiction, Release Year: 2010\nTitle: Stranger Things, Genre: Science Fiction, Start Year: 2016, Episodes: 3\n");
    cout.rdbuf(oldCout);
}
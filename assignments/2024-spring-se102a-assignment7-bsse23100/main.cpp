#include "post.h"
#include "user.h"
#include "socialMediaPlatform.h"
#include "MediaContent.h"
#include "Movie.h"
#include "TVSeason.h"
#include "NetflixLibrary.h"
#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "enter  1 to run question 1" << endl;
    cout << "enter  2 to run question 2" << endl;
    cin >> x;
    switch (x) {
        case 1: {
            SocialMediaPlatform platform;
            User user1("JohnDoe", "JD001");
            User user2("JaneSmith", "JS002");
            platform += user1;
            platform += user2;
            platform.composePost(user1, "P001", "Hello World!");
            platform.composePost(user2, "P002", "Good morning!");
            cout << "user count : " << platform.getUserCount() << endl;
            cout << "post count : " << platform.getPostCount() << endl;
            platform.likePost(user1, "P001");
            platform.likePost(user2, "P002");
            cout << endl;
            cout << "     details :       " << endl;
            cout << platform;
            break;
        }
        case 2: {
            int x2;
            cout << "enter  1 to run add and remove media content" << endl;
            cout << "enter  2 to play media content" << endl;
            cout << "enter  3 to display media content" << endl;
            cin >> x2;
            switch (x2) {
                case 1: {
                    NetflixLibrary library;
                    library.addMediaContent(new Movie("Inception", "Science Fiction", 2010));
                    library.addMediaContent(new Movie("The Matrix", "Science Fiction", 1999));

                    cout << "media content count after adding movie : " << library.getMediaContentCount() << endl;

                    library.removeMediaContent("Inception");
                    cout << "media content count after removing movie : " << library.getMediaContentCount() << endl;
                    library.addMediaContent(new TVSeason("Stranger Things", "Science Fiction", 2016, 3));
                    library.addMediaContent(new TVSeason("Breaking Bad", "Drama", 2008, 5));

                    cout << "media content count after adding TV season : " << library.getMediaContentCount() << endl;
                    library.removeMediaContent("Stranger Things");
                    cout << "media content count after removing TV season : " << library.getMediaContentCount() << endl;
                    break;
                }
                case 2: {
                    NetflixLibrary library;
                    library.addMediaContent(new Movie("Inception", "Science Fiction", 2010));
                    library.addMediaContent(new TVSeason("Stranger Things", "Science Fiction", 2016, 3));
                    library.playMediaContent("Inception");
                    library.playMediaContent("Stranger Things");
                    break;
                }
                case 3: {
                    NetflixLibrary library;
                    library.addMediaContent(new Movie("Inception", "Science Fiction", 2010));
                    library.addMediaContent(new TVSeason("Stranger Things", "Science Fiction", 2016, 3));
                    cout << "     displaying media content        " << endl;
                    library.displayMediaContent();
                    break;
                }
                default: {
                    cout << "wrong key pressed in q2 menu" << endl;
                    break;
                }
            }
            break;
        }
        default: {
            cout << "wrong key pressed in main menu" << endl;
            break;
        }
            //Make a Menu Driven Program and Call your functions here

            return 0;
    }
}
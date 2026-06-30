#include <iostream>
#include "Dish .h"
#include "Starter.h"
#include "MainCourse.h"
#include "Dessert.h"
#include "MediaItem.h"
#include "AudioTrack.h"
#include "VideoClip.h"
#include "EBook.h"

using namespace std;

int main() {
    int x;
    cout << "enter  1 to run question 1" << endl;
    cout << "enter  2 to run question 2" << endl;
    cin >> x;
    switch (x) {
        case 1: {
            string name, name1, name2, description, description1, description2;
            double price, price1, price2;
            cout << "enter name of starter" << endl;
            cin >> name;
            cout << "enter description of starter" << endl;
            cin >> description;
            cin >> name;
            cout << "enter price of starter" << endl;
            cin >> price;
            Starter starter(name, description, price);
            cout << "enter name of main course" << endl;
            cin >> name1;
            cout << "enter description of main course" << endl;
            cin >> description1;
            cout << "enter price of main course" << endl;
            cin >> price1;
            MainCourse mainCourse(name1, description1, price1);
            cout << "enter name of dessert" << endl;
            cin >> name2;
            cout << "enter description of dessert" << endl;
            cin >> description2;
            cout << "enter price of dessert" << endl;
            cin >> price2;
            Dessert dessert(name2, description2, price2);
            Dish combinedDish = starter + mainCourse;
            cout << endl;
            starter.displayDetails();
            cout << endl;
            mainCourse.displayDetails();
            cout << endl;
            dessert.displayDetails();
            cout << endl;
            combinedDish.displayDetails();
            break;
        }
        case 2: {
            string title, title1, title2, artist, author, resolution;
            int duration, duration1, duration2;
            cout << "enter title of audio" << endl;
            cin >> title;
            cout << "enter artist of audio" << endl;
            cin >> artist;
            cout << "enter duration of audio" << endl;
            cin >> duration;
            AudioTrack audioTrack(title, artist, duration);
            cout << "enter title of video" << endl;
            cin >> title1;
            cout << "enter resolution of video" << endl;
            cin >> resolution;
            cout << "enter duration of video" << endl;
            cin >> duration1;
            VideoClip videoClip(title1, resolution, duration1);
            cout << "enter title of EBook" << endl;
            cin >> title2;
            cout << "enter author of EBook" << endl;
            cin >> resolution;
            cout << "enter duration of Ebook" << endl;
            cin >> duration2;
            EBook eBook(title2, author, duration2);
            MediaItem combinedItem = audioTrack + videoClip;
            cout << endl;
            audioTrack.displayDetails();
            cout << endl;
            videoClip.displayDetails();
            cout << endl;
            eBook.displayDetails();
            cout << endl;
            combinedItem.displayDetails();
            break;
        }
        default: {
            cout << "wrong key pressed in main menu" << endl;
            break;
        }
    }
    //Make a Menu Driven Program and Call your functions here

    return 0;

}
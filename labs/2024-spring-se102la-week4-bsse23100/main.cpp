#include <iostream>
# include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Food.h"
#include "Vegetable.h"
#include "Fruit.h"
#include "functions.h"
using namespace std;

int main() {
      /*  int x;
        cout<<"enter  1 to run question 1"<<endl;
        cout<<"enter  2 to run question 2"<<endl;
        cin>>x;
        switch(x){
            case 1:{
                string name,name1,name2,sound,featherColour;
                int age,age1,age2;
                cout<<"enter name of animal"<<endl;
                cin>>name;
                cout<<"enter age of animal"<<endl;
                cin>>age;
                Animal a(name,age);
                cout<<"enter name of mammal"<<endl;
                cin>>name1;
                cout<<"enter age of mammal"<<endl;
                cin>>age1;
                cout<<"enter sound of mammal"<<endl;
                cin>>sound;
                Mammal m(name1,age1,sound);
                cout<<"enter name of bird"<<endl;
                cin>>name2;
                cout<<"enter age of age"<<endl;
                cin>>age2;
                cout<<"enter feather color of bird"<<endl;
                cin>>featherColour;
                Bird b(name2,age2,featherColour);
                cout<<endl;
                a.printInfo();
                cout<<endl;
                m.printSound();
                cout<<endl;
                b.printFeatherColor();
                break;
            }
            case 2:{
                string name,name1,name2,color,taste;
                int calories,calories1,calories2;
                cout<<"enter name of food"<<endl;
                cin>>name;
                cout<<"enter calories of food "<<endl;
                cin>>calories;
                Food f(name,calories);
                cout<<"enter name of vegetable"<<endl;
                cin>>name1;
                cout<<"enter calories of vegetable"<<endl;
                cin>>calories1;
                cout<<"color of vegetable "<<endl;
                cin>>color;
                Vegetable v(name1,calories1,color);
                cout<<"enter name of fruit"<<endl;
                cin>>name2;
                cout<<"enter calories of fruit"<<endl;
                cin>>calories2;
                cout<<"taste of fruit "<<endl;
                cin>>taste;
                Fruit fruit(name2,calories2,taste);
                f.printInfo();
                cout<<endl;
                v.printColor();
                cout<<endl;
                fruit.printTaste();
                break;
            }
            default:{
                cout<<"wrong key pressed in main menu"<<endl;
                break;
            }
        }*/
      functions f;
      functions f1(3);
      functions f2(3,4);

        return 0;
    }
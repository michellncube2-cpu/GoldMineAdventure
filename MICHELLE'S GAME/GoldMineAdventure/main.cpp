#include <iostream>
#include <string>
using namespace std;

string name;
int lives = 10;
int option;

void left()
{
    cout<<"You took the left tunnel and stepped on a trap!"<<endl;
    cout<<"You lost -4 lives"<<endl;
    lives = lives - 4;
    cout<<"You have "<<lives<<" left"<<endl;
}

void middle()
{
    cout<<"You chose the middle tunnel and found a first aid kit"<<endl;
    cout<<"This added +3 lives "<<endl;
    lives = lives + 3;
    cout<<"You have "<<lives<<" left"<<endl;
}

void right()
{
    cout<<"You followed the right tunnel and found gold!"<<endl;
    cout<<"This added +2 lives "<<endl;
    lives = lives + 2;
    cout<<"You have "<<lives<<" left"<<endl;
}

void menu()
{
    cout<<"=================================================="<<endl;
    cout<<"WELCOME TO THE GOLD MINE ADVENTURE"<<endl;
    cout<<"=================================================="<<endl;
    cout<<""<<endl;

    cout<<"PLAYER DATA : "<<endl;
    cout<<"**************************************************"<<endl;
    cout<<"NAME : "<<name<<endl;
    cout<<"LOCATION : Johannesburg"<<endl;
    cout<<"LIVES : "<<lives<<endl;
    cout<<"**************************************************"<<endl;
    cout<<""<<endl;

    cout<<"Enter 1 to go LEFT"<<endl;
    cout<<"Enter 2 to go MIDDLE"<<endl;
    cout<<"Enter 3 to go RIGHT"<<endl;
    cout<<"Enter 4 to EXIT"<<endl;
    cin>>option;

    switch(option)
    {
    case 1:
        left();
        break;
    case 2:
        middle();
        break;
    case 3:
        right();
        break;
    case 4:
        cout<<"Thank you for playing, "<<name<<"!"<<endl;
        break;
    default:
        cout<<"Invalid option"<<endl;
        break;
    }
}

int main()
{
    cout<<"Provide your name : ";
    getline(cin, name);
    cout<<"Hey there, "<<name<<endl;
    cout<<"You are trapped in an old gold mine and must find your way out SOO SCARYYY..."<<endl;
    cout<<""<<endl;

    do{
        menu();
    }
    while(option != 4);

    return 0;
}

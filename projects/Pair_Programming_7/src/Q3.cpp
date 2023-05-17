/*
Filename: Q3.cpp
Description:  A program that uses the following categories of movies.
A for Adventure movies
C for Comedy movies
F for Family movies
H for Horror movies
S for Science Fiction movies

Pseudocode:
Import Libraries
Declare Variable (cat)
Prompt user to enter the category of the movie
Gets the category
Checks what the category is and outputs it and checks if the input is valid
*/

#include "Q3.h"
#include <bits/stdc++.h> //Import Libraries
using namespace std;

Q3::Q3()
{
    char cat; //Declare Variable

    cout<<"Movies Categories:"<<endl; //Prompt user to enter the category of the movie
    cout<<"A for Adventure"<<endl;
    cout<<"C for Comedy"<<endl;
    cout<<"F for Family"<<endl;
    cout<<"H for Horror movies"<<endl;
    cout<<"S for Science Fiction movies"<<endl;

    cout<<"\nEnter the category of the the movie: ";
    cin>>cat; //Gets the category

    switch(cat){ //Checks what the category is and outputs it and checks if the input is valid

    case 'A':
    case 'a':
        cout<<"Your selection is Adventure Movies"<<endl;
    break;

    case 'C':
    case 'c':
        cout<<"Your selection is Comedy Movies"<<endl;
    break;

    case 'F':
    case 'f':
        cout<<"Your selection is Family Movies"<<endl;
    break;

    case 'H':
    case 'h':
        cout<<"Your selection is Horror Movies"<<endl;
    break;

    case 'S':
    case 's':
        cout<<"Your selection is Science Fiction"<<endl;

    default:
    cout<<"Invalid selection"<<cout;
 }
}

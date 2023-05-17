/*
Filename: Q4.cpp
Description: A program that asks a user to enter his/her year of birth. If the year of
 birth is prior to 1970, print "You qualify for the Juke Box Rally." Next ask the
 user for his/her favorite fruit. If the favorite fruit is a strawberry, print out
 "Strawberry Fields Forever", otherwise, print "Bye, bye Miss no luck".
*/

#include "Q4.h"
using namespace std;
#include <bits/stdc++.h>

Q4::Q4()
{
    int year;
    string message, fruit;
    cout<<"Enter your birth year: ";
    cin>>year;

    if (year<1970){
        message = "You qualify for the Juke Box Rally";
    }

    cin.ignore();
    cout<<message<<endl;

    ofstream write ("file4.txt", ios::out); //Creating ans setting up a text file.
    write<<message<<endl;

    cout<<"\nEnter your favorite fruit: ";
    getline(cin,fruit);

    if ((fruit=="strawberry")||(fruit=="Strawberry")){
        message = "Strawberry Fields Forever";
    }
    else{
        message = "Bye, bye Miss no luck";
    }

    cout<<message<<endl;
    write<<message<<endl;
}

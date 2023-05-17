/*
Filename: Q1.cpp
Description: A program that asks the user to enter his/her name and age. If the age is greater than 16,
then print “It's scary, <name> … you are old enough to drive!”. Otherwise, print a statement
that tells the user how many years he/she needs to wait before being able to drive.
*/

#include "Q1.h"
#include <bits/stdc++.h>
using namespace std;

Q1::Q1()
{
    string name;
    int age;

    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<"Enter your age: ";
    cin>>age;

    ofstream obj1 ("file1.txt", ios::out); //Creating ans setting up a text file.
    obj1<<name<<endl; //Writes the variables to the file.
    obj1<<age<<endl;

    if (age>=16){
        cout<<"It's scary, "<<name<<", you are old enough to drive!"<<endl;
    }
    else{
        cout<<"You have "<<16-age<<" years until you can drive."<<endl;
    }

}

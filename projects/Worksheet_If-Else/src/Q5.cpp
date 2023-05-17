/*
Filename: Q5.cpp
Description: The user is asked to enter two positive integers. The program prints them is
ascending order or states that they are equal.
( NOTE: In order to input two items at the same time, the user
must separate them with a space OR hit the ENTER key after each
one. The following cin statement will accept either of these methods:
cin >> one >> two; )

*/

#include "Q5.h"
using namespace std;
#include <bits/stdc++.h>

Q5::Q5()
{
    int x, y, high;
    string order;

    cout<<"Enter two numbers (positive integers): ";
    cin>>x>>y;

    ofstream write ("file5.txt", ios::out); //Creating ans setting up a text file.
    write<<x<<", "<<y<<endl;

    if (x>y){
        high = x;
    }
    else {
        high = y;
    }

    if (high==y){
        cout<<y<<", "<<x<<endl;
        write<<y<<", "<<x<<endl;
    }
    else {
        cout<<x<<", "<<y<<endl;
        write<<x<<", "<<y<<endl;
    }
}

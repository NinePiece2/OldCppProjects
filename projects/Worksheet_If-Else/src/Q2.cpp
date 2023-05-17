/*
Filename: Q2.cpp
Description: A program that asks the user to enter any positive integer. The program will determine
and print whether the number is odd or even.
*/

#include "Q2.h"
using namespace std;
#include <bits/stdc++.h>

Q2::Q2()
{
    int x;
    string state;
    cout<<"Enter a positive integer: ";
    cin>>x;


    if(x%2==0){
        state = " is even";
    }
    else {
        state = " is odd";
    }

    cout<<x<<state<<endl;

    ofstream write ("file2.txt", ios::out); //Creating ans setting up a text file.
    write<<x<<state<<endl; //Writes the variables to the file.

}

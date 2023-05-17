/*
Filename: Q1.cpp
Description: Senior salesperson is paid $400 a week, and a junior salesperson is paid $275 a week. A
program that accepts as input a salesperson’s status in the character variable status. If status is ‘s’ or ‘S’, the senior
person’s salary should be displayed; if status is ‘j’ or ‘J’, the junior person’s salary should be displayed, otherwise
display error message.

Pseudocode:
1.Import Libraries
2.Declare variables (position)
3.Prompt user for their position
4.Get the position
5.Check what the salary would be or if the input is invalid
6.Output the salary to the user

*/

#include "Q1.h"
#include <bits/stdc++.h> //Import Libraries
using namespace std;

Q1::Q1()
{
    char position;

    cout<<"Enter your position: "; //Prompt user for their position
    cin>>position; //Get the position

    switch(position){ //Check what the salary would be or if the input is invalid and outputs the salary to the user

    case'j':
    case'J':
        cout<<"Your salary is : $275"<<endl;
    break;

    case's':
    case'S':
        cout<<"Your salary is : $400"<<endl;
    break;

    default:
        cout<<"Invalid Input"<<endl;
    }
}

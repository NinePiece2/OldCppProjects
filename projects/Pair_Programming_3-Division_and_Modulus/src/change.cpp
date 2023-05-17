/*
Filename: change.cpp
Description: Gets the amount of money in cents and displays the number of coins needed to reach that amount

Pseudocode:
Import Libraries
Declare Variables, cents, quarters, dimes, nickels, pennies
Ask the user for the amount of money in cents
Gets the number
calculates the amount of each coin needed
quarters=cents/25
cents=cents - (quarters*25)
dimes=cents/10
cents=cents - (dimes*10)
nickels=cents/5
cents=cents - (nickels*5)
pennies=cents
Prints the number of each coin needed
*/

#include "change.h" //Import Libraries
#include <iostream>
using namespace std;

change::change()
{
    int cents, quarters, dimes, nickels, pennies; //Declare Variables

    cout<<"Enter the number of change in cents: "; //Ask the user for the amount of money in cents
    cin>>cents; //Gets the number

    quarters=cents/25; //Calculates the amount of each coin needed
    cents=cents - (quarters*25);
    dimes=cents/10;
    cents=cents - (dimes*10);
    nickels=cents/5;
    cents=cents - (nickels*5);
    pennies=cents;

    cout<<"Quarters: "<<quarters<<endl; //Prints the number of each coin needed
    cout<<"Dimes: "<<dimes<<endl;
    cout<<"Nickels: "<<nickels<<endl;
    cout<<"Pennies: "<<pennies<<endl;


}

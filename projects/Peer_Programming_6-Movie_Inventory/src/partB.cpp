/*
Filename: partB.cpp
Description: A TFO Movies wants to reward its best members with a discount based on the member’s number of movie rentals and the number of new
members referred by the member. The discount is in percent and is equal to the sum of the rentals and the referrals, but it cannot exceed 75 percent. Write a
program to calculate the value of the discount. Hint: Use math function min( )

Pseudocode:

1.Import Libraries
2.Declare Variables (rentals, referrals, discount, constant 75)
3.Asks the user for the amount of rental and referrals.
3.Gets the input from the user
4.Calculate the total amount of all the rentals+referrals
5.Display the output the discount such that it is <=75

*/

#include "partB.h" //Import Libraries
#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

partB::partB()
{
    int rentals, referrals; //Declare Variables
    double discount;
    const int maxDiscount=75;

    cout<<"Enter the amount of rentals: "; //Asks the user for the amount of rental and referrals and gets the input from the user
    cin>>rentals;
    cout<<"Enter the amount of referrals: ";
    cin>>referrals;

    discount=rentals+referrals; //Calculate the total amount of all the rentals+referrals

    cout<<"The discount is equal to: "<<fixed<<setprecision(2)<<fmin(maxDiscount,discount)<<"%"<<endl; //Display the output the discount such that it is <=75


}

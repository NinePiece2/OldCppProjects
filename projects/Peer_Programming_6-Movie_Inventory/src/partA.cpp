/*
Filename: partA.cpp
Description:You have been hired to prepare an inventory program for the TWO FOR ONE MOVIES LIMITED (TFO). The store deals with three
videos: -Dances with Muskrats; -The Mighty Dentists; and -While You Were Snoring. You are to prepare a user active program which will give an update
on the inventory at any given time. The questions you need to ask are listed below. The last two lines are computations which you must analyze and
incorporate into your program.

Pseudocode:

1.Import Libraries
2.Declare Variables (dancesPrice, mightyPrice, snoringPrice, dancesSupply, mightySupply, snoringSupply)
3.Asks the user for the price and amount in supply of dances, mighty and snoring.
3.Gets the input from the user
4.Calculate the total amount of all the DVDs and their total price to fin an average.
5.Display the output (amount, total price and average price of DVDs)

*/

#include <iostream> //Import Libraries
using namespace std;
#include <iomanip>
#include "partA.h"

partA::partA()
{
    int dancesSupply, mightySupply, snoringSupply, totalAmount; //Declare Variables
    double dancesPrice, mightyPrice, snoringPrice, totalPrice, avgPrice;

    cout<<"Enter the price of Dances in dollars: "; //Asks the user for the price and amount in supply of dances, mighty and snoring and gets the input
    cin>>dancesPrice;
    cout<<"Enter the amount of Dances the store has: ";
    cin>>dancesSupply;
    cout<<"Enter the price of Mighty in dollars: ";
    cin>>mightyPrice;
    cout<<"Enter the amount of Mighty the store has: ";
    cin>>mightySupply;
    cout<<"Enter the price of Snoring in dollars: ";
    cin>>snoringPrice;
    cout<<"Enter the amount of Snoring the store has: ";
    cin>>snoringSupply;

    totalPrice = (dancesPrice*dancesSupply)+(mightyPrice*mightySupply)+(snoringPrice*snoringSupply); //Calculate the total amount of all the DVDs and their total price to fin an average.
    totalAmount = dancesSupply+mightySupply+snoringSupply;
    avgPrice = totalPrice/totalAmount;


    cout<<"\nVideo Title"<<setw(30)<<"Cost"<<setw(30)<<"# in stock"<<endl;
    cout<<"\nDances with Muskrats"<<fixed<<setprecision(2)<<right<<setw(16)<<"$"<<dancesPrice<<right<<setw(25)<<dancesSupply<<" DVDs"<<endl; //Display the output (amount, total price and average price of DVDs)
    cout<<"\nD3-The Mighty Dentists"<<fixed<<setprecision(2)<<right<<setw(14)<<"$"<<mightyPrice<<right<<setw(25)<<mightySupply<<" DVDs"<<endl;
    cout<<"\nWhile You Were Snoring"<<fixed<<setprecision(2)<<right<<setw(14)<<"$"<<snoringPrice<<right<<setw(25)<<snoringSupply<<" DVDs"<<endl;


    cout<<"\nThe total value of all DVDs in the store is: $ "<<fixed<<setprecision(2)<<totalPrice<<endl;
    cout<<"The total number of all DVDs in the store is: "<<totalAmount<<endl;
    cout<<"The average value is: $"<<fixed<<setprecision(2)<<avgPrice<<endl;


}

/*
Names: Romit Sagu and Rushi Pinamaraju
Date: 2/27/2020
Filename: main.cpp
Description: A movie in a local theater is in great demand. To help a local charity, the theater owner has decided to donate to
the charity a portion of the gross amount generated from the movie. You’re hired as a CPP programmer to designs
and implements a program that prompts the user to input the movie name, adult ticket price, child ticket price,
number of adult tickets sold, number of child tickets sold, and percentage of the gross amount to be donated to the
charity.

Pseudocode:
1.Import Libraries
2.Declare Variables
3.Ask the user for the movie name, adult ticket price, child ticket price, number of adult tickets sold,
number of child tickets sold, and percentage of the gross amount to be donated to the
charity
4.Get the variables that are being asked for
5.Calculate the the gross amount of money  amount donated and, (the total - the amount donated) and the total amount of tickets
6.Tell the user the name of the movie, number of tickets sold, gross amount, the percentage that is donated, the
amount that is donated and the net sale.
*/

#include <iomanip> //Import Libraries
#include <iostream>
using namespace std;

int main()
{
    string movieName; //Declare Variables
    int ticketSold, adultTicket, childTicket, totalTickets;
    double adultTicketPrice, childTicketPrice, percentDonated, grossAmount, amountDonated, netSale;


    //Ask the user for the movie name, adult ticket price, child ticket price, number of adult tickets sold,
    //number of child tickets sold, and percentage of the gross amount to be donated to the charity
    //Get the variables that are being asked for
    cout<<"Enter movie name: ";
    getline(cin, movieName);
    cout<<"Enter the price of an adult ticket: ";
    cin>>adultTicketPrice;
    cout<<"Enter the price of a child ticket: ";
    cin>>childTicketPrice;
    cout<<"Enter number of adult tickets sold: ";
    cin>>adultTicket;
    cout<<"Enter number of child tickets sold: ";
    cin>>childTicket;
    cout<<"Enter the percentage of donation: ";
    cin>>percentDonated;


    //Calculate the the gross amount of money  amount donated and, (the total - the amount donated) and the total amount of tickets
    totalTickets=childTicket+adultTicket;
    grossAmount=(childTicket*childTicketPrice)+(adultTicket*adultTicketPrice);
    amountDonated=grossAmount*(percentDonated/100);
    netSale=grossAmount-amountDonated;


    //Tell the user the name of the movie, number of tickets sold, gross amount, the percentage that is donated, the
    //amount that is donated and the net sale.
    cout<<setfill('.')<<left<<setw(29)<<"\nMovie Name: "<<right<<setw(8)<<" "<<movieName<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Number of Tickets Sold: "<<setfill(' ')<<right<<setw(10)<<fixed<<setprecision(2)<<totalTickets<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Gross Amount: "<<setfill(' ')<<right<<" $"<<setw(8)<<fixed<<setprecision(2)<<grossAmount<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Percentage of Gross Amount Donated: "<<setfill(' ')<<right<<setw(9)<<fixed<<setprecision(2)<<percentDonated<<"%"<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Amount Donated: "<<setfill(' ')<<right<<" $"<<setw(8)<<fixed<<setprecision(2)<<amountDonated<<endl;
    cout<<setfill('.')<<left<<setw(35)<<"Net Sale: "<<setfill(' ')<<right<<" $"<<setw(8)<<fixed<<setprecision(2)<<netSale<<endl;

    return 0;
}

/*
Filename: interest.cpp
Description: This program inputs the balance, payment, billing cycle and interest rate per month then calculates the interest.

Pseudocode:
1.Import Libraries
2.Declare variables (netBalance, payment, d1, d2, interstMonth, interest, averageDailyBalance, )
3.Ask the user for the net balance from the bill, payment made, number of days in the billing cycle and the number of
days the payment is made before the billing cycle and the interest rate per month.
4.Gets the (netBalance, payment, d1, d2, interstMonth)
5.Calculates the averageDailyBalance and the interest
6.Outputs the interest
*/

#include <iomanip> //Import Libraries
#include "interest.h"
#include <iostream>
using namespace std;

interest::interest()
{
    double interest, averageDailyBalance, payment, netBalance, interestMonth; //Declare variables
    int d1, d2;

    cout<<"How many days are in the billing cycle: "; //Ask the user for the net balance from the bill, payment made, number of days
    cin>>d1;                                          //in the billing cycle and the number of days the payment is made before the
    cout<<"How many days was the payment made before the billing cycle: "; //billing cycle and the interest rate per month.
    cin>>d2;                                //Gets the (netBalance, payment, d1, d2, interestMonth)
    cout<<"What is the balance shown in the bill: ";
    cin>>netBalance;
    cout<<"What is the payment that was made: ";
    cin>>payment;
    cout<<"What is the monthly interest (in decimal form): ";
    cin>>interestMonth;

    averageDailyBalance = (netBalance*d1 - payment*d2) / d1; //Calculates the averageDailyBalance and the interest
    interest = averageDailyBalance * interestMonth;

    cout<<"The interest is $"<<fixed<<showpoint<<setprecision(2)<<interest<<endl; //Outputs the interest
}

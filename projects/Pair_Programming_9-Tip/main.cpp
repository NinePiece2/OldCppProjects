/*
Names: Romit Sagu and Ashlie Arora
Date: 3/11/2020
Filename: main.cpp
Description: A program that calculates a tip according to the diner’s satisfaction acording to
these ratings: 1 = Totally satisfied, 2 = Satisfied, 3 = Dissatisfied

Pseudocode:
1.Import Libraries
2.Declare Variables (bill, tipPercent, tip, satisfaction)
3.Prompt the user for the total bill and their level of satisfaction
4.Get the total bill and the satisfaction
5.Calculate the tip
6.Ask the user if they want to rerun the program or exit.
7.Outputs the dinner cost, satisfaction level, the tip cost and the grand total.
*/

#include <bits/stdc++.h> //Import Libraries
using namespace std;

int main()
{
    int satisfaction; //Declare Variables
    double bill, tip, tipPercent;
    char restart;
    do{ // Restarts main code if necessary
        satisfaction = 0; // Reseting variables
        bill = 0;
        tip = 0;
        tipPercent = 0;
        restart = 'z';

        while ((satisfaction<1)||(satisfaction>3)){ // Error checks the satisfaction
            cout<<"Enter your satisfaction (1 = Totally satisfied, 2 = Satisfied, 3 = Dissatisfied): ";
            cin>>satisfaction;

            if (satisfaction==1) // Checks what the percent of the tip should be
                tipPercent = 0.20;
            else if (satisfaction==2)
                tipPercent = 0.15;
            else if (satisfaction==3)
                tipPercent = 0.10;
            else
                cout<<"Incorrect satisfaction entered."<<endl;
        }

        while (bill<=0){ // Error checks the bill
            cout<<"Enter the amount of your bill: ";
            cin>>bill;

            if (bill<=0)
                cout<<"Negative or 0 price entered (Invalid)"<<endl;
        }

        tip = tipPercent*bill; // Calculates the value of the tip
        cout.setf(ios::fixed);
        cout<<fixed<<setprecision(2);

        cout<<"Your dinner cost is: $"<<bill<<endl; // Outputs the dinner cost, satisfaction level, the tip cost and the grand total
        cout<<"Your satisfaction level is: "<<satisfaction<<endl;
        cout<<"Your tip will be: $"<<tip<<endl;
        cout<<"\nYour grand total will be: $"<<tip+bill<<endl;

        while (((restart!='n')&&(restart!='y'))&&((restart!='N')&&(restart!='Y'))){ // Error checks the restart condition

            cout<<"\nWould you like to restart the program (yes = y, no = n): ";
            cin>>restart;
            cout<<""<<endl;
            if (((restart!='n')&&(restart!='y'))&&((restart!='N')&&(restart!='Y')))
                cout<<"Enter either y or n"<<endl;
        }


    }
    while((restart=='y')||(restart=='Y')); // Restarts the main part of the code if necessary
    return 0;
}

/*
Names: Romit Sagu and Ashlie Arora
Date: 3/12/2020
Filename: main.cpp
Description: A program to calculate a paycheck that follows the rules below
1.Employees earn $20.00 per hour if they work 40 or less hours during the week.
2. If they work more than 40 hours, they get paid overtime which is 1 1/2 times $20.00 (this is often
called time and a half).
3. Don’t forget TAXES!!! The employees pay a 13% HST and a 5% GST. For example, if they
earned $100 that week, they pay 13% of $100 = $13 HST and 5% of 100 = $5 GST.
4. If the employee joined they union, they pay a $10 union fee each week (after taxes are deducted)
5. If they have 3 or more dependents (spouse and kids), they pay $35 for health insurance each
week (after taxes are deducted)

Pseudocode:
1. Import Libraries
2. Declare variables (hours, inUnion, dependents, grossPay, tax, hst, gst, restart, netPay)
3. Prompt user for how many hours they worked in a week, if they are in the union and how many dependents they have
4. Get inputs of hours worked, whether they are in the union, and how many dependents they have.
5. Check if user worked over or under 40 hours, then calculate gross pay.
6. Calculate HST and GST, union fee (if necessary) and dependent fee(if necessary)
7. Calculate net pay
8. Output gross pay, costs and net pay
9. Ask user if they want to run program again
*/

#include <bits/stdc++.h> //Import Libraries
using namespace std;

int main()
{
    int dependents; // Declare variables
    double hours, tax, hst, gst, grossPay, unionCost, insurance, netPay;
    char inUnion, restart;

    do{ // Restarts the program if necessary
        dependents=-1; // Resets Variables
        hours=0;
        tax=0;
        hst=0;
        gst=0;
        grossPay=0;
        inUnion='z';
        restart='z';
        unionCost=0;
        insurance=0;
        netPay=0;

        while(hours<=0){

        cout<<"How many hours did you work this week? "; // Asks for the hours a person worked and gets the amount as well as heir gross salary
        cin>>hours;

        if(hours>40)
            grossPay=800+(30*(hours-40));

        else if((hours<=40)&&(hours>0))
            grossPay=hours*20;

        else
            cout<<"Invalid hours entered"<<endl;
        }

        while(((inUnion!='n')&&(inUnion!='y'))&&((inUnion!='N')&&(inUnion!='Y'))){ //Asks and gets if the user is in the union and adds the cost to their total.

            cout<<"Are you in a union? (Enter y for yes, n for no) ";
            cin>>inUnion;

            if((inUnion=='y')||(inUnion=='Y'))
                unionCost=10;

            else if((inUnion=='n')||(inUnion=='N'))
                unionCost=0;

            else
                cout<<"Invalid entry"<<endl;

        }

        while (dependents<0){ // Asks and gets the amount of dependents and adds the cost of health insurance

            cout<<"How many dependents do you have? ";
            cin>>dependents;

            if(dependents>=3)
                insurance=35;

            else if(dependents<3&&dependents>=0)
                insurance=0;

            else
                cout<<"Invalid entry"<<endl;

        }

    hst = grossPay * 0.13; // Calculates the HST, GST and netPay
    gst = grossPay * 0.05;
    netPay = grossPay - hst - gst -unionCost - insurance;

    cout<<fixed<<setprecision(2)<<"Gross Pay: "<<right<<setw(15)<<"$"<<grossPay<<endl; // Outputs the gross pay, hst, gst, union cost, health care and net pay
    cout<<"HST: "<<right<<setw(21)<<"-$"<<hst<<endl;
    cout<<"GST: "<<right<<setw(21)<<"-$"<<gst<<endl;
    cout<<"Union: "<<right<<setw(19)<<"-$"<<unionCost<<endl;
    cout<<"Health Care: "<<right<<setw(13)<<"-$"<<insurance<<endl;
    cout<<"\nNet Pay: "<<right<<setw(17)<<"$"<<netPay<<endl;

    while (((restart!='n')&&(restart!='y'))&&((restart!='N')&&(restart!='Y'))){ // Error checks the restart condition

            cout<<"\nWould you like to restart the program (yes = y, no = n): "; // Checks if the user wants to restart the program
            cin>>restart;
            cout<<""<<endl;
            if (((restart!='n')&&(restart!='y'))&&((restart!='N')&&(restart!='Y')))
                cout<<"Enter either y or n"<<endl;
        }
    }
    while((restart=='y')||(restart=='Y')); // Restarts the main part of the code if necessary
    return 0;
}

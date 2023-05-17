/*
Names: Romit Sagu Ashlie Arora
Filename: main.cpp
Date: 3/9/2020
Description: A program that calculates customer's monthly bill where
The customer can sign up for the standard plan or the premium plan.

The standard plan costs $10 each month for 60 free minutes. Additional minutes costs .40 per
minute. For example, if a standard plan customer uses their cell phone for 70 minutes, they will
be charged $10 + 10*.40 = $14 that month.

The premium plan costs $25 each month for 75 free minutes. Additional minutes costs .10 per
minute. For example, if a standard plan customer uses their cell phone for 85 minutes, they will
be charged $25 + 10*.10 = $26 that month.

Pseudocode:
1. Import Libraries
2. Declare Variables plan and minutes and cost
3. Prompt the user to enter the plan and their minutes
4. Get their plan and the minutes
5. Decide the plan and the corresponding prices and if they are over their free minutes
6. Calculates the cost in total
7. Displays the cost breakdown

*/

#include <bits/stdc++.h> //Import Libraries
using namespace std;

int main()
{
    char plan; //Declare Variables
    double minutes, cost, extraCost, extraMinutes;

    cout<<"Enter the plan that you have (Premium=P, Standard=S): "; //Prompt the user to enter the plan and their minutes
    cin>>plan; //Get their plan and the minutes
    cout<<"Enter the number of minutes you have been on the phone: ";
    cin>>minutes;

    switch(plan){ //Decide the plan and the corresponding prices and if they are over their free minutes

    case 'S':
    case 's':
    {
        extraCost = .4;
        if (minutes>60){
            extraMinutes = minutes-60;
        }
        else{
            extraMinutes = 0;

        }

        cost = 10 + (extraMinutes*extraCost); //Calculates the cost in total

        cout<<"\nStandard plan:"<<endl; //Displays the cost breakdown
        cout<<"Plan: $10/month for 60 free mins, $0.40/additional minute."<<endl;
        cout<<"Flat fee: "<<setw(28)<<fixed<<setprecision(2)<<"$10.00"<<endl;
        cout<<"Extra Cost for: "<<extraMinutes<<" mins."<<setw(7)<<"$"<<extraMinutes*extraCost<<endl;
        cout<<"Total Cost: "<<setw(21)<<"$"<<fixed<<setprecision(2)<<cost<<endl;

    break;
    }
    case 'P':
    case 'p':
    {

        extraCost = .10;
        if (minutes>75){
            extraMinutes = minutes-75;
        }
        else{
            extraMinutes = 0;

        }

        cost = 25 + (extraMinutes*extraCost); //Calculates the cost in total

        cout<<"\nPremium plan:"<<endl; //Displays the cost breakdown
        cout<<"Plan: $25/month for 75 free mins, $0.10/additional minute."<<endl;
        cout<<"Flat fee: "<<setw(28)<<"$25.00"<<endl;
        cout<<"Extra Cost for: "<<extraMinutes<<" mins."<<setw(10)<<"$"<<fixed<<setprecision(2)<<extraMinutes*extraCost<<endl;
        cout<<"Total Cost: "<<setw(21)<<"$"<<fixed<<setprecision(2)<<cost<<endl;
    break;
    }

    default:
        cout<<"Invalid Plan"<<endl;
    }
    return 0;
}

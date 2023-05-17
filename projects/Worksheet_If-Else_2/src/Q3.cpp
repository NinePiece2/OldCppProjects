/*
Title: Eggs
Filename: Q3.cpp
Description: A wholesale egg company bases their prices on the number of eggs purchased:
0 up to but not including 4 dozen $0.50 per dozen
4 up to but not including 6 dozen $0.45 per dozen
6 up to but not including 11 dozen $0.40 per dozen
11 or more dozen $0.35 per dozen
Extra eggs are priced at 1/12 the per dozen price
*/
#include "Q3.h"
#include <bits/stdc++.h>
using namespace std;

Q3::Q3()
{
    int eggs, dozenEggs;
    double price, rate;

    cout<<"Enter the number of eggs purchased: ";
    cin>>eggs;

    dozenEggs = eggs/12;

    if ((dozenEggs>=0)&&(dozenEggs<4)){
        rate = 0.50;
    }
    else if ((dozenEggs>=4)&&(dozenEggs<6)){
        rate = 0.45;
    }
    else if ((dozenEggs>=6)&&(dozenEggs<11)){
        rate = 0.40;
    }
    else {
        rate = 0.35;
    }

    price = (dozenEggs*rate)+((rate/12)*(eggs%12));

    cout<<"The total price is equal to $"<<fixed<<setprecision(2)<<price<<"."<<endl;
}

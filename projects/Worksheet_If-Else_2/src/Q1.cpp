/*
Title: Printing
Filename: Q1.cpp
Description: Printing prices are typically based on the number of copies to be printed. For example:
 0 – 99 $0.30 per copy
100 – 499 $0.28 per copy
500 – 749 $0.27 per copy
750 – 1000 $0.26 per copy
over 1000 $0.25 per copy
Create a Printing application that prompts the user for the number of copies to print and then displays
the price per copy and the total price for the job.

*/

#include "Q1.h"
#include <bits/stdc++.h>
using namespace std;

Q1::Q1()
{
    int copies;
    double rate, price;

    cout<<"Enter the number of copies to be printed: ";
    cin>>copies;

    if ((copies>=0)&&(copies<=99)){
        rate = 0.30;
    }
    else if((copies>=100)&&(copies<=499)){
        rate = 0.28;
    }
    else if ((copies>=500)&&(copies<=749)){
        rate = 0.27;
    }
    else if ((copies>=750)&&(copies<=1000)){
        rate = 0.26;
    }
    else {
        rate = 0.25;
    }

    price = rate*copies;

    cout<<"The price per copy is $"<<rate<<"."<<endl;
    cout<<"The total cost $"<<price<<"."<<endl;
}

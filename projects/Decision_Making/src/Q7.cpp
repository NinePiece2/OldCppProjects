/*
if (year is divisible by 4) then (it is a leap year)
else if (year is divisible by 100) then (it is a common year)
else if (year is divisible by 400) then (it is a leap year)
else (it is a common year)
*/

#include "Q7.h"
#include <iostream>
#include <iomanip>
using namespace std;

Q7::Q7()
{
    int year;

    cout<<"Enter a year: ";
    cin>>year;

    if (year%4==0){
        cout<<"It is a leap year"<<endl;
    }
    else if (year%100==0){
        cout<<"It is a common year"<<endl;
    }
    else if (year%400==0){
        cout<<"It is a leap year"<<endl;
    }
    else {
        cout<<"It is a common year"<<endl;
    }
}

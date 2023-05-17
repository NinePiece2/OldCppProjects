/*
Title: Package Check
Filename: Q2.cpp
Description: A delivery service does not accept packages heavier than 27 kilograms or larger than 0.1 cubic meters
(100,000 cubic centimeters). Create a PackageCheck application that prompts the user for the weight of
a package and its dimensions (length, width, and height), and then displays an appropriate message
if the package does not meet the requirements. Messages should include:
Too heavy.
Too large.
Too heavy and too large
*/

#include "Q2.h"
#include <bits/stdc++.h>
using namespace std;

Q2::Q2()
{
    string message;
    double weight, l, w, h, volume;

    cout<<"Enter the package weight in kilograms: ";
    cin>>weight;
    cout<<"Enter the package length in centimeters: ";
    cin>>l;
    cout<<"Enter the package width in centimeters: ";
    cin>>w;
    cout<<"Enter the package height in centimeters: ";
    cin>>h;

    volume = l*w*h;

    if (weight >= 27){
        message = "The package is too heavy.";
    }
    else if (volume > 100000){
        message = "The package is too large.";
    }
    else if ((weight >= 27)&&(volume > 100000)){
        message = "The package is too heavy and too large.";
    }
    else {
        message = "The package meets specifications.";
    }

    cout<<message<<endl;
}

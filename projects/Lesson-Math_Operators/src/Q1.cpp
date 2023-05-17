/* Write a program that prompts the user to enter the weight of a person in kilograms and outputs
the equivalent weight in pounds. Output both the weights rounded to two decimal places. (Note that 1
kilogram = 2.2 pounds.) Format your output with two decimal places.*/

#include "Q1.h"
#include <iostream>
using namespace std;

Q1::Q1()
{
    double kilo, pound;

    cout<<"What is the person weight in kilograms: ";
    cin>>kilo;
    pound = kilo * 2.2;

    cout<<"That person weighs "<<pound<<" pounds."<<endl;
}

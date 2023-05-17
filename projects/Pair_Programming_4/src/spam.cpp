/*
Filename: spam.cpp
Description: This program outputs the twice what the amount of spam mail would be as well as it squared.

Pseudocode:
1.Import Libraries
2.Declare variables (spamMail, twice, squared)
3.Calculate the twice and squared of spamMail
4.Output twice and squared.
*/

#include "spam.h" //Import Libraries
#include <iostream>
using namespace std;

spam::spam()
{
    const int spamMail=55; //Declare variables
    int twice, squared;

    twice=spamMail*2; //Calculate the twice and squared of spamMail
    squared=spamMail*spamMail;

    cout<<"The spamMail would be "<<twice<<" if it was doubled"<<endl; //Output twice and squared of the spamMail
    cout<<"The spamMail would be "<<squared<<" if it was squared"<<endl;
}

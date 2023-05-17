/*
Filename: Q3.cpp
Description: A program to determine the cost of a telegram. A telegram costs $8.50 for the first 15
words or less, plus $.25 for each additional word over 15. The user will enter the number of
words in the telegram, and the computer will determine and print its cost.

*/

#include "Q3.h"
using namespace std;
#include <bits/stdc++.h>

Q3::Q3()
{
    int words;
    double cost;
    cout<<"Enter the number of words: ";
    cin>>words;

    if (words<=15){
        cost = 8.50;
    }
    else {
        cost = 8.50+(0.25*(words-15));
    }

    cout<<"The telegram would cost $"<<fixed<<setprecision(2)<<cost<<"."<<endl;

    ofstream write ("file3.txt", ios::out); //Creating ans setting up a text file.
    write<<"If the telegram had "<<words<<" words the telegram would cost $"<<fixed<<setprecision(2)<<cost<<"."<<endl; //Writes the variables to the file.
}

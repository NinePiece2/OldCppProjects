/*
Filename: Q6.cpp
Description: The entry fee for the local art museum is calculated as follows
children under 5: free
65 years and older: $1.50
all others: $2.50
 Write a program to print the entry fee based on the user’s input value for age.
*/

#include "Q6.h"
using namespace std;
#include <bits/stdc++.h>

Q6::Q6()
{
    int age;
    double fee;
    cout<<"Enter your age: ";
    cin>>age;

    if (age < 5){
        fee = 0;
    }
    else if (age >= 65){
        fee = 1.50;
    }
    else {
        fee = 2.50;
    }

    cout<<"You would have to pay $"<<fixed<<setprecision(2)<<fee<<"."<<endl;
    ofstream write ("file6.txt", ios::out); //Creating ans setting up a text file.
    write<<"You would have to pay $"<<fixed<<setprecision(2)<<fee<<"."<<endl;
}

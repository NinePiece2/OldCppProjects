/*
Filename: Q2.cpp
Description: A program to get three numbers from the user for integer variables a, b and c. If a is not zero,
find out whether it is the common divisor of b and c

Pseudocode:
1. Import Libraries
2. Declare variables
3. Prompt user for three integer inputs
4. Get integer inputs
5. Check if b%a==0 and c%a==0
6. Output whether a is a common divisor or not
*/

#include "Q2.h"
#include <bits/stdc++.h> //Import Libraries
using namespace std;

Q2::Q2()
{
    int a, b , c; //Declare variables

    cout<<"Enter three integers:"; //Prompt user for three integer inputs
    cin>>a>>b>>c; //Get integer inputs

    if((b%a==0)&&(c%a==0)) //Check if b%a==0 and c%a==0
        cout<<"\n"<<a<<" is a common divisor of "<<b<<" and "<<c<<endl;

    else
        cout<<"\n"<<a<<" is not a common divisor of "<<b<<" and "<<c<<endl; // Output whether a is a common divisor or not

}

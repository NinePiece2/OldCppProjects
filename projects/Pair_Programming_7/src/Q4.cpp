/*
Filename: Q4.cpp
Description: A program that accepts a character and determines whether it is a lowercase letter. If the entered
character is a lowercase letter, display the message “Entered character is a lowercase letter”. Otherwise display the
message “Entered character is not a lowercase letter”

Pseudocode:
1. Import libraries
2. Declare variables
3. Prompt user for letter input
4. Get letter input
5. Check if the letter is uppercase, lowercase or invalid
6. Output whether the letter is uppercase or lowercase or invalid

*/

#include "Q4.h"
#include <bits/stdc++.h> //Import Libraries
using namespace std;

Q4::Q4()
{
    char letter; //Declare variables

    cout<<"Enter a letter:"; //Prompt user for letter input
    cin>>letter; //Get letter input

    if((letter>='a')&&(letter<='z')) //Check if the letter is uppercase, lowercase or invalid
        cout<<"\nEntered letter is a lowercase letter."<<endl; //Output whether the letter is uppercase or lowercase or invalid

    else if((letter>='A')&&(letter<='Z'))
        cout<<"\nEntered letter is an uppercase letter."<<endl;

    else
        cout<<"\nEntered character is not a letter."<<endl;

}

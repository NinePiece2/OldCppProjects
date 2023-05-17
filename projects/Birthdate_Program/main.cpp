/*
Names: Romit Sagu and Ashlie Arora
File Name: main.cpp
Date: 2/24/2020
Description: Takes in user input of their birthdate and output it back to them in MM/DD/YYYY format.

Pseudocode:
Declare Libraries
Declare Variables: month, day and year all ints
Display the purpose of the program
Prompt the user for input of month
Get the input of the month
Prompt the user for input of day
Get the input of the day
Prompt the user for input of year
Get the input of the year
Output the user's birthdate, fill empty spaces with 0 and set proper spacing
Conclude program


*/

#include <iostream> // Libraries
#include <iomanip>
using namespace std;

int main()

{
    int day, month, year; // Declaring Variables

    cout<<"Hello! Welcome to the date of birth program."<<endl; //Display the purpose of the program

    cout<<"\nEnter the month you were born in using 2 digits (ie 02 = February): "; //Prompt the user for input of month

    cin>>month; //Get the input of the month

    cout<<"\nEnter the day you were born in using 2 digits (ie 05): "; //Prompt the user for input of day

    cin>>day; //Get the input of the day

    cout<<"\nEnter the year you were born in using 4 digits (ie 1969): "; //Prompt the user for input of year

    cin>>year; //Get the input of the year

    cout<<"\nYou were born on: "<<setw(2)<<setfill('0')<<month<<"/"; // Output the user's birthdate, fill empty spaces with 0 and set proper spacing
    cout<<setw(2)<<setfill('0')<<day<<"/";
    cout<<setw(4)<<setfill('0')<<year<<endl;

    cout<<"\nThank you for using this program."<<endl; // Conclude program

    return 0;
}

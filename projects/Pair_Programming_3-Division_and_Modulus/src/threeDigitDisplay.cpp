/*
Filename: threeDigitDisplay.cpp
Description: Gets a three digit number and outputs the individual digits and the sum of the digits.

Pseudocode:
Import Libraries
Declare Variables, number, firstDigit, secondDigit, thirdDigit, digitSum
Ask the user for a 3 digit number
Gets the number
Divides the number by 100 to get the first digit
subtract the fist digitx100 from the number and divides remaining number by 10 to get the second digit
subtract the fist digitx100 and the second digit*10 from the number to get the third digit
adds up all the digits
tells the user the first digit, second digit, third digit and the sum of the digits
*/

#include "threeDigitDisplay.h" //Import Libraries
#include <iostream>
using namespace std;

threeDigitDisplay::threeDigitDisplay()
{
    int digit,first,second,third; //Declares Variables

    cout<<" Enter a three digit number:"; //Ask the user for a 3 digit number
    cin>> digit;

    first=digit/100; // Calculates the first, second and third digit
    second=(digit-(first*100))/10;
    third= digit-(first*100)-(second*10);

    cout<<"The first digit is: "<< first <<endl; // Tells the user the first, second and their digit and their sum
    cout<<"The second digit is: "<< second <<endl;
    cout<<"The third digit is: "<< third <<endl;
    cout<<"The sum of the digits is: "<< first+second+third <<endl;
}

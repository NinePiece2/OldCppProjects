/* Write a program that calculates and displays the average class size of a programming course
if the classes have 14, 16, 13, and 19 students. In order to display a result that contains
decimals,I divide by 4.0 rather than 4 in my calculation.*/

#include "Q9.h"
#include <iostream>
using namespace std;
#include <iomanip>

Q9::Q9()
{
    int sectionA, sectionB, sectionC, sectionD;
    double avg;

    sectionA = 14;
    sectionB = 16;
    sectionC = 13;
    sectionD = 19;
    avg = (sectionA+sectionB+sectionC+sectionD)/4.0;

    cout<<"The average class size of a computer science class when there are 4 sections that have "<<endl;
    cout<<sectionA<<", "<<sectionB<<", "<<sectionC<<" and "<<sectionD<<" students respectively is "<<setprecision(3)<<avg<<"."<<endl;
}

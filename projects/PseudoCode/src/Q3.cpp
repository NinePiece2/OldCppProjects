#include "Q3.h"
#include <iostream>
using namespace std;

/*
Declare vars: double miles, double gallons, double mpg.
Ask the user for the miles driven and gallons of gasoline used.
Get the input.
mpg=miles/gallons.
Print mpg.
*/

Q3::Q3()
{
    double miles, gallons, mpg;

    cout<<"Enter the miles driven and the gallons of gasoline used: ";
    cin>>miles>>gallons;

    mpg=miles/gallons;

    cout<<"You drove "<<mpg<<" miles per gallon (MPG)."<<endl;
}

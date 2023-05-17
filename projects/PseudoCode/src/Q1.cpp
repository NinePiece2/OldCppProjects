#include "Q1.h"
#include <iostream>
using namespace std;

Q1::Q1()
{
    double fahrenheit;
    double celsius;

    cout<<"Enter a Temperature in Celsius: ";
    cin>>celsius;

    fahrenheit = (1.8*celsius)+32.0;

    cout<<"The temperature in Fahrenheit is: "<<fahrenheit<<endl;
}

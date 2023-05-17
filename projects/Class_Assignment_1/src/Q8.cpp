/* Write a program that uses calculations to display the following:
6/5 = 1
6.0/5 = 1.2
6/5.0 = 1.2
6.0/5.0 = 1.20
This program illustrates how C++ handles calculations. Notice how C++ displays results with
decimals only if at least one of the numbers in the calculation contains decimals. Use setprecision*/

#include "Q8.h"
#include <iostream>
using namespace std;
#include <iomanip>

Q8::Q8()
{
    int a, b;
    double c, d, result1, result2, result3, result4;
    a = 6;
    b = 5;
    c = 6.0;
    d = 5.0;

    result1 = a/b;
    result2 = c/b;
    result3 = a/d;
    result4 = c/d;

    cout<<"6/5 = ";
    cout.width(10);
    cout<<result1<<endl;

    cout<<"6.0/5 = ";
    cout.width(8);
    cout<<result2<<endl;

    cout<<"6/5.0 = ";
    cout.width(8);
    cout<<result3<<endl;

    cout<<"6.0/5.0 = ";
    cout.width(6);
    cout<<fixed<<setprecision(2)<<result4<<endl;
}

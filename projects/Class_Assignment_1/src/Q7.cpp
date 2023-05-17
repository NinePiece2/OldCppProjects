/* Write a program that calculates and displays the average jump length of a long-jumper whose
jumps were 3.3m, 3.5m, 4.0m, and 3.0m.*/

#include "Q7.h"
#include <iostream>
using namespace std;

Q7::Q7()
{
    double attempt1, attempt2, attempt3, attempt4, avg;
    attempt1 = 3.3;
    attempt2 = 3.5;
    attempt3 = 4.0;
    attempt4 = 3.0;

    avg = (attempt1+attempt2+attempt3+attempt4)/4;

    cout<<"A long-jumper whose jumps were "<<attempt1<<"m, "<<attempt2<<"m, "<<attempt3<<"m and "<<attempt4<<"m has an average jump length of "<<avg<<"m."<<endl;
}

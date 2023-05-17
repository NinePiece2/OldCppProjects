#include "Q3.h"
#include <iostream>
using namespace std;

Q3::Q3()
{
    double a, b, temp;

    cout<<"Enter 2 numbers:"<<endl;
    cin>>a>>b;

    temp = a;
    a = b;
    b = temp;

    cout<<"The 2 numbers after the swap are: "<<a<<" "<<b<<endl;

}

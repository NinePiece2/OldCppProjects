#include "Q5.h"
#include <iostream>
#include <iomanip>
using namespace std;

Q5::Q5()
{
    double x, y, z, maximum;

    cout<<"Enter 3 numbers: ";
    cin>>x>>y>>z;

    if ((x>y)&&(x>z)){
        maximum = x;
    }
    else if ((y>x)&&(y>z)){
        maximum = y;
    }
    else{
        maximum = z;
    }

    cout<<"The max is "<<maximum<<endl;

}

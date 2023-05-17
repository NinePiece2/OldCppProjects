#include "Q6.h"
#include <iostream>
using namespace std;

Q6::Q6()
{
    double v, d, t;

    cout<<"Enter the distance traveled and the speed of the vehicle: ";
    cin>>d>>v;

    t=d/v;

    cout<<"The destination will be reached in "<<t<<" hours."<<endl;
}

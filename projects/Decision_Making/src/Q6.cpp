#include "Q6.h"
#include <iostream>
#include <iomanip>
using namespace std;

Q6::Q6()
{
    double x;

    cout<<"Enter a number: ";
    cin>>x;

    if (x>0){
        cout<<"The number is positive."<<endl;
    }
    else if (x<0){
        cout<<"The number is negative."<<endl;
    }
    else{
        cout<<"The number is 0."<<endl;
    }
}
